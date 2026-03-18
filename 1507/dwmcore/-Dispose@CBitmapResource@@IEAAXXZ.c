/*
 * XREFs of ?Dispose@CBitmapResource@@IEAAXXZ @ 0x1800829A8
 * Callers:
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z @ 0x18007F5EC (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z.c)
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x1800828C0 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z.c)
 *     ??1CBitmapResource@@MEAA@XZ @ 0x1800829F8 (--1CBitmapResource@@MEAA@XZ.c)
 *     ?ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDPIXELS@@PEBXI@Z @ 0x180103060 (-ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDP.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180109AC8 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBitmapResource::Dispose(CBitmapResource *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 8) = 0LL;
  }
}
