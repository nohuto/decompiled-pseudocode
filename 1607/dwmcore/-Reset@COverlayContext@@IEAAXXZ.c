/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800791B4 (--1COverlayContext@@MEAA@XZ.c)
 * Callees:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180078A20 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x180078A48 (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x180078A74 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180078AB4 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180078AF4 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180078B34 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801529A8 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    for ( i = 0; i < *((_DWORD *)this + 66); *((_BYTE *)this + 1086) = 1 )
    {
      v5 = 232LL * i;
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v5 + *((_QWORD *)this + 30)),
        0,
        0);
      v6 = *(_QWORD *)(*((_QWORD *)this + 30) + v5 + 24);
      if ( *(_BYTE *)(v6 + 220) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v6 + 48));
      ++i;
    }
  }
  COverlayContext::ResetOverlayCandidatesList(this);
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  COverlayContext::ResetOverlayPlanesList(this);
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 112LL);
  *((_WORD *)this + 296) = 32085;
  *((_OWORD *)this + 33) = _xmm;
  *((_OWORD *)this + 34) = _xmm;
  *((_OWORD *)this + 35) = _xmm;
  *((_OWORD *)this + 36) = _xmm;
  *((_WORD *)this + 364) = 32085;
  *(_OWORD *)((char *)this + 664) = _xmm;
  *(_OWORD *)((char *)this + 680) = _xmm;
  *(_OWORD *)((char *)this + 696) = _xmm;
  *(_OWORD *)((char *)this + 712) = _xmm;
  v3 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 1089) = 0;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 264LL))(v3, 0LL);
  *((_BYTE *)this + 1091) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 108) + 8LL))((char *)this + 864);
  COverlayContext::ClearDirectFlip(this);
  v4 = *((_DWORD *)this + 22);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) != v4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2), v4);
  COverlayContext::SetMultiplaneOverlayPresentInfo(this);
  COverlayContext::SetDirectFlipPresentInfo((CDirectFlipInfo **)this);
  *((_BYTE *)this + 1080) = 0;
}
