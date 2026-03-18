/*
 * XREFs of ?IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180002480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CGaussianBlurEffect::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 7) & 0xFFFFFFFC) == 0 && a2 != 8;
}
