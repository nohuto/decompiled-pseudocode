/*
 * XREFs of ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x18010A068
 * Callers:
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1800FB0C4 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800FB450 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 * Callees:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800A4E98 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::VisualCaptureBitsResponse(
        VisualCaptureBitsResponse *this,
        struct CSurfaceManager *a2,
        struct CChannelContext *a3,
        struct IRenderTargetResource *a4,
        struct CVisualTree *a5,
        const struct WICRect *a6,
        enum DXGI_FORMAT a7,
        void *a8,
        void *a9)
{
  CaptureBitsResponse::CaptureBitsResponse(this, a2, a3, a4, a5, 1.0, a6, a7, 0LL);
  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  *((_QWORD *)this + 20) = a8;
  *((_QWORD *)this + 16) = a9;
  return this;
}
