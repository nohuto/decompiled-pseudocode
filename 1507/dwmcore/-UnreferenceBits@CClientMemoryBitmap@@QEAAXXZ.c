/*
 * XREFs of ?UnreferenceBits@CClientMemoryBitmap@@QEAAXXZ @ 0x180144050
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x18000DCB0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
