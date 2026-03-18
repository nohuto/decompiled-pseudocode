/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180132BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18009F84C (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x180131F10 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  char *v4; // rbx
  CRenderTargetBitmap *v5; // rcx
  int v6; // esi
  void (__fastcall ***v7)(_QWORD, const struct IDeviceResource *); // rcx
  const struct IDeviceResource *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 184) )
  {
    v4 = (char *)this - 24;
    CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)((char *)this - 24));
  }
  else
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>((_QWORD *)this + 14, (__int64 *)&v8);
    v4 = (char *)this - 24;
    v5 = (CRenderTargetBitmap *)((char *)this - 24);
    if ( v8 == a2 )
      CRenderTargetBitmap::ReleaseRenderTargetBitmap(v5);
    else
      CD2DBitmapCache::ClearCache(v5);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v8);
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = *((_DWORD *)this + 40);
  while ( v6 )
  {
    v7 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 17)
                                                                         + 8LL * (unsigned int)--v6);
    (**v7)(v7, a2);
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
}
