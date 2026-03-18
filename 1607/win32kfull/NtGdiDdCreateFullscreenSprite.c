/*
 * XREFs of NtGdiDdCreateFullscreenSprite @ 0x1C02613D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiDdCreateFullscreenSprite(HDC a1, int a2, void **a3, HDC *a4)
{
  return SpDdCreateFullscreenSprite(a1, a2, a3, a4);
}
