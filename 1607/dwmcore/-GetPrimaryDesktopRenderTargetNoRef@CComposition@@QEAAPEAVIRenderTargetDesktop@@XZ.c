/*
 * XREFs of ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80
 * Callers:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18001B890 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800291D4 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18003B164 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800BB3C8 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18010FE54 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x18011EF90 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x18011F364 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18011F9D4 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801403AC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180140D24 (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 * Callees:
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800767D0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct IRenderTargetDesktop *__fastcall CComposition::GetPrimaryDesktopRenderTargetNoRef(CComposition *this)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  CDesktopRenderTarget *v4; // rcx
  bool (__fastcall *v5)(CDesktopRenderTarget *__hidden); // rax
  char v6; // al

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 138) )
  {
    while ( 1 )
    {
      v4 = *(CDesktopRenderTarget **)(*((_QWORD *)this + 66) + 8LL * v3);
      v5 = *(bool (__fastcall **)(CDesktopRenderTarget *__hidden))(*(_QWORD *)v4 + 272LL);
      v6 = v5 == CDesktopRenderTarget::HasPrimary ? CDesktopRenderTarget::HasPrimary(v4) : ((__int64 (*)(void))v5)();
      if ( v6 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 138) )
        return (struct IRenderTargetDesktop *)v1;
    }
    return *(struct IRenderTargetDesktop **)(*((_QWORD *)this + 66) + 8LL * v3);
  }
  return (struct IRenderTargetDesktop *)v1;
}
