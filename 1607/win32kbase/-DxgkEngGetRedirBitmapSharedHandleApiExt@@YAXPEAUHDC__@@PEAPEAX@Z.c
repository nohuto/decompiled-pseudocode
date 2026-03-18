/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C00C3630
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetRedirBitmapSharedHandleSupported_0 @ 0x1C0001558 (IsDxgkEngGetRedirBitmapSharedHandleSupported_0.c)
 *     DxgkEngGetRedirBitmapSharedHandle_0 @ 0x1C0001560 (DxgkEngGetRedirBitmapSharedHandle_0.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  if ( (int)IsDxgkEngGetRedirBitmapSharedHandleSupported_0() >= 0 )
    DxgkEngGetRedirBitmapSharedHandle_0();
}
