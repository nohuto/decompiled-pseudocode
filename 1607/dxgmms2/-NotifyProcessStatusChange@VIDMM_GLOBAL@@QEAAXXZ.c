/*
 * XREFs of ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00574F8
 * Callers:
 *     VidMmNotifyProcessStatusChange @ 0x1C0011B30 (VidMmNotifyProcessStatusChange.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::NotifyProcessStatusChange(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL::RequestNewBudget(this, 1);
}
