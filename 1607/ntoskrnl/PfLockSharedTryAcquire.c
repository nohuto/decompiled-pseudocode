/*
 * XREFs of PfLockSharedTryAcquire @ 0x14000652C
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1403E6D5C (PfCheckDeprioritizeFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C5AB8 (ExfTryAcquirePushLockShared.c)
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
