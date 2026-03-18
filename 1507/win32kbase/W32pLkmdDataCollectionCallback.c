/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C00AEBF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C00AE878 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rcx
  __int64 v17; // rdi
  LARGE_INTEGER v18; // rcx
  LARGE_INTEGER v19; // rbx
  LARGE_INTEGER v20; // r8
  int v21; // ebx
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 ProcessWin32Process; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+3Ch] [rbp-2Ch]
  int v27; // [rsp+40h] [rbp-28h]
  __int64 v28; // [rsp+48h] [rbp-20h]
  __int64 v29; // [rsp+50h] [rbp-18h]
  __int64 v30; // [rsp+58h] [rbp-10h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v16 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v16 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v16, UserRequest, 0, 0, 0LL);
  }
  v17 = PsGetCurrentThreadWin32Thread(v15);
  if ( v17 )
  {
    v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LODWORD(v23) = 0;
      LOBYTE(v18.LowPart) = byte_1C00FEA58 - 1;
      Template_xqx(
        v18.QuadPart,
        &AcquiredSharedUserCritEvent,
        v20.QuadPart,
        v19.QuadPart,
        v23,
        gullUserCritAcquireToken);
    }
    if ( v19.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v23) = 1000 * v19.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v20.QuadPart,
        0LL,
        v23,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  ProcessWin32Process = PsGetProcessWin32Process(a5);
  if ( ProcessWin32Process )
  {
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = a1;
    v29 = a2;
    v30 = a3;
    v21 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&ProcessWin32Process);
    if ( v21 >= 0 )
      v21 = 0;
  }
  else
  {
    v21 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v21;
}
