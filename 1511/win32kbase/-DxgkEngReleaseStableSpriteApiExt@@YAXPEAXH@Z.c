/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00B8240
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngReleaseStableSpriteSupported_0 @ 0x1C0001460 (IsDxgkEngReleaseStableSpriteSupported_0.c)
 *     DxgkEngReleaseStableSprite_0 @ 0x1C0001468 (DxgkEngReleaseStableSprite_0.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1)
{
  if ( (int)IsDxgkEngReleaseStableSpriteSupported_0() >= 0 )
    DxgkEngReleaseStableSprite_0();
}
