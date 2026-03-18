/*
 * XREFs of ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x18008FDA0
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetDeviceInfo(
        CSwRenderTargetGetBounds *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        struct _GUID *a4)
{
  *a2 = (struct _LUID)g_luidZero;
  if ( a4 )
  {
    *(_QWORD *)&a4->Data1 = 0LL;
    *(_QWORD *)a4->Data4 = 0LL;
  }
  return 0LL;
}
