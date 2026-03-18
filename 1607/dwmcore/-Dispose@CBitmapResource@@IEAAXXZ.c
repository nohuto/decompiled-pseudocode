/*
 * XREFs of ?Dispose@CBitmapResource@@IEAAXXZ @ 0x1800AEBC4
 * Callers:
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z @ 0x18002B864 (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z.c)
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x1800AEAF0 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z.c)
 *     ??1CBitmapResource@@MEAA@XZ @ 0x1800AEBFC (--1CBitmapResource@@MEAA@XZ.c)
 *     ?ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDPIXELS@@PEBXI@Z @ 0x1801379E0 (-ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDP.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x1801422A8 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapResource::Dispose(CBitmapResource *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
}
