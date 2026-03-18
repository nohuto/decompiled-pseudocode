/*
 * XREFs of ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F9AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLinearGradientBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 66) & 0xFFFFFFFC) == 0 && a2 != 67;
}
