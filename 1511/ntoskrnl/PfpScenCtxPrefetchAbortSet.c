/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x14039D54C
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403A6580 (PfpScenCtxScenarioSet.c)
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // esi

  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a4 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
LABEL_9:
      v12 = 0;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) != 8 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = a3;
      goto LABEL_9;
    }
    v12 = -1073741431;
  }
  else
  {
    v12 = -1073741735;
  }
LABEL_10:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v12;
}
