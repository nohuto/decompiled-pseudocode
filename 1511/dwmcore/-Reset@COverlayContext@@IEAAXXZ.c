/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050
 * Callers:
 *     ??1COverlayContext@@MEAA@XZ @ 0x18007F2B8 (--1COverlayContext@@MEAA@XZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18001B938 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18007E9A8 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007EA0C (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x18007EA40 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007EA80 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007EAC0 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007EB00 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  unsigned int i; // edi
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    for ( i = 0; i < *((_DWORD *)this + 56); *((_BYTE *)this + 838) = 1 )
    {
      v6 = 224LL * i;
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v6 + *((_QWORD *)this + 25)),
        0,
        0);
      v7 = *(_QWORD *)(*((_QWORD *)this + 25) + v6 + 16);
      if ( *(_BYTE *)(v7 + 172) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v7 + 48));
      ++i;
    }
  }
  COverlayContext::ResetOverlayCandidatesList(this);
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  COverlayContext::ResetOverlayPlanesList(this);
  *((_DWORD *)this + 64) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 29, 0x70u);
  *(_QWORD *)((char *)this + 540) = 0LL;
  *(_QWORD *)((char *)this + 532) = 0LL;
  *((_DWORD *)this + 137) = 1065353216;
  *((_DWORD *)this + 132) = 1065353216;
  *((_DWORD *)this + 127) = 1065353216;
  *((_DWORD *)this + 122) = 1065353216;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *(_QWORD *)((char *)this + 500) = 0LL;
  *(_QWORD *)((char *)this + 492) = 0LL;
  *(_QWORD *)((char *)this + 604) = 0LL;
  *(_QWORD *)((char *)this + 596) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *(_QWORD *)((char *)this + 564) = 0LL;
  *(_QWORD *)((char *)this + 556) = 0LL;
  *((_DWORD *)this + 153) = 1065353216;
  *((_DWORD *)this + 148) = 1065353216;
  *((_DWORD *)this + 143) = 1065353216;
  *((_DWORD *)this + 138) = 1065353216;
  v3 = *((_QWORD *)this + 77);
  *((_BYTE *)this + 841) = 0;
  *((_BYTE *)this + 843) = 0;
  (*(void (__fastcall **)(char *))(v3 + 8))((char *)this + 616);
  COverlayContext::ClearDirectFlip(this);
  v4 = *((_DWORD *)this + 22);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) != v4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 416LL))(*((_QWORD *)this + 2), v4);
  COverlayContext::SetMultiplaneOverlayPresentInfo(this, v5);
  COverlayContext::SetDirectFlipPresentInfo(this);
  *((_BYTE *)this + 832) = 0;
}
