/*
 * XREFs of NtGdiRectVisible @ 0x1C00D49B0
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C00D49F8 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
