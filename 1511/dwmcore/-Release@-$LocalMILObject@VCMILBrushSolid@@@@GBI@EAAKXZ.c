/*
 * XREFs of ?Release@?$LocalMILObject@VCMILBrushSolid@@@@GBI@EAAKXZ @ 0x1800BCD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LocalMILObject<CMILBrushSolid>::Release(__int64 a1)
{
  return LocalMILObject<CMILBrushLinearGradient>::Release(a1 - 24);
}
