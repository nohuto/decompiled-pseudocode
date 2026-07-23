/*
 * XREFs of PspNotifyServerSiloTermination @ 0x1406813C0
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x140171E30 (PspGetServerSiloStatePointer.c)
 *     PspAcquirePushLockShared @ 0x14020F980 (PspAcquirePushLockShared.c)
 *     PspGetNextMonitor @ 0x1406812C0 (PspGetNextMonitor.c)
 */

__int64 __fastcall PspNotifyServerSiloTermination(__int64 a1)
{
  _DWORD *ServerSiloStatePointer; // rsi
  __int64 *i; // rax
  void (__fastcall *v4)(__int64); // rax
  __int64 **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  ServerSiloStatePointer = (_DWORD *)PspGetServerSiloStatePointer(a1);
  PspAcquirePushLockShared();
  if ( *ServerSiloStatePointer != 3 )
    __fastfail(5u);
  for ( i = PspGetNextMonitor(0LL); ; i = PspGetNextMonitor(v5) )
  {
    v5 = (__int64 **)i;
    if ( !i )
      break;
    v4 = (void (__fastcall *)(__int64))i[4];
    if ( v4 )
      v4(a1);
  }
  *ServerSiloStatePointer = 4;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
}
