/*
 * XREFs of PfpScenCtxQueryScenarioInformation @ 0x14039D62C
 * Callers:
 *     PfpQueryScenarioInformation @ 0x1404F4348 (PfpQueryScenarioInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 */

__int64 __fastcall PfpScenCtxQueryScenarioInformation(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v5, BugCheckParameter2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(BugCheckParameter2 + 48);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(BugCheckParameter2 + 52);
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == 3 )
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(BugCheckParameter2 + 56);
  KeResetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
