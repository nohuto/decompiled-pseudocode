/*
 * XREFs of ?IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F9A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHueRotationEffect::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 7) & 0xFFFFFFF9) == 0 && a2 != 11;
}
