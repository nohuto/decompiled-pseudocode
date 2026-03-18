/*
 * XREFs of ?IsHardwareProtected@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ @ 0x180034188
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsHardwareProtected(
        CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 112LL) + 128LL))(*((_QWORD *)this + 1) + 112LL);
}
