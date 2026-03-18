/*
 * XREFs of NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0261550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  return SpDdNotifyFullscreenSpriteUpdate(a1, a2);
}
