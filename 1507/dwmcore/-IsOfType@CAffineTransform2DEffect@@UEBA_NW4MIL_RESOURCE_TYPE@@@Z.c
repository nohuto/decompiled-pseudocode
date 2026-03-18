/*
 * XREFs of ?IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F98F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAffineTransform2DEffect::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 7) & 0xFFFFFFED) == 0 && a2 != 25;
}
