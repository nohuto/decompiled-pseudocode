/*
 * XREFs of PspStartMonitorDeferred @ 0x140526910
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetServerSiloState @ 0x1400D5430 (PsGetServerSiloState.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     PspGetNextSilo @ 0x1405269DC (PspGetNextSilo.c)
 */

__int64 __fastcall PspStartMonitorDeferred(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  signed __int8 v7; // cf
  __int64 v8; // rsi
  _QWORD *i; // rcx
  __int64 NextSilo; // rax
  _QWORD *v11; // rsi
  _QWORD *ServerSiloGlobals; // rax
  __int64 v13; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 40))(0LL);
  v3 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL);
    v8 = v5;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, v5, (ULONG_PTR)&PspSiloMonitorLock);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    for ( i = 0LL; ; i = v11 )
    {
      LOBYTE(v6) = 1;
      NextSilo = PspGetNextSilo(i, v6);
      v11 = (_QWORD *)NextSilo;
      if ( !NextSilo )
        break;
      if ( (unsigned int)PsGetServerSiloState(NextSilo) - 1 <= 1 )
      {
        ServerSiloGlobals = PsGetServerSiloGlobals(v11);
        v13 = *(unsigned int *)(a1 + 104);
        v6 = ServerSiloGlobals[8];
        if ( (*(_QWORD *)(v6 + 8 * v13) & 1) == 0 )
        {
          *(_QWORD *)(v6 + 8 * v13) |= 1uLL;
          v3 = (*(__int64 (__fastcall **)(_QWORD *))(a1 + 40))(v11);
          if ( v3 < 0 )
            break;
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)v3;
  }
  return result;
}
