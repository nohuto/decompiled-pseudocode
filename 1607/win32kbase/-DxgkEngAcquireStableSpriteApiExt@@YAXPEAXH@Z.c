/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00C3400
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngAcquireStableSpriteSupported_0 @ 0x1C00014C0 (IsDxgkEngAcquireStableSpriteSupported_0.c)
 *     DxgkEngAcquireStableSprite_0 @ 0x1C00014C8 (DxgkEngAcquireStableSprite_0.c)
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1)
{
  if ( (int)IsDxgkEngAcquireStableSpriteSupported_0() >= 0 )
    DxgkEngAcquireStableSprite_0();
}
