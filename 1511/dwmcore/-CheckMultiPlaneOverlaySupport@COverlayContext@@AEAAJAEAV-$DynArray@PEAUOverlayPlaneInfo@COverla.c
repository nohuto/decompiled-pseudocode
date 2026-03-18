/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180110224
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180110E30 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEA.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180111A68 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 *     Template_dd @ 0x180111CF0 (Template_dd.c)
 *     Template_xqddddddddddddqqq @ 0x180112270 (Template_xqddddddddddddqqq.c)
 */

__int64 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  int v18; // edi
  __int64 v19; // rbx
  struct COverlayContext::OverlayPlaneInfo **v20; // rdx
  COverlayContext *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r14
  _DWORD *v24; // rbx
  __int64 v25; // rdi
  unsigned __int8 *v26; // rsi
  int v27; // eax
  _QWORD *v28; // rdi
  char v30; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+F8h] [rbp+10h]
  unsigned __int8 *v32; // [rsp+100h] [rbp+18h]
  unsigned int v33; // [rsp+108h] [rbp+20h]

  v32 = a3;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 256) + *(_DWORD *)(a2 + 24);
  v33 = 0;
  v30 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_dd(a1, a2, CCommonRegistryData::m_dwOverlayTestMode < 4, v4);
  *a3 = 0;
  v8 = 136LL * v4;
  if ( !is_mul_ok(v4, 0x88uLL) )
    v8 = -1LL;
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v8);
  if ( !v11 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x85Du);
    return v3;
  }
  v12 = *(_DWORD *)(a2 + 24);
  if ( v12 && COverlayContext::RequiresFrontPlane(**(struct COverlayContext::OverlayPlaneInfo ***)a2) )
  {
    v13 = 0;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 256);
    v12 = 0;
  }
  if ( *(_DWORD *)(a1 + 256) )
  {
    v14 = -v12;
    do
    {
      v15 = v11 + 136LL * v12;
      memset_0((void *)v15, 0, 0x88uLL);
      *(_DWORD *)(v15 + 28) = 0;
      v10 = v14 + v12;
      v16 = *(_QWORD *)(a1 + 232);
      ++v12;
      LODWORD(v9) = 112 * v10;
      *(_OWORD *)(v15 + 32) = *(_OWORD *)(112 * v10 + v16);
      *(_OWORD *)(v15 + 48) = *(_OWORD *)(112 * v10 + v16 + 16);
      *(_OWORD *)(v15 + 64) = *(_OWORD *)(112 * v10 + v16 + 32);
      *(_OWORD *)(v15 + 80) = *(_OWORD *)(112 * v10 + v16 + 48);
      *(_OWORD *)(v15 + 96) = *(_OWORD *)(112 * v10 + v16 + 64);
      *(_OWORD *)(v15 + 112) = *(_OWORD *)(112 * v10 + v16 + 80);
      v17 = *(_QWORD *)(112 * v10 + v16 + 96);
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 128) = v17;
    }
    while ( v14 + v12 < *(_DWORD *)(a1 + 256) );
    v3 = v33;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    v18 = -v13;
    while ( 1 )
    {
      v19 = v11 + 136LL * v13;
      memset_0((void *)v19, 0, 0x88uLL);
      v20 = *(struct COverlayContext::OverlayPlaneInfo ***)a2;
      v31 = v18 + v13;
      if ( COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
             v21,
             *((struct CCompositionSurfaceInfo **)v20[v31] + 2),
             (struct IDXGIResource **)(v19 + 8),
             (unsigned int *)(v19 + 28)) < 0 )
        break;
      ++v13;
      v9 = v31;
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v31) + 16LL) + 40LL);
      *(_DWORD *)(v19 + 28) = 0;
      *(_QWORD *)(v19 + 20) = v22;
      v10 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v9);
      *(_OWORD *)(v19 + 32) = *(_OWORD *)(v10 + 32);
      *(_OWORD *)(v19 + 48) = *(_OWORD *)(v10 + 48);
      *(_OWORD *)(v19 + 64) = *(_OWORD *)(v10 + 64);
      *(_OWORD *)(v19 + 80) = *(_OWORD *)(v10 + 80);
      *(_OWORD *)(v19 + 96) = *(_OWORD *)(v10 + 96);
      *(_OWORD *)(v19 + 112) = *(_OWORD *)(v10 + 112);
      *(_QWORD *)(v19 + 128) = *(_QWORD *)(v10 + 128);
      if ( v18 + v13 >= *(_DWORD *)(a2 + 24) )
        goto LABEL_19;
    }
    v23 = v4;
    goto LABEL_35;
  }
LABEL_19:
  v23 = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v4 )
  {
    v24 = (_DWORD *)(v11 + 88);
    v25 = v4;
    do
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xqddddddddddddqqq(
          v10,
          v9,
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
    v26 = v32;
    if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
      *v32 = 1;
    goto LABEL_32;
  }
  v26 = v32;
  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *, char *))(**(_QWORD **)(a1 + 16) + 384LL))(
          *(_QWORD *)(a1 + 16),
          v4,
          v11,
          v32,
          &v30);
  v3 = v27;
  if ( v27 >= 0 )
  {
    if ( v30 )
      *(_BYTE *)(a1 + 846) = 1;
LABEL_32:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(v10, &EVTDESC_OVERLAY_CHECKSUPPORT_Stop, *v26);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x8B9u);
LABEL_35:
  if ( v4 )
  {
    v28 = (_QWORD *)(v11 + 8);
    do
    {
      if ( *v28 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 16LL))(*v28);
      v28 += 17;
      --v23;
    }
    while ( v23 );
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v11);
  return v3;
}
