/*
 * XREFs of xxxUserProcessCallout @ 0x1C001F620
 * Callers:
 *     <none>
 * Callees:
 *     UserJobCallout_0 @ 0x1C0001B80 (UserJobCallout_0.c)
 *     IsRemoveProcessFromJobSupported_0 @ 0x1C0002B00 (IsRemoveProcessFromJobSupported_0.c)
 *     RemoveProcessFromJob_0 @ 0x1C0002B08 (RemoveProcessFromJob_0.c)
 *     IsvCleanupRimClientSupported_0 @ 0x1C0002B10 (IsvCleanupRimClientSupported_0.c)
 *     vCleanupRimClient_0 @ 0x1C0002B18 (vCleanupRimClient_0.c)
 *     xxxInitProcessInfo @ 0x1C00124D8 (xxxInitProcessInfo.c)
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C00776C8 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct tagPROCESSINFO *a1, PEPROCESS *a2)
{
  int v4; // r14d
  int inited; // edi
  PACCESS_TOKEN v6; // r15
  bool v7; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // r13
  __int64 v9; // rcx
  __int64 v10; // r13
  int v11; // ecx
  int v12; // r8d
  LARGE_INTEGER v13; // r12
  __int64 ProcessJob; // rax
  __int64 v15; // r14
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v17; // rax
  LARGE_INTEGER *v18; // rbx
  int v19; // ebx
  struct tagTHREADINFO *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r14
  int v23; // ecx
  LARGE_INTEGER v24; // rdi
  int v25; // r8d
  int v27; // edx
  unsigned __int64 i; // rax
  _QWORD *v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // [rsp+30h] [rbp-30h]
  struct tagTHREADINFO *v33; // [rsp+38h] [rbp-28h]
  unsigned int v34; // [rsp+A8h] [rbp+48h] BYREF
  int v35; // [rsp+B0h] [rbp+50h] BYREF
  int v36; // [rsp+B8h] [rbp+58h] BYREF

  if ( a2 )
  {
    v4 = *((_DWORD *)a1 + 3) >> 15;
    inited = 1073741851;
    v35 = 0;
    v34 = 0;
    v6 = 0LL;
    v7 = (v4 & 1) == 0;
    if ( v7 )
    {
      v6 = PsReferencePrimaryToken(*a2);
      if ( v6 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                   v6,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v35,
                   &v34,
                   &v36);
      else
        inited = -1073741700;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v33 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v32 = PsGetCurrentThreadWin32Thread(v9);
    v10 = v32;
    if ( v32 )
    {
      v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v32 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18 )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v11) = byte_1C0118B28 - 1;
          Template_xqx(
            v11,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v12,
            v13.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        v10 = v32;
      }
      if ( v13.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0,
          1000 * v13.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v33;
    gbValidateHandleForIL = 1;
    if ( v7 && inited >= 0 )
      inited = xxxInitProcessInfo(a1, v6, v35, v34, v36);
    if ( v6 )
      PsDereferencePrimaryToken(v6);
    if ( inited < 0 )
      DestroyProcessInfo(a1);
    UserSessionSwitchLeaveCrit();
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)a1);
      v15 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v15);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          UserJobCallout_0();
          v17 = (struct _ERESOURCE *)PsGetJobLock(v15);
          ExReleaseResourceAndLeaveCriticalRegion(v17);
        }
      }
    }
  }
  else
  {
    v18 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v18 )
      v18[1] = KeQueryPerformanceCounter(0LL);
    v19 = 1;
    v20 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v22 = PsGetCurrentThreadWin32Thread(v21);
    if ( v22 )
    {
      v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v23) = byte_1C0118B28 - 1;
        Template_xqx(v23, (unsigned int)&AcquiredExclusiveUserCritEvent, v25, v24.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v24.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v25,
          0,
          1000 * v24.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v20;
    gbValidateHandleForIL = 1;
    if ( !gpepCSRSS || *(PVOID *)a1 != gpepCSRSS )
      v19 = 0;
    if ( *(_QWORD *)a1 && PsGetProcessJob(*(_QWORD *)a1) && (int)IsRemoveProcessFromJobSupported_0() >= 0 )
      RemoveProcessFromJob_0();
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v27 = giheLast;
      for ( i = qword_1C011A128 + 24LL * (unsigned int)giheLast; i > qword_1C011A128 && !*(_BYTE *)(i + 16); i -= 24LL )
        giheLast = --v27;
      GreLockVisRgn(*(_QWORD *)gpDispInfo);
      v29 = (_QWORD *)gpDispInfo;
      v30 = (__int64 *)(gpDispInfo + 64);
      v31 = *(_QWORD *)(gpDispInfo + 64);
      if ( v31 )
      {
        do
        {
          if ( (*(_DWORD *)(v31 + 64) & 0x400000) != 0 )
            DestroyCacheDC(v30, *(_QWORD *)(v31 + 8));
          if ( v31 == *v30 )
            v30 = (__int64 *)v31;
          v31 = *v30;
        }
        while ( *v30 );
        v29 = (_QWORD *)gpDispInfo;
      }
      GreUnlockVisRgn(*v29);
    }
    if ( v19 && (int)IsvCleanupRimClientSupported_0() >= 0 )
      vCleanupRimClient_0();
    inited = 0;
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)inited;
}
