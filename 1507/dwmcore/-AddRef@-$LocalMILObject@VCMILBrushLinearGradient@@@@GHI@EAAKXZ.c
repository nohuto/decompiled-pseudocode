/*
 * XREFs of ?AddRef@?$LocalMILObject@VCMILBrushLinearGradient@@@@GHI@EAAKXZ @ 0x18009A150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LocalMILObject<CMILBrushLinearGradient>::AddRef(__int64 a1)
{
  return LocalMILObject<CMILBrushLinearGradient>::Release(a1 - 120);
}
