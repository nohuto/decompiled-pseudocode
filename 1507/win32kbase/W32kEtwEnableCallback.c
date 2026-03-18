/*
 * XREFs of W32kEtwEnableCallback @ 0x1C007BF14
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C007BDA0 (McGenControlCallbackV2.c)
 * Callees:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     FastGetProfileDwordW @ 0x1C007CAF0 (FastGetProfileDwordW.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00A6A80 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall W32kEtwEnableCallback(LONGLONG a1, unsigned int a2, char a3, __int64 a4)
{
  __m128i *v6; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rdi
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rcx
  __int64 v13; // rsi
  int v14; // ecx
  LARGE_INTEGER v15; // rbx
  int v16; // r8d
  unsigned int v17; // eax
  LARGE_INTEGER *v18; // rbx
  struct tagTHREADINFO *v19; // rbx
  struct tagTHREADINFO **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID v23; // rcx
  __int64 v24; // rsi
  int v25; // ecx
  LARGE_INTEGER v26; // rdi
  int v27; // r8d
  LARGE_INTEGER *v28; // rbx
  struct tagTHREADINFO *v29; // rdi
  struct tagTHREADINFO **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PVOID v33; // rcx
  __int64 v34; // rsi
  int v35; // ecx
  LARGE_INTEGER v36; // rbx
  int v37; // r8d
  unsigned int v39; // [rsp+78h] [rbp+10h]
  unsigned int v40; // [rsp+80h] [rbp+18h]

  LOBYTE(v40) = a3;
  v6 = (__m128i *)a1;
  if ( a2 <= 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = 0LL;
    while ( 1 )
    {
      v9 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v9 )
        v8 = *v9;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v8 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v12 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v8 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v12 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v12, UserRequest, 0, 0, 0LL);
    }
    v13 = PsGetCurrentThreadWin32Thread(v11);
    if ( v13 )
    {
      v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v14) = byte_1C00FEA58 - 1;
        Template_xqx(v14, (unsigned int)&AcquiredExclusiveUserCritEvent, v16, v15.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v16,
          0,
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    FastGetProfileDwordW(0LL, 2LL, L"ThreadUnresponsiveLogTimeout");
    FastGetProfileDwordW(0LL, 2LL, L"UserCritAcquireDelayLogTimeout");
    UserSessionSwitchLeaveCrit();
    if ( v40 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v40;
      W32kEtwInputProcessDelayTimeoutMs = v40;
    }
    v17 = v39;
    if ( v39 <= 0xC8 )
      v17 = W32kEtwUserCritAcquireDelayTimeoutMs;
    else
      W32kEtwUserCritAcquireDelayTimeoutMs = v39;
    a1 = gliQpcFreq.QuadPart * v17;
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)a4;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = a1 / 1000;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
       || (qword_1C00FEA40 & 0x8000000000040000uLL) == 0
       || (qword_1C00FEA48 & 0x8000000000040000uLL) != qword_1C00FEA48)
      && W32kEtwWaitCursorActiveType )
    {
      v18 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v18 )
        v18[1] = KeQueryPerformanceCounter(0LL);
      v19 = 0LL;
      while ( 1 )
      {
        v20 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v20 )
          v19 = *v20;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess(v22, v21) == gpepCSRSS && v19 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v19 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v23 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v19 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v23 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v23, UserRequest, 0, 0, 0LL);
      }
      v24 = PsGetCurrentThreadWin32Thread(v22);
      if ( v24 )
      {
        v26 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v24 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v25) = byte_1C00FEA58 - 1;
          Template_xqx(
            v25,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v27,
            v26.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v26.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v27,
            0,
            1000 * v26.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v24 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v19;
      gbValidateHandleForIL = 1;
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit();
    }
  }
  if ( a2 == 2 )
    EtwCaptureStateCallback();
  v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( v28 )
    v28[1] = KeQueryPerformanceCounter(0LL);
  v29 = 0LL;
  while ( 1 )
  {
    v30 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v30 )
      v29 = *v30;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v32, v31) == gpepCSRSS && v29 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v29 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v33 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v29 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v33 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v33, UserRequest, 0, 0, 0LL);
  }
  v34 = PsGetCurrentThreadWin32Thread(v32);
  if ( v34 )
  {
    v36 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v34 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v35) = byte_1C00FEA58 - 1;
      Template_xqx(v35, (unsigned int)&AcquiredExclusiveUserCritEvent, v37, v36.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v36.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v37,
        0,
        1000 * v36.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v34 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v29;
  gbValidateHandleForIL = 1;
  CitEtwEnableCallback(v6, a2, a4);
  return UserSessionSwitchLeaveCrit();
}
