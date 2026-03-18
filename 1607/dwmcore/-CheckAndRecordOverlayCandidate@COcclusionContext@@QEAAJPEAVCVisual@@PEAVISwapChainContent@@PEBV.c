/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001160C
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000FE00 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801396E0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        CShape *a5,
        unsigned int a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v13; // rdx
  int v14; // eax

  v6 = *(_QWORD *)(a1 + 1000);
  v7 = 0;
  v8 = 0LL;
  if ( *(_DWORD *)(v6 + 24) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v6 + 8 * v8);
      if ( *(_BYTE *)(v13 + 1080) )
      {
        v14 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, v13, a2, a3, a4, a5, a6);
        v7 = v14;
        if ( v14 < 0 )
          break;
      }
      v6 = *(_QWORD *)(a1 + 1000);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(v6 + 24) )
        return v7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x7C1u);
  }
  return v7;
}
