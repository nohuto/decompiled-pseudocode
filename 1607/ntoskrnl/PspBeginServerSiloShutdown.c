/*
 * XREFs of PspBeginServerSiloShutdown @ 0x14067E34C
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x140456F78 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x140171E30 (PspGetServerSiloStatePointer.c)
 *     PspAcquirePushLockShared @ 0x14020F980 (PspAcquirePushLockShared.c)
 */

char __fastcall PspBeginServerSiloShutdown(__int64 a1, int a2)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 v4; // r8
  volatile signed __int32 *ServerSiloStatePointer; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloStatePointer = (volatile signed __int32 *)PspGetServerSiloStatePointer(v4);
  PspAcquirePushLockShared();
  v6 = *ServerSiloStatePointer;
  do
  {
    if ( v6 >= 3 )
    {
      v8 = 0;
      goto LABEL_5;
    }
    v7 = v6;
    v6 = _InterlockedCompareExchange(ServerSiloStatePointer, 3, v6);
  }
  while ( v7 != v6 );
  v8 = 1;
LABEL_5:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( v8 )
    ServerSiloGlobals[249] = a2;
  return v8;
}
