/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C0071340 (NtUserRegisterSessionPort.c)
 * Callees:
 *     IsUserEnableConsoleModeSupported_0 @ 0x1C0002C88 (IsUserEnableConsoleModeSupported_0.c)
 *     UserEnableConsoleMode_0 @ 0x1C0002C90 (UserEnableConsoleMode_0.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C001A54C (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0071430 (CheckDwmProcessSecurityIdentifier.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C007187C (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C0071AE0 (xxxDwmControl.c)
 *     GreDxgkRegisterDwmProcess @ 0x1C0071C00 (GreDxgkRegisterDwmProcess.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0071C38 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0071C68 (GreSfmCleanupPresentHistory.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00CD7A0 (DwmSetProcessBreakOnTerminate.c)
 */

__int64 __fastcall xxxDwmProcessStartup(void *a1)
{
  int v1; // ebx
  bool v2; // r13
  PVOID v3; // r14
  PVOID v4; // r12
  CTokenManager *v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v8; // rcx
  __int64 v9; // r15
  int v10; // ecx
  LARGE_INTEGER v11; // rsi
  int v12; // r8d
  void *CurrentProcess; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID v18; // rcx
  __int64 i; // rcx
  __int64 v20; // rax
  bool v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  LARGE_INTEGER *v28; // rsi
  struct tagTHREADINFO *v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r14
  int v32; // ecx
  LARGE_INTEGER v33; // rsi
  int v34; // r8d
  bool v35; // al
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+8h]
  struct tagTHREADINFO *v38; // [rsp+C8h] [rbp+20h]

  Handle = a1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( g_pepDwm )
  {
    v1 = -1073741768;
  }
  else
  {
    if ( !IsMobileCore() )
      v1 = CheckDwmProcessSecurityIdentifier();
    if ( v1 < 0 )
    {
      a1 = Handle;
    }
    else
    {
      if ( g_pTokenManager )
        CTokenManager::DeleteAllTokensInternal(v5);
      UserSessionSwitchLeaveCrit();
      if ( (int)IsUserEnableConsoleModeSupported_0() >= 0 )
      {
        v1 = UserEnableConsoleMode_0();
        v2 = v1 >= 0;
      }
      GreSfmCleanupPresentHistory();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v38 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v9 = PsGetCurrentThreadWin32Thread(v8);
      if ( v9 )
      {
        v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
        {
          v22 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
             && (qword_1C0118B10 & 0x200000010000000LL) != 0
             && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
          if ( v22 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v10) = byte_1C0118B28 - 1;
            Template_xqx(
              v10,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v12,
              v11.LowPart,
              0,
              gullUserCritAcquireToken);
          }
        }
        if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v12,
            0,
            1000 * v11.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        v3 = 0LL;
      }
      gptiCurrent = v38;
      gbValidateHandleForIL = 1;
      a1 = Handle;
    }
  }
  if ( g_pepDwm )
    v1 = -1073741768;
  if ( v1 < 0 )
    goto LABEL_50;
  if ( a1 )
  {
    v1 = ObReferenceObjectByHandle(a1, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
  }
  if ( v1 < 0 )
    goto LABEL_50;
  CurrentProcess = (void *)PsGetCurrentProcess(a1);
  v1 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v1 < 0 )
    goto LABEL_50;
  v4 = (PVOID)PsGetCurrentProcess(v14);
  GreLockDwmState();
  v18 = g_pepDwm;
  if ( g_pepDwm )
  {
    v1 = -1073741768;
  }
  else
  {
    g_pepDwm = v4;
    SetDwmApiPort(v3);
  }
  GreUnlockDwmState(v18, v15, v16, v17);
  if ( v1 < 0 || (v1 = GreDxgkRegisterDwmProcess(), v1 < 0) )
  {
LABEL_50:
    GreLockDwmState();
    if ( g_pepDwm == v4 )
    {
      SetDwmApiPort(0LL);
      g_pepDwm = 0LL;
    }
    GreUnlockDwmState(v24, v23, v25, v26);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( !g_pepDwm && v2 )
    {
      UserSessionSwitchLeaveCrit();
      UserEnableConsoleMode_0();
      v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27);
      if ( v28 )
        v28[1] = KeQueryPerformanceCounter(0LL);
      v29 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v31 = PsGetCurrentThreadWin32Thread(v30);
      if ( v31 )
      {
        v33 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v31 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
        {
          v35 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
             && (qword_1C0118B10 & 0x200000010000000LL) != 0
             && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
          if ( v35 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v32) = byte_1C0118B28 - 1;
            Template_xqx(
              v32,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v34,
              v33.LowPart,
              0,
              gullUserCritAcquireToken);
          }
        }
        if ( v33.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v34,
            0,
            1000 * v33.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v31 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v29;
      gbValidateHandleForIL = 1;
    }
  }
  else
  {
    if ( IsMobileCore() )
      DwmSetProcessBreakOnTerminate(1LL);
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 288); i; i = *(_QWORD *)(i + 584) )
    {
      *(_DWORD *)(i + 1096) |= 4u;
      v20 = *(_QWORD *)(i + 432);
      if ( v20 )
        *(_QWORD *)(v20 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v1;
}
