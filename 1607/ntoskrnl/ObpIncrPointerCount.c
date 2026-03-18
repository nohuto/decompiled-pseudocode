/*
 * XREFs of ObpIncrPointerCount @ 0x1400D16D0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     IopQueueWorkItemProlog @ 0x1400D1408 (IopQueueWorkItemProlog.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 *     ObpLockDirectoryExclusive @ 0x1400D1570 (ObpLockDirectoryExclusive.c)
 *     PsImpersonateContainerOfThread @ 0x1400D1630 (PsImpersonateContainerOfThread.c)
 *     ObInheritObjectHandle @ 0x14045ECB4 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14050D1B0 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
