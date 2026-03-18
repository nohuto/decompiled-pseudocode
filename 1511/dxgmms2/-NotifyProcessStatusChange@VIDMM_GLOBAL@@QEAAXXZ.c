/*
 * XREFs of ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004FB4C
 * Callers:
 *     VidMmNotifyProcessStatusChange @ 0x1C0014520 (VidMmNotifyProcessStatusChange.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::NotifyProcessStatusChange(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL::RequestNewBudget(this, 1);
}
