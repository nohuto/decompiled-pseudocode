/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x18012DB70 (-Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180070E00 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x180073AC0 (-SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180073FD0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180078B34 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800BA0CC (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800BA398 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801076EC (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18011C858 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D2BC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180163A50 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(CHwndRenderTarget *this, __int64 a2, bool *a3)
{
  char *v3; // r15
  int v4; // ebx
  bool v5; // si
  char v7; // r12
  char v8; // al
  CDrawingContext *v10; // rbp
  struct CComposeTop *v11; // rsi
  char v12; // bp
  __int64 v13; // rax
  char v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  char v18; // r14
  char v19; // bp
  int v20; // eax
  bool v21; // al
  CDirtyRegion *v22; // rcx
  void (*v23)(void); // rax
  bool (__fastcall *v25)(CHwndRenderTarget *, __int64); // rax
  char v26; // al
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // r8d
  int v39; // r8d
  __int64 v40; // rax
  unsigned int v41; // r8d
  int v42; // r8d
  int v43; // eax
  int v44; // eax
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // rax
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v50; // al
  COverlayContext *v51; // rcx
  CDrawingContext *v52; // [rsp+40h] [rbp-48h]
  bool v53; // [rsp+90h] [rbp+8h] BYREF
  char v54; // [rsp+A8h] [rbp+20h]

  v3 = (char *)this - 112;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v53 = 0;
  v52 = 0LL;
  v54 = 0;
  if ( *((_QWORD *)this + 4) )
    goto LABEL_2;
  v37 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 40LL))((char *)this - 112);
  v4 = v37;
  if ( v37 >= 0 )
  {
    v8 = 0;
LABEL_2:
    v10 = (CDrawingContext *)*((_QWORD *)v3 + 18);
    v52 = v10;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x60u);
  v10 = 0LL;
  v8 = 0;
LABEL_3:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xACu);
    goto LABEL_29;
  }
  if ( *((_BYTE *)this + 633) )
  {
    v11 = 0LL;
    v12 = 0;
    v13 = *((_QWORD *)this + 8);
    v14 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 12) + 32LL) + 111LL);
    if ( v13 )
    {
      v11 = *(struct CComposeTop **)(v13 + 416);
      if ( v11 )
      {
        if ( *((_QWORD *)v11 + 2) )
        {
          v12 = 1;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 200LL))(*((_QWORD *)this + 6));
        }
      }
    }
    v15 = *((_QWORD *)this + 7);
    if ( v15 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, *((unsigned __int8 *)this + 641));
    v16 = *((_QWORD *)this + 9);
    if ( !*(_BYTE *)(v16 + 2724) )
    {
      if ( *(_BYTE *)(v16 + 2726) )
      {
        if ( !*(_DWORD *)(v16 + 576) )
        {
LABEL_12:
          if ( !v12 )
          {
            v10 = v52;
LABEL_14:
            v17 = *((_QWORD *)this + 78);
            if ( !v17 )
            {
LABEL_103:
              v8 = v54;
              v5 = v53;
              goto LABEL_23;
            }
            v18 = 0;
            v19 = 0;
            v20 = COverlayContext::SetMultiplaneOverlayPresentInfo(*((COverlayContext **)this + 78));
            v4 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x520u);
            }
            else
            {
              v4 = 0;
              if ( *(_QWORD *)(v17 + 960) )
              {
                *(_BYTE *)(v45 + 76) = CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(v17 + 960))
                                    && *(int *)(*(_QWORD *)(v45 + 32) + 76LL) <= 1;
                *(_DWORD *)(v45 + 72) = *(_DWORD *)(*(_QWORD *)(v45 + 32) + 72LL);
                if ( *(_BYTE *)(v45 + 76) )
                  *(_BYTE *)(v17 + 1081) = 1;
                v46 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 960) + 16LL))(*(_QWORD *)(v17 + 960));
                v4 = v46;
                if ( v46 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xE01u);
              }
              if ( v4 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x521u);
              }
              else
              {
                v18 = *(_BYTE *)(v17 + 1081);
                v19 = *(_BYTE *)(v17 + 1082);
                *(_WORD *)(v17 + 1081) = 0;
              }
            }
            if ( v4 >= 0 )
            {
              if ( !v19 )
              {
                v10 = v52;
                v5 = v53;
                v8 = v54;
                if ( v18 )
                  *((_BYTE *)this + 638) = 1;
                goto LABEL_23;
              }
              v47 = *((_QWORD *)v3 + 2);
              v3[760] = 1;
              v3[750] = 1;
              SetEvent(*(HANDLE *)(*(_QWORD *)(v47 + 512) + 96LL));
              v10 = v52;
              goto LABEL_103;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x122u);
            v10 = v52;
LABEL_85:
            v5 = v53;
            goto LABEL_29;
          }
        }
      }
      else
      {
        v38 = 0;
        while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(16LL * v38 + v16 + 24)) )
        {
          v38 = v39 + 1;
          if ( v38 >= 8 )
            goto LABEL_12;
        }
      }
    }
    v25 = *(bool (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v3 + 240LL);
    if ( v25 == CHwndRenderTarget::SupportsMoveOptimization )
      v26 = CHwndRenderTarget::SupportsMoveOptimization((CHwndRenderTarget *)v3, v16);
    else
      v26 = ((__int64 (__fastcall *)(char *))v25)(v3);
    v27 = v26;
    v28 = *((_QWORD *)v3 + 92);
    if ( v28 && *(_BYTE *)(v28 + 1089) )
      v29 = (__int64)(v3 + 272);
    else
      v29 = (__int64)(v3 + 204);
    v10 = v52;
    v30 = CDrawingContext::BeginFrame(
            v52,
            *((struct IRenderTarget **)this + 6),
            (__int128 *)this + 16,
            *((_BYTE *)this + 634),
            v29,
            0LL,
            v27,
            (__int64)v3);
    v4 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xDEu);
      v5 = 0;
      goto LABEL_29;
    }
    v7 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 144LL))(v3) )
    {
      v40 = *((_QWORD *)this - 12);
      v53 = 1;
      *(_BYTE *)(v40 + 1240) = 1;
    }
    v31 = *((_QWORD *)this + 9);
    if ( !*(_BYTE *)(v31 + 2724) )
    {
      if ( *(_BYTE *)(v31 + 2726) )
      {
        if ( !*(_DWORD *)(v31 + 576) )
        {
LABEL_56:
          if ( v11 )
          {
            if ( !v14 )
            {
              v43 = CHwndRenderTarget::RenderComposeTop(
                      (CHwndRenderTarget *)v3,
                      v52,
                      v11,
                      *(_BYTE *)(*((_QWORD *)this + 9) + 2724LL));
              v4 = v43;
              if ( v43 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x104u);
                goto LABEL_85;
              }
            }
          }
          v33 = *(_QWORD *)(*((_QWORD *)this - 12) + 488LL);
          if ( v33 )
          {
            if ( *(_BYTE *)(v33 + 24) )
            {
              if ( CDisplay::IsPrimary(*((CDisplay **)this + 5)) )
              {
                v44 = CHwndRenderTarget::RenderDebugFrameCounter((CHwndRenderTarget *)v3, v52);
                v4 = v44;
                if ( v44 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x10Bu);
                  goto LABEL_85;
                }
              }
            }
          }
          v34 = *((_QWORD *)this + 5);
          if ( *(_BYTE *)(v34 + 299) && *(_BYTE *)(v34 + 300) )
            v54 = 1;
          goto LABEL_14;
        }
      }
      else
      {
        v41 = 0;
        while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(16LL * v41 + v31 + 24)) )
        {
          v41 = v42 + 1;
          if ( v41 >= 8 )
            goto LABEL_56;
        }
      }
    }
    v32 = CHwndRenderTarget::RenderDirtyRegion((CHwndRenderTarget *)v3, v52, v11);
    v4 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xF9u);
      goto LABEL_85;
    }
    goto LABEL_56;
  }
LABEL_23:
  v21 = 0;
  if ( (*((_BYTE *)this + 638) || v8 || *((_BYTE *)this + 636) || *((_BYTE *)this + 642)) && !v3[760] )
  {
    v35 = *((_QWORD *)v3 + 92);
    if ( !v35
      || (!*(_DWORD *)(v35 + 264) || !*(_BYTE *)(v35 + 1083))
      && ((v36 = *(_QWORD *)(v35 + 960)) == 0 || !*(_BYTE *)(v36 + 78) || *(_BYTE *)(v36 + 76)) )
    {
      v21 = 1;
    }
  }
  *a3 = v21;
LABEL_29:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(v10);
  if ( v7 )
    CDrawingContext::EndFrame(v10);
  v22 = (CDirtyRegion *)*((_QWORD *)this + 9);
  if ( v22 )
  {
    v23 = *(void (**)(void))(*(_QWORD *)v22 + 8LL);
    if ( (char *)v23 == (char *)CDirtyRegion::Release )
      CDirtyRegion::Release(v22);
    else
      v23();
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_BYTE *)this + 633) = 0;
  if ( v5 )
  {
    *(_BYTE *)(*((_QWORD *)this - 12) + 1240LL) = 0;
    *((_BYTE *)this + 644) = *((_BYTE *)v10 + 6535);
  }
  if ( v4 < 0 )
  {
    *((_BYTE *)this + 638) = 0;
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v22);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v4);
    if ( v4 != -2003304442 )
    {
      if ( v4 == -2003304316 || v4 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 112));
        v4 = 0;
        goto LABEL_123;
      }
      if ( v4 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 112));
        v4 = -2003304307;
        goto LABEL_123;
      }
      if ( v4 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 112));
LABEL_123:
        v3[747] = 1;
        return (unsigned int)v4;
      }
      if ( byte_1801F055D )
      {
        v50 = byte_1801F055C;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1801F055D = 1;
        v50 = IsOptedIn != 0;
        byte_1801F055C = v50;
      }
      if ( v50 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 112));
    v4 = -2003304442;
    goto LABEL_123;
  }
  if ( v4 == 142213121 )
  {
    v3[752] = 1;
    return (unsigned int)v4;
  }
  if ( v4 != 142213129 )
    return (unsigned int)v4;
  v51 = (COverlayContext *)*((_QWORD *)v3 + 92);
  v3[752] = 0;
  v3[747] = 1;
  if ( v51 )
  {
    v53 = 0;
    COverlayContext::ProcessDisplayStateChange(v51, 1, &v53);
    *(_BYTE *)(*((_QWORD *)v3 + 92) + 1085LL) = 1;
  }
  return 0LL;
}
