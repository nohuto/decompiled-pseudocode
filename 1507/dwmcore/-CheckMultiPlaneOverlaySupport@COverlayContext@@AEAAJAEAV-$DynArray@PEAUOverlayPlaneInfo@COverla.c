/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_NPEA_N2@Z @ 0x1800F63E0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18001248C (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?CanDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800F61CC (-CanDisableDesktopPlane@COverlayContext@@AEAA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayConte.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x1800F6B0C (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEA.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x1800F7634 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 *     Template_dd @ 0x1800F7970 (Template_dd.c)
 *     Template_xqddddddddddddqqq @ 0x1800F7EF0 (Template_xqddddddddddddqqq.c)
 */

__int64 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(
        __int64 a1,
        __int64 a2,
        bool a3,
        unsigned __int8 *a4,
        char *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  char v7; // r13
  __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned int v15; // edi
  unsigned int v16; // edx
  char v17; // si
  __int64 v18; // rbx
  char v19; // r9
  int v20; // ebx
  __int64 v21; // rsi
  COverlayContext *v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rbx
  __int64 v25; // rdi
  unsigned __int8 *v26; // r14
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rax
  _QWORD *v30; // rdi
  __int64 v32; // [rsp+A0h] [rbp-58h]
  __int64 v33; // [rsp+A8h] [rbp-50h]
  char v35; // [rsp+108h] [rbp+10h] BYREF
  bool v36; // [rsp+110h] [rbp+18h]
  unsigned __int8 *v37; // [rsp+118h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v5 = CCommonRegistryData::m_dwOverlayTestMode;
  v6 = 0;
  v7 = 0;
  v35 = 0;
  if ( CCommonRegistryData::m_dwOverlayTestMode < 2 && COverlayContext::CanDisableDesktopPlane(a1, a2) )
  {
    v7 = 1;
    v10 = 0LL;
  }
  else
  {
    v10 = 1LL;
  }
  v11 = v10 + *(_DWORD *)(a2 + 24);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_dd(v10, a2, v5 < 4, v11);
  *a4 = 0;
  v32 = v11;
  v12 = 136LL * v11;
  if ( !is_mul_ok(v11, 0x88uLL) )
    v12 = -1LL;
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v12);
  if ( !v14 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x897u);
    return v6;
  }
  if ( v7 )
  {
    v15 = 0;
    goto LABEL_17;
  }
  if ( !*(_DWORD *)(a2 + 24) || !COverlayContext::RequiresFrontPlane(**(struct COverlayContext::OverlayPlaneInfo ***)a2) )
  {
    v15 = 1;
LABEL_17:
    v16 = 0;
    v17 = 0;
    if ( v7 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v15 = 0;
  v17 = 1;
LABEL_18:
  v18 = v14 + 136LL * v16;
  memset_0((void *)v18, 0, 0x88uLL);
  *(_QWORD *)(v18 + 8) = 0LL;
  v19 = v36;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  COverlayContext::DeriveDesktopPlaneAttributes(
    (COverlayContext *)a1,
    0,
    v17,
    v19,
    (struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v18 + 32));
LABEL_19:
  if ( *(_DWORD *)(a2 + 24) )
  {
    v20 = -v15;
    do
    {
      v21 = v14 + 136LL * v15;
      memset_0((void *)v21, 0, 0x88uLL);
      v33 = v20 + v15;
      if ( COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
             v22,
             *(struct CCompositionSurfaceInfo **)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v33) + 16LL),
             (struct IDXGIResource **)(v21 + 8),
             (unsigned int *)(v21 + 28)) < 0 )
        goto LABEL_38;
      ++v15;
      v16 = v33;
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v33) + 16LL) + 40LL);
      *(_DWORD *)(v21 + 28) = 0;
      *(_QWORD *)(v21 + 20) = v23;
      v13 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v33);
      *(_OWORD *)(v21 + 32) = *(_OWORD *)(v13 + 32);
      *(_OWORD *)(v21 + 48) = *(_OWORD *)(v13 + 48);
      *(_OWORD *)(v21 + 64) = *(_OWORD *)(v13 + 64);
      *(_OWORD *)(v21 + 80) = *(_OWORD *)(v13 + 80);
      *(_OWORD *)(v21 + 96) = *(_OWORD *)(v13 + 96);
      *(_OWORD *)(v21 + 112) = *(_OWORD *)(v13 + 112);
      *(_QWORD *)(v21 + 128) = *(_QWORD *)(v13 + 128);
    }
    while ( v20 + v15 < *(_DWORD *)(a2 + 24) );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v11 )
  {
    v24 = (_DWORD *)(v14 + 88);
    v25 = v11;
    do
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xqddddddddddddqqq(
          v13,
          v16,
          *((_QWORD *)v24 - 10),
          *(v24 - 14),
          *(v24 - 13),
          *(v24 - 12),
          *(v24 - 11),
          *(v24 - 10),
          *(v24 - 9),
          *(v24 - 8),
          *(v24 - 7),
          *(v24 - 6),
          *(v24 - 5),
          *(v24 - 4),
          *(v24 - 3),
          *(v24 - 2),
          *(v24 - 1),
          *v24,
          v24[5]);
      v24 += 34;
      --v25;
    }
    while ( v25 );
  }
  if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
  {
    v26 = v37;
    if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
      *v37 = 1;
    goto LABEL_36;
  }
  v26 = v37;
  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *, char *))(**(_QWORD **)(a1 + 16) + 376LL))(
          *(_QWORD *)(a1 + 16),
          v11,
          v14,
          v37,
          &v35);
  v6 = v27;
  if ( v27 >= 0 )
  {
    if ( v35 )
      *(_BYTE *)(a1 + 830) = 1;
LABEL_36:
    v28 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0;
    *a5 = v7;
    if ( !v28 )
      Template_q(v13, &EVTDESC_OVERLAY_CHECKSUPPORT_Stop, *v26);
    goto LABEL_38;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x8FBu);
LABEL_38:
  if ( v11 )
  {
    v29 = v11;
    v30 = (_QWORD *)(v14 + 8);
    do
    {
      if ( *v30 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 16LL))(*v30);
        v29 = v32;
      }
      v30 += 17;
      v32 = --v29;
    }
    while ( v29 );
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v14);
  return v6;
}
