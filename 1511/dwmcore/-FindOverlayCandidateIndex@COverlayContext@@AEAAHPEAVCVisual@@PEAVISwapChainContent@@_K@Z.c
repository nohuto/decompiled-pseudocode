/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180110D74
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r11d
  unsigned int v6; // r10d
  __int64 v8; // rcx
  __int64 v9; // rdx

  v4 = *((_DWORD *)this + 40);
  v5 = -1;
  v6 = 0;
  if ( v4 )
  {
    v8 = *((_QWORD *)this + 17);
    while ( 1 )
    {
      v9 = 224LL * v6;
      if ( *(struct CVisual **)(v9 + v8) == a2
        || *(struct ISwapChainContent **)(v9 + v8 + 8) == a3 && (!a4 || *(_QWORD *)(v9 + v8 + 24) == a4) )
      {
        break;
      }
      if ( ++v6 >= v4 )
        return v5;
    }
    return v6;
  }
  return v5;
}
