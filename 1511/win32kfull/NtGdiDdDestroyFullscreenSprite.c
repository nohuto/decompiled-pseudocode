/*
 * XREFs of NtGdiDdDestroyFullscreenSprite @ 0x1C02639F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiDdDestroyFullscreenSprite(HDC a1, HSPRITE a2)
{
  return SpDdDestroyFullscreenSprite(a1, a2);
}
