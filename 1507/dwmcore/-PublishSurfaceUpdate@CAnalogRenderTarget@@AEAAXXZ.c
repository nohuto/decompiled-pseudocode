/*
 * XREFs of ?PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ @ 0x180126BD4
 * Callers:
 *     ?NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180126750 (-NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x180126514 (-GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?SetExclusiveSurface@CAnalogCompositorClient@@QEAAXPEAXIK@Z @ 0x1801275B0 (-SetExclusiveSurface@CAnalogCompositorClient@@QEAAXPEAXIK@Z.c)
 */

void __fastcall CAnalogRenderTarget::PublishSurfaceUpdate(CAnalogRenderTarget *this)
{
  unsigned int *ExclusiveSurfaceInfo; // rbp
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  CAnalogCompositorClient *v4; // rcx
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( g_AnalogCompositor )
  {
    ExclusiveSurfaceInfo = (unsigned int *)CAnalogRenderTarget::GetExclusiveSurfaceInfo(this);
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)ExclusiveSurfaceInfo);
    v5 = 0LL;
    (*(void (__fastcall **)(struct CBitmapRealization *, void **))(*(_QWORD *)RenderingRealizationNoRef + 88LL))(
      RenderingRealizationNoRef,
      &v5);
    if ( v5 )
      CAnalogCompositorClient::SetExclusiveSurface(v4, v5, ExclusiveSurfaceInfo[20], *((_DWORD *)this + 64));
  }
}
