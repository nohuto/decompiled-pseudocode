/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180078B34
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180128884 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129B2C (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAA_NXZ @ 0x180129D2C (-UpdateHDRMetaData@COverlayContext@@AEAA_NXZ.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this)
{
  __int64 v1; // r12
  __int64 v2; // r11
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  char *v6; // rsi
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rbp
  unsigned __int64 v15; // rax
  char *v16; // rax
  int v17; // r8d
  int v18; // r15d
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rbp
  int *v25; // rbx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v27; // r8
  char v28; // dl
  char v29; // r9
  char v30; // bl
  bool v31; // r10
  int v32; // eax
  unsigned __int64 v33; // rbx
  int SingleDXGIResourceAndSubResourceIndex; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int i; // ecx
  __int64 v41; // rax
  bool updated; // al
  __int64 v43; // rdx
  char *v44; // r9
  int v45; // eax
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  int v48; // [rsp+40h] [rbp-58h]
  unsigned int v49; // [rsp+44h] [rbp-54h]
  bool v50; // [rsp+A0h] [rbp+8h]
  unsigned int v51; // [rsp+B0h] [rbp+18h]
  int v52; // [rsp+B8h] [rbp+20h]

  v1 = *((unsigned int *)this + 66);
  LODWORD(v2) = 0;
  v3 = *((_DWORD *)this + 74);
  v49 = v3;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  if ( (_DWORD)v1 || *((_BYTE *)this + 1089) )
  {
    v10 = 1;
    v50 = v3 != 0;
    if ( *((_DWORD *)this + 269) > 1u )
      v10 = *((_DWORD *)this + 269);
    v11 = 1;
    if ( v3 > 1 )
      v11 = *((_DWORD *)this + 74);
    v12 = *((_DWORD *)this + 268) + v10;
    v13 = v1 + v11;
    if ( v13 > v12 )
      v12 = v13;
    v51 = v12;
    v14 = v12;
    v15 = (unsigned __int64)v12 << 7;
    if ( !is_mul_ok(v12, 0x80uLL) )
      v15 = -1LL;
    v16 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                    WPF::g_pProcessHeap,
                    v15);
    v6 = v16;
    if ( !v16 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x998u);
      return v5;
    }
    memset_0(v16, 0, v14 << 7);
    v2 = 0LL;
    if ( (_DWORD)v1 && COverlayContext::RequiresFrontPlane(*((struct COverlayContext::OverlayPlaneInfo **)this + 30)) )
    {
      v17 = v1;
      v18 = v2;
    }
    else
    {
      v18 = 1;
      v17 = v2;
      if ( v3 > 1 )
        v18 = v3;
    }
    if ( v3 )
    {
      v19 = v2;
      do
      {
        v20 = v17 + v8;
        v21 = (unsigned __int64)v8++ << 7;
        *(_DWORD *)&v6[v21] = v20;
        *(_DWORD *)&v6[v21 + 4] = 1;
        *(_DWORD *)&v6[v21 + 16] = v2;
        v22 = *((_QWORD *)this + 34);
        *(_OWORD *)&v6[v21 + 24] = *(_OWORD *)(v22 + v19);
        *(_OWORD *)&v6[v21 + 40] = *(_OWORD *)(v22 + v19 + 16);
        *(_OWORD *)&v6[v21 + 56] = *(_OWORD *)(v22 + v19 + 32);
        *(_OWORD *)&v6[v21 + 72] = *(_OWORD *)(v22 + v19 + 48);
        *(_OWORD *)&v6[v21 + 88] = *(_OWORD *)(v22 + v19 + 64);
        *(_OWORD *)&v6[v21 + 104] = *(_OWORD *)(v22 + v19 + 80);
        v23 = *(_QWORD *)(v22 + v19 + 96);
        v19 += 112LL;
        *(_QWORD *)&v6[v21 + 120] = v23;
        *(_QWORD *)&v6[v21 + 8] = v2;
      }
      while ( v8 < v3 );
    }
    else
    {
      *(_DWORD *)v6 = v17;
      v8 = 1;
      *((_DWORD *)v6 + 1) = v2;
      *((_QWORD *)v6 + 1) = v2;
      *((_DWORD *)v6 + 4) = v2;
    }
    if ( (_DWORD)v1 )
    {
      v24 = v2;
      v52 = -v18;
      while ( 1 )
      {
        v25 = *(int **)(*((_QWORD *)this + 30) + v24 + 24);
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)v25);
        v27 = *((_QWORD *)this + 30);
        LODWORD(v2) = 0;
        v28 = 0;
        v48 = *((_DWORD *)RenderingRealizationNoRef + 63);
        if ( *(_BYTE *)(v27 + v24 + 208) && (v25[19] < 2 || !*(_BYTE *)(v27 + v24 + 209))
          || *(_DWORD *)(v27 + v24 + 212) != v18 )
        {
          v28 = 1;
        }
        v29 = *((_BYTE *)this + 1085);
        if ( v29
          || v28
          || *(_BYTE *)(v27 + v24 + 220)
          || *(_DWORD *)(v27 + v24 + 224) != *(_DWORD *)(*(_QWORD *)(v27 + v24 + 24) + 72LL) && v25[19] < 2 )
        {
          v30 = 1;
          *((_BYTE *)this + 1081) = 1;
        }
        else
        {
          v30 = 0;
        }
        if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
        {
          if ( v28 || *(_DWORD *)(*(_QWORD *)(v27 + v24 + 24) + 76LL) == -1 || (v31 = 1, v29) )
            v31 = 0;
          v32 = COverlayContext::EnsureIndependentFlipState(
                  this,
                  (struct COverlayContext::OverlayPlaneInfo *)(v27 + 232LL * (unsigned int)(v18 + v52)),
                  v31,
                  0);
          LODWORD(v2) = 0;
          v5 = v32;
          if ( v32 < 0 )
            break;
        }
        *(_DWORD *)(*((_QWORD *)this + 30) + v24 + 188) = v48;
        *(_DWORD *)(*((_QWORD *)this + 30) + v24 + 212) = v18;
        *(_BYTE *)(*((_QWORD *)this + 30) + v24 + 208) = 0;
        *(_BYTE *)(*((_QWORD *)this + 30) + v24 + 220) = v30;
        *(_DWORD *)(*((_QWORD *)this + 30) + v24 + 224) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + v24 + 24)
                                                                    + 72LL);
        if ( v30 )
        {
          v33 = (unsigned __int64)v8 << 7;
          *(_DWORD *)&v6[v33] = v18;
          *(_DWORD *)&v6[v33 + 4] = 1;
          SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                    *(struct CCompositionSurfaceInfo **)(*((_QWORD *)this + 30)
                                                                                       + v24
                                                                                       + 24),
                                                    (struct IDXGIResource **)&v6[v33 + 8],
                                                    (unsigned int *)&v6[v33 + 16]);
          LODWORD(v2) = 0;
          v5 = SingleDXGIResourceAndSubResourceIndex;
          if ( SingleDXGIResourceAndSubResourceIndex < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, 0xA1Eu);
            goto LABEL_63;
          }
          v35 = *((_QWORD *)this + 30);
          ++v8;
          *(_OWORD *)&v6[v33 + 24] = *(_OWORD *)(v35 + v24 + 40);
          *(_OWORD *)&v6[v33 + 40] = *(_OWORD *)(v35 + v24 + 56);
          *(_OWORD *)&v6[v33 + 56] = *(_OWORD *)(v35 + v24 + 72);
          *(_OWORD *)&v6[v33 + 72] = *(_OWORD *)(v35 + v24 + 88);
          *(_OWORD *)&v6[v33 + 88] = *(_OWORD *)(v35 + v24 + 104);
          *(_OWORD *)&v6[v33 + 104] = *(_OWORD *)(v35 + v24 + 120);
          *(_QWORD *)&v6[v33 + 120] = *(_QWORD *)(v35 + v24 + 136);
        }
        ++v18;
        v24 += 232LL;
        if ( v18 + v52 >= (unsigned int)v1 )
        {
          v3 = v49;
          v36 = 0LL;
          v37 = v1;
          do
          {
            v38 = *((_QWORD *)this + 30);
            if ( *(_BYTE *)(v38 + v36 + 220) && !*((_BYTE *)this + 1082) )
              *(_BYTE *)(v38 + v36 + 220) = 0;
            v36 += 232LL;
            --v37;
          }
          while ( v37 );
          goto LABEL_59;
        }
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xA08u);
LABEL_63:
      v7 = v51;
      goto LABEL_8;
    }
LABEL_59:
    v7 = v51;
    v39 = 1;
    if ( v3 > 1 )
      v39 = v3;
    for ( i = v39 + v1; i < v51; ++i )
    {
      v41 = v8++;
      v41 <<= 7;
      *(_DWORD *)&v6[v41] = i;
      *(_DWORD *)&v6[v41 + 4] = v2;
      *((_BYTE *)this + 1081) = 1;
    }
    if ( v8 > 1 || *((_BYTE *)this + 1084) != (_BYTE)v2 || v50 )
      *((_BYTE *)this + 1083) = v2;
    else
      *((_BYTE *)this + 1083) = 1;
    if ( *((_BYTE *)this + 1082) == (_BYTE)v2 )
      *((_BYTE *)this + 1084) = v50;
    *((_BYTE *)this + 1085) = v2;
  }
  else
  {
    *((_BYTE *)this + 1083) = 0;
  }
  if ( (_DWORD)v1
    || *((_DWORD *)this + 268) > (unsigned int)v2
    || *((_BYTE *)this + 1089) != (_BYTE)v2
    || *((_BYTE *)this + 1090) != (_BYTE)v2 )
  {
    updated = COverlayContext::UpdateHDRMetaData(this);
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 3
      || (!updated ? (v44 = 0LL) : (v44 = (char *)this + 100),
          LOBYTE(v43) = v8 != 0,
          v45 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, unsigned int, char *))(**((_QWORD **)this + 2)
                                                                                                 + 408LL))(
                  *((_QWORD *)this + 2),
                  v43,
                  *((unsigned int *)this + 24),
                  v44,
                  v8,
                  v6),
          v5 = v45,
          v45 >= 0) )
    {
      if ( !*((_BYTE *)this + 1082) )
      {
        *((_BYTE *)this + 1090) = *((_BYTE *)this + 1089);
        *((_DWORD *)this + 268) = v1;
        *((_DWORD *)this + 269) = v3;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xA72u);
    }
  }
LABEL_8:
  if ( v6 )
  {
    if ( v7 )
    {
      v46 = v6 + 8;
      v47 = v7;
      do
      {
        if ( *v46 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v46 + 16LL))(*v46);
        v46 += 16;
        --v47;
      }
      while ( v47 );
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, char *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
  }
  return v5;
}
