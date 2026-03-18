/*
 * XREFs of ?SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x180005400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationContext::SetCurrentFallbackTarget(
        CManipulationContext *this,
        const struct TargetingInfo *a2)
{
  *((_DWORD *)this + 30) = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)this + 16, (__int64 *)a2 + 1);
}
