/*
 * XREFs of ?SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x180131BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationContext::SetCurrentTarget(CManipulationContext *this, const struct TargetingInfo *a2)
{
  *((_DWORD *)this + 26) = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)this + 14, (__int64 *)a2 + 1);
}
