/*
 * XREFs of ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180043E40
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetDeviceInfo(
        CSwRenderTargetGetBounds *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  *a2 = g_luidZero;
  return 0LL;
}
