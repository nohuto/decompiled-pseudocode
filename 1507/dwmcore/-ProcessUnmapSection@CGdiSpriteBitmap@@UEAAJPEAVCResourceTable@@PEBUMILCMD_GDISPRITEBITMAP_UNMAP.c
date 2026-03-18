/*
 * XREFs of ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x18000DCB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18007F8CC (-UnmapSection@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x1801333C0 (-KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z.c)
 *     ?UnreferenceBits@CClientMemoryBitmap@@QEAAXXZ @ 0x180144050 (-UnreferenceBits@CClientMemoryBitmap@@QEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUnmapSection(
        struct IBitmapSource **this,
        struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UNMAPSECTION *a3)
{
  CGdiSpriteBitmap *v3; // rbx
  struct IBitmapSource *v5; // rdx
  CClientMemoryBitmap *v6; // rdi

  v3 = (CGdiSpriteBitmap *)this;
  if ( !this[21] )
  {
    v5 = this[8];
    if ( v5 )
    {
      v6 = (struct IBitmapSource *)((char *)v5 - 16);
      if ( !CD3DDeviceManager::KeepOnlyFullValidRealizations((CD3DDeviceManager *)&g_D3DDeviceManager, v5) )
        return 0LL;
      CClientMemoryBitmap::UnreferenceBits(v6);
      this = (struct IBitmapSource **)v3;
    }
    CGdiSpriteBitmap::UnmapSection((CGdiSpriteBitmap *)this);
  }
  return 0LL;
}
