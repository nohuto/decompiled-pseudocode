/*
 * XREFs of ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C007BC6C
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C007BB90 (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
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
