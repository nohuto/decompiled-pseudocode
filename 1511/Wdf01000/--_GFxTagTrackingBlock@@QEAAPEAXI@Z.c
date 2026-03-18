/*
 * XREFs of ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C006FFC4
 * Callers:
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C006FEE8 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
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
