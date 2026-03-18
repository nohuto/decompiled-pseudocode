/*
 * XREFs of ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00
 * Callers:
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180037148 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180053A64 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18007C664 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x1800E29DC (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800E323C (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1800ECB00 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x1800EDAF0 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x1800EF178 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800FCD1C (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801053D8 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x18010695C (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct IRenderTargetDesktop *__fastcall CComposition::GetPrimaryDesktopRenderTargetNoRef(CComposition *this)
{
  __int64 v1; // rsi
  unsigned int v3; // ebp

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 136) )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 65) + 8LL * v3) + 288LL))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL * v3)) )
    {
      if ( ++v3 >= *((_DWORD *)this + 136) )
        return (struct IRenderTargetDesktop *)v1;
    }
    return *(struct IRenderTargetDesktop **)(*((_QWORD *)this + 65) + 8LL * v3);
  }
  return (struct IRenderTargetDesktop *)v1;
}
