/*
 * XREFs of ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180021130
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18002BB50 (-UnmapSection@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x180172A34 (-KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUnmapSection(
        struct IBitmapSource **this,
        struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UNMAPSECTION *a3)
{
  CGdiSpriteBitmap *v3; // rdi
  struct IBitmapSource *v5; // rbx
  __int64 v6; // rcx

  v3 = (CGdiSpriteBitmap *)this;
  if ( !this[30] )
  {
    v5 = this[17];
    if ( v5 )
    {
      if ( !CD3DDeviceManager::KeepOnlyFullValidRealizations((CD3DDeviceManager *)&g_D3DDeviceManager, this[17]) )
        return 0LL;
      v6 = *((_QWORD *)v5 + 33);
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        *((_QWORD *)v5 + 33) = 0LL;
      }
      *((_QWORD *)v5 + 31) = 0LL;
      this = (struct IBitmapSource **)v3;
      *((_DWORD *)v5 + 64) = 0;
    }
    CGdiSpriteBitmap::UnmapSection((CGdiSpriteBitmap *)this);
  }
  return 0LL;
}
