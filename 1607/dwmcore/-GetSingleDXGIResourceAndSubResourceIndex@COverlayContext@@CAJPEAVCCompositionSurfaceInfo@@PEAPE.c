/*
 * XREFs of ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180128884
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180078B34 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1801275E4 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
        struct CCompositionSurfaceInfo *a1,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  unsigned int v5; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v7; // rdi
  int v8; // eax

  v5 = -2147024809;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(a1);
  v7 = RenderingRealizationNoRef;
  if ( RenderingRealizationNoRef )
  {
    v8 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, struct IDXGIResource **, _QWORD))(*(_QWORD *)RenderingRealizationNoRef
                                                                                                 + 80LL))(
           RenderingRealizationNoRef,
           a2,
           0LL);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB46u);
    else
      *a3 = *((_DWORD *)v7 + 68);
  }
  return v5;
}
