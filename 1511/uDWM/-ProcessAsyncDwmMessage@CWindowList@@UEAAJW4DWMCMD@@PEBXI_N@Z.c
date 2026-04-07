/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x18000B6CC (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180013510 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180021C48 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18002D25C (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002D3AC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18002D498 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18002EE1C (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x18002F740 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x1800303DC (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18003F604 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003F790 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x180043718 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180045FCC (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004630C (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180046420 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800464F4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007B0D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18007FAC0 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18008048C (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180080C84 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180080D14 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180080D98 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800810E0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800814D8 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800861C4 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180087210 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800922F4 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(CWindowList *a1, int a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  CScreenRotation *v27; // rcx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  struct CMagnifierControl *v35; // rax
  int v36; // eax
  struct CMagnifierControl *v37; // rax
  int v38; // eax
  struct CMagnifierControl *v39; // rax
  int v40; // eax
  struct CMagnifierControl *v41; // rax
  int v42; // eax
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int v44; // eax
  struct CMagnifierControl *v45; // rax
  int v46; // eax
  int v47; // edx
  const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *v48; // rdx
  int v49; // r9d
  struct CMagnifierControl *v50; // rax
  int v51; // eax
  struct CMagnifierControl *v52; // rax
  int v53; // eax
  unsigned int v54; // [rsp+20h] [rbp-20h]
  unsigned __int64 v55[2]; // [rsp+30h] [rbp-10h] BYREF

  v6 = -2147467263;
  if ( a2 == 1073741852 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow(a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( !a5 )
  {
    v13 = a2 - 1073741860;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 9;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 19;
            if ( !v17 )
            {
              if ( a4 != 12 )
                return v6;
              CContactManager::OnShowContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
              return 0;
            }
            v18 = v17 - 1;
            if ( !v18 )
            {
              if ( a4 != 20 )
                return v6;
              CContactManager::OnTether(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
              return 0;
            }
            v19 = v18 - 5;
            if ( !v19 )
            {
              if ( a4 != 8 )
                return v6;
              CWindowList::EndTransition(
                (struct _RTL_CRITICAL_SECTION *)a1,
                (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
              return 0;
            }
            v29 = v19 - 12;
            if ( !v29 )
            {
              if ( a4 != 12 )
                return v6;
              CImmersiveIconicBitmapRegistry::SetNotifyWindow(
                *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                *(HWND *)(a3 + 4));
              return 0;
            }
            if ( v29 == 23 && a4 == 28 )
            {
              CContactManager::OnTextTether(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                (const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *)a3);
              return 0;
            }
            return v6;
          }
          if ( a4 != 8 )
            return v6;
          v20 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
          v6 = v20;
          if ( v20 >= 0 )
            return v6;
          v54 = 523;
          goto LABEL_149;
        }
        v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v6 = CDesktopManager::ModeChangeImpl(CDesktopManager::s_pDesktopManagerInstance);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(v55);
        if ( (v6 & 0x80000000) == 0 )
          return v6;
        v54 = 517;
LABEL_125:
        v49 = v6;
LABEL_150:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, v54);
        return v6;
      }
      v20 = CWindowList::StartupEnd(a1);
      v6 = v20;
      if ( v20 >= 0 )
        return v6;
      v54 = 513;
    }
    else
    {
      v20 = CWindowList::StartupBegin(a1);
      v6 = v20;
      if ( v20 >= 0 )
        return v6;
      v54 = 509;
    }
LABEL_149:
    v49 = v20;
    goto LABEL_150;
  }
  if ( a2 > 1073741887 )
  {
    if ( a2 <= 1073741922 )
    {
      if ( a2 == 1073741922 )
      {
        if ( a4 != 232 )
        {
          v6 = -2003303421;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x187u);
          return v6;
        }
        v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                       *(_QWORD *)(a3 + 224));
        if ( MagnifierControlForDesktop )
        {
          v44 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, 1073741922LL, a3);
          v6 = v44;
          if ( v44 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x190u);
        }
      }
      else
      {
        v31 = a2 - 1073741905;
        if ( !v31 )
        {
          if ( a4 == 28 )
          {
            CWindowList::RegisterSharedVirtualDesktopVisual(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
              *(HWND *)(a3 + 4),
              *(union _LARGE_INTEGER *)(a3 + 12),
              *(void **)(a3 + 20));
          }
          else
          {
            v6 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x1DAu);
          }
          return v6;
        }
        v32 = v31 - 13;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              if ( v34 != 1 )
                return v6;
              if ( a4 != 232 )
              {
                v6 = -2003303421;
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x177u);
                return v6;
              }
              v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v35 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                      *(_QWORD *)(a3 + 224));
              if ( v35 )
              {
                v36 = CMagnifierControl::OnMagnifierApiMessage(v35, 1073741921LL, a3);
                v6 = v36;
                if ( v36 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0x180u);
              }
            }
            else
            {
              if ( a4 != 120 )
              {
                v6 = -2003303421;
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x167u);
                return v6;
              }
              v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v37 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                      *(_QWORD *)(a3 + 12));
              if ( v37 )
              {
                v38 = CMagnifierControl::OnMagnifierApiMessage(v37, 1073741920LL, a3);
                v6 = v38;
                if ( v38 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v38, 0x170u);
              }
            }
          }
          else
          {
            if ( a4 != 20 )
            {
              v6 = -2003303421;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x157u);
              return v6;
            }
            v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v39 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                    *(_QWORD *)(a3 + 12));
            if ( v39 )
            {
              v40 = CMagnifierControl::OnMagnifierApiMessage(v39, 1073741919LL, a3);
              v6 = v40;
              if ( v40 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v40, 0x160u);
            }
          }
        }
        else
        {
          if ( a4 != 24 )
          {
            v6 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x147u);
            return v6;
          }
          v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v41 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                  *(_QWORD *)(a3 + 12));
          if ( v41 )
          {
            v42 = CMagnifierControl::OnMagnifierApiMessage(v41, 1073741918LL, a3);
            v6 = v42;
            if ( v42 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, 0x150u);
          }
        }
      }
      goto LABEL_107;
    }
    v23 = a2 - 1073741925;
    if ( !v23 )
    {
      if ( a4 != 112 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x197u);
        return v6;
      }
      v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v52 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
              *(_QWORD *)(a3 + 4));
      if ( v52 )
      {
        v53 = CMagnifierControl::OnMagnifierApiMessage(v52, 1073741925LL, a3);
        v6 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v53, 0x1A0u);
      }
      goto LABEL_107;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      if ( a4 != 28 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x1A7u);
        return v6;
      }
      v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v50 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
              *(_QWORD *)(a3 + 4));
      if ( v50 )
      {
        v51 = CMagnifierControl::OnMagnifierApiMessage(v50, 1073741926LL, a3);
        v6 = v51;
        if ( v51 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v51, 0x1B0u);
      }
      goto LABEL_107;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 == 2 && a4 == 4 )
        {
          v27 = (CScreenRotation *)*((_QWORD *)a1 + 63);
          if ( !v27 )
            return 0;
          return (unsigned int)CScreenRotation::SkipAnimationDelays(v27);
        }
        return v6;
      }
      if ( a4 != 44 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x1B7u);
        return v6;
      }
      v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v45 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
              *(_QWORD *)(a3 + 12));
      if ( v45 )
      {
        v46 = CMagnifierControl::OnMagnifierApiMessage(v45, 1073741928LL, a3);
        v6 = v46;
        if ( v46 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x1C0u);
      }
LABEL_107:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(v55);
      return v6;
    }
    v47 = *(_DWORD *)(a3 + 4);
    if ( v47 )
    {
      v48 = (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)(unsigned int)(v47 - 1);
      if ( (_DWORD)v48 )
      {
        if ( (_DWORD)v48 != 1 )
        {
          v6 = -2147024809;
          v54 = 468;
          goto LABEL_125;
        }
        v20 = CWindowList::OnWindowArrangementEnd(a1, v48);
        v6 = v20;
        if ( v20 >= 0 )
          return v6;
        v54 = 465;
      }
      else
      {
        v20 = CWindowList::OnWindowArrangementContinue(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
        v6 = v20;
        if ( v20 >= 0 )
          return v6;
        v54 = 462;
      }
    }
    else
    {
      v20 = CWindowList::OnWindowArrangementStart(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
      v6 = v20;
      if ( v20 >= 0 )
        return v6;
      v54 = 459;
    }
    goto LABEL_149;
  }
  if ( a2 == 1073741887 )
  {
    if ( a4 - 21 > 0x13D7 )
      return v6;
    if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
      return v6;
    if ( a4 != *(_DWORD *)(a3 + 8) + 20 )
      return v6;
    v20 = CContactManager::OnMultiContact(
            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
            (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
    v6 = v20;
    if ( v20 >= 0 )
      return v6;
    v54 = 232;
    goto LABEL_149;
  }
  if ( a2 == 1073741848 )
    return 0;
  if ( a2 <= 1073741848 )
  {
    v7 = a2 - 1073741832;
    if ( !v7 )
    {
      if ( a4 != 28 )
        return v6;
      return (unsigned int)CWindowList::IconChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v21 = v8 - 4;
      if ( !v21 )
      {
        if ( a4 != 20 )
          return v6;
        CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
        return 0;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( a4 != 12 )
          return v6;
        return (unsigned int)CWindowList::DesktopCreate(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
      }
      if ( v22 == 2 && a4 == 12 )
      {
        CWindowList::DesktopFree(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
        return 0;
      }
    }
    else if ( a4 == 12 )
    {
      return (unsigned int)CWindowList::TextChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE *)a3);
    }
    return v6;
  }
  v11 = a2 - 1073741866;
  if ( v11 )
  {
    v12 = v11 - 2;
    if ( !v12 )
    {
      if ( a4 != 16 )
        return v6;
      CWindowList::AnimationChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
      return 0;
    }
    v28 = v12 - 5;
    if ( v28 )
    {
      v30 = v28 - 6;
      if ( !v30 )
      {
        if ( a4 != 8 )
          return v6;
        return (unsigned int)CWindowList::RotationModeChange(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
      }
      if ( v30 != 7 )
        return v6;
      if ( a4 != 56 )
        return v6;
      v20 = CContactManager::OnContact(
              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
              (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
      v6 = v20;
      if ( v20 >= 0 )
        return v6;
      v54 = 209;
    }
    else
    {
      GetDesktopID(1LL, v55);
      v20 = CDesktopManager::SendSwitchModeCommand(v55[0]);
      v6 = v20;
      if ( v20 >= 0 )
        return v6;
      v54 = 494;
    }
    goto LABEL_149;
  }
  if ( a4 > 0x18 && *(_DWORD *)(a3 + 20) < 0xFFFFFFE8 && a4 >= *(_DWORD *)(a3 + 20) + 24 && !*(_DWORD *)(a3 + 4) )
    return (unsigned int)CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
  return v6;
}
