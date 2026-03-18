/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1801275E4
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180079C4C (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180128740 (-GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCont.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180128884 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129B2C (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 *     Template_dd @ 0x180129FC8 (Template_dd.c)
 *     Template_xqddddddddddddqqq @ 0x18012A548 (Template_xqddddddddddddqqq.c)
 */

__int64 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(unsigned int *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebx
  unsigned int *v6; // rdi
  unsigned int v7; // esi
  unsigned int *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r12
  int ContextCandidates; // eax
  int v18; // edx
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rax
  struct IDXGIResource **v23; // rbx
  __int64 v24; // rcx
  CD3DSurface *v25; // rax
  int DXGIResource; // eax
  int v27; // ebx
  struct IDXGIResource **v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  struct IDXGIResource *v31; // xmm0_8
  unsigned int v32; // edx
  unsigned int v33; // ebx
  unsigned int v34; // r8d
  char *v35; // rdx
  __int64 v36; // r8
  struct IDXGIResource **v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // xmm0_8
  __int64 v41; // rax
  _DWORD *v42; // rbx
  unsigned __int8 *v43; // rbx
  int v44; // eax
  __int64 i; // rdx
  __int64 v46; // rdi
  _QWORD *v47; // rbx
  int v49; // [rsp+A0h] [rbp-80h]
  int v50; // [rsp+A0h] [rbp-80h]
  int v51; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v52; // [rsp+A8h] [rbp-78h]
  int v53; // [rsp+ACh] [rbp-74h]
  int v54; // [rsp+B0h] [rbp-70h]
  __int64 v55; // [rsp+B8h] [rbp-68h]
  unsigned int v56; // [rsp+C0h] [rbp-60h]
  struct IDXGIResource **v57; // [rsp+C8h] [rbp-58h]
  _QWORD v58[2]; // [rsp+D0h] [rbp-50h] BYREF
  int v59; // [rsp+E0h] [rbp-40h]
  int v60; // [rsp+E4h] [rbp-3Ch]
  unsigned int v61; // [rsp+E8h] [rbp-38h]
  _BYTE v62[32]; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v63; // [rsp+110h] [rbp-10h]
  char v64; // [rsp+170h] [rbp+50h] BYREF
  __int64 v65; // [rsp+178h] [rbp+58h]
  unsigned __int8 *v66; // [rsp+180h] [rbp+60h]
  unsigned int v67; // [rsp+188h] [rbp+68h]

  v66 = a3;
  v65 = a2;
  v3 = *(_DWORD *)(a2 + 24);
  v4 = 0;
  v6 = a1;
  v67 = 0;
  v7 = 0;
  v64 = 0;
  if ( a1[6] )
  {
    a1 = *(unsigned int **)a1;
    a2 = v6[6];
    do
    {
      v8 = *(unsigned int **)a1;
      a1 += 2;
      v3 += v8[74];
      --a2;
    }
    while ( a2 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_dd(a1, a2, CCommonRegistryData::m_dwOverlayTestMode < 4, v3);
  *a3 = 0;
  v9 = *(_QWORD *)WPF::g_pProcessHeap;
  v10 = v3;
  v11 = 136LL * v3;
  v63 = v3;
  if ( !is_mul_ok(v3, 0x88uLL) )
    v11 = -1LL;
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(v9 + 8))(WPF::g_pProcessHeap, v11);
  if ( !v14 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8A1u);
    return v7;
  }
  v15 = 0LL;
  v54 = 0;
  if ( !v6[6] )
    goto LABEL_28;
  while ( 2 )
  {
    v61 = 0;
    v58[0] = v62;
    v58[1] = v62;
    v59 = 4;
    v60 = 4;
    v16 = (unsigned int)v15;
    ContextCandidates = COverlayContext::GetContextCandidates(*(_QWORD *)(*(_QWORD *)v6 + 8 * v15), v65, v58);
    v7 = ContextCandidates;
    if ( ContextCandidates >= 0 )
    {
      if ( v61 && COverlayContext::RequiresFrontPlane(*(struct COverlayContext::OverlayPlaneInfo **)v58[0]) )
      {
        v49 = 0;
      }
      else
      {
        v18 = 0;
        v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8 * v16) + 296LL);
      }
      v19 = v4 + v18;
      v53 = -v4;
      v20 = -v19;
      LODWORD(v55) = -v19;
      while ( 1 )
      {
        v21 = v20 + v19;
        v52 = v19;
        v22 = *(_QWORD *)v6;
        v56 = v21;
        if ( v21 >= *(_DWORD *)(*(_QWORD *)(v22 + 8 * v16) + 296LL) )
          break;
        v23 = (struct IDXGIResource **)(v14 + 136LL * v19);
        v57 = v23;
        memset_0(v23, 0, 0x88uLL);
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8 * v16) + 16LL);
        v25 = (CD3DSurface *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 120LL))(v24);
        DXGIResource = CD3DSurface::GetDXGIResource(v25, v23 + 1);
        v51 = DXGIResource;
        v27 = DXGIResource;
        if ( DXGIResource < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x8D1u);
        TranslateDXGIorD3DErrorInContext(v27, 15, &v51);
        v7 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x8D7u);
          goto LABEL_42;
        }
        v28 = v57;
        *((_DWORD *)v57 + 7) = 0;
        v29 = 112LL * v56;
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8 * v16) + 272LL);
        *((_OWORD *)v28 + 2) = *(_OWORD *)(v30 + v29);
        *((_OWORD *)v28 + 3) = *(_OWORD *)(v30 + v29 + 16);
        *((_OWORD *)v28 + 4) = *(_OWORD *)(v30 + v29 + 32);
        *((_OWORD *)v28 + 5) = *(_OWORD *)(v30 + v29 + 48);
        *((_OWORD *)v28 + 6) = *(_OWORD *)(v30 + v29 + 64);
        *((_OWORD *)v28 + 7) = *(_OWORD *)(v30 + v29 + 80);
        v31 = *(struct IDXGIResource **)(v30 + v29 + 96);
        LODWORD(v29) = v52;
        *(_DWORD *)v28 = v52 + v53;
        v19 = v29 + 1;
        v28[16] = v31;
        v20 = v55;
        *((_DWORD *)v28 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8 * v16) + 72LL) + 240LL);
      }
      v32 = v61;
      v33 = v67;
      if ( v61 )
      {
        v34 = v67 + v49;
        v67 += v49;
        v50 = -(v33 + v49);
        do
        {
          v55 = v14 + 136LL * v34;
          memset_0((void *)v55, 0, 0x88uLL);
          v57 = (struct IDXGIResource **)(v67 + v50);
          if ( (int)COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                      *(struct CCompositionSurfaceInfo **)(*(_QWORD *)(v58[0] + 8LL * (_QWORD)v57) + 24LL),
                      (struct IDXGIResource **)(v55 + 8),
                      (unsigned int *)(v55 + 28)) < 0 )
            goto LABEL_42;
          v35 = (char *)v55;
          v36 = v58[0];
          v37 = v57;
          v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58[0] + 8LL * (_QWORD)v57) + 24LL) + 40LL);
          *(_DWORD *)(v55 + 28) = 0;
          *(_QWORD *)(v35 + 20) = v38;
          v39 = *(_QWORD *)(v36 + 8LL * (_QWORD)v37);
          LODWORD(v36) = v67;
          *((_OWORD *)v35 + 2) = *(_OWORD *)(v39 + 40);
          *((_OWORD *)v35 + 3) = *(_OWORD *)(v39 + 56);
          *((_OWORD *)v35 + 4) = *(_OWORD *)(v39 + 72);
          *((_OWORD *)v35 + 5) = *(_OWORD *)(v39 + 88);
          *((_OWORD *)v35 + 6) = *(_OWORD *)(v39 + 104);
          *((_OWORD *)v35 + 7) = *(_OWORD *)(v39 + 120);
          v40 = *(_QWORD *)(v39 + 136);
          LODWORD(v39) = v36 + v53;
          *((_QWORD *)v35 + 16) = v40;
          *(_DWORD *)v35 = v39;
          v34 = v36 + 1;
          v41 = *(_QWORD *)v6;
          v67 = v34;
          *((_DWORD *)v35 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8 * v16) + 72LL) + 240LL);
          v32 = v61;
        }
        while ( v34 + v50 < v61 );
      }
      v4 = v32 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8 * v16) + 296LL) + v33;
      v67 = v4;
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v58);
      v15 = (unsigned int)(v54 + 1);
      v54 = v15;
      if ( (unsigned int)v15 < v6[6] )
        continue;
      v10 = v3;
LABEL_28:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v3 )
      {
        v42 = (_DWORD *)(v14 + 88);
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xqddddddddddddqqq(
              v13,
              v12,
              *((_QWORD *)v42 - 10),
              *(v42 - 14),
              *(v42 - 13),
              *(v42 - 12),
              *(v42 - 11),
              *(v42 - 10),
              *(v42 - 9),
              *(v42 - 8),
              *(v42 - 7),
              *(v42 - 6),
              *(v42 - 5),
              *(v42 - 4),
              *(v42 - 3),
              *(v42 - 2),
              *(v42 - 1),
              *v42,
              v42[5]);
          v42 += 34;
          --v10;
        }
        while ( v10 );
      }
      v43 = v66;
      if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
      {
        if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
          *v66 = 1;
      }
      else
      {
        v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *, char *))(**(_QWORD **)(**(_QWORD **)v6 + 16LL)
                                                                                            + 400LL))(
                *(_QWORD *)(**(_QWORD **)v6 + 16LL),
                v3,
                v14,
                v66,
                &v64);
        v7 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x91Du);
          goto LABEL_48;
        }
        if ( v64 )
        {
          for ( i = 0LL; (unsigned int)i < v6[6]; *(_BYTE *)(v13 + 1094) = 1 )
          {
            v13 = *(_QWORD *)(*(_QWORD *)v6 + 8 * i);
            i = (unsigned int)(i + 1);
          }
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_q(v13, &EVTDESC_OVERLAY_CHECKSUPPORT_Stop, *v43);
      goto LABEL_48;
    }
    break;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ContextCandidates, 0x8AFu);
LABEL_42:
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v58);
LABEL_48:
  if ( v3 )
  {
    v46 = v63;
    v47 = (_QWORD *)(v14 + 8);
    do
    {
      if ( *v47 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 16LL))(*v47);
      v47 += 17;
      --v46;
    }
    while ( v46 );
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v14);
  return v7;
}
