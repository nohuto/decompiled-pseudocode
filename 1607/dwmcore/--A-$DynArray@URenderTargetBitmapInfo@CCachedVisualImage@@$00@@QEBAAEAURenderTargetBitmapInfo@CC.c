/*
 * XREFs of ??A?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEBAAEAURenderTargetBitmapInfo@CCachedVisualImage@@I@Z @ 0x18003211C
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 48LL * a2;
}
