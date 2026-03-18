/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A5018
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C00021E8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(char a1)
{
  PVOID *p_Object; // rdi
  ULONG v3; // ebx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rcx
  __int64 v13; // rsi
  int v14; // ecx
  LARGE_INTEGER v15; // rdi
  int v16; // r8d
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-10h] BYREF

  Object = gpevtVideoportCallout;
  v18 = gpevtRitReadyForCallOut;
  while ( 1 )
  {
    p_Object = &Object;
    v3 = 2;
    if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
    {
      p_Object = (PVOID *)&v18;
      v3 = 1;
    }
    if ( !a1 || (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || grpdeskRitInput )
      --v3;
    if ( !v3 )
      break;
    UserSessionSwitchLeaveCrit();
    KeWaitForMultipleObjects(v3, p_Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    a1 = 0;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v7 )
        v6 = *v7;
      if ( IsCurrentProcessDwm(v9, v8)
        || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v6 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v12 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v6 == gptiRit )
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
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
  }
}
