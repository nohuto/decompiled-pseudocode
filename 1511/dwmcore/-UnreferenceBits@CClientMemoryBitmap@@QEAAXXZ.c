/*
 * XREFs of ?UnreferenceBits@CClientMemoryBitmap@@QEAAXXZ @ 0x180152230
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x18001B7E0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CClientMemoryBitmap::UnreferenceBits(CClientMemoryBitmap *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 35);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
}
