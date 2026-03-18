/*
 * XREFs of ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744
 * Callers:
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180049C60 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18005BB48 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180062EA0 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800B7644 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800FB450 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1801084D0 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x1801088E0 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x180109174 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180123A8C (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180124460 (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

struct IRenderTargetDesktop *__fastcall CComposition::GetPrimaryDesktopRenderTargetNoRef(CComposition *this)
{
  __int64 v1; // rsi
  unsigned int v3; // ebp

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 136) )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 65) + 8LL * v3) + 280LL))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL * v3)) )
    {
      if ( ++v3 >= *((_DWORD *)this + 136) )
        return (struct IRenderTargetDesktop *)v1;
    }
    return *(struct IRenderTargetDesktop **)(*((_QWORD *)this + 65) + 8LL * v3);
  }
  return (struct IRenderTargetDesktop *)v1;
}
