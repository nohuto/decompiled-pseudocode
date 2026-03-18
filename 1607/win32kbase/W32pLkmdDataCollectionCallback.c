/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C00BCC70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C00BC8EC (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rcx
  PRKSEMAPHORE v14; // rcx
  __int64 v15; // rdi
  LARGE_INTEGER v16; // rcx
  LARGE_INTEGER v17; // rbx
  LARGE_INTEGER v18; // r8
  int v19; // ebx
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 ProcessWin32Process; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+38h] [rbp-30h]
  int v24; // [rsp+3Ch] [rbp-2Ch]
  int v25; // [rsp+40h] [rbp-28h]
  __int64 v26; // [rsp+48h] [rbp-20h]
  __int64 v27; // [rsp+50h] [rbp-18h]
  __int64 v28; // [rsp+58h] [rbp-10h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v14 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v14 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
  }
  v15 = PsGetCurrentThreadWin32Thread(v13);
  if ( v15 )
  {
    v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LODWORD(v21) = 0;
      LOBYTE(v16.LowPart) = byte_1C0118B28 - 1;
      Template_xqx(
        v16.QuadPart,
        &AcquiredSharedUserCritEvent,
        v18.QuadPart,
        v17.QuadPart,
        v21,
        gullUserCritAcquireToken);
    }
    if ( v17.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v21) = 1000 * v17.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v18.QuadPart,
        0LL,
        v21,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  ProcessWin32Process = PsGetProcessWin32Process(a5);
  if ( ProcessWin32Process )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = a1;
    v27 = a2;
    v28 = a3;
    v19 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&ProcessWin32Process);
    if ( v19 >= 0 )
      v19 = 0;
  }
  else
  {
    v19 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v19;
}
