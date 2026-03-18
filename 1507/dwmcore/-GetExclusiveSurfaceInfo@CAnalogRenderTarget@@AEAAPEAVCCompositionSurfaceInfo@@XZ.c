/*
 * XREFs of ?GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x180126514
 * Callers:
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126970 (-ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ.c)
 *     ?PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ @ 0x180126BD4 (-PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?RegisterSurfaceHandles@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126C5C (-RegisterSurfaceHandles@CAnalogRenderTarget@@AEAA_NXZ.c)
 *     ?RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ @ 0x180126D48 (-RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?ValidateSwapChain@CAnalogRenderTarget@@AEAAJPEAVCResource@@@Z @ 0x180127930 (-ValidateSwapChain@CAnalogRenderTarget@@AEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceInfo *__fastcall CAnalogRenderTarget::GetExclusiveSurfaceInfo(CAnalogRenderTarget *this)
{
  struct CCompositionSurfaceInfo *result; // rax

  result = (struct CCompositionSurfaceInfo *)*((_QWORD *)this + 28);
  if ( result )
    return (struct CCompositionSurfaceInfo *)*((_QWORD *)result + 54);
  return result;
}
