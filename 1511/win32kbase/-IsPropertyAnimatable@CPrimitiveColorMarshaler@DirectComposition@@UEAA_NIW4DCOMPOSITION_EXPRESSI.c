/*
 * XREFs of ?IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C00DF520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPrimitiveColorMarshaler::IsPropertyAnimatable(__int64 a1, int a2, int a3)
{
  return (unsigned int)(a2 - 1) <= 3 && a3 == 18;
}
