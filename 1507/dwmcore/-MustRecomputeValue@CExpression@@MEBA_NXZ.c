/*
 * XREFs of ?MustRecomputeValue@CExpression@@MEBA_NXZ @ 0x18010FB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CExpression::MustRecomputeValue(CExpression *this)
{
  return *((_DWORD *)this + 46) != 0;
}
