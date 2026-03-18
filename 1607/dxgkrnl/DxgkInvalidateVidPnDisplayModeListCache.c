/*
 * XREFs of DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0149BE0
 * Callers:
 *     DpiPdoHandleStatusIndication @ 0x1C002F8D0 (DpiPdoHandleStatusIndication.c)
 * Callees:
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0087708 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

void __fastcall DxgkInvalidateVidPnDisplayModeListCache(__int64 a1)
{
  PERESOURCE **v1; // rcx

  v1 = *(PERESOURCE ***)(a1 + 2128);
  if ( v1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v1, 0xFFFFFFFD, 0LL);
}
