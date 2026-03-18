/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18001248C (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?IsDesktopContent@COverlayContext@@QEAA_NXZ @ 0x1800EA398 (-IsDesktopContent@COverlayContext@@QEAA_NXZ.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x1800F6B0C (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEA.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x1800F7634 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // r12d
  char *v5; // r14
  unsigned int v6; // r13d
  __int64 v8; // rcx
  char v9; // r8
  unsigned int v10; // eax
  unsigned __int64 v11; // r13
  __int64 v12; // rdi
  char *v13; // rax
  int v14; // eax
  int v15; // esi
  char v16; // r8
  unsigned __int8 v17; // bl
  __int64 v18; // rbx
  int v19; // edi
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v21; // r9
  char v22; // dl
  char v23; // r8
  char v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  COverlayContext *v27; // rcx
  unsigned __int64 v28; // rdi
  int SingleDXGIResourceAndSubResourceIndex; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int i; // ecx
  __int64 v35; // rax
  int v36; // eax
  _QWORD *v37; // rdi
  __int64 v38; // rbp
  int v39; // [rsp+30h] [rbp-58h]
  unsigned __int8 v40; // [rsp+90h] [rbp+8h]
  char v41; // [rsp+98h] [rbp+10h]
  bool v42; // [rsp+98h] [rbp+10h]
  unsigned int v43; // [rsp+A0h] [rbp+18h]
  int v44; // [rsp+A8h] [rbp+20h]

  v2 = *((unsigned int *)this + 56);
  v43 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v2 || *((_BYTE *)this + 825) )
  {
    v41 = CCommonRegistryData::m_dwOverlayTestMode < 2;
    if ( COverlayContext::IsDesktopContent(this) || (v40 = 0, !v9) )
      v40 = 1;
    v10 = *(_DWORD *)(v8 + 736);
    if ( (unsigned int)v2 > v10 )
      v10 = v2;
    v43 = v10 + 1;
    v11 = v10 + 1;
    v12 = v11 << 7;
    if ( !is_mul_ok(v11, 0x80uLL) )
      v12 = -1LL;
    v13 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v12);
    v5 = v13;
    if ( !v13 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x939u);
      return v4;
    }
    memset_0(v13, 0, v11 << 7);
    if ( (_DWORD)v2 && COverlayContext::RequiresFrontPlane(*((struct COverlayContext::OverlayPlaneInfo **)this + 25)) )
    {
      v14 = v2;
      v15 = 0;
      v16 = 1;
    }
    else
    {
      v14 = 0;
      v15 = 1;
      v16 = 0;
    }
    v17 = v40;
    *(_DWORD *)v5 = v14;
    *((_DWORD *)v5 + 1) = v40;
    *((_QWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 4) = 0;
    COverlayContext::DeriveDesktopPlaneAttributes(
      this,
      v41,
      v16,
      *((_BYTE *)this + 825),
      (struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v5 + 24));
    v6 = 1;
    if ( (_DWORD)v2 )
    {
      v18 = 0LL;
      v19 = -v15;
      v39 = -v15;
      do
      {
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(*((_QWORD *)this + 25) + v18 + 16));
        v21 = *((_QWORD *)this + 25);
        v42 = 0;
        v22 = 0;
        v44 = *((_DWORD *)RenderingRealizationNoRef + 75);
        if ( *(_BYTE *)(v21 + v18 + 204)
          && (!*((_DWORD *)RenderingRealizationNoRef + 59) || !*(_BYTE *)(v21 + v18 + 205))
          || *(_DWORD *)(v21 + v18 + 208) != v15 )
        {
          v22 = 1;
        }
        v23 = *((_BYTE *)this + 821);
        if ( v23
          || v22
          || *(_BYTE *)(v21 + v18 + 216)
          || *(_QWORD *)(v21 + v18 + 224) != *(_QWORD *)(*(_QWORD *)(v21 + v18 + 16) + 72LL)
          && !*((_DWORD *)RenderingRealizationNoRef + 59) )
        {
          v42 = 1;
          *((_BYTE *)this + 817) = 1;
        }
        if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
        {
          v24 = !v22 && !*((_DWORD *)RenderingRealizationNoRef + 64) && !v23;
          v25 = COverlayContext::EnsureIndependentFlipState(
                  this,
                  (struct COverlayContext::OverlayPlaneInfo *)(v21 + 240LL * (unsigned int)(v19 + v15)),
                  v24,
                  0);
          v4 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x995u);
            goto LABEL_8;
          }
        }
        *(_DWORD *)(*((_QWORD *)this + 25) + v18 + 172) = v44;
        *(_DWORD *)(*((_QWORD *)this + 25) + v18 + 208) = v15;
        *(_BYTE *)(*((_QWORD *)this + 25) + v18 + 204) = 0;
        *(_BYTE *)(*((_QWORD *)this + 25) + v18 + 216) = v42;
        v26 = *((_QWORD *)this + 25);
        v27 = *(COverlayContext **)(*(_QWORD *)(v26 + v18 + 16) + 72LL);
        *(_QWORD *)(v26 + v18 + 224) = v27;
        if ( v42 )
        {
          v28 = (unsigned __int64)v6 << 7;
          *(_DWORD *)&v5[v28] = v15;
          *(_DWORD *)&v5[v28 + 4] = 1;
          SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                    v27,
                                                    *(struct CCompositionSurfaceInfo **)(*((_QWORD *)this + 25)
                                                                                       + v18
                                                                                       + 16),
                                                    (struct IDXGIResource **)&v5[v28 + 8],
                                                    (unsigned int *)&v5[v28 + 16]);
          v4 = SingleDXGIResourceAndSubResourceIndex;
          if ( SingleDXGIResourceAndSubResourceIndex < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, 0x9ABu);
            goto LABEL_8;
          }
          v30 = *((_QWORD *)this + 25);
          ++v6;
          *(_OWORD *)&v5[v28 + 24] = *(_OWORD *)(v30 + v18 + 32);
          *(_OWORD *)&v5[v28 + 40] = *(_OWORD *)(v30 + v18 + 48);
          *(_OWORD *)&v5[v28 + 56] = *(_OWORD *)(v30 + v18 + 64);
          *(_OWORD *)&v5[v28 + 72] = *(_OWORD *)(v30 + v18 + 80);
          *(_OWORD *)&v5[v28 + 88] = *(_OWORD *)(v30 + v18 + 96);
          *(_OWORD *)&v5[v28 + 104] = *(_OWORD *)(v30 + v18 + 112);
          *(_QWORD *)&v5[v28 + 120] = *(_QWORD *)(v30 + v18 + 128);
          v19 = v39;
        }
        ++v15;
        v18 += 240LL;
      }
      while ( v19 + v15 < (unsigned int)v2 );
      v17 = v40;
      v31 = 0LL;
      v32 = v2;
      do
      {
        v33 = *((_QWORD *)this + 25);
        if ( *(_BYTE *)(v33 + v31 + 216) && !*((_BYTE *)this + 818) )
          *(_BYTE *)(v33 + v31 + 216) = 0;
        v31 += 240LL;
        --v32;
      }
      while ( v32 );
    }
    a2 = v43;
    for ( i = v2 + 1; i < v43; ++i )
    {
      v35 = v6++;
      v35 <<= 7;
      *(_DWORD *)&v5[v35] = i;
      *(_DWORD *)&v5[v35 + 4] = 0;
      *((_BYTE *)this + 817) = 1;
    }
    *((_BYTE *)this + 819) = v6 <= 1 && !*((_BYTE *)this + 820) && !v17;
    if ( !*((_BYTE *)this + 818) )
      *((_BYTE *)this + 820) = v17;
    *((_BYTE *)this + 821) = 0;
  }
  else
  {
    *((_BYTE *)this + 819) = 0;
  }
  if ( (_DWORD)v2 || *((_DWORD *)this + 184) || *((_BYTE *)this + 825) || *((_BYTE *)this + 826) )
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 3
      || (LOBYTE(a2) = v6 != 0,
          v36 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *))(**((_QWORD **)this + 2) + 384LL))(
                  *((_QWORD *)this + 2),
                  a2,
                  v6,
                  v5),
          v4 = v36,
          v36 >= 0) )
    {
      if ( !*((_BYTE *)this + 818) )
      {
        *((_BYTE *)this + 826) = *((_BYTE *)this + 825);
        *((_DWORD *)this + 184) = v2;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x9FBu);
    }
  }
LABEL_8:
  if ( v5 )
  {
    if ( v43 )
    {
      v37 = v5 + 8;
      v38 = v43;
      do
      {
        if ( *v37 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v37 + 16LL))(*v37);
        v37 += 16;
        --v38;
      }
      while ( v38 );
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, char *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  }
  return v4;
}
