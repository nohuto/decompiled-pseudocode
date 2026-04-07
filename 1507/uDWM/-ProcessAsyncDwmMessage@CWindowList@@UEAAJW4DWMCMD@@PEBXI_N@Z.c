/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180005648 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180008C3C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18001C648 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18002A1BC (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002A30C (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18002A3F8 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18002BB34 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x18002BCB4 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x18002C3D0 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18002D370 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180046020 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180046364 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180046478 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004654C (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x180047C1C (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180072EF8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x180077CD0 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180078714 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180078E24 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180078EB4 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180078F38 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800794D0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800798C8 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18007EC00 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18007FC74 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18007FDA8 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180080170 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x18008ED84 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
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
  int v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  struct CMagnifierControl *v30; // rax
  int v31; // eax
  struct CMagnifierControl *v32; // rax
  int v33; // eax
  struct CMagnifierControl *v34; // rax
  int v35; // eax
  struct CMagnifierControl *v36; // rax
  int v37; // eax
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int v39; // eax
  int v40; // edx
  int v41; // edx
  int v42; // edx
  int v43; // edx
  CScreenRotation *v44; // rcx
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
            v20 = v17 - 1;
            if ( !v20 )
            {
              if ( a4 != 20 )
                return v6;
              CContactManager::OnTether(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
              return 0;
            }
            v21 = v20 - 5;
            if ( !v21 )
            {
              if ( a4 != 8 )
                return v6;
              CWindowList::EndTransition(
                (struct _RTL_CRITICAL_SECTION *)a1,
                (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
              return 0;
            }
            v24 = v21 - 12;
            if ( !v24 )
            {
              if ( a4 != 12 )
                return v6;
              CImmersiveIconicBitmapRegistry::SetNotifyWindow(
                *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                *(HWND *)(a3 + 4));
              return 0;
            }
            if ( v24 == 23 && a4 == 28 )
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
          v18 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
          v6 = v18;
          if ( v18 >= 0 )
            return v6;
          v54 = 529;
          goto LABEL_149;
        }
        v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v6 = CDesktopManager::ModeChangeImpl(CDesktopManager::s_pDesktopManagerInstance);
        CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v55);
        if ( (v6 & 0x80000000) == 0 )
          return v6;
        v54 = 523;
LABEL_125:
        v49 = v6;
LABEL_150:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, v54);
        return v6;
      }
      v18 = CWindowList::StartupEnd(a1);
      v6 = v18;
      if ( v18 >= 0 )
        return v6;
      v54 = 519;
    }
    else
    {
      v18 = CWindowList::StartupBegin(a1);
      v6 = v18;
      if ( v18 >= 0 )
        return v6;
      v54 = 515;
    }
LABEL_149:
    v49 = v18;
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x18Du);
          return v6;
        }
        v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                       *(_QWORD *)(a3 + 224));
        if ( MagnifierControlForDesktop )
        {
          v39 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, 1073741922LL, a3);
          v6 = v39;
          if ( v39 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v39, 0x196u);
        }
      }
      else
      {
        v26 = a2 - 1073741905;
        if ( !v26 )
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
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x1E0u);
          }
          return v6;
        }
        v27 = v26 - 13;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 != 1 )
                return v6;
              if ( a4 != 232 )
              {
                v6 = -2003303421;
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x17Du);
                return v6;
              }
              v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v30 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                      *(_QWORD *)(a3 + 224));
              if ( v30 )
              {
                v31 = CMagnifierControl::OnMagnifierApiMessage(v30, 1073741921LL, a3);
                v6 = v31;
                if ( v31 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x186u);
              }
            }
            else
            {
              if ( a4 != 120 )
              {
                v6 = -2003303421;
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x16Du);
                return v6;
              }
              v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v32 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                      *(_QWORD *)(a3 + 12));
              if ( v32 )
              {
                v33 = CMagnifierControl::OnMagnifierApiMessage(v32, 1073741920LL, a3);
                v6 = v33;
                if ( v33 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x176u);
              }
            }
          }
          else
          {
            if ( a4 != 20 )
            {
              v6 = -2003303421;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x15Du);
              return v6;
            }
            v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v34 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                    *(_QWORD *)(a3 + 12));
            if ( v34 )
            {
              v35 = CMagnifierControl::OnMagnifierApiMessage(v34, 1073741919LL, a3);
              v6 = v35;
              if ( v35 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x166u);
            }
          }
        }
        else
        {
          if ( a4 != 24 )
          {
            v6 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x14Du);
            return v6;
          }
          v55[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v36 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                  *(_QWORD *)(a3 + 12));
          if ( v36 )
          {
            v37 = CMagnifierControl::OnMagnifierApiMessage(v36, 1073741918LL, a3);
            v6 = v37;
            if ( v37 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, 0x156u);
          }
        }
      }
      goto LABEL_99;
    }
    v40 = a2 - 1073741925;
    if ( !v40 )
    {
      if ( a4 != 112 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x19Du);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v53, 0x1A6u);
      }
      goto LABEL_99;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      if ( a4 != 28 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x1ADu);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v51, 0x1B6u);
      }
      goto LABEL_99;
    }
    v42 = v41 - 1;
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        if ( v43 == 2 && a4 == 4 )
        {
          v44 = (CScreenRotation *)*((_QWORD *)a1 + 63);
          if ( !v44 )
            return 0;
          return (unsigned int)CScreenRotation::SkipAnimationDelays(v44);
        }
        return v6;
      }
      if ( a4 != 44 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003303421, 0x1BDu);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x1C6u);
      }
LABEL_99:
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v55);
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
          v54 = 474;
          goto LABEL_125;
        }
        v18 = CWindowList::OnWindowArrangementEnd(a1, v48);
        v6 = v18;
        if ( v18 >= 0 )
          return v6;
        v54 = 471;
      }
      else
      {
        v18 = CWindowList::OnWindowArrangementContinue(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
        v6 = v18;
        if ( v18 >= 0 )
          return v6;
        v54 = 468;
      }
    }
    else
    {
      v18 = CWindowList::OnWindowArrangementStart(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
      v6 = v18;
      if ( v18 >= 0 )
        return v6;
      v54 = 465;
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
    v18 = CContactManager::OnMultiContact(
            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
            (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
    v6 = v18;
    if ( v18 >= 0 )
      return v6;
    v54 = 238;
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
      v19 = v8 - 4;
      if ( !v19 )
      {
        if ( a4 != 20 )
          return v6;
        CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
        return 0;
      }
      v22 = v19 - 1;
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
    v23 = v12 - 5;
    if ( v23 )
    {
      v25 = v23 - 6;
      if ( !v25 )
      {
        if ( a4 != 8 )
          return v6;
        return (unsigned int)CWindowList::RotationModeChange(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
      }
      if ( v25 != 7 )
        return v6;
      if ( a4 != 56 )
        return v6;
      v18 = CContactManager::OnContact(
              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
              (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
      v6 = v18;
      if ( v18 >= 0 )
        return v6;
      v54 = 215;
    }
    else
    {
      GetDesktopID(1LL, v55);
      v18 = CDesktopManager::SendSwitchModeCommand(v55[0]);
      v6 = v18;
      if ( v18 >= 0 )
        return v6;
      v54 = 500;
    }
    goto LABEL_149;
  }
  if ( a4 > 0x18 && *(_DWORD *)(a3 + 20) < 0xFFFFFFE8 && a4 >= *(_DWORD *)(a3 + 20) + 24 && !*(_DWORD *)(a3 + 4) )
    return (unsigned int)CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
  return v6;
}
