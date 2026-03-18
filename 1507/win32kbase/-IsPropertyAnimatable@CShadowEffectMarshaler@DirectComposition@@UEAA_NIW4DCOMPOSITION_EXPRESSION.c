/*
 * XREFs of ?IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C00DC4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CShadowEffectMarshaler::IsPropertyAnimatable(__int64 a1, unsigned int a2, int a3)
{
  bool result; // al

  result = 0;
  if ( !a2 || a2 > 1 && a2 <= 5 )
    return a3 == 17;
  return result;
}
