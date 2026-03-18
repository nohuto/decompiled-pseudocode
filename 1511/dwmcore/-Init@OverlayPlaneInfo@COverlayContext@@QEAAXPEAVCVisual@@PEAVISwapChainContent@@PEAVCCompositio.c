/*
 * XREFs of ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N777770@Z @ 0x180110F40
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::Init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  __int128 v13; // xmm1

  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)a6;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a6 + 16);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a6 + 32);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a6 + 48);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a6 + 64);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a6 + 80);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a6 + 96);
  v13 = *a7;
  *(_QWORD *)(a1 + 152) = a8;
  *(_BYTE *)(a1 + 160) = a9;
  *(_BYTE *)(a1 + 161) = a10;
  *(_BYTE *)(a1 + 162) = a11;
  *(_BYTE *)(a1 + 163) = a12;
  *(_BYTE *)(a1 + 164) = a13;
  *(_BYTE *)(a1 + 165) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_BYTE *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_WORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 188) = 0LL;
  *(_DWORD *)(a1 + 196) = 0;
  *(_WORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 204) = 0LL;
  *(_BYTE *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 220) = 0;
  *(_OWORD *)(a1 + 136) = v13;
  COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)a1);
}
