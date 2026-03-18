/*
 * XREFs of ExpLockResource @ 0x14005DB60
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B670 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400971CC (ExpExpandResourceOwnerTable.c)
 *     ExDisableResourceBoostLite @ 0x1401118F4 (ExDisableResourceBoostLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1401326C8 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ExpLockResource(__int64 a1, __int64 a2)
{
  return EXP_LOCK_RESOURCE(a1, a2);
}
