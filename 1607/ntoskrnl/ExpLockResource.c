/*
 * XREFs of ExpLockResource @ 0x14005D6E0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400969CC (ExpExpandResourceOwnerTable.c)
 *     ExDisableResourceBoostLite @ 0x140111E58 (ExDisableResourceBoostLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140132C38 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ExpLockResource(__int64 a1, __int64 a2)
{
  return EXP_LOCK_RESOURCE(a1, a2);
}
