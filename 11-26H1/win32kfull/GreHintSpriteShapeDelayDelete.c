/*
 * XREFs of GreHintSpriteShapeDelayDelete @ 0x140345484
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x140313250 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall GreHintSpriteShapeDelayDelete(Gre::Base *a1, Gre::Base *a2, HBITMAP a3, __int64 a4, int a5, int a6)
{
  if ( a6 && IsDwmActive(a1) )
    return GreHintSpriteShape((HDEV)a1, a2, a3, a4, a5, a6, 0);
  else
    return GdiHintSpriteShapeDelayDelete((HDEV)a1, (HWND)a2, a3);
}
