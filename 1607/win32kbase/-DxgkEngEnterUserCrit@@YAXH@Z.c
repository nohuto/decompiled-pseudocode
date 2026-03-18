/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C007B910
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1)
{
  LARGE_INTEGER *v1; // rbx
  struct tagTHREADINFO *v2; // rdi
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // ecx
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // ecx
  LARGE_INTEGER v16; // rdi
  int v17; // r8d
  PRKSEMAPHORE v18; // rcx

  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v14 = PsGetCurrentThreadWin32Thread(v13);
    if ( v14 )
    {
      v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v15) = byte_1C0118B28 - 1;
        Template_xqx(v15, (unsigned int)&AcquiredExclusiveUserCritEvent, v17, v16.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v16.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v17,
          0,
          1000 * v16.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
  }
  else
  {
    v1 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v1 )
      v1[1] = KeQueryPerformanceCounter(0LL);
    v2 = 0LL;
    while ( 1 )
    {
      v3 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v3 )
        v2 = *v3;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v4);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v6) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbRITBlockedOnDIT )
      {
        if ( v2 == gptiRit )
          break;
        _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v18 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v2 == gptiRit )
          break;
        _InterlockedAdd(&gcDITHitTestWaiters, 1u);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v18 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v18, UserRequest, 0, 0, 0LL);
    }
    v7 = PsGetCurrentThreadWin32Thread(v6);
    if ( v7 )
    {
      v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v7 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v8) = byte_1C0118B28 - 1;
        Template_xqx(v8, (unsigned int)&AcquiredSharedUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v10,
          0,
          1000 * v9.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
}
