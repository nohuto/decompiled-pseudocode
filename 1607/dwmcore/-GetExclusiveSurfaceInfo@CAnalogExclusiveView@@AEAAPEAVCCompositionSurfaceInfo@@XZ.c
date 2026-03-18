/*
 * XREFs of ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4
 * Callers:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180165750 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x1801657E8 (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 *     ?PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z @ 0x1801658F8 (-PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z.c)
 *     ?RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ @ 0x1801659F4 (-RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ.c)
 *     ?UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x180165B94 (-UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceInfo *__fastcall CAnalogExclusiveView::GetExclusiveSurfaceInfo(CAnalogExclusiveView *this)
{
  struct CCompositionSurfaceInfo *result; // rax

  result = (struct CCompositionSurfaceInfo *)*((_QWORD *)this + 17);
  if ( result )
    return (struct CCompositionSurfaceInfo *)*((_QWORD *)result + 65);
  return result;
}
