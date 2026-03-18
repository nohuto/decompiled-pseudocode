/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00B7EF0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngAcquireStableSpriteSupported_0 @ 0x1C0001450 (IsDxgkEngAcquireStableSpriteSupported_0.c)
 *     DxgkEngAcquireStableSprite_0 @ 0x1C0001458 (DxgkEngAcquireStableSprite_0.c)
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1)
{
  if ( (int)IsDxgkEngAcquireStableSpriteSupported_0() >= 0 )
    DxgkEngAcquireStableSprite_0();
}
