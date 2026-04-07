/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180002ED8
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006604 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x18000120C (--0CFade@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x180001704 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x180001730 (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x180001BFC (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x180001DB4 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800026BC (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800027E8 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180002814 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180007588 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000761C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800076B0 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x180093108 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x180093138 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x180093164 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800931A4 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800931D0 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  CLauncherAnimationBase *v8; // rcx
  __int64 v9; // rcx
  void **v10; // rax
  int v11; // eax
  int v12; // ebx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  CSlideOut *v19; // rcx
  void **v20; // rax
  void **v21; // r10
  CStoryboard *v22; // rcx
  int v23; // ecx
  CLauncherAnimationBase *v24; // rcx
  CSlideIn *v25; // rcx
  int v26; // ecx
  int v27; // ecx
  CStoryboard *v28; // rcx
  void **v29; // rax
  void **v30; // rdx
  int v31; // ecx
  int v32; // ecx
  CFadeIn *v33; // rax
  struct CStoryboard *v34; // rax
  int v35; // ecx
  int v36; // ecx
  CAppArrangementBase *v37; // rcx
  void **v38; // rax
  void **v39; // r10
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  CFlyoutPopup *v45; // rcx
  void **v46; // r9
  CSlideOut *v47; // rcx
  CSlideOut *v48; // rax
  CSlideIn *v49; // rcx
  CSlideIn *v50; // rax
  CFadeOut *v51; // rax
  CSlide *v52; // rcx
  CFlyoutPopup *v53; // rcx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  CStoryboard *v57; // rcx
  CStoryboard *v58; // rcx
  CLaunchSwitchBase *v59; // rcx
  CLaunchSwitchBase *v60; // rcx
  CCrossFade *v61; // rax
  CFadeIn *v62; // rcx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  CCrossFade *v68; // rcx
  CLaunchSwitchBase *v69; // rcx
  CPanelAnimation *v70; // rcx
  void **v71; // r10
  CPanelAnimation *v72; // rcx
  CFade *v73; // rcx
  CStoryboard *v74; // rcx
  CAppArrangementBase *v75; // rcx
  CStoryboard *v76; // rcx
  CStoryboard *v77; // rcx
  CVirtualDesktopSwitch *v78; // rax
  CFade *v79; // rcx
  CFadeOut *v80; // rcx
  CSlideIn *v81; // rcx

  *a3 = 0LL;
  if ( a1 > 67 )
  {
    if ( a1 > 79 )
    {
      v14 = a1 - 80;
      if ( !v14 )
      {
        v81 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
        if ( !v81 )
          goto LABEL_51;
        CSlideIn::CSlideIn(v81);
        v20 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v21 = &CDialogSwitch::`vftable'{for `CBaseObject'};
        goto LABEL_25;
      }
      v15 = v14 - 4;
      if ( !v15 )
      {
        v80 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
        if ( v80 )
        {
          CFadeOut::CFadeOut(v80);
          *(_QWORD *)v9 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
          v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_9;
        }
        goto LABEL_51;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v79 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         120LL);
        if ( !v79 )
          goto LABEL_51;
        CFade::CFade(v79);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v46 = &CListFadeIn::`vftable'{for `CBaseObject'};
        goto LABEL_60;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v25 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
        if ( !v25 )
          goto LABEL_51;
        CSlideIn::CSlideIn(v25);
        v20 = &CSlide::`vftable'{for `IAnimationListener'};
        v21 = &CSlideInCharm::`vftable'{for `CBaseObject'};
        goto LABEL_25;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v19 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
        if ( !v19 )
          goto LABEL_51;
        CSlideOut::CSlideOut(v19);
        v20 = &CSlide::`vftable'{for `IAnimationListener'};
        v21 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
        goto LABEL_25;
      }
      v26 = v18 - 8;
      if ( !v26 )
      {
        v78 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         184LL);
        if ( v78 )
        {
          v34 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v78);
          goto LABEL_43;
        }
        goto LABEL_50;
      }
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 == 1 )
        {
          v77 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
          if ( v77 )
          {
            CStoryboard::CStoryboard(v77, 0);
            *(_BYTE *)(v9 + 120) = 1;
            *(_QWORD *)v9 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            goto LABEL_9;
          }
          goto LABEL_51;
        }
        return (unsigned int)-2147024809;
      }
      v28 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      if ( !v28 )
        goto LABEL_51;
      CStoryboard::CStoryboard(v28, 0);
      v29 = &CSlide::`vftable'{for `IAnimationListener'};
      v30 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
LABEL_37:
      *(_QWORD *)v9 = v30;
      *(_QWORD *)(v9 + 16) = v29;
      *(_BYTE *)(v9 + 120) = 0;
      goto LABEL_10;
    }
    if ( a1 == 79 )
    {
      v76 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      if ( v76 )
      {
        CStoryboard::CStoryboard(v76, 0);
        *(_QWORD *)v9 = &CInplaceResize::`vftable'{for `CBaseObject'};
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        goto LABEL_9;
      }
      goto LABEL_51;
    }
    v35 = a1 - 68;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v36 )
      {
        v63 = v36 - 1;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( !v64 )
          {
            v73 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
            if ( !v73 )
              goto LABEL_51;
            CFade::CFade(v73);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v46 = &CChangePanel::`vftable'{for `CBaseObject'};
            goto LABEL_60;
          }
          v65 = v64 - 1;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( v66 )
            {
              v67 = v66 - 3;
              if ( !v67 )
              {
                v69 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                             WPF::g_pProcessHeap,
                                             184LL);
                if ( v69 )
                {
                  CLaunchSwitchBase::CLaunchSwitchBase(v69);
                  *(_QWORD *)(v9 + 168) = 0LL;
                  *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  *(_QWORD *)v9 = &CAppLaunchWithTile::`vftable'{for `CBaseObject'};
                  *(_BYTE *)(v9 + 176) = 0;
                  goto LABEL_10;
                }
                goto LABEL_51;
              }
              if ( v67 != 1 )
                return (unsigned int)-2147024809;
              v68 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                    WPF::g_pProcessHeap,
                                    120LL);
              if ( !v68 )
                goto LABEL_51;
              CCrossFade::CCrossFade(v68);
              v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              v46 = &CSSCrossFade::`vftable'{for `CBaseObject'};
LABEL_60:
              *(_QWORD *)v9 = v46;
              goto LABEL_9;
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
          *(_QWORD *)v9 = v71;
          *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_BYTE *)(v9 + 128) = 0;
          *(_QWORD *)(v9 + 132) = 0LL;
          *(_QWORD *)(v9 + 140) = 0LL;
          goto LABEL_10;
        }
        v74 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
        if ( !v74 )
          goto LABEL_51;
        CStoryboard::CStoryboard(v74, 0);
        v29 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v30 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
        goto LABEL_37;
      }
      v37 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      if ( !v37 )
        goto LABEL_51;
      CAppArrangementBase::CAppArrangementBase(v37, 1);
      v38 = &CSlide::`vftable'{for `IAnimationListener'};
      v39 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    }
    else
    {
      v75 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      if ( !v75 )
        goto LABEL_51;
      CAppArrangementBase::CAppArrangementBase(v75, 0);
      v38 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v39 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
    }
    *(_QWORD *)v9 = v39;
    *(_QWORD *)(v9 + 16) = v38;
    *(_QWORD *)(v9 + 184) = 0LL;
    goto LABEL_10;
  }
  if ( a1 == 67 )
  {
    v62 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       120LL);
    if ( v62 )
    {
      CFadeIn::CFadeIn(v62);
      *(_QWORD *)v9 = &CTDBN::`vftable'{for `CBaseObject'};
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      goto LABEL_9;
    }
    goto LABEL_51;
  }
  if ( a1 > 19 )
  {
    v5 = a1 - 34;
    if ( v5 )
    {
      v6 = v5 - 16;
      if ( !v6 )
      {
        v22 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               120LL);
        if ( v22 )
        {
          CStoryboard::CStoryboard(v22, 0);
          *(_QWORD *)v9 = &CWindowClose::`vftable'{for `CBaseObject'};
          v10 = &CSlide::`vftable'{for `IAnimationListener'};
          goto LABEL_9;
        }
LABEL_51:
        v9 = 0LL;
        goto LABEL_10;
      }
      v7 = v6 - 6;
      if ( !v7 )
      {
        v8 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         136LL);
        if ( v8 )
        {
          CLauncherAnimationBase::CLauncherAnimationBase(v8);
          *(_QWORD *)v9 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
          v10 = &CSlide::`vftable'{for `IAnimationListener'};
LABEL_9:
          *(_QWORD *)(v9 + 16) = v10;
LABEL_10:
          *a3 = (struct CStoryboard *)v9;
          goto LABEL_11;
        }
        goto LABEL_51;
      }
      v23 = v7 - 1;
      if ( !v23 )
      {
        v24 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                          WPF::g_pProcessHeap,
                                          144LL);
        if ( v24 )
        {
          CLauncherAnimationBase::CLauncherAnimationBase(v24);
          *(_BYTE *)(v9 + 136) = 0;
          *(_QWORD *)(v9 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v9 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
          goto LABEL_10;
        }
        goto LABEL_51;
      }
      v54 = v23 - 1;
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( v55 )
        {
          v56 = v55 - 5;
          if ( !v56 )
          {
            v58 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   120LL);
            if ( v58 )
            {
              CStoryboard::CStoryboard(v58, 0);
              *(_QWORD *)v9 = &CResize::`vftable'{for `CBaseObject'};
              v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              goto LABEL_9;
            }
            goto LABEL_51;
          }
          if ( v56 == 1 )
          {
            v57 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   120LL);
            if ( v57 )
            {
              CStoryboard::CStoryboard(v57, 0);
              *(_QWORD *)v9 = &CNoAnimation::`vftable'{for `CBaseObject'};
              v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              goto LABEL_9;
            }
            goto LABEL_51;
          }
        }
        else if ( a2 )
        {
          v59 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          if ( v59 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v59);
            *(_BYTE *)(v9 + 168) = 1;
            *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *(_QWORD *)v9 = &CAppSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_10;
          }
          goto LABEL_51;
        }
      }
      else if ( a2 )
      {
        v60 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     176LL);
        if ( v60 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v60);
          *(_BYTE *)(v9 + 168) = 0;
          *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v9 = &CAppLaunch::`vftable'{for `CBaseObject'};
          goto LABEL_10;
        }
        goto LABEL_51;
      }
      return (unsigned int)-2147024809;
    }
    v61 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
    if ( v61 )
    {
      v34 = CCrossFade::CCrossFade(v61);
      goto LABEL_43;
    }
    goto LABEL_50;
  }
  if ( a1 == 19 )
  {
    v53 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
    if ( !v53 )
      goto LABEL_51;
    CFlyoutPopup::CFlyoutPopup(v53);
    v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v46 = &CHidePopup::`vftable'{for `CBaseObject'};
    goto LABEL_60;
  }
  v31 = a1 - 3;
  if ( !v31 )
  {
    v52 = (CSlide *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                      WPF::g_pProcessHeap,
                      128LL);
    if ( !v52 )
      goto LABEL_51;
    CSlide::CSlide(v52);
    v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v46 = &CReposition::`vftable'{for `CBaseObject'};
    goto LABEL_60;
  }
  v32 = v31 - 1;
  if ( v32 )
  {
    v40 = v32 - 1;
    if ( !v40 )
    {
      v51 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      if ( v51 )
      {
        v34 = CFadeOut::CFadeOut(v51);
        goto LABEL_43;
      }
      goto LABEL_50;
    }
    v41 = v40 - 9;
    if ( !v41 )
    {
      v50 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      if ( v50 )
      {
        v34 = CSlideIn::CSlideIn(v50);
        goto LABEL_43;
      }
      goto LABEL_50;
    }
    v42 = v41 - 1;
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( !v43 )
      {
        v48 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
        if ( v48 )
        {
          v34 = CSlideOut::CSlideOut(v48);
          goto LABEL_43;
        }
        goto LABEL_50;
      }
      v44 = v43 - 1;
      if ( v44 )
      {
        if ( v44 != 1 )
          return (unsigned int)-2147024809;
        v45 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                120LL);
        if ( !v45 )
          goto LABEL_51;
        CFlyoutPopup::CFlyoutPopup(v45);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v46 = &CShowPopup::`vftable'{for `CBaseObject'};
        goto LABEL_60;
      }
      v47 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( !v47 )
        goto LABEL_51;
      CSlideOut::CSlideOut(v47);
      v20 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v21 = &CSlideOutLong::`vftable'{for `CBaseObject'};
    }
    else
    {
      v49 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      if ( !v49 )
        goto LABEL_51;
      CSlideIn::CSlideIn(v49);
      v20 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v21 = &CSlideInLong::`vftable'{for `CBaseObject'};
    }
LABEL_25:
    *(_QWORD *)v9 = v21;
    *(_QWORD *)(v9 + 16) = v20;
    *(_BYTE *)(v9 + 68) = 1;
    goto LABEL_10;
  }
  v33 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     120LL);
  if ( !v33 )
  {
LABEL_50:
    v34 = 0LL;
    goto LABEL_43;
  }
  v34 = CFadeIn::CFadeIn(v33);
LABEL_43:
  *a3 = v34;
LABEL_11:
  if ( !*a3 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19E9u);
LABEL_129:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v12;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x19EBu);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v12 < 0 )
    goto LABEL_129;
  return (unsigned int)v12;
}
