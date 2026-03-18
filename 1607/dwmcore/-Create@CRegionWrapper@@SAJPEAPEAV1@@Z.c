/*
 * XREFs of ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180187AA4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x18012D1AC (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionWrapper::Create(struct CRegionWrapper **a1)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx

  v2 = 0;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   88LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x58uLL);
    *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
    v4[2] = 0;
    *((_QWORD *)v4 + 2) = v4 + 6;
    v4[6] = 0;
    *(_QWORD *)v4 = &CRegionWrapper::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(void *))v4)(v4);
    *a1 = (struct CRegionWrapper *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x15u);
  }
  return v2;
}
