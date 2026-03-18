/*
 * XREFs of ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180149EF4
 * Callers:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x180006530 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRegionWrapper::Create(struct CRegionWrapper **a1)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  struct CRegionWrapper *v4; // rdi

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         88LL);
  v4 = (struct CRegionWrapper *)v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = v3 + 24;
    *(_DWORD *)(v3 + 24) = 0;
    *(_QWORD *)v3 = &CRegionWrapper::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(struct CRegionWrapper *))v4)(v4);
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x15u);
  }
  return v2;
}
