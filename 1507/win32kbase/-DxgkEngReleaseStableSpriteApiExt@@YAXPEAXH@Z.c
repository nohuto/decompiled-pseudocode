/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00B5B70
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngReleaseStableSpriteSupported_0 @ 0x1C00014C0 (IsDxgkEngReleaseStableSpriteSupported_0.c)
 *     DxgkEngReleaseStableSprite_0 @ 0x1C00014C8 (DxgkEngReleaseStableSprite_0.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1)
{
  if ( (int)IsDxgkEngReleaseStableSpriteSupported_0() >= 0 )
    DxgkEngReleaseStableSprite_0();
}
