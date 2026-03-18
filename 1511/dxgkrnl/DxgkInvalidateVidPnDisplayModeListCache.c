/*
 * XREFs of DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0130500
 * Callers:
 *     DpiPdoHandleStatusIndication @ 0x1C0028470 (DpiPdoHandleStatusIndication.c)
 * Callees:
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C009AC9C (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

void __fastcall DxgkInvalidateVidPnDisplayModeListCache(__int64 a1)
{
  PERESOURCE **v1; // rcx

  v1 = *(PERESOURCE ***)(a1 + 1984);
  if ( v1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v1, 0xFFFFFFFD, 0LL);
}
