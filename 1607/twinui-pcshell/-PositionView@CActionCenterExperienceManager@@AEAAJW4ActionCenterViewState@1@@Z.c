/*
 * XREFs of ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18001331C
 * Callers:
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800114B0 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800123F0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012AD0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002E14 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRectLeftRight@CActionCenterExperienceManager@@AEAAXPEAUtagRECT@@H@Z @ 0x180013280 (-SetRectLeftRight@CActionCenterExperienceManager@@AEAAXPEAUtagRECT@@H@Z.c)
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18001B0B8 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     memset @ 0x18002F32C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::PositionView(__int64 a1, int a2)
{
  int v2; // eax
  HMONITOR v5; // rdi
  const char *v6; // r9
  __int64 v7; // rdx
  bool v9; // zf
  HWND WindowW; // rax
  int v11; // eax
  int v12; // edi
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  HMONITOR v15; // rax
  int v16; // r14d
  int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  BOOL v20; // eax
  LONG bottom; // ecx
  float v22; // xmm0_4
  float v23; // xmm0_4
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // ebx
  POINT pt; // [rsp+28h] [rbp-79h] BYREF
  _BYTE v28[40]; // [rsp+30h] [rbp-71h] BYREF
  struct tagRECT rcMonitor; // [rsp+58h] [rbp-49h] BYREF
  RECT rc; // [rsp+68h] [rbp-39h] BYREF
  tagMONITORINFO mi; // [rsp+78h] [rbp-29h] BYREF
  int nNumerator[4]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v33; // [rsp+B0h] [rbp+Fh]
  __int64 v34; // [rsp+C0h] [rbp+1Fh]
  HMONITOR v35; // [rsp+C8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = *(_DWORD *)(a1 + 344);
  if ( v2 == a2 && v2 != 1 )
    return 0LL;
  pt = 0LL;
  v5 = MonitorFromPoint(0LL, 1u);
  if ( v5 == (HMONITOR)-1LL )
  {
    v7 = 1363LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
             v6);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v5, &mi) )
  {
    v7 = 1366LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
             v6);
  }
  v9 = *(_BYTE *)(a1 + 448) == 0;
  rcMonitor = mi.rcMonitor;
  if ( !v9 )
  {
    rcMonitor = mi.rcWork;
    if ( a2 == 1 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW )
      {
        if ( GetPropW(WindowW, L"IsAutoHideEnabled") )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(a1 + 488) + 152LL))(
                  *(_QWORD *)(a1 + 488),
                  &rcMonitor);
          v12 = v11;
          if ( v11 < 0 )
          {
            v13 = (unsigned int)v11;
            v14 = 1382LL;
LABEL_14:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v14,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)v13);
            return (unsigned int)v12;
          }
        }
      }
    }
  }
  memset(v28, 0, sizeof(v28));
  *(_DWORD *)&v28[16] = 96;
  *(_DWORD *)v28 = 100;
  *(_QWORD *)&v28[8] = 0x6400000064LL;
  v33 = *(_OWORD *)&v28[16];
  *(_OWORD *)nNumerator = *(_OWORD *)v28;
  v34 = *(_QWORD *)&v28[32];
  v15 = MonitorFromPoint(0LL, 1u);
  v35 = v15;
  if ( v15 )
    v12 = CImmersiveOrPrimaryMonitor::_initimpl(v15, (struct SCALINGINFO *const)nNumerator);
  else
    v12 = -2147024809;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 1389LL;
    goto LABEL_14;
  }
  v16 = MulDiv((int)*(float *)(a1 + 164), nNumerator[0], 100);
  v17 = MulDiv((int)*(float *)(a1 + 168), nNumerator[0], 100);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v18 = *(_QWORD *)(a1 + 480);
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, RECT *, POINT *))(*(_QWORD *)v18 + 40LL))(v18, &rc, &pt);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x58A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      v20 = IsRectEmpty(&rc);
      bottom = rcMonitor.bottom;
      if ( !v20 && rcMonitor.bottom > rc.top )
      {
        if ( ((pt.x - 1) & 0xFFFFFFFD) == 0 )
          bottom = rc.top;
        rcMonitor.bottom = bottom;
      }
      v22 = *(float *)(a1 + 456);
      if ( v22 > 0.0 )
      {
        bottom -= (int)v22;
        rcMonitor.bottom = bottom;
      }
      rcMonitor.top = bottom - v17;
      CActionCenterExperienceManager::SetRectLeftRight((CActionCenterExperienceManager *)a1, &rcMonitor, v16);
    }
    else if ( a2 == 2 )
    {
      return 0LL;
    }
  }
  else
  {
    CActionCenterExperienceManager::SetRectLeftRight((CActionCenterExperienceManager *)a1, &rcMonitor, v16);
    v23 = *(float *)(a1 + 456);
    v24 = rcMonitor.bottom;
    if ( v23 > 0.0 )
    {
      v24 = rcMonitor.bottom - (int)v23;
      rcMonitor.bottom = v24;
    }
    if ( *(_BYTE *)(a1 + 449) )
      rcMonitor.top = v24 - v17;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(a1 + 136) + 32LL))(
          *(_QWORD *)(a1 + 136),
          &rcMonitor);
  v26 = v25;
  if ( v25 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v25);
  return v26;
}
