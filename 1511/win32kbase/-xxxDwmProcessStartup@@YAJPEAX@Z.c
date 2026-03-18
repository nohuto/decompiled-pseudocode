/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C007FD00 (NtUserRegisterSessionPort.c)
 * Callees:
 *     IsUserEnableConsoleModeSupported_0 @ 0x1C0002C88 (IsUserEnableConsoleModeSupported_0.c)
 *     UserEnableConsoleMode_0 @ 0x1C0002C90 (UserEnableConsoleMode_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1C0037340 (GreLockDwmState.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003D340 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007FE80 (CheckDwmProcessSecurityIdentifier.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C0080598 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C0080800 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0080928 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0080958 (GreSfmCleanupPresentHistory.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00C10D0 (DwmSetProcessBreakOnTerminate.c)
 */

__int64 __fastcall xxxDwmProcessStartup(void *a1, LONGLONG a2)
{
  int v2; // ebx
  bool v3; // r13
  PVOID v4; // r14
  PVOID v5; // r12
  CTokenManager *v6; // rcx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v9; // rcx
  __int64 v10; // r15
  int v11; // ecx
  LARGE_INTEGER v12; // rsi
  int v13; // r8d
  bool v14; // al
  void *CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 i; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  LARGE_INTEGER *v23; // rsi
  struct tagTHREADINFO *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // r14
  int v27; // ecx
  LARGE_INTEGER v28; // rsi
  int v29; // r8d
  bool v30; // al
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+8h]
  struct tagTHREADINFO *v34; // [rsp+D8h] [rbp+20h]

  Handle = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  if ( g_pepDwm )
  {
    v2 = -1073741768;
  }
  else
  {
    if ( !IsMobileCore() )
      v2 = CheckDwmProcessSecurityIdentifier();
    if ( v2 < 0 )
    {
      a1 = Handle;
    }
    else
    {
      if ( g_pTokenManager )
        CTokenManager::DeleteAllTokensInternal(v6);
      UserSessionSwitchLeaveCrit((__int64)v6, a2);
      if ( (int)IsUserEnableConsoleModeSupported_0() >= 0 )
      {
        v2 = UserEnableConsoleMode_0();
        v3 = v2 >= 0;
      }
      GreSfmCleanupPresentHistory();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v34 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v10 = PsGetCurrentThreadWin32Thread(v9);
      if ( v10 )
      {
        v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
        {
          v14 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
             && (qword_1C01020B0 & 0x200000010000000LL) != 0
             && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
          if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v11) = byte_1C01020C8 - 1;
            Template_xqx(
              v11,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v13,
              v12.LowPart,
              0,
              gullUserCritAcquireToken);
          }
        }
        if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
        {
          a2 = 1000 * v12.QuadPart % gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v13,
              0,
              1000 * v12.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
        }
        *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        v4 = 0LL;
      }
      gptiCurrent = v34;
      gbValidateHandleForIL = 1;
      a1 = Handle;
    }
  }
  if ( g_pepDwm )
    v2 = -1073741768;
  if ( v2 < 0 )
    goto LABEL_48;
  if ( a1 )
  {
    v2 = ObReferenceObjectByHandle(a1, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v4 = Object;
  }
  if ( v2 < 0 )
    goto LABEL_48;
  CurrentProcess = (void *)PsGetCurrentProcess(a1, a2);
  v2 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v2 < 0 )
    goto LABEL_48;
  v5 = (PVOID)PsGetCurrentProcess(v17, v16);
  GreLockDwmState();
  if ( g_pepDwm )
  {
    v2 = -1073741768;
  }
  else
  {
    g_pepDwm = v5;
    SetDwmApiPort(v4);
  }
  GreUnlockDwmState();
  if ( v2 < 0 || (v2 = _guard_dispatch_icall_fptr(), v2 < 0) )
  {
LABEL_48:
    GreLockDwmState();
    if ( g_pepDwm == v5 )
    {
      SetDwmApiPort(0LL);
      g_pepDwm = 0LL;
    }
    GreUnlockDwmState();
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( !g_pepDwm && v3 )
    {
      UserSessionSwitchLeaveCrit(v21, v20);
      UserEnableConsoleMode_0();
      v23 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v22);
      if ( v23 )
        v23[1] = KeQueryPerformanceCounter(0LL);
      v24 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v26 = PsGetCurrentThreadWin32Thread(v25);
      if ( v26 )
      {
        v28 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v26 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
        {
          v30 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
             && (qword_1C01020B0 & 0x200000010000000LL) != 0
             && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
          if ( v30 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v27) = byte_1C01020C8 - 1;
            Template_xqx(
              v27,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v29,
              v28.LowPart,
              0,
              gullUserCritAcquireToken);
          }
        }
        if ( v28.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v29,
            0,
            1000 * v28.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v26 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v24;
      gbValidateHandleForIL = 1;
    }
  }
  else
  {
    if ( IsMobileCore() )
      DwmSetProcessBreakOnTerminate(1LL);
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 296); i; i = *(_QWORD *)(i + 584) )
    {
      *(_DWORD *)(i + 1072) |= 4u;
      v19 = *(_QWORD *)(i + 432);
      if ( v19 )
        *(_QWORD *)(v19 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v2;
}
