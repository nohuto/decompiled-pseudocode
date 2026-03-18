/*
 * XREFs of ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C
 * Callers:
 *     ??1COverlayContext@@MEAA@XZ @ 0x180012AE0 (--1COverlayContext@@MEAA@XZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180004E68 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180006AE0 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x180012398 (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x1800123CC (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18001240C (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18001244C (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  unsigned int i; // edi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rdx

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    for ( i = 0; i < *((_DWORD *)this + 56); *((_BYTE *)this + 822) = 1 )
    {
      v3 = 240LL * i;
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v3 + *((_QWORD *)this + 25)),
        0,
        0);
      v4 = *(_QWORD *)(*((_QWORD *)this + 25) + v3 + 16);
      if ( *(_BYTE *)(v4 + 180) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v4 + 48));
      ++i;
    }
  }
  COverlayContext::ResetOverlayCandidatesList(this);
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  COverlayContext::ResetOverlayPlanesList(this);
  memset_0((char *)this + 232, 0, 0x68uLL);
  memset_0((char *)this + 336, 0, 0x68uLL);
  *((_BYTE *)this + 825) = 0;
  v5 = *((_QWORD *)this + 63);
  *((_BYTE *)this + 827) = 0;
  (*(void (__fastcall **)(char *))(v5 + 8))((char *)this + 504);
  COverlayContext::ClearDirectFlip(this);
  v6 = *((_DWORD *)this + 22);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) != v6 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 408LL))(*((_QWORD *)this + 2), v6);
  COverlayContext::SetMultiplaneOverlayPresentInfo(this, v7);
  COverlayContext::SetDirectFlipPresentInfo(this);
  *((_BYTE *)this + 816) = 0;
}
