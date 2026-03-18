/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C007F6A0 (NtUserRegisterSessionPort.c)
 * Callees:
 *     IsUserEnableConsoleModeSupported_0 @ 0x1C0002C58 (IsUserEnableConsoleModeSupported_0.c)
 *     UserEnableConsoleMode_0 @ 0x1C0002C60 (UserEnableConsoleMode_0.c)
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     GreLockDwmState @ 0x1C0045760 (GreLockDwmState.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007F8C0 (CheckDwmProcessSecurityIdentifier.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C0080038 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C00802A0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0080304 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0080334 (GreSfmCleanupPresentHistory.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C00813BC (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00C04F0 (DwmSetProcessBreakOnTerminate.c)
 */

__int64 __fastcall xxxDwmProcessStartup(void *a1, LONGLONG a2, int a3)
{
  int v3; // esi
  bool v4; // r15
  PVOID v5; // r12
  PVOID v6; // r13
  CTokenManager *v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  struct tagTHREADINFO *v10; // r14
  int v11; // r15d
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rcx
  __int64 v16; // r13
  int v17; // ecx
  LARGE_INTEGER v18; // r15
  bool v19; // al
  void *CurrentProcess; // rax
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r8
  PVOID v26; // rcx
  __int64 i; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  LARGE_INTEGER *v33; // r14
  struct tagTHREADINFO *v34; // r14
  int v35; // r15d
  struct tagTHREADINFO **v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  PVOID v39; // rcx
  __int64 v40; // r13
  int v41; // ecx
  int v42; // r8d
  LARGE_INTEGER v43; // r15
  bool v44; // al
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+8h]
  bool v48; // [rsp+D0h] [rbp+18h]

  Handle = a1;
  v3 = 0;
  v4 = 0;
  v48 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( g_pepDwm )
  {
    v3 = -1073741768;
    goto LABEL_42;
  }
  if ( !IsMobileCore() )
    v3 = CheckDwmProcessSecurityIdentifier();
  if ( v3 < 0 )
  {
    a1 = Handle;
    goto LABEL_42;
  }
  if ( g_pTokenManager )
    CTokenManager::DeleteAllTokensInternal(v7);
  UserSessionSwitchLeaveCrit();
  if ( (int)IsUserEnableConsoleModeSupported_0() >= 0 )
  {
    v3 = UserEnableConsoleMode_0();
    v48 = v3 >= 0;
  }
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = 0LL;
  do
  {
    v11 = 0;
    v12 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v10 = *v12;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v10 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v15 = gpsemDITHitTestWaiters;
      goto LABEL_24;
    }
    if ( v10 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v15 = gpsemRITBlockedOnDITWaiters;
LABEL_24:
      KeWaitForSingleObject(v15, UserRequest, 0, 0, 0LL);
      v11 = 1;
    }
  }
  while ( v11 == 1 );
  v16 = PsGetCurrentThreadWin32Thread(v14);
  if ( v16 )
  {
    v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    a2 = 0x200000010000000LL;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v19 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v19 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v17) = byte_1C00FEA58 - 1;
        Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, a3, v18.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      a2 = 1000 * v18.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          a3,
          0,
          1000 * v18.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v5 = 0LL;
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  v4 = v48;
  v6 = 0LL;
  a1 = Handle;
LABEL_42:
  if ( g_pepDwm )
    v3 = -1073741768;
  if ( v3 >= 0 )
  {
    if ( a1 )
    {
      v3 = ObReferenceObjectByHandle(a1, 1u, LpcPortObjectType, 1, &Object, 0LL);
      v5 = Object;
    }
    if ( v3 >= 0 )
    {
      CurrentProcess = (void *)PsGetCurrentProcess(a1, a2);
      v3 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
      if ( v3 >= 0 )
      {
        v6 = (PVOID)PsGetCurrentProcess(a1, a2);
        GreLockDwmState(v22, v21, v23);
        v26 = g_pepDwm;
        if ( g_pepDwm )
        {
          v3 = -1073741768;
        }
        else
        {
          g_pepDwm = v6;
          SetDwmApiPort(v5);
        }
        GreUnlockDwmState((__int64)v26, v24, v25);
        if ( v3 >= 0 )
        {
          v3 = _guard_dispatch_icall_fptr();
          if ( v3 >= 0 )
          {
            if ( IsMobileCore() )
              DwmSetProcessBreakOnTerminate(1LL);
            for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 296); i; i = *(_QWORD *)(i + 592) )
            {
              *(_DWORD *)(i + 1080) |= 4u;
              v28 = *(_QWORD *)(i + 440);
              if ( v28 )
                *(_QWORD *)(v28 + 224) |= 1uLL;
            }
            xxxDwmControl(2LL, 0LL);
            return (unsigned int)v3;
          }
        }
      }
    }
  }
  GreLockDwmState((__int64)a1, a2, a3);
  if ( g_pepDwm == v6 )
  {
    SetDwmApiPort(0LL);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState(v30, v29, v31);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( !g_pepDwm && v4 )
  {
    UserSessionSwitchLeaveCrit();
    UserEnableConsoleMode_0();
    v33 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v32);
    if ( v33 )
      v33[1] = KeQueryPerformanceCounter(0LL);
    v34 = 0LL;
    while ( 1 )
    {
      v35 = 0;
      v36 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v36 )
        v34 = *v36;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v38, v37) == gpepCSRSS && v34 != (struct tagTHREADINFO *)gptiTSRequest )
      {
LABEL_86:
        v40 = PsGetCurrentThreadWin32Thread(v38);
        if ( v40 )
        {
          v43 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v40 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
          {
            v44 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
               && (qword_1C00FEA40 & 0x200000010000000LL) != 0
               && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
            if ( v44 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              LOBYTE(v41) = byte_1C00FEA58 - 1;
              Template_xqx(
                v41,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v42,
                v43.LowPart,
                0,
                gullUserCritAcquireToken);
            }
          }
          if ( v43.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v42,
              0,
              1000 * v43.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v40 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v34;
        gbValidateHandleForIL = 1;
        return (unsigned int)v3;
      }
      if ( !gbRITBlockedOnDIT )
        break;
      if ( v34 != gptiRit )
      {
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v39 = gpsemRITBlockedOnDITWaiters;
LABEL_84:
        KeWaitForSingleObject(v39, UserRequest, 0, 0, 0LL);
        v35 = 1;
      }
LABEL_85:
      if ( v35 != 1 )
        goto LABEL_86;
    }
    if ( gbDITInHitTest != 1 || v34 == gptiRit )
      goto LABEL_85;
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
    v39 = gpsemDITHitTestWaiters;
    goto LABEL_84;
  }
  return (unsigned int)v3;
}
