/*
 * XREFs of ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011574
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800102D4 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800114B0 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WrapWithTask@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_dc01672e06462544fa819f216f90b0f3_@@@Z @ 0x1800156B4 (--$WrapWithTask@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180018128 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnDpiOrHighContrastChanged(CActionCenterExperienceManager *this)
{
  int v2; // edi
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  int v7; // ebx
  DWORD SysColor; // eax
  BOOL v9; // eax
  LONG x; // eax
  DWORD CurrentThreadId; // eax
  __int64 v12; // rcx
  int pvParam; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+3Ch] [rbp-14h]
  int v15; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  POINT pt; // [rsp+78h] [rbp+28h] BYREF
  LONG v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+84h] [rbp+34h]
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  pt = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  pt.x = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, &pt);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    v7 = 0;
    pvParam = 16;
    v14 = 0LL;
    v15 = 0;
    if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) && (v14 & 1) != 0 )
    {
      pvParam = 16;
      v14 = 0LL;
      v15 = 0;
      v9 = 0;
      if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
      {
        if ( (v14 & 1) != 0 )
        {
          SysColor = GetSysColor(5);
          if ( BYTE2(SysColor) + 5 * BYTE1(SysColor) + 2 * (unsigned __int8)SysColor > 1024 )
            v9 = 1;
        }
      }
      v7 = v9 + 1;
    }
    x = pt.x;
    if ( *((_DWORD *)this + 138) != pt.x || *((_DWORD *)this + 139) != v7 )
    {
      *((_DWORD *)this + 138) = pt.x;
      *((_DWORD *)this + 139) = v7;
      v18 = x;
      v19 = v7;
      Windows::Internal::ComTaskPool::WrapWithTask<_lambda_dc01672e06462544fa819f216f90b0f3_>(&v20, &v18);
      CurrentThreadId = GetCurrentThreadId();
      v2 = Windows::Internal::ComTaskPool::RunTask(3LL, 0LL, CurrentThreadId);
      v12 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v2 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C8,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
    }
    return (unsigned int)v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return v5;
  }
}
