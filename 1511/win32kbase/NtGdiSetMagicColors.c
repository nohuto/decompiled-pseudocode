/*
 * XREFs of NtGdiSetMagicColors @ 0x1C00BEAD0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 */

__int64 __fastcall NtGdiSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  return GreSetMagicColors(a1, a2, a3);
}
