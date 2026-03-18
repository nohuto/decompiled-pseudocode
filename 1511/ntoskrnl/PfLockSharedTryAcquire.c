/*
 * XREFs of PfLockSharedTryAcquire @ 0x14001B9CC
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1403E7394 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x1400209C4 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(volatile signed __int64 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2);
  if ( !_InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockShared(BugCheckParameter2) )
  {
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    return 1LL;
  }
  else
  {
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
