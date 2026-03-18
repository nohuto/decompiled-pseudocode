/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C00B8120
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetRedirBitmapSharedHandleSupported_0 @ 0x1C00014E8 (IsDxgkEngGetRedirBitmapSharedHandleSupported_0.c)
 *     DxgkEngGetRedirBitmapSharedHandle_0 @ 0x1C00014F0 (DxgkEngGetRedirBitmapSharedHandle_0.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  if ( (int)IsDxgkEngGetRedirBitmapSharedHandleSupported_0() >= 0 )
    DxgkEngGetRedirBitmapSharedHandle_0();
}
