/*
 * XREFs of ObpIncrPointerCount @ 0x140042B20
 * Callers:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140079DFC (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     IopQueueWorkItemProlog @ 0x140101A80 (IopQueueWorkItemProlog.c)
 *     ObInheritObjectHandle @ 0x1403E2FE4 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
