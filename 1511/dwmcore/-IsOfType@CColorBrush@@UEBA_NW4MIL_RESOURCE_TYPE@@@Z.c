/*
 * XREFs of ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801137F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CColorBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 76) & 0xFFFFFFFA) == 0 && a2 != 80;
}
