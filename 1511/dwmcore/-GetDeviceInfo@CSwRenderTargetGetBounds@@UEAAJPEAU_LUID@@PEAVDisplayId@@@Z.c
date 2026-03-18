/*
 * XREFs of ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180081DA0
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetDeviceInfo(
        CSwRenderTargetGetBounds *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  *a2 = (struct _LUID)g_luidZero;
  return 0LL;
}
