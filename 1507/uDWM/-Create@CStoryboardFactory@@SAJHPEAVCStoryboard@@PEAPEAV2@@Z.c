/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180010EA4
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000C1BC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CFadeIn@@QEAA@XZ @ 0x180001278 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x1800012A4 (--0CFade@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x180004844 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180004880 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18000FB48 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000FBDC (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000FC70 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CSlide@@IEAA@XZ @ 0x18003C080 (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x18003C55C (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x18003C80C (--0CSlideIn@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x180090108 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x180090154 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x180090184 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800901F8 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x180090238 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x180090264 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  CSlideOut *v11; // rcx
  __int64 v12; // rcx
  void **v13; // rax
  void **v14; // r10
  int v15; // eax
  int v16; // ebx
  int v18; // ecx
  int v19; // ecx
  CLauncherAnimationBase *v20; // rcx
  void **v21; // rax
  CSlideIn *v22; // rcx
  int v23; // ecx
  int v24; // ecx
  CFadeIn *v25; // rax
  struct CStoryboard *v26; // rax
  int v27; // ecx
  CLauncherAnimationBase *v28; // rcx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  CFlyoutPopup *v34; // rcx
  CSlideOut *v35; // rcx
  CSlideOut *v36; // rax
  CSlideIn *v37; // rcx
  CSlideIn *v38; // rax
  CFadeOut *v39; // rax
  CSlide *v40; // rcx
  CFlyoutPopup *v41; // rcx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  CStoryboard *v45; // rcx
  void **v46; // rdx
  CStoryboard *v47; // rcx
  CLaunchSwitchBase *v48; // rcx
  CLaunchSwitchBase *v49; // rcx
  CCrossFade *v50; // rax
  CFadeIn *v51; // rcx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  CLaunchSwitchBase *v58; // rcx
  CPanelAnimation *v59; // rcx
  void **v60; // r10
  CPanelAnimation *v61; // rcx
  CFade *v62; // rcx
  CStoryboard *v63; // rcx
  CAppArrangementBase *v64; // rcx
  void **v65; // r10
  CAppArrangementBase *v66; // rcx
  CCrossFade *v67; // rcx
  CVirtualDesktopSwitch *v68; // rax
  CFade *v69; // rcx
  CFadeOut *v70; // rcx
  CSlideIn *v71; // rcx
  CStoryboard *v72; // rcx

  *a3 = 0LL;
  if ( a1 > 67 )
  {
    if ( a1 <= 77 )
    {
      if ( a1 == 77 )
      {
        v67 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
        if ( !v67 )
          goto LABEL_38;
        CCrossFade::CCrossFade(v67);
        *(_QWORD *)v12 = &CSSCrossFade::`vftable'{for `CBaseObject'};
        v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        goto LABEL_25;
      }
      v52 = a1 - 68;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( !v54 )
          {
            v63 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   128LL);
            if ( v63 )
            {
              CStoryboard::CStoryboard(v63, 0);
              *(_BYTE *)(v12 + 120) = 0;
              *(_QWORD *)(v12 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
              *(_QWORD *)v12 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
              goto LABEL_12;
            }
            goto LABEL_38;
          }
          v55 = v54 - 1;
          if ( v55 )
          {
            v56 = v55 - 1;
            if ( v56 )
            {
              v57 = v56 - 1;
              if ( v57 )
              {
                if ( v57 == 3 )
                {
                  v58 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                               WPF::g_pProcessHeap,
                                               184LL);
                  if ( v58 )
                  {
                    CLaunchSwitchBase::CLaunchSwitchBase(v58);
                    *(_QWORD *)(v12 + 168) = 0LL;
                    *(_QWORD *)(v12 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
                    *(_QWORD *)v12 = &CAppLaunchWithTile::`vftable'{for `CBaseObject'};
                    *(_BYTE *)(v12 + 176) = 0;
                    goto LABEL_12;
                  }
                  goto LABEL_38;
                }
                return (unsigned int)-2147024809;
              }
              v59 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v59 )
                goto LABEL_38;
              CPanelAnimation::CPanelAnimation(v59);
              v60 = &CShrinkPanel::`vftable'{for `CBaseObject'};
            }
            else
            {
              v61 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v61 )
                goto LABEL_38;
              CPanelAnimation::CPanelAnimation(v61);
              v60 = &CGrowPanel::`vftable'{for `CBaseObject'};
            }
            *(_QWORD *)v12 = v60;
            *(_QWORD *)(v12 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *(_BYTE *)(v12 + 128) = 0;
            *(_QWORD *)(v12 + 132) = 0LL;
            *(_QWORD *)(v12 + 140) = 0LL;
            goto LABEL_12;
          }
          v62 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
          if ( !v62 )
            goto LABEL_38;
          CFade::CFade(v62);
          *(_QWORD *)v12 = &CChangePanel::`vftable'{for `CBaseObject'};
          v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_25;
        }
        v64 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       192LL);
        if ( !v64 )
          goto LABEL_38;
        CAppArrangementBase::CAppArrangementBase(v64, 1);
        v65 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
      }
      else
      {
        v66 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       192LL);
        if ( !v66 )
          goto LABEL_38;
        CAppArrangementBase::CAppArrangementBase(v66, 0);
        v65 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
      }
      *(_QWORD *)v12 = v65;
      *(_QWORD *)(v12 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
      *(_QWORD *)(v12 + 184) = 0LL;
      goto LABEL_12;
    }
    v5 = a1 - 79;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
        v71 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
        if ( v71 )
        {
          CSlideIn::CSlideIn(v71);
          v13 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          v14 = &CDialogSwitch::`vftable'{for `CBaseObject'};
          goto LABEL_11;
        }
        goto LABEL_38;
      }
      v7 = v6 - 4;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( !v9 )
          {
            v22 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                128LL);
            if ( v22 )
            {
              CSlideIn::CSlideIn(v22);
              v13 = &CSlide::`vftable'{for `IAnimationListener'};
              v14 = &CSlideInCharm::`vftable'{for `CBaseObject'};
              goto LABEL_11;
            }
LABEL_38:
            v12 = 0LL;
            goto LABEL_12;
          }
          v10 = v9 - 1;
          if ( !v10 )
          {
            v11 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 136LL);
            if ( v11 )
            {
              CSlideOut::CSlideOut(v11);
              v13 = &CSlide::`vftable'{for `IAnimationListener'};
              v14 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
LABEL_11:
              *(_QWORD *)v12 = v14;
              *(_QWORD *)(v12 + 16) = v13;
              *(_BYTE *)(v12 + 68) = 1;
LABEL_12:
              *a3 = (struct CStoryboard *)v12;
              goto LABEL_13;
            }
            goto LABEL_38;
          }
          if ( v10 == 8 )
          {
            v68 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                             WPF::g_pProcessHeap,
                                             184LL);
            if ( v68 )
            {
              v26 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v68);
              goto LABEL_33;
            }
            goto LABEL_37;
          }
          return (unsigned int)-2147024809;
        }
        v69 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         120LL);
        if ( !v69 )
          goto LABEL_38;
        CFade::CFade(v69);
        *(_QWORD *)v12 = &CListFadeIn::`vftable'{for `CBaseObject'};
        v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      }
      else
      {
        v70 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
        if ( !v70 )
          goto LABEL_38;
        CFadeOut::CFadeOut(v70);
        *(_QWORD *)v12 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
        v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      }
LABEL_25:
      *(_QWORD *)(v12 + 16) = v21;
      goto LABEL_12;
    }
    v72 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    if ( !v72 )
      goto LABEL_38;
    CStoryboard::CStoryboard(v72, 0);
    v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v46 = &CInplaceResize::`vftable'{for `CBaseObject'};
LABEL_117:
    *(_QWORD *)v12 = v46;
    goto LABEL_25;
  }
  if ( a1 == 67 )
  {
    v51 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       120LL);
    if ( !v51 )
      goto LABEL_38;
    CFadeIn::CFadeIn(v51);
    *(_QWORD *)v12 = &CTDBN::`vftable'{for `CBaseObject'};
    v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    goto LABEL_25;
  }
  if ( a1 > 19 )
  {
    v18 = a1 - 34;
    if ( !v18 )
    {
      v50 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
      if ( v50 )
      {
        v26 = CCrossFade::CCrossFade(v50);
        goto LABEL_33;
      }
      goto LABEL_37;
    }
    v19 = v18 - 22;
    if ( !v19 )
    {
      v20 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        136LL);
      if ( !v20 )
        goto LABEL_38;
      CLauncherAnimationBase::CLauncherAnimationBase(v20);
      *(_QWORD *)v12 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
      v21 = &CSlide::`vftable'{for `IAnimationListener'};
      goto LABEL_25;
    }
    v27 = v19 - 1;
    if ( !v27 )
    {
      v28 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        144LL);
      if ( v28 )
      {
        CLauncherAnimationBase::CLauncherAnimationBase(v28);
        *(_BYTE *)(v12 + 136) = 0;
        *(_QWORD *)(v12 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
        *(_QWORD *)v12 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
        goto LABEL_12;
      }
      goto LABEL_38;
    }
    v42 = v27 - 1;
    if ( !v42 )
    {
      if ( a2 )
      {
        v49 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     176LL);
        if ( v49 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v49);
          *(_BYTE *)(v12 + 168) = 0;
          *(_QWORD *)(v12 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v12 = &CAppLaunch::`vftable'{for `CBaseObject'};
          goto LABEL_12;
        }
        goto LABEL_38;
      }
      return (unsigned int)-2147024809;
    }
    v43 = v42 - 1;
    if ( !v43 )
    {
      if ( a2 )
      {
        v48 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     176LL);
        if ( v48 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v48);
          *(_BYTE *)(v12 + 168) = 1;
          *(_QWORD *)(v12 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v12 = &CAppSwitch::`vftable'{for `CBaseObject'};
          goto LABEL_12;
        }
        goto LABEL_38;
      }
      return (unsigned int)-2147024809;
    }
    v44 = v43 - 5;
    if ( v44 )
    {
      if ( v44 != 1 )
        return (unsigned int)-2147024809;
      v45 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      if ( !v45 )
        goto LABEL_38;
      CStoryboard::CStoryboard(v45, 0);
      v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v46 = &CNoAnimation::`vftable'{for `CBaseObject'};
    }
    else
    {
      v47 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      if ( !v47 )
        goto LABEL_38;
      CStoryboard::CStoryboard(v47, 0);
      v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v46 = &CResize::`vftable'{for `CBaseObject'};
    }
    goto LABEL_117;
  }
  if ( a1 == 19 )
  {
    v41 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
    if ( !v41 )
      goto LABEL_38;
    CFlyoutPopup::CFlyoutPopup(v41);
    *(_QWORD *)v12 = &CHidePopup::`vftable'{for `CBaseObject'};
    v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    goto LABEL_25;
  }
  v23 = a1 - 3;
  if ( !v23 )
  {
    v40 = (CSlide *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                      WPF::g_pProcessHeap,
                      128LL);
    if ( !v40 )
      goto LABEL_38;
    CSlide::CSlide(v40);
    *(_QWORD *)v12 = &CReposition::`vftable'{for `CBaseObject'};
    v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    goto LABEL_25;
  }
  v24 = v23 - 1;
  if ( v24 )
  {
    v29 = v24 - 1;
    if ( !v29 )
    {
      v39 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      if ( v39 )
      {
        v26 = CFadeOut::CFadeOut(v39);
        goto LABEL_33;
      }
      goto LABEL_37;
    }
    v30 = v29 - 9;
    if ( !v30 )
    {
      v38 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      if ( v38 )
      {
        v26 = CSlideIn::CSlideIn(v38);
        goto LABEL_33;
      }
      goto LABEL_37;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      v37 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      if ( v37 )
      {
        CSlideIn::CSlideIn(v37);
        v13 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v14 = &CSlideInLong::`vftable'{for `CBaseObject'};
        goto LABEL_11;
      }
      goto LABEL_38;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      v36 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( v36 )
      {
        v26 = CSlideOut::CSlideOut(v36);
        goto LABEL_33;
      }
      goto LABEL_37;
    }
    v33 = v32 - 1;
    if ( !v33 )
    {
      v35 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( v35 )
      {
        CSlideOut::CSlideOut(v35);
        v13 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v14 = &CSlideOutLong::`vftable'{for `CBaseObject'};
        goto LABEL_11;
      }
      goto LABEL_38;
    }
    if ( v33 != 1 )
      return (unsigned int)-2147024809;
    v34 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
    if ( !v34 )
      goto LABEL_38;
    CFlyoutPopup::CFlyoutPopup(v34);
    *(_QWORD *)v12 = &CShowPopup::`vftable'{for `CBaseObject'};
    v21 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    goto LABEL_25;
  }
  v25 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     120LL);
  if ( !v25 )
  {
LABEL_37:
    v26 = 0LL;
    goto LABEL_33;
  }
  v26 = CFadeIn::CFadeIn(v25);
LABEL_33:
  *a3 = v26;
LABEL_13:
  if ( !*a3 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1895u);
LABEL_119:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v16;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x1897u);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v16 < 0 )
    goto LABEL_119;
  return (unsigned int)v16;
}
