/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C00B5AC0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetRedirBitmapSharedHandleSupported_0 @ 0x1C0001538 (IsDxgkEngGetRedirBitmapSharedHandleSupported_0.c)
 *     DxgkEngGetRedirBitmapSharedHandle_0 @ 0x1C0001540 (DxgkEngGetRedirBitmapSharedHandle_0.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  if ( (int)IsDxgkEngGetRedirBitmapSharedHandleSupported_0() >= 0 )
    DxgkEngGetRedirBitmapSharedHandle_0();
}
