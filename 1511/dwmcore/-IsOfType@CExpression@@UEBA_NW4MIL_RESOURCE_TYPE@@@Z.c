/*
 * XREFs of ?IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012AA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CExpression::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 97) & 0xFFFFFFFC) == 0 && a2 != 99;
}
