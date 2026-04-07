/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180009838
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800107F4 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800012C8 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x1800012F4 (--0CFade@@IEAA@XZ.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800019CC (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800038B0 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180003B08 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18000F61C (--0CStoryboard@@IEAA@_N@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000F6B0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000F744 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x18004099C (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x180040C4C (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x180040C80 (--0CSlide@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x180091A18 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x180091A48 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x180091A74 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x180091AB4 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x180091AE0 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  CSlideOut *v9; // rcx
  __int64 v10; // rcx
  void **v11; // rax
  void **v12; // r10
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  CLauncherAnimationBase *v16; // rcx
  void **v17; // rax
  int v18; // eax
  int v19; // edi
  int v21; // ecx
  CLauncherAnimationBase *v22; // rcx
  CSlideIn *v23; // rax
  CSlideIn *v24; // rsi
  void **v25; // rax
  void **v26; // rcx
  int v27; // ecx
  int v28; // ecx
  CAppArrangementBase *v29; // rcx
  void **v30; // r10
  int v31; // ecx
  int v32; // ecx
  CStoryboard *v33; // rcx
  void **v34; // rax
  void **v35; // rdx
  int v36; // ecx
  int v37; // ecx
  CFadeIn *v38; // rax
  struct CStoryboard *v39; // rax
  CAppArrangementBase *v40; // rcx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  CFlyoutPopup *v46; // rcx
  void **v47; // r9
  CSlideOut *v48; // rcx
  CSlideOut *v49; // rax
  CSlideIn *v50; // rax
  CSlideIn *v51; // rax
  CSlideIn *v52; // rsi
  CFadeOut *v53; // rax
  CSlide *v54; // rcx
  CFlyoutPopup *v55; // rcx
  int v56; // ecx
  int v57; // ecx
  CStoryboard *v58; // rcx
  CLaunchSwitchBase *v59; // rcx
  CLaunchSwitchBase *v60; // rcx
  CStoryboard *v61; // rcx
  CCrossFade *v62; // rax
  CSlideIn *v63; // rax
  void **v64; // rcx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  CSlideIn *v69; // rax
  CPanelAnimation *v70; // rcx
  void **v71; // r10
  CPanelAnimation *v72; // rcx
  CSlideIn *v73; // rax
  CStoryboard *v74; // rcx
  CStoryboard *v75; // rcx
  CStoryboard *v76; // rcx
  CVirtualDesktopSwitch *v77; // rax
  CSlideIn *v78; // rax
  CSlideIn *v79; // rax

  *a3 = 0LL;
  if ( a1 > 66 )
  {
    if ( a1 > 77 )
    {
      v5 = a1 - 78;
      if ( !v5 )
      {
        v79 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
        v24 = v79;
        if ( v79 )
        {
          memset_0(v79, 0, 0x80uLL);
          CSlideIn::CSlideIn(v24);
          v25 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          v26 = &CDialogSwitch::`vftable'{for `CBaseObject'};
          goto LABEL_30;
        }
        goto LABEL_120;
      }
      v6 = v5 - 3;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            v9 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                136LL);
            if ( v9 )
            {
              CSlideOut::CSlideOut(v9);
              v11 = &CSlide::`vftable'{for `IAnimationListener'};
              v12 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
LABEL_9:
              *(_QWORD *)v10 = v12;
              *(_QWORD *)(v10 + 16) = v11;
              *(_BYTE *)(v10 + 68) = 1;
LABEL_18:
              *a3 = (struct CStoryboard *)v10;
              goto LABEL_19;
            }
            goto LABEL_51;
          }
          v31 = v8 - 7;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( !v32 )
            {
              v33 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     128LL);
              if ( !v33 )
                goto LABEL_51;
              CStoryboard::CStoryboard(v33, 0);
              v34 = &CSlide::`vftable'{for `IAnimationListener'};
              v35 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
LABEL_42:
              *(_QWORD *)v10 = v35;
              *(_QWORD *)(v10 + 16) = v34;
              *(_BYTE *)(v10 + 120) = 0;
              goto LABEL_18;
            }
            if ( v32 == 1 )
            {
              v76 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     128LL);
              if ( !v76 )
                goto LABEL_51;
              CStoryboard::CStoryboard(v76, 0);
              *(_BYTE *)(v10 + 120) = 1;
              *(_QWORD *)v10 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
              v17 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              goto LABEL_17;
            }
            return (unsigned int)-2147024809;
          }
          v77 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                           WPF::g_pProcessHeap,
                                           184LL);
          if ( v77 )
          {
            v39 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v77);
            goto LABEL_48;
          }
          goto LABEL_52;
        }
        v23 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
        v24 = v23;
        if ( v23 )
        {
          memset_0(v23, 0, 0x80uLL);
          CSlideIn::CSlideIn(v24);
          v25 = &CSlide::`vftable'{for `IAnimationListener'};
          v26 = &CSlideInCharm::`vftable'{for `CBaseObject'};
LABEL_30:
          *(_QWORD *)v24 = v26;
          *((_QWORD *)v24 + 2) = v25;
          *((_BYTE *)v24 + 68) = 1;
LABEL_31:
          *a3 = v24;
          goto LABEL_19;
        }
        goto LABEL_120;
      }
      v78 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      v24 = v78;
      if ( !v78 )
        goto LABEL_120;
      memset_0(v78, 0, 0x78uLL);
      CFadeOut::CFadeOut(v24);
      v64 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
      goto LABEL_95;
    }
    if ( a1 != 77 )
    {
      v27 = a1 - 67;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v65 = v28 - 1;
          if ( !v65 )
          {
            v74 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   128LL);
            if ( !v74 )
              goto LABEL_51;
            CStoryboard::CStoryboard(v74, 0);
            v34 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v35 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_42;
          }
          v66 = v65 - 1;
          if ( v66 )
          {
            v67 = v66 - 1;
            if ( v67 )
            {
              v68 = v67 - 1;
              if ( v68 )
              {
                if ( v68 != 3 )
                  return (unsigned int)-2147024809;
                v69 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                    WPF::g_pProcessHeap,
                                    120LL);
                v24 = v69;
                if ( !v69 )
                  goto LABEL_120;
                memset_0(v69, 0, 0x78uLL);
                CCrossFade::CCrossFade(v24);
                v64 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                goto LABEL_95;
              }
              v70 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v70 )
                goto LABEL_51;
              CPanelAnimation::CPanelAnimation(v70);
              v71 = &CShrinkPanel::`vftable'{for `CBaseObject'};
            }
            else
            {
              v72 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v72 )
                goto LABEL_51;
              CPanelAnimation::CPanelAnimation(v72);
              v71 = &CGrowPanel::`vftable'{for `CBaseObject'};
            }
            *(_QWORD *)v10 = v71;
            *(_QWORD *)(v10 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *(_BYTE *)(v10 + 128) = 0;
            *(_QWORD *)(v10 + 132) = 0LL;
            *(_QWORD *)(v10 + 140) = 0LL;
            goto LABEL_18;
          }
          v73 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
          v24 = v73;
          if ( !v73 )
            goto LABEL_120;
          memset_0(v73, 0, 0x78uLL);
          CFade::CFade(v24);
          v64 = &CChangePanel::`vftable'{for `CBaseObject'};
LABEL_95:
          *(_QWORD *)v24 = v64;
          *((_QWORD *)v24 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_31;
        }
        v29 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       192LL);
        if ( !v29 )
          goto LABEL_51;
        CAppArrangementBase::CAppArrangementBase(v29, 1);
        v30 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
      }
      else
      {
        v40 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       192LL);
        if ( !v40 )
          goto LABEL_51;
        CAppArrangementBase::CAppArrangementBase(v40, 0);
        v30 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
      }
      *(_QWORD *)v10 = v30;
      *(_QWORD *)(v10 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
      *(_QWORD *)(v10 + 184) = 0LL;
      goto LABEL_18;
    }
    v75 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    if ( !v75 )
      goto LABEL_51;
    CStoryboard::CStoryboard(v75, 0);
    *(_QWORD *)v10 = &CInplaceResize::`vftable'{for `CBaseObject'};
    v17 = &CAppLaunch::`vftable'{for `IAnimationListener'};
LABEL_17:
    *(_QWORD *)(v10 + 16) = v17;
    goto LABEL_18;
  }
  if ( a1 == 66 )
  {
    v63 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        120LL);
    v24 = v63;
    if ( !v63 )
      goto LABEL_120;
    memset_0(v63, 0, 0x78uLL);
    CFadeIn::CFadeIn(v24);
    v64 = &CTDBN::`vftable'{for `CBaseObject'};
    goto LABEL_95;
  }
  if ( a1 > 19 )
  {
    v13 = a1 - 34;
    if ( !v13 )
    {
      v62 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
      if ( v62 )
      {
        v39 = CCrossFade::CCrossFade(v62);
        goto LABEL_48;
      }
      goto LABEL_52;
    }
    v14 = v13 - 16;
    if ( v14 )
    {
      v15 = v14 - 6;
      if ( v15 )
      {
        v21 = v15 - 1;
        if ( !v21 )
        {
          v22 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                            WPF::g_pProcessHeap,
                                            144LL);
          if ( v22 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v22);
            *(_BYTE *)(v10 + 136) = 0;
            *(_QWORD *)(v10 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
            *(_QWORD *)v10 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
            goto LABEL_18;
          }
          goto LABEL_51;
        }
        v56 = v21 - 1;
        if ( !v56 )
        {
          if ( a2 )
          {
            v60 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         176LL);
            if ( v60 )
            {
              CLaunchSwitchBase::CLaunchSwitchBase(v60);
              *(_BYTE *)(v10 + 168) = 0;
              *(_QWORD *)(v10 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
              *(_QWORD *)v10 = &CAppLaunch::`vftable'{for `CBaseObject'};
              goto LABEL_18;
            }
            goto LABEL_51;
          }
          return (unsigned int)-2147024809;
        }
        v57 = v56 - 1;
        if ( !v57 )
        {
          if ( a2 )
          {
            v59 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         176LL);
            if ( v59 )
            {
              CLaunchSwitchBase::CLaunchSwitchBase(v59);
              *(_BYTE *)(v10 + 168) = 1;
              *(_QWORD *)(v10 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
              *(_QWORD *)v10 = &CAppSwitch::`vftable'{for `CBaseObject'};
              goto LABEL_18;
            }
            goto LABEL_51;
          }
          return (unsigned int)-2147024809;
        }
        if ( v57 != 5 )
          return (unsigned int)-2147024809;
        v58 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               120LL);
        if ( !v58 )
          goto LABEL_51;
        CStoryboard::CStoryboard(v58, 0);
        *(_QWORD *)v10 = &CNoAnimation::`vftable'{for `CBaseObject'};
        v17 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      }
      else
      {
        v16 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                          WPF::g_pProcessHeap,
                                          136LL);
        if ( !v16 )
          goto LABEL_51;
        CLauncherAnimationBase::CLauncherAnimationBase(v16);
        *(_QWORD *)v10 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
        v17 = &CSlide::`vftable'{for `IAnimationListener'};
      }
    }
    else
    {
      v61 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      if ( !v61 )
        goto LABEL_51;
      CStoryboard::CStoryboard(v61, 0);
      *(_QWORD *)v10 = &CWindowClose::`vftable'{for `CBaseObject'};
      v17 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    }
    goto LABEL_17;
  }
  if ( a1 == 19 )
  {
    v55 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
    if ( !v55 )
      goto LABEL_51;
    CFlyoutPopup::CFlyoutPopup(v55);
    v17 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v47 = &CHidePopup::`vftable'{for `CBaseObject'};
    goto LABEL_61;
  }
  v36 = a1 - 3;
  if ( !v36 )
  {
    v54 = (CSlide *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                      WPF::g_pProcessHeap,
                      128LL);
    if ( !v54 )
      goto LABEL_51;
    CSlide::CSlide(v54);
    v17 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v47 = &CReposition::`vftable'{for `CBaseObject'};
    goto LABEL_61;
  }
  v37 = v36 - 1;
  if ( v37 )
  {
    v41 = v37 - 1;
    if ( !v41 )
    {
      v53 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      if ( v53 )
      {
        v39 = CFadeOut::CFadeOut(v53);
        goto LABEL_48;
      }
      goto LABEL_52;
    }
    v42 = v41 - 9;
    if ( !v42 )
    {
      v51 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      v52 = v51;
      if ( v51 )
      {
        memset_0(v51, 0, 0x80uLL);
        v39 = CSlideIn::CSlideIn(v52);
        goto LABEL_48;
      }
      goto LABEL_52;
    }
    v43 = v42 - 1;
    if ( !v43 )
    {
      v50 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      v24 = v50;
      if ( v50 )
      {
        memset_0(v50, 0, 0x80uLL);
        CSlideIn::CSlideIn(v24);
        v25 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v26 = &CSlideInLong::`vftable'{for `CBaseObject'};
        goto LABEL_30;
      }
LABEL_120:
      v24 = 0LL;
      goto LABEL_31;
    }
    v44 = v43 - 1;
    if ( !v44 )
    {
      v49 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( v49 )
      {
        v39 = CSlideOut::CSlideOut(v49);
        goto LABEL_48;
      }
      goto LABEL_52;
    }
    v45 = v44 - 1;
    if ( !v45 )
    {
      v48 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( v48 )
      {
        CSlideOut::CSlideOut(v48);
        v11 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v12 = &CSlideOutLong::`vftable'{for `CBaseObject'};
        goto LABEL_9;
      }
LABEL_51:
      v10 = 0LL;
      goto LABEL_18;
    }
    if ( v45 != 1 )
      return (unsigned int)-2147024809;
    v46 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
    if ( !v46 )
      goto LABEL_51;
    CFlyoutPopup::CFlyoutPopup(v46);
    v17 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v47 = &CShowPopup::`vftable'{for `CBaseObject'};
LABEL_61:
    *(_QWORD *)v10 = v47;
    goto LABEL_17;
  }
  v38 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     120LL);
  if ( !v38 )
  {
LABEL_52:
    v39 = 0LL;
    goto LABEL_48;
  }
  v39 = CFadeIn::CFadeIn(v38);
LABEL_48:
  *a3 = v39;
LABEL_19:
  if ( !*a3 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1840u);
LABEL_124:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v19;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1842u);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v19 < 0 )
    goto LABEL_124;
  return (unsigned int)v19;
}
