/*
 * XREFs of xxxUserProcessCallout @ 0x1C0051410
 * Callers:
 *     <none>
 * Callees:
 *     UserJobCallout_0 @ 0x1C0001B90 (UserJobCallout_0.c)
 *     IsRemoveProcessFromJobSupported_0 @ 0x1C0002AD0 (IsRemoveProcessFromJobSupported_0.c)
 *     RemoveProcessFromJob_0 @ 0x1C0002AD8 (RemoveProcessFromJob_0.c)
 *     IsvCleanupRimClientSupported_0 @ 0x1C0002AE0 (IsvCleanupRimClientSupported_0.c)
 *     vCleanupRimClient_0 @ 0x1C0002AE8 (vCleanupRimClient_0.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1C0051B44 (xxxInitProcessInfo.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C005213C (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct tagPROCESSINFO *a1, PEPROCESS *a2)
{
  PACCESS_TOKEN v2; // r12
  int v5; // esi
  int inited; // edi
  bool v7; // si
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  struct tagTHREADINFO *v9; // r15
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // rcx
  __int64 v14; // r13
  int v15; // ecx
  LARGE_INTEGER v16; // r8
  __int64 ProcessJob; // rax
  __int64 v18; // rsi
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v20; // rax
  LARGE_INTEGER *v21; // rbx
  int v22; // ebx
  struct tagTHREADINFO *v23; // rdi
  struct tagTHREADINFO **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  PVOID v27; // rcx
  __int64 v28; // r15
  int v29; // ecx
  LARGE_INTEGER v30; // rsi
  int v31; // r8d
  int v32; // edx
  unsigned __int64 i; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 *v36; // rcx
  __int64 *v37; // rdi
  __int64 v38; // rsi
  __int64 v40; // [rsp+30h] [rbp-30h]
  LARGE_INTEGER v41; // [rsp+38h] [rbp-28h]
  unsigned int v42; // [rsp+A8h] [rbp+48h] BYREF
  int v43; // [rsp+B0h] [rbp+50h] BYREF
  int v44; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v5 = *((_DWORD *)a1 + 3) >> 15;
    inited = 1073741851;
    v43 = 0;
    v42 = 0;
    v7 = (v5 & 1) == 0;
    if ( v7 )
    {
      v2 = PsReferencePrimaryToken(*a2);
      if ( v2 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                   v2,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v43,
                   &v42,
                   &v44);
      else
        inited = -1073741700;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v9 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v13 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v9 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v13 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v13, UserRequest, 0, 0, 0LL);
    }
    v40 = PsGetCurrentThreadWin32Thread(v12);
    v14 = v40;
    if ( v40 )
    {
      v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v40 + 8));
      v41 = v16;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v15) = byte_1C00FEA58 - 1;
          Template_xqx(
            v15,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v16.LowPart,
            v16.LowPart,
            0,
            gullUserCritAcquireToken);
          v16 = v41;
        }
        v14 = v40;
      }
      if ( v16.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v16.LowPart,
          0,
          1000 * v16.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( v7 && inited >= 0 )
      inited = xxxInitProcessInfo(a1, v2, v44);
    if ( v2 )
      PsDereferencePrimaryToken(v2);
    if ( inited < 0 )
      DestroyProcessInfo(a1);
    UserSessionSwitchLeaveCrit();
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)a1);
      v18 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v18);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          UserJobCallout_0();
          v20 = (struct _ERESOURCE *)PsGetJobLock(v18);
          ExReleaseResourceAndLeaveCriticalRegion(v20);
        }
      }
    }
  }
  else
  {
    v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v21 )
      v21[1] = KeQueryPerformanceCounter(0LL);
    v22 = 1;
    v23 = 0LL;
    while ( 1 )
    {
      v24 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v24 )
        v23 = *v24;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v23 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v23 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v27 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v23 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v27 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v27, UserRequest, 0, 0, 0LL);
    }
    v28 = PsGetCurrentThreadWin32Thread(v26);
    if ( v28 )
    {
      v30 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v28 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v29) = byte_1C00FEA58 - 1;
        Template_xqx(v29, (unsigned int)&AcquiredExclusiveUserCritEvent, v31, v30.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v30.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v31,
          0,
          1000 * v30.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v28 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v23;
    gbValidateHandleForIL = 1;
    if ( !gpepCSRSS || *(PVOID *)a1 != gpepCSRSS )
      v22 = 0;
    if ( *(_QWORD *)a1 && PsGetProcessJob(*(_QWORD *)a1) && (int)IsRemoveProcessFromJobSupported_0() >= 0 )
      RemoveProcessFromJob_0();
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v32 = giheLast;
      for ( i = qword_1C01003E8 + 24LL * (unsigned int)giheLast; i > qword_1C01003E8 && !*(_BYTE *)(i + 16); i -= 24LL )
        giheLast = --v32;
      GreLockVisRgn(*(_QWORD *)gpDispInfo, v32, qword_1C01003E8);
      v36 = (__int64 *)gpDispInfo;
      v37 = (__int64 *)(gpDispInfo + 64);
      v38 = *(_QWORD *)(gpDispInfo + 64);
      if ( v38 )
      {
        do
        {
          if ( (*(_DWORD *)(v38 + 64) & 0x400000) != 0 )
            DestroyCacheDC(v37, *(_QWORD *)(v38 + 8));
          if ( v38 == *v37 )
            v37 = (__int64 *)v38;
          v38 = *v37;
        }
        while ( *v37 );
        v36 = (__int64 *)gpDispInfo;
      }
      GreUnlockVisRgn(*v36, v34, v35);
    }
    if ( v22 && (int)IsvCleanupRimClientSupported_0() >= 0 )
      vCleanupRimClient_0();
    inited = 0;
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)inited;
}
