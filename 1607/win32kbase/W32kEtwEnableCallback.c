/*
 * XREFs of W32kEtwEnableCallback @ 0x1C0054708
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00532A0 (McGenControlCallbackV2.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     FastGetProfileDwordW @ 0x1C00550B0 (FastGetProfileDwordW.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00B47B0 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C00F595C (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, char a3, unsigned __int64 a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  unsigned int v14; // eax
  LONGLONG v15; // rcx
  LARGE_INTEGER *v16; // rbx
  struct tagTHREADINFO *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // ecx
  LARGE_INTEGER v21; // rbx
  int v22; // r8d
  __int64 v23; // rcx
  LARGE_INTEGER *v24; // rbx
  struct tagTHREADINFO *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // ecx
  LARGE_INTEGER v29; // rbx
  int v30; // r8d
  unsigned int v31; // [rsp+68h] [rbp+10h]
  unsigned int v32; // [rsp+70h] [rbp+18h]

  LOBYTE(v32) = a3;
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
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v11) = byte_1C0118B28 - 1;
        Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
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
    UserSessionSwitchLeaveCrit();
    if ( v32 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v32;
      W32kEtwInputProcessDelayTimeoutMs = v32;
    }
    v14 = v31;
    if ( v31 > 0xC8 )
      W32kEtwUserCritAcquireDelayTimeoutMs = v31;
    else
      v14 = W32kEtwUserCritAcquireDelayTimeoutMs;
    v15 = gliQpcFreq.QuadPart * v14;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = (PVOID)a4;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v15 / 1000;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
       || (qword_1C0118B10 & 0x8000000000040000uLL) == 0
       || (qword_1C0118B18 & 0x8000000000040000uLL) != qword_1C0118B18)
      && W32kEtwWaitCursorActiveType )
    {
      v16 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
      if ( v16 )
        v16[1] = KeQueryPerformanceCounter(0LL);
      v17 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v19 = PsGetCurrentThreadWin32Thread(v18);
      if ( v19 )
      {
        v21 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v20) = byte_1C0118B28 - 1;
          Template_xqx(
            v20,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v22,
            v21.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v21.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v22,
            0,
            1000 * v21.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      W32kEtwWaitCursorActiveType = 0;
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      UserSessionSwitchLeaveCrit();
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v24 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v23);
    if ( v24 )
      v24[1] = KeQueryPerformanceCounter(0LL);
    v25 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v27 = PsGetCurrentThreadWin32Thread(v26);
    if ( v27 )
    {
      v29 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v27 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v28) = byte_1C0118B28 - 1;
        Template_xqx(v28, (unsigned int)&AcquiredExclusiveUserCritEvent, v30, v29.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v29.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v30,
          0,
          1000 * v29.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v27 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v25;
    gbValidateHandleForIL = 1;
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit();
  }
}
