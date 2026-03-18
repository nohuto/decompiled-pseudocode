/*
 * XREFs of GreSelectFont @ 0x1C004CA30
 * Callers:
 *     MNAllocMenuState @ 0x1C013B658 (MNAllocMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
