/*
 * XREFs of ?IsClone@CDisplay@@QEBA_NXZ @ 0x1800079E4
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180049130 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsClone(CDisplay *this)
{
  return *((_QWORD *)this + 19) != (_QWORD)this;
}
