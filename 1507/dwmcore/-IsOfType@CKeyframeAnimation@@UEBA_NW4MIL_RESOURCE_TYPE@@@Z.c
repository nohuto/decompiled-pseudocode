/*
 * XREFs of ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180110AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CKeyframeAnimation::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 89) & 0xFFFFFFFC) == 0 && a2 != 90;
}
