/*
 * XREFs of ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x180131F10
 * Callers:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180132BA0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
           a2);
}
