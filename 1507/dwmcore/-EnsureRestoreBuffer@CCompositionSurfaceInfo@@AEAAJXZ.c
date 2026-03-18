/*
 * XREFs of ?EnsureRestoreBuffer@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1801194E0
 * Callers:
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180119594 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 * Callees:
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureRestoreBuffer(CCompositionSurfaceInfo *this)
{
  struct CComposition *(__fastcall *v2)(CSurfaceManager *); // rdi
  struct CComposition *CompositionNoRef; // rax

  v2 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(**((_QWORD **)this + 3) + 8LL);
  if ( v2 == CSurfaceManager::GetCompositionNoRef )
    CompositionNoRef = CSurfaceManager::GetCompositionNoRef(*((CSurfaceManager **)this + 3));
  else
    CompositionNoRef = v2(*((CSurfaceManager **)this + 3));
  return CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(
           (CCompositionSurfaceInfo *)((char *)this + 48),
           (struct _GUID *)((char *)CompositionNoRef + 252));
}
