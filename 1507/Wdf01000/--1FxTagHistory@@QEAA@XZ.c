/*
 * XREFs of ??1FxTagHistory@@QEAA@XZ @ 0x1C007A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxTagHistory::~FxTagHistory(FxTagHistory *this)
{
  FxTagTrackingStackFrames *StackFrames; // rcx

  StackFrames = this->StackFrames;
  if ( StackFrames )
  {
    FxPoolFree(StackFrames);
    this->StackFrames = 0LL;
  }
}
