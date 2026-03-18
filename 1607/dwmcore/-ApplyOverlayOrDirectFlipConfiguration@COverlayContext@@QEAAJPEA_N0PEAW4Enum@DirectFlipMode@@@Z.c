/*
 * XREFs of ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x180005F30 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001E8B4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180078A20 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800795E0 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     ?IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z @ 0x180128FC8 (-IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x18012CC1C (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x18012CEFC (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D2BC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18012D2E0 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z.c)
 */

__int64 __fastcall COverlayContext::ApplyOverlayOrDirectFlipConfiguration(
        COverlayContext *this,
        bool *a2,
        bool *a3,
        enum DirectFlipMode::Enum *a4)
{
  int v4; // edi
  unsigned int v8; // esi
  char i; // bp
  char v10; // r15
  CDirectFlipInfo **v11; // rsi
  int *v12; // rdx
  void (*v13)(void); // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct CDirectFlipInfo *v20; // rdx
  __int64 v21; // rax
  struct CDirectFlipInfo *v22; // r8
  __int64 v23; // r8
  int Candidate; // eax
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  bool *v29; // [rsp+68h] [rbp+10h]

  v29 = a2;
  v4 = 0;
  v28 = 0LL;
  *(_DWORD *)a4 = 0;
  if ( *((_BYTE *)this + 1096) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 152LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 23));
  v8 = 0;
  for ( i = 1; v8 < *((_DWORD *)this + 66); ++v8 )
    CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(232LL * v8 + *((_QWORD *)this + 30) + 24), 1, 1);
  if ( *((int *)this + 230) <= 0 || *((_DWORD *)this + 66) )
  {
    v10 = 0;
    goto LABEL_6;
  }
  v10 = 1;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                    + 112));
  if ( RenderingRealizationNoRef )
    (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
      RenderingRealizationNoRef,
      &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
      &v28);
  if ( !v28 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28) )
  {
    if ( !*((_BYTE *)this + 904)
      || (v20 = (struct CDirectFlipInfo *)*((_QWORD *)this + 120)) != 0LL
      && CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 864), v20)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 384LL))(*((_QWORD *)this + 2)) )
    {
      if ( !*((_QWORD *)this + 120)
        || CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 120))
        || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 864), v22)
        || !*(_BYTE *)(v23 + 40) && !*((_BYTE *)this + 904) )
      {
        goto LABEL_6;
      }
      v10 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_6;
      v19 = 1LL;
    }
    else
    {
      v10 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_6;
      v19 = 2LL;
    }
    v21 = *((_QWORD *)this + 112);
    v17 = *(unsigned int *)(v21 + 40);
    v18 = v17 | ((__int64)(int)HIDWORD(*(_QWORD *)(v21 + 40)) << 32);
    goto LABEL_39;
  }
  v10 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v16 = *((_QWORD *)this + 112);
    v17 = *(unsigned int *)(v16 + 40);
    v18 = v17 | ((__int64)(int)HIDWORD(*(_QWORD *)(v16 + 40)) << 32);
    v19 = 0LL;
LABEL_39:
    Template_xd(v17, &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL, v18, v19);
  }
LABEL_6:
  v11 = (CDirectFlipInfo **)((char *)this + 960);
  v12 = (int *)*((_QWORD *)this + 120);
  if ( v12
    && (v12[14] < 4
     || !v10
     || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 864), (struct CDirectFlipInfo *)v12)) )
  {
    COverlayContext::ClearDirectFlip(this);
    *((_BYTE *)this + 1097) = 1;
  }
  if ( !*v11 && v10 )
  {
    Candidate = CDirectFlipInfo::CreateCandidate(
                  (COverlayContext *)((char *)this + 864),
                  (struct CDirectFlipInfo **)this + 120);
    v4 = Candidate;
    if ( Candidate < 0 )
    {
      v27 = 711;
      goto LABEL_62;
    }
    v25 = CDirectFlipInfo::EnsurePinnedResources(*v11);
    v4 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x2C9u);
    if ( v4 == -2005532292 )
    {
      COverlayContext::ClearDirectFlip(this);
      v4 = 0;
    }
    else if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2D6u);
      goto LABEL_17;
    }
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*((_QWORD *)*v11 + 4) + 48LL), 1, 1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(v26, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 1LL);
  }
  if ( *v11 )
  {
    Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v11, (COverlayContext *)((char *)this + 864));
    v4 = Candidate;
    if ( Candidate >= 0 )
    {
      *(_DWORD *)a4 = (*((_BYTE *)*v11 + 40) != 0) + 1;
      goto LABEL_10;
    }
    v27 = 739;
LABEL_62:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Candidate, v27);
    goto LABEL_17;
  }
LABEL_10:
  v13 = *(void (**)(void))(*((_QWORD *)this + 108) + 8LL);
  if ( (char *)v13 == (char *)CDirectFlipInfo::Reset )
    CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 864));
  else
    v13();
  if ( !*((_BYTE *)this + 1097) && !*((_BYTE *)this + 1096) && *(_DWORD *)a4 != 2 )
    i = 0;
  *v29 = i;
  *a3 = *((_BYTE *)this + 1096);
LABEL_17:
  if ( v4 < 0 )
    COverlayContext::Reset(this);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  *((_WORD *)this + 548) = 0;
  return (unsigned int)v4;
}
