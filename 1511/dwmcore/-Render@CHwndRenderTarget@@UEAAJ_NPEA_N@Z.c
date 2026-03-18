/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007B250 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x180114680 (-Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180006A30 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?NeedsPresent@CDirectFlipInfo@@QEBA_NXZ @ 0x180006B20 (-NeedsPresent@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?GetComposeTopContentNoRef@CDesktopRenderTarget@@UEAAPEAVCComposeTop@@XZ @ 0x180074FC0 (-GetComposeTopContentNoRef@CDesktopRenderTarget@@UEAAPEAVCComposeTop@@XZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180079630 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x18007BA30 (-SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18007BFF0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18007C290 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18007C550 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007EB00 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18007F4F4 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801063B8 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18010E108 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x18013A12C (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(CHwndRenderTarget *this, char a2, bool *a3)
{
  char *v3; // r14
  char v5; // si
  __int64 (__fastcall *v7)(CHwndRenderTarget *); // rbx
  char v8; // r13
  bool *v9; // r15
  int v10; // eax
  CDirectFlipInfo *v11; // rcx
  int v12; // ebx
  struct CDrawingContext *v13; // r12
  struct CComposeTop *v14; // r15
  unsigned __int8 v15; // r12
  __int64 v16; // rdi
  char v17; // r13
  struct CComposeTop *(__fastcall *v18)(CDesktopRenderTarget *); // rsi
  struct CComposeTop *ComposeTopContentNoRef; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdi
  char v26; // r15
  char v27; // si
  int v28; // eax
  bool v29; // al
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(CDirtyRegion *); // rsi
  __int64 v33; // rax
  bool (__fastcall *v34)(CHwndRenderTarget *, __int64); // rbx
  char v35; // al
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  __int64 (__fastcall *v41)(CCompositionSurfaceInfo **); // r12
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // r8d
  int v48; // r8d
  unsigned int v49; // r8d
  int v50; // r8d
  int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v56; // al
  COverlayContext *v57; // rcx
  char v58; // [rsp+40h] [rbp-68h]
  bool v59; // [rsp+41h] [rbp-67h] BYREF
  char v60; // [rsp+42h] [rbp-66h]
  struct CDrawingContext *v61; // [rsp+48h] [rbp-60h]
  bool *v62; // [rsp+50h] [rbp-58h]
  __int128 v63; // [rsp+58h] [rbp-50h] BYREF

  v3 = (char *)this - 40;
  v5 = 0;
  v7 = *(__int64 (__fastcall **)(CHwndRenderTarget *))(*((_QWORD *)this - 5) + 240LL);
  v8 = 0;
  v9 = a3;
  v62 = a3;
  v58 = 0;
  v61 = 0LL;
  v59 = 0;
  v60 = 0;
  if ( v7 == CHwndRenderTarget::EnsureRenderTarget )
    v10 = CHwndRenderTarget::EnsureRenderTarget((CHwndRenderTarget *)((char *)this - 40));
  else
    v10 = v7((CHwndRenderTarget *)((char *)this - 40));
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xACu);
    v13 = v61;
    goto LABEL_47;
  }
  v12 = 0;
  if ( *((_QWORD *)v3 + 9)
    || (v43 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 40LL))(v3), v12 = v43, v43 >= 0) )
  {
    v13 = (struct CDrawingContext *)*((_QWORD *)v3 + 9);
    v61 = v13;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x60u);
    v13 = v61;
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xAEu);
    goto LABEL_47;
  }
  if ( !*((_QWORD *)this + 6) || *((_BYTE *)this + 518) || *((_BYTE *)this + 516) || *((_BYTE *)this + 519) && !a2 )
    goto LABEL_41;
  if ( !*((_QWORD *)v3 + 13) && *((_QWORD *)v3 + 7) )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v3 + 11) + 64LL))(*((_QWORD *)v3 + 11), &v63);
    CVisualTree::PreCompute(*((CVisualTree **)v3 + 7), &v63);
    v5 = 0;
  }
  if ( !*((_QWORD *)v3 + 14) )
    goto LABEL_41;
  v14 = 0LL;
  v15 = CComposition::s_cHwProtectedEntities && !CComposition::s_bHwProtectionTempDisabled;
  v16 = *((_QWORD *)this + 8);
  v17 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 3) + 32LL) + 111LL);
  if ( v16 )
  {
    v18 = *(struct CComposeTop *(__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v16 + 208LL);
    if ( v18 == CDesktopRenderTarget::GetComposeTopContentNoRef )
      ComposeTopContentNoRef = CDesktopRenderTarget::GetComposeTopContentNoRef(*((CDesktopRenderTarget **)this + 8));
    else
      ComposeTopContentNoRef = v18(*((CDesktopRenderTarget **)this + 8));
    v14 = ComposeTopContentNoRef;
  }
  v20 = *((_QWORD *)this + 7);
  if ( v20 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v20 + 56LL))(
      *((_QWORD *)this + 7),
      *((unsigned __int8 *)this + 520));
  if ( v15 != (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 160LL))(*((_QWORD *)this + 6)) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 152LL))(*((_QWORD *)this + 6), v15);
    CDirtyRegion::SetFullDirty(*((CDirtyRegion **)this + 9), v44, v45, v46);
  }
  if ( v17 )
    CDirtyRegion::SetFullDirty(*((CDirtyRegion **)this + 9), v21, v22, v23);
  v24 = *((_QWORD *)this + 9);
  if ( !*(_BYTE *)(v24 + 1012) )
  {
    if ( *(_BYTE *)(v24 + 1014) )
    {
      if ( !*(_DWORD *)(v24 + 440) )
      {
LABEL_28:
        if ( !v14 || !*((_QWORD *)v14 + 2) )
        {
          v13 = v61;
          v5 = 0;
          goto LABEL_30;
        }
      }
    }
    else
    {
      v47 = 0;
      while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(16LL * v47 + v24 + 24)) )
      {
        v47 = v48 + 1;
        if ( v47 >= 8 )
          goto LABEL_28;
      }
    }
  }
  v34 = *(bool (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v3 + 224LL);
  if ( v34 == CHwndRenderTarget::SupportsMoveOptimization )
    v35 = CHwndRenderTarget::SupportsMoveOptimization((CHwndRenderTarget *)v3, v24);
  else
    v35 = ((__int64 (__fastcall *)(char *))v34)(v3);
  v13 = v61;
  v36 = CDrawingContext::BeginFrame(
          v61,
          *((struct IRenderTarget **)this + 6),
          (CHwndRenderTarget *)((char *)this + 184),
          *((_BYTE *)this + 513),
          (CHwndRenderTarget *)((char *)this + 92),
          0LL,
          v35,
          (__int64)v3);
  v12 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xEDu);
    v5 = 0;
    v8 = 0;
    goto LABEL_47;
  }
  v37 = *(_QWORD *)v3;
  v5 = 1;
  v60 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(v37 + 136))(v3) )
  {
    v58 = 1;
    *(_BYTE *)(*((_QWORD *)this - 3) + 1136LL) = 1;
  }
  v38 = *((_QWORD *)this + 9);
  if ( *(_BYTE *)(v38 + 1012) )
    goto LABEL_75;
  if ( !*(_BYTE *)(v38 + 1014) )
  {
    v49 = 0;
    while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(16LL * v49 + v38 + 24)) )
    {
      v49 = v50 + 1;
      if ( v49 >= 8 )
        goto LABEL_76;
    }
LABEL_75:
    v39 = CHwndRenderTarget::RenderDirtyRegion((CHwndRenderTarget *)v3, v13, v14);
    v12 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x108u);
LABEL_123:
      v8 = v58;
      goto LABEL_47;
    }
    goto LABEL_76;
  }
  if ( *(_DWORD *)(v38 + 440) )
    goto LABEL_75;
LABEL_76:
  if ( v14 )
  {
    if ( !v17 )
    {
      v51 = CHwndRenderTarget::RenderComposeTop(
              (CHwndRenderTarget *)v3,
              v13,
              v14,
              *(_BYTE *)(*((_QWORD *)this + 9) + 1012LL));
      v12 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x113u);
        goto LABEL_123;
      }
    }
  }
  v11 = *(CDirectFlipInfo **)(*((_QWORD *)this - 3) + 488LL);
  if ( v11 )
  {
    if ( *((_BYTE *)v11 + 24) )
    {
      if ( CDisplay::IsPrimary(*((CDisplay **)this + 5)) )
      {
        v52 = CHwndRenderTarget::RenderDebugFrameCounter((CHwndRenderTarget *)v3, v13);
        v12 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x11Au);
          goto LABEL_123;
        }
      }
    }
  }
  v40 = *((_QWORD *)this + 5);
  if ( *(_BYTE *)(v40 + 299) && *(_BYTE *)(v40 + 300) )
    v59 = 1;
LABEL_30:
  v25 = *((_QWORD *)this + 63);
  if ( v25 )
  {
    v26 = 0;
    v27 = 0;
    v28 = COverlayContext::SetMultiplaneOverlayPresentInfo(*((COverlayContext **)this + 63));
    v12 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x587u);
      goto LABEL_35;
    }
    v11 = *(CDirectFlipInfo **)(v25 + 712);
    v12 = 0;
    if ( v11 )
    {
      if ( CDirectFlipInfo::NeedsPresent(v11) )
        *(_BYTE *)(v25 + 833) = 1;
      v41 = *(__int64 (__fastcall **)(CCompositionSurfaceInfo **))(**(_QWORD **)(v25 + 712) + 24LL);
      if ( v41 == COutOfFrameDirectFlipInfo::Activate )
        v42 = COutOfFrameDirectFlipInfo::Activate(*(CCompositionSurfaceInfo ***)(v25 + 712));
      else
        v42 = v41(*(CCompositionSurfaceInfo ***)(v25 + 712));
      v12 = v42;
      if ( v42 >= 0 )
      {
LABEL_34:
        v26 = *(_BYTE *)(v25 + 833);
        v27 = *(_BYTE *)(v25 + 834);
        *(_WORD *)(v25 + 833) = 0;
LABEL_35:
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x131u);
          v5 = v60;
          v13 = v61;
          v8 = v58;
          goto LABEL_47;
        }
        if ( v27 )
        {
          v53 = *((_QWORD *)v3 + 2);
          v3[567] = 1;
          v3[557] = 1;
          SetEvent(*(HANDLE *)(*(_QWORD *)(v53 + 504) + 96LL));
        }
        else if ( v26 )
        {
          *((_BYTE *)this + 517) = 1;
        }
        v13 = v61;
        v5 = v60;
        goto LABEL_40;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xD49u);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x588u);
      goto LABEL_35;
    }
    goto LABEL_34;
  }
LABEL_40:
  v9 = v62;
  v8 = v58;
LABEL_41:
  v29 = 0;
  if ( (*((_BYTE *)this + 517) || v59 || *((_BYTE *)this + 515) || *((_BYTE *)this + 521)) && !v3[567] )
  {
    v33 = *((_QWORD *)v3 + 68);
    if ( !v33
      || (!*(_DWORD *)(v33 + 224) || !*(_BYTE *)(v33 + 835))
      && ((v11 = *(CDirectFlipInfo **)(v33 + 712)) == 0LL || !*((_BYTE *)v11 + 78) || *((_BYTE *)v11 + 76)) )
    {
      v29 = 1;
    }
  }
  *v9 = v29;
LABEL_47:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(v13);
  if ( v5 )
    CDrawingContext::EndFrame(v13);
  v30 = *((_QWORD *)this + 9);
  if ( v30 )
  {
    v31 = *(__int64 (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v30 + 8LL);
    if ( v31 == CDirtyRegion::Release )
      CDirtyRegion::Release(*((CDirtyRegion **)this + 9));
    else
      v31(*((CDirtyRegion **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( v8 )
  {
    *(_BYTE *)(*((_QWORD *)this - 3) + 1136LL) = 0;
    *((_BYTE *)this + 523) = *((_BYTE *)v13 + 5971);
  }
  if ( v12 < 0 )
  {
    *((_BYTE *)this + 517) = 0;
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v11);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v12);
    if ( v12 != -2003304442 )
    {
      if ( v12 == -2003304316 || v12 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 40));
        v12 = 0;
        goto LABEL_144;
      }
      if ( v12 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 40));
        v12 = -2003304307;
        goto LABEL_143;
      }
      if ( v12 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 40));
LABEL_144:
        v3[554] = 1;
        return (unsigned int)v12;
      }
      if ( byte_1801A418C )
      {
        v56 = byte_1801A418D;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1801A418C = 1;
        v56 = IsOptedIn != 0;
        byte_1801A418D = v56;
      }
      if ( v56 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 40));
    v12 = -2003304442;
LABEL_143:
    v3[555] = 1;
    goto LABEL_144;
  }
  if ( v12 == 142213121 )
  {
    v3[559] = 1;
    return (unsigned int)v12;
  }
  if ( v12 != 142213129 )
    return (unsigned int)v12;
  v57 = (COverlayContext *)*((_QWORD *)v3 + 68);
  v3[559] = 0;
  v3[554] = 1;
  if ( v57 )
  {
    v59 = 0;
    COverlayContext::ProcessDisplayStateChange(v57, 1, &v59);
    *(_BYTE *)(*((_QWORD *)v3 + 68) + 837LL) = 1;
  }
  return 0LL;
}
