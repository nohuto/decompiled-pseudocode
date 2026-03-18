/*
 * XREFs of ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B928
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800949E0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1800F9998 (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z @ 0x18013B540 (-NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18013B570 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CAnalogExclusiveView::ReleaseSwapChain(struct CResource **this)
{
  if ( this[8] )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
    this[8] = 0LL;
    this[8] = 0LL;
  }
}
