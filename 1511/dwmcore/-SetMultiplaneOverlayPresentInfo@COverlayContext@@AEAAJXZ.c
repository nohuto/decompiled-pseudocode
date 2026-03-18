/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007EB00
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180110E30 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEA.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180111A68 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r11
  unsigned int v4; // r8d
  unsigned int v6; // r15d
  char *v7; // r14
  unsigned int v8; // r12d
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned __int64 v14; // rdi
  char *v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // r8d
  int v18; // r9d
  int v19; // esi
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rbx
  int v25; // edi
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v27; // r8
  char v28; // dl
  char v29; // r9
  char v30; // r10
  int v31; // eax
  __int64 v32; // rdx
  COverlayContext *v33; // rcx
  unsigned __int64 v34; // rdi
  int SingleDXGIResourceAndSubResourceIndex; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  unsigned int i; // ecx
  __int64 v41; // rax
  int v42; // eax
  _QWORD *v43; // rdi
  __int64 v44; // rbp
  int v45; // [rsp+30h] [rbp-58h]
  int v46; // [rsp+34h] [rbp-54h]
  bool v47; // [rsp+90h] [rbp+8h]
  char v48; // [rsp+98h] [rbp+10h]
  unsigned int v49; // [rsp+A0h] [rbp+18h]
  unsigned int v50; // [rsp+A8h] [rbp+20h]

  v2 = *((unsigned int *)this + 56);
  LODWORD(v3) = 0;
  v4 = *((_DWORD *)this + 64);
  v49 = v4;
  v6 = 0;
  v50 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( (_DWORD)v2 || *((_BYTE *)this + 841) )
  {
    v10 = 1;
    v47 = v4 != 0;
    if ( *((_DWORD *)this + 207) > 1u )
      v10 = *((_DWORD *)this + 207);
    v11 = 1;
    if ( v4 > 1 )
      v11 = *((_DWORD *)this + 64);
    v12 = *((_DWORD *)this + 206) + v10;
    v13 = v2 + v11;
    if ( v13 > v12 )
      v12 = v13;
    v50 = v12;
    v14 = (unsigned __int64)v12 << 7;
    if ( !is_mul_ok(v12, 0x80uLL) )
      v14 = -1LL;
    v15 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                    WPF::g_pProcessHeap,
                    v14);
    v7 = v15;
    if ( !v15 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8F7u);
      return v6;
    }
    v16 = v50;
    memset_0(v15, 0, (unsigned __int64)v50 << 7);
    v3 = 0LL;
    if ( (_DWORD)v2 && COverlayContext::RequiresFrontPlane(*((struct COverlayContext::OverlayPlaneInfo **)this + 25)) )
    {
      v17 = v49;
      v18 = v2;
      v19 = v3;
    }
    else
    {
      v17 = v49;
      v19 = 1;
      v18 = v3;
      if ( v49 > 1 )
        v19 = v49;
    }
    if ( v17 )
    {
      a2 = v3;
      do
      {
        v20 = v18 + v8;
        v21 = (unsigned __int64)v8++ << 7;
        *(_DWORD *)&v7[v21] = v20;
        *(_DWORD *)&v7[v21 + 4] = 1;
        *(_DWORD *)&v7[v21 + 16] = v3;
        v22 = *((_QWORD *)this + 29);
        *(_OWORD *)&v7[v21 + 24] = *(_OWORD *)(v22 + a2);
        *(_OWORD *)&v7[v21 + 40] = *(_OWORD *)(v22 + a2 + 16);
        *(_OWORD *)&v7[v21 + 56] = *(_OWORD *)(v22 + a2 + 32);
        *(_OWORD *)&v7[v21 + 72] = *(_OWORD *)(v22 + a2 + 48);
        *(_OWORD *)&v7[v21 + 88] = *(_OWORD *)(v22 + a2 + 64);
        *(_OWORD *)&v7[v21 + 104] = *(_OWORD *)(v22 + a2 + 80);
        v23 = *(_QWORD *)(v22 + a2 + 96);
        a2 += 112LL;
        *(_QWORD *)&v7[v21 + 120] = v23;
        *(_QWORD *)&v7[v21 + 8] = v3;
      }
      while ( v8 < v17 );
    }
    else
    {
      *(_DWORD *)v7 = v18;
      v8 = 1;
      *((_DWORD *)v7 + 1) = v3;
      *((_QWORD *)v7 + 1) = v3;
      *((_DWORD *)v7 + 4) = v3;
    }
    if ( (_DWORD)v2 )
    {
      v24 = v3;
      v25 = -v19;
      v46 = -v19;
      do
      {
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(*((_QWORD *)this + 25) + v24 + 16));
        v27 = *((_QWORD *)this + 25);
        LODWORD(v3) = 0;
        v28 = 0;
        v48 = 0;
        v45 = *((_DWORD *)RenderingRealizationNoRef + 75);
        if ( *(_BYTE *)(v27 + v24 + 200)
          && (!*((_DWORD *)RenderingRealizationNoRef + 59) || !*(_BYTE *)(v27 + v24 + 201))
          || *(_DWORD *)(v27 + v24 + 204) != v19 )
        {
          v28 = 1;
        }
        v29 = *((_BYTE *)this + 837);
        if ( v29
          || v28
          || *(_BYTE *)(v27 + v24 + 212)
          || *(_DWORD *)(v27 + v24 + 216) != *(_DWORD *)(*(_QWORD *)(v27 + v24 + 16) + 72LL)
          && !*((_DWORD *)RenderingRealizationNoRef + 59) )
        {
          v48 = 1;
          *((_BYTE *)this + 833) = 1;
        }
        if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
        {
          if ( v28 || *(_DWORD *)(*(_QWORD *)(v27 + v24 + 16) + 76LL) == -1 || (v30 = 1, v29) )
            v30 = 0;
          v31 = COverlayContext::EnsureIndependentFlipState(
                  this,
                  (struct COverlayContext::OverlayPlaneInfo *)(v27 + 224LL * (unsigned int)(v25 + v19)),
                  v30,
                  0);
          LODWORD(v3) = 0;
          v6 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x966u);
            goto LABEL_8;
          }
        }
        *(_DWORD *)(*((_QWORD *)this + 25) + v24 + 180) = v45;
        *(_DWORD *)(*((_QWORD *)this + 25) + v24 + 204) = v19;
        *(_BYTE *)(*((_QWORD *)this + 25) + v24 + 200) = 0;
        *(_BYTE *)(*((_QWORD *)this + 25) + v24 + 212) = v48;
        v32 = *((_QWORD *)this + 25);
        v33 = (COverlayContext *)*(unsigned int *)(*(_QWORD *)(v32 + v24 + 16) + 72LL);
        *(_DWORD *)(v32 + v24 + 216) = (_DWORD)v33;
        if ( v48 )
        {
          v34 = (unsigned __int64)v8 << 7;
          *(_DWORD *)&v7[v34] = v19;
          *(_DWORD *)&v7[v34 + 4] = 1;
          SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                    v33,
                                                    *(struct CCompositionSurfaceInfo **)(*((_QWORD *)this + 25)
                                                                                       + v24
                                                                                       + 16),
                                                    (struct IDXGIResource **)&v7[v34 + 8],
                                                    (unsigned int *)&v7[v34 + 16]);
          LODWORD(v3) = 0;
          v6 = SingleDXGIResourceAndSubResourceIndex;
          if ( SingleDXGIResourceAndSubResourceIndex < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, 0x97Cu);
            goto LABEL_8;
          }
          v36 = *((_QWORD *)this + 25);
          ++v8;
          *(_OWORD *)&v7[v34 + 24] = *(_OWORD *)(v36 + v24 + 32);
          *(_OWORD *)&v7[v34 + 40] = *(_OWORD *)(v36 + v24 + 48);
          *(_OWORD *)&v7[v34 + 56] = *(_OWORD *)(v36 + v24 + 64);
          *(_OWORD *)&v7[v34 + 72] = *(_OWORD *)(v36 + v24 + 80);
          *(_OWORD *)&v7[v34 + 88] = *(_OWORD *)(v36 + v24 + 96);
          *(_OWORD *)&v7[v34 + 104] = *(_OWORD *)(v36 + v24 + 112);
          *(_QWORD *)&v7[v34 + 120] = *(_QWORD *)(v36 + v24 + 128);
          v25 = v46;
        }
        ++v19;
        v24 += 224LL;
      }
      while ( v25 + v19 < (unsigned int)v2 );
      v17 = v49;
      v16 = v50;
      v37 = 0LL;
      a2 = v2;
      do
      {
        v38 = *((_QWORD *)this + 25);
        if ( *(_BYTE *)(v38 + v37 + 212) && !*((_BYTE *)this + 834) )
          *(_BYTE *)(v38 + v37 + 212) = 0;
        v37 += 224LL;
        --a2;
      }
      while ( a2 );
    }
    v39 = 1;
    if ( v17 > 1 )
      v39 = v17;
    for ( i = v39 + v2; i < v16; ++i )
    {
      v41 = v8++;
      v41 <<= 7;
      *(_DWORD *)&v7[v41] = i;
      *(_DWORD *)&v7[v41 + 4] = v3;
      *((_BYTE *)this + 833) = 1;
    }
    if ( v8 > 1 || *((_BYTE *)this + 836) != (_BYTE)v3 || v47 )
      *((_BYTE *)this + 835) = v3;
    else
      *((_BYTE *)this + 835) = 1;
    if ( *((_BYTE *)this + 834) == (_BYTE)v3 )
      *((_BYTE *)this + 836) = v47;
    *((_BYTE *)this + 837) = v3;
  }
  else
  {
    *((_BYTE *)this + 835) = 0;
  }
  if ( (_DWORD)v2
    || *((_DWORD *)this + 206) > (unsigned int)v3
    || *((_BYTE *)this + 841) != (_BYTE)v3
    || *((_BYTE *)this + 842) != (_BYTE)v3 )
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 3
      || (LOBYTE(a2) = v8 != 0,
          v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *))(**((_QWORD **)this + 2) + 392LL))(
                  *((_QWORD *)this + 2),
                  a2,
                  v8,
                  v7),
          LOBYTE(v3) = 0,
          v6 = v42,
          v42 >= 0) )
    {
      if ( *((_BYTE *)this + 834) == (_BYTE)v3 )
      {
        *((_DWORD *)this + 207) = v49;
        *((_BYTE *)this + 842) = *((_BYTE *)this + 841);
        *((_DWORD *)this + 206) = v2;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x9CCu);
    }
  }
LABEL_8:
  if ( v7 )
  {
    if ( v50 )
    {
      v43 = v7 + 8;
      v44 = v50;
      do
      {
        if ( *v43 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 16LL))(*v43);
        v43 += 16;
        --v44;
      }
      while ( v44 );
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, char *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v7);
  }
  return v6;
}
