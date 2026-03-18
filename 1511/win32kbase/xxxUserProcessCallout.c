/*
 * XREFs of xxxUserProcessCallout @ 0x1C0021AA0
 * Callers:
 *     <none>
 * Callees:
 *     UserJobCallout_0 @ 0x1C0001BB0 (UserJobCallout_0.c)
 *     IsRemoveProcessFromJobSupported_0 @ 0x1C0002B00 (IsRemoveProcessFromJobSupported_0.c)
 *     RemoveProcessFromJob_0 @ 0x1C0002B08 (RemoveProcessFromJob_0.c)
 *     IsvCleanupRimClientSupported_0 @ 0x1C0002B10 (IsvCleanupRimClientSupported_0.c)
 *     vCleanupRimClient_0 @ 0x1C0002B18 (vCleanupRimClient_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1C0046224 (xxxInitProcessInfo.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0072C5C (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
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
  int v26; // edx
  unsigned __int64 i; // rax
  _QWORD *v28; // rcx
  __int64 *v29; // rdi
  __int64 v30; // rsi
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
    v33 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v32 = PsGetCurrentThreadWin32Thread(v9);
    v10 = v32;
    if ( v32 )
    {
      v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v32 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8 )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v11) = byte_1C01020C8 - 1;
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
      if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
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
      inited = xxxInitProcessInfo(a1, v6, v36);
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
    v20 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v22 = PsGetCurrentThreadWin32Thread(v21);
    if ( v22 )
    {
      v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v23) = byte_1C01020C8 - 1;
        Template_xqx(v23, (unsigned int)&AcquiredExclusiveUserCritEvent, v25, v24.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v24.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
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
      v26 = giheLast;
      for ( i = qword_1C0102D48 + 24LL * (unsigned int)giheLast; i > qword_1C0102D48 && !*(_BYTE *)(i + 16); i -= 24LL )
        giheLast = --v26;
      GreLockVisRgn(*(_QWORD *)gpDispInfo);
      v28 = (_QWORD *)gpDispInfo;
      v29 = (__int64 *)(gpDispInfo + 64);
      v30 = *(_QWORD *)(gpDispInfo + 64);
      if ( v30 )
      {
        do
        {
          if ( (*(_DWORD *)(v30 + 64) & 0x400000) != 0 )
            DestroyCacheDC(v29, *(_QWORD *)(v30 + 8));
          if ( v30 == *v29 )
            v29 = (__int64 *)v30;
          v30 = *v29;
        }
        while ( *v29 );
        v28 = (_QWORD *)gpDispInfo;
      }
      GreUnlockVisRgn(*v28);
    }
    if ( v19 && (int)IsvCleanupRimClientSupported_0() >= 0 )
      vCleanupRimClient_0();
    inited = 0;
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)inited;
}
