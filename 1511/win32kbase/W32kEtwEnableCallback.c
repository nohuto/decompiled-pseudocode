/*
 * XREFs of W32kEtwEnableCallback @ 0x1C0068E54
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0067CF0 (McGenControlCallbackV2.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     FastGetProfileDwordW @ 0x1C006AB50 (FastGetProfileDwordW.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00AB0A0 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall W32kEtwEnableCallback(LONGLONG a1, unsigned int a2, char a3, __int64 a4)
{
  const struct _GUID *v6; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  LARGE_INTEGER *v17; // rbx
  struct tagTHREADINFO *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v24; // r8d
  LONGLONG v25; // rbx
  LARGE_INTEGER *v26; // rbx
  struct tagTHREADINFO *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdi
  void *v30; // r9
  int v31; // ecx
  LARGE_INTEGER v32; // rbx
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v37; // [rsp+68h] [rbp+10h]
  unsigned int v38; // [rsp+70h] [rbp+18h]

  LOBYTE(v38) = a3;
  v6 = (const struct _GUID *)a1;
  if ( a2 <= 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v10 = PsGetCurrentThreadWin32Thread(v9);
    if ( v10 )
    {
      v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v11) = byte_1C01020C8 - 1;
        Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v13,
          0,
          1000 * v12.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    FastGetProfileDwordW(0LL, 2LL, L"ThreadUnresponsiveLogTimeout");
    FastGetProfileDwordW(0LL, 2LL, L"UserCritAcquireDelayLogTimeout");
    UserSessionSwitchLeaveCrit(v15, v14);
    if ( v38 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v38;
      W32kEtwInputProcessDelayTimeoutMs = v38;
    }
    v16 = v37;
    if ( v37 <= 0xC8 )
      v16 = W32kEtwUserCritAcquireDelayTimeoutMs;
    else
      W32kEtwUserCritAcquireDelayTimeoutMs = v37;
    a1 = gliQpcFreq.QuadPart * v16;
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = a4;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = (PVOID)(a1 / 1000);
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
       || (qword_1C01020B0 & 0x8000000000040000uLL) == 0
       || (qword_1C01020B8 & 0x8000000000040000uLL) != qword_1C01020B8)
      && W32kEtwWaitCursorActiveType )
    {
      v17 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v17 )
        v17[1] = KeQueryPerformanceCounter(0LL);
      v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v22 = PsGetCurrentThreadWin32Thread(v19);
      if ( v22 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v20 = 0x200000010000000LL;
        v25 = PerformanceCounter.QuadPart - *(_QWORD *)(v22 + 8);
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
        {
          LOBYTE(v21) = byte_1C01020C8 - 1;
          if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
            && (qword_1C01020B0 & 0x200000010000000LL) != 0
            && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            Template_xqx(v21, (unsigned int)&AcquiredExclusiveUserCritEvent, v24, v25, 0, gullUserCritAcquireToken);
          }
        }
        if ( v25 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v24,
            0,
            1000 * v25 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      W32kEtwWaitCursorActiveType = 0;
      gptiCurrent = v18;
      gbValidateHandleForIL = 1;
      UserSessionSwitchLeaveCrit(v21, v20);
    }
  }
  if ( a2 == 2 )
    EtwCaptureStateCallback();
  v26 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( v26 )
    v26[1] = KeQueryPerformanceCounter(0LL);
  v27 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v29 = PsGetCurrentThreadWin32Thread(v28);
  if ( v29 )
  {
    v32 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v29 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v31) = byte_1C01020C8 - 1;
      Template_xqx(v31, (unsigned int)&AcquiredExclusiveUserCritEvent, v33, v32.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v32.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v33,
        0,
        1000 * v32.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v29 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v27;
  gbValidateHandleForIL = 1;
  CitEtwEnableCallback(v6, a2, a4, v30);
  return UserSessionSwitchLeaveCrit(v35, v34);
}
