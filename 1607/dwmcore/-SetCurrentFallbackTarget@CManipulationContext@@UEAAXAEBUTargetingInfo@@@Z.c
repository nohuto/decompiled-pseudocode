/*
 * XREFs of ?SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x180007E80
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
  Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)this + 16, (__int64 *)a2 + 1);
}
