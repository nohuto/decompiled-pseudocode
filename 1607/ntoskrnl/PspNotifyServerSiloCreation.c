/*
 * XREFs of PspNotifyServerSiloCreation @ 0x1406812E4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x14067EA44 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x140171E30 (PspGetServerSiloStatePointer.c)
 *     PspAcquirePushLockShared @ 0x14020F980 (PspAcquirePushLockShared.c)
 *     PspGetNextMonitor @ 0x1406812C0 (PspGetNextMonitor.c)
 */

__int64 __fastcall PspNotifyServerSiloCreation(__int64 a1)
{
  char v2; // di
  _DWORD *ServerSiloStatePointer; // rsi
  __int64 *NextMonitor; // rbx
  int (__fastcall *v5)(__int64); // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 0;
  ServerSiloStatePointer = (_DWORD *)PspGetServerSiloStatePointer(a1);
  PspAcquirePushLockShared();
  if ( *ServerSiloStatePointer )
    __fastfail(5u);
  NextMonitor = PspGetNextMonitor(0LL);
  if ( !NextMonitor )
    goto LABEL_10;
  do
  {
    v5 = (int (__fastcall *)(__int64))NextMonitor[3];
    if ( v5 && v5(a1) < 0 )
      v2 = 1;
    NextMonitor = PspGetNextMonitor((__int64 **)NextMonitor);
  }
  while ( NextMonitor );
  if ( v2 )
  {
    v6 = -1073741248;
  }
  else
  {
LABEL_10:
    *ServerSiloStatePointer = 1;
    v6 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v6;
}
