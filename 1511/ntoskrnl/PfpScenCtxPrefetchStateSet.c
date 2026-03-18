/*
 * XREFs of PfpScenCtxPrefetchStateSet @ 0x14039D6DC
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403A6580 (PfpScenCtxScenarioSet.c)
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PfpScenCtxPrefetchStateSet(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // esi

  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a3 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v11 = -1073741431;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 4 )
      {
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 16), 1, 0);
        *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
      }
      *(_DWORD *)(BugCheckParameter2 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 8)) & 3;
      v11 = 0;
    }
  }
  else
  {
    v11 = -1073741735;
  }
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v11;
}
