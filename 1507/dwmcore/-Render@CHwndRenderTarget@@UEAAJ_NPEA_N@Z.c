/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x1800FA710 (-Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?NeedsPresent@CDirectFlipInfo@@QEAA_NXZ @ 0x180006994 (-NeedsPresent@CDirectFlipInfo@@QEAA_NXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180012D20 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?Push@?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderParameter@@@Z @ 0x18005FD10 (-Push@-$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderPara.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z @ 0x180067ED4 (-PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x18008DD30 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800E9CF8 (-Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA5C8 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EA920 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1800F4424 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180124BF0 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(CHwndRenderTarget *this, char a2, bool *a3)
{
  int v3; // r12d
  __int64 v4; // rax
  CHwndRenderTarget *v5; // r14
  CDrawingContext *v7; // r13
  __int64 (__fastcall *v8)(char *); // rbx
  bool *v9; // r15
  int v11; // eax
  CDirectFlipInfo *v12; // rcx
  int v13; // esi
  int v14; // eax
  __int64 v15; // rdx
  struct CComposeTop *v16; // r12
  _QWORD *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  char v20; // r15
  unsigned __int8 v21; // si
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rax
  char v25; // bl
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r15
  char v31; // r13
  char v32; // r12
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  CDrawingContext *v37; // r15
  __int64 v38; // rdi
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v41; // al
  COverlayContext *v42; // rcx
  unsigned int v44; // [rsp+20h] [rbp-A8h]
  bool v45; // [rsp+40h] [rbp-88h] BYREF
  char v46; // [rsp+41h] [rbp-87h]
  int v47; // [rsp+44h] [rbp-84h]
  bool *v48; // [rsp+48h] [rbp-80h]
  CDrawingContext *v49; // [rsp+50h] [rbp-78h]
  __int128 v50; // [rsp+58h] [rbp-70h] BYREF
  _DWORD v51[6]; // [rsp+68h] [rbp-60h] BYREF

  v4 = *((_QWORD *)this - 5);
  v5 = (CHwndRenderTarget *)((char *)this - 40);
  v48 = a3;
  v7 = 0LL;
  v45 = 0;
  LOBYTE(v3) = 0;
  v49 = 0LL;
  v8 = *(__int64 (__fastcall **)(char *))(v4 + 232);
  v9 = a3;
  v47 = v3;
  v46 = 0;
  v11 = v8((char *)this - 40);
  v13 = v11;
  if ( v11 < 0 )
  {
    v44 = 176;
LABEL_109:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v44);
    goto LABEL_110;
  }
  v13 = 0;
  if ( *((_QWORD *)v5 + 9)
    || (v14 = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v5 + 40LL))(v5), v13 = v14, v14 >= 0) )
  {
    v7 = (CDrawingContext *)*((_QWORD *)v5 + 9);
    v49 = v7;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x60u);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB2u);
LABEL_110:
    v25 = 0;
    goto LABEL_89;
  }
  v15 = 1LL;
  if ( !*((_QWORD *)this + 6) || *((_BYTE *)this + 525) || *((_BYTE *)this + 523) || *((_BYTE *)this + 526) && !a2 )
    goto LABEL_75;
  if ( !*((_QWORD *)this + 2) )
  {
    if ( *((_BYTE *)this + 521) )
    {
      v11 = CHwndRenderTarget::Clear(v5, v7);
      v13 = v11;
      if ( v11 < 0 )
      {
        v44 = 337;
        goto LABEL_109;
      }
      LOBYTE(v15) = 1;
    }
    goto LABEL_75;
  }
  v16 = 0LL;
  if ( !*((_QWORD *)v5 + 13) )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v5 + 11) + 64LL))(*((_QWORD *)v5 + 11), &v50);
    CVisualTree::PreCompute(*((struct CVisualTree **)v5 + 7), &v50);
  }
  v17 = (_QWORD *)*((_QWORD *)v5 + 14);
  if ( v17 )
  {
    v15 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 352LL);
    if ( v17[2] != v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*v17 + 8LL))(*((_QWORD *)v5 + 14));
      *((_QWORD *)v5 + 14) = 0LL;
    }
  }
  v18 = *((_QWORD *)this + 8);
  if ( v18 )
    v16 = (struct CComposeTop *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v18 + 216LL))(
                                  *((_QWORD *)this + 8),
                                  v15);
  v19 = *((_QWORD *)this + 7);
  if ( v19 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 56LL))(
      *((_QWORD *)this + 7),
      *((unsigned __int8 *)this + 527));
  if ( !*((_QWORD *)this + 9) && (!v16 || !*((_QWORD *)v16 + 2)) )
  {
    LOBYTE(v3) = v47;
    LOBYTE(v15) = 1;
    goto LABEL_58;
  }
  v20 = *((_BYTE *)this + 521);
  v21 = CComposition::s_cHwProtectedEntities && !CComposition::s_bHwProtectionTempDisabled;
  if ( v21 != (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 160LL))(
                *((_QWORD *)this + 6),
                v15) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 152LL))(*((_QWORD *)this + 6), v21);
    v20 = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v5 + 128LL))(v5) )
  {
    v22 = *((_QWORD *)this - 3) + 864LL;
    v51[0] = 0;
    v51[1] = 1;
    *(_QWORD *)&v50 = v51;
    v11 = CWatermarkStack<MilVisualRenderParameter *,8,2,4>::Push(v22, &v50);
    v13 = v11;
    if ( v11 < 0 )
    {
      v44 = 247;
      goto LABEL_109;
    }
    v45 = 1;
  }
  v23 = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v5 + 216LL))(v5);
  v11 = CDrawingContext::BeginFrame(
          v7,
          *((struct IRenderTarget **)this + 6),
          (CHwndRenderTarget *)((char *)this + 184),
          *((_BYTE *)this + 520),
          (CHwndRenderTarget *)((char *)this + 92),
          0LL,
          v23,
          (__int64)v5);
  v13 = v11;
  if ( v11 < 0 )
  {
    v44 = 257;
    goto LABEL_109;
  }
  v24 = *((_QWORD *)this + 9);
  v25 = 1;
  v46 = 1;
  if ( v24 )
  {
    if ( *(_BYTE *)(v24 + 1012) )
      v20 = 1;
    v26 = CHwndRenderTarget::RenderDirtyRegion(v5, (struct CComposition **)v7, v16, v20);
    v13 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x118u);
      goto LABEL_89;
    }
  }
  if ( v16 )
  {
    v27 = CHwndRenderTarget::RenderComposeTop(v5, v7, v16, v20);
    v13 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x123u);
      goto LABEL_89;
    }
  }
  v12 = *(CDirectFlipInfo **)(*((_QWORD *)this - 3) + 488LL);
  if ( !v12
    || !*((_BYTE *)v12 + 24)
    || !CDisplay::IsPrimary(*((CDisplay **)this + 5))
    || (v28 = CHwndRenderTarget::RenderDebugFrameCounter(v5, v7), v13 = v28, v28 >= 0) )
  {
    v29 = *((_QWORD *)this + 5);
    LOBYTE(v15) = 1;
    LOBYTE(v3) = v47;
    if ( *(_BYTE *)(v29 + 144) )
    {
      v3 = (unsigned __int8)v47;
      if ( *(_BYTE *)(v29 + 145) )
        v3 = 1;
      v47 = v3;
    }
LABEL_58:
    v30 = *((_QWORD *)this + 64);
    if ( v30 )
    {
      v31 = 0;
      v32 = 0;
      v33 = COverlayContext::SetMultiplaneOverlayPresentInfo(*((COverlayContext **)this + 64), 1LL);
      v13 = v33;
      if ( v33 >= 0 )
      {
        v12 = *(CDirectFlipInfo **)(v30 + 624);
        v13 = 0;
        if ( v12 )
        {
          if ( CDirectFlipInfo::NeedsPresent(v12) )
            *(_BYTE *)(v30 + 817) = 1;
          v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v30 + 624) + 24LL))(*(_QWORD *)(v30 + 624));
          v13 = v34;
          if ( v34 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xCAFu);
        }
        if ( v13 >= 0 )
        {
          v31 = *(_BYTE *)(v30 + 817);
          v32 = *(_BYTE *)(v30 + 818);
          *(_WORD *)(v30 + 817) = 0;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x5CFu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x5CEu);
      }
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x141u);
LABEL_88:
        v25 = v46;
        goto LABEL_89;
      }
      if ( !v32 )
      {
        LOBYTE(v3) = v47;
        LOBYTE(v15) = 1;
        v9 = v48;
        if ( v31 )
          *((_BYTE *)this + 524) = 1;
        goto LABEL_75;
      }
      v35 = *((_QWORD *)v5 + 2);
      *((_BYTE *)v5 + 574) = 1;
      *((_BYTE *)v5 + 564) = 1;
      SetEvent(*(HANDLE *)(*(_QWORD *)(v35 + 504) + 88LL));
      LOBYTE(v3) = v47;
      LOBYTE(v15) = 1;
    }
    v9 = v48;
LABEL_75:
    if ( !*((_BYTE *)this + 524) && !(_BYTE)v3 && !*((_BYTE *)this + 522) && !*((_BYTE *)this + 528)
      || *((_BYTE *)v5 + 574)
      || (v36 = *((_QWORD *)v5 + 69)) != 0
      && (*(_DWORD *)(v36 + 224) && *(_BYTE *)(v36 + 819)
       || (v12 = *(CDirectFlipInfo **)(v36 + 624)) != 0LL && *((_BYTE *)v12 + 89) && !*((_BYTE *)v12 + 72)) )
    {
      LOBYTE(v15) = 0;
    }
    *v9 = v15;
    goto LABEL_88;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x12Au);
LABEL_89:
  v37 = v49;
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(v49);
  if ( v25 )
    CDrawingContext::EndFrame(v49);
  v38 = *((_QWORD *)this + 9);
  if ( v38 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 8LL))(*((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( v45 )
  {
    CComposition::PopRenderParameter(*((_QWORD *)this - 3), 0LL);
    *((_BYTE *)this + 530) = *((_BYTE *)v37 + 5939);
  }
  if ( v13 < 0 )
  {
    *((_BYTE *)this + 524) = 0;
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v12);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v13);
    if ( v13 != -2003304442 )
    {
      if ( v13 == -2003304316 || v13 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResources(v5);
        v13 = 0;
        *((_BYTE *)v5 + 561) = 1;
        return (unsigned int)v13;
      }
      if ( v13 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResources(v5);
        v13 = -2003304307;
        goto LABEL_118;
      }
      if ( v13 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResources(v5);
        *((_BYTE *)v5 + 561) = 1;
        return (unsigned int)v13;
      }
      if ( byte_180196529 )
      {
        v41 = byte_180196528;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180196529 = 1;
        v41 = IsOptedIn != 0;
        byte_180196528 = v41;
      }
      if ( v41 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResources(v5);
    v13 = -2003304442;
LABEL_118:
    *((_BYTE *)v5 + 562) = 1;
    *((_BYTE *)v5 + 561) = 1;
    return (unsigned int)v13;
  }
  if ( v13 == 142213121 )
  {
    *((_BYTE *)v5 + 566) = 1;
    return (unsigned int)v13;
  }
  if ( v13 != 142213129 )
    return (unsigned int)v13;
  v42 = (COverlayContext *)*((_QWORD *)v5 + 69);
  *((_BYTE *)v5 + 566) = 0;
  *((_BYTE *)v5 + 561) = 1;
  if ( v42 )
  {
    v45 = 0;
    COverlayContext::ProcessDisplayStateChange(v42, 1, &v45);
    *(_BYTE *)(*((_QWORD *)v5 + 69) + 821LL) = 1;
  }
  return 0LL;
}
