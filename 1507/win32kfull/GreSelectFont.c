/*
 * XREFs of GreSelectFont @ 0x1C00567E0
 * Callers:
 *     MNAllocMenuState @ 0x1C0107674 (MNAllocMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
