/*
 * XREFs of ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAVCVisual@@PEAVIImageSource@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N666660@Z @ 0x1800F6CA0
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
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
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int128 v12; // xmm1

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
  v12 = *a7;
  *(_QWORD *)(a1 + 224) = -1LL;
  *(_BYTE *)(a1 + 152) = a8;
  *(_BYTE *)(a1 + 153) = a9;
  *(_BYTE *)(a1 + 154) = a10;
  *(_BYTE *)(a1 + 155) = a11;
  *(_BYTE *)(a1 + 156) = a12;
  *(_BYTE *)(a1 + 157) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_WORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_WORD *)(a1 + 204) = 0;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_BYTE *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 136) = v12;
  COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)a1);
}
