/*
 * XREFs of ?ValidateSwapChain@CAnalogRenderTarget@@AEAAJPEAVCResource@@@Z @ 0x180127930
 * Callers:
 *     ?NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180126750 (-NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x18012727C (-RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x180126514 (-GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::ValidateSwapChain(CAnalogRenderTarget *this, struct CResource *a2)
{
  unsigned int v2; // r8d
  struct CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax

  v2 = -2147467259;
  if ( a2 )
  {
    ExclusiveSurfaceInfo = CAnalogRenderTarget::GetExclusiveSurfaceInfo(this);
    if ( ExclusiveSurfaceInfo )
      v2 &= -((*((_DWORD *)ExclusiveSurfaceInfo + 28) & 0xFFFFFFFD) != 0);
  }
  return v2;
}
