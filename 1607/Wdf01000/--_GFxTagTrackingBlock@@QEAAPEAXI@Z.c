/*
 * XREFs of ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C007E0D4
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C007DFF8 (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxTagTrackingBlock *__fastcall FxTagTrackingBlock::`scalar deleting destructor'(FxTagTrackingBlock *this)
{
  FxTagTrackingStackFrames *StackFrames; // rcx

  StackFrames = this->StackFrames;
  if ( StackFrames )
  {
    FxPoolFree(StackFrames);
    this->StackFrames = 0LL;
  }
  FxPoolFree(this);
  return this;
}
