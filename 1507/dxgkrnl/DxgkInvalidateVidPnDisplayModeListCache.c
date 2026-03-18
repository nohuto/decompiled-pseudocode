/*
 * XREFs of DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0129E70
 * Callers:
 *     DpiPdoHandleStatusIndication @ 0x1C00288B0 (DpiPdoHandleStatusIndication.c)
 * Callees:
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00CF958 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

void __fastcall DxgkInvalidateVidPnDisplayModeListCache(__int64 a1)
{
  PERESOURCE **v1; // rcx

  v1 = *(PERESOURCE ***)(a1 + 1976);
  if ( v1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v1, 0xFFFFFFFD, 0LL);
}
