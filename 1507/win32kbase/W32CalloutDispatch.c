/*
 * XREFs of W32CalloutDispatch @ 0x1C00045B0
 * Callers:
 *     <none>
 * Callees:
 *     IsNtGdiFlushUserBatchSupported_0 @ 0x1C0001000 (IsNtGdiFlushUserBatchSupported_0.c)
 *     NtGdiFlushUserBatch_0 @ 0x1C0001008 (NtGdiFlushUserBatch_0.c)
 *     IsW32pProcessCalloutSupported_0 @ 0x1C0001B68 (IsW32pProcessCalloutSupported_0.c)
 *     IsW32pThreadCalloutSupported_0 @ 0x1C0001B78 (IsW32pThreadCalloutSupported_0.c)
 *     IsUserJobCalloutSupported_0 @ 0x1C0001B88 (IsUserJobCalloutSupported_0.c)
 *     IsDesktopOpenProcedureSupported_0 @ 0x1C0001B98 (IsDesktopOpenProcedureSupported_0.c)
 *     IsOkayToCloseDesktopSupported_0 @ 0x1C0001BA8 (IsOkayToCloseDesktopSupported_0.c)
 *     IsUnmapDesktopSupported_0 @ 0x1C0001BB8 (IsUnmapDesktopSupported_0.c)
 *     IsFreeDesktopSupported_0 @ 0x1C0001BC8 (IsFreeDesktopSupported_0.c)
 *     IsOkayToCloseWindowStationSupported_0 @ 0x1C0001BD8 (IsOkayToCloseWindowStationSupported_0.c)
 *     IsDestroyWindowStationSupported_0 @ 0x1C0001BE8 (IsDestroyWindowStationSupported_0.c)
 *     IsFreeWindowStationSupported_0 @ 0x1C0001BF8 (IsFreeWindowStationSupported_0.c)
 *     IsParseWindowStationSupported_0 @ 0x1C0001C08 (IsParseWindowStationSupported_0.c)
 *     IsWindowStationOpenProcedureSupported_0 @ 0x1C0001C18 (IsWindowStationOpenProcedureSupported_0.c)
 *     WakeRITForShutdown_0 @ 0x1C0001C28 (WakeRITForShutdown_0.c)
 *     IsReferenceWindowStationSupported_0 @ 0x1C0002AF0 (IsReferenceWindowStationSupported_0.c)
 *     ReferenceWindowStation_0 @ 0x1C0002AF8 (ReferenceWindowStation_0.c)
 *     IsModerncoreAtomTableSupported_0 @ 0x1C0002B00 (IsModerncoreAtomTableSupported_0.c)
 *     ModerncoreAtomTable_0 @ 0x1C0002B08 (ModerncoreAtomTable_0.c)
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rdi
  PVOID v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v13; // rdi
  struct tagTHREADINFO **v14; // rax
  PVOID CurrentProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  LARGE_INTEGER v18; // rbp
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 ProcessJob; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rcx
  __int64 v26; // rax
  struct tagTHREADINFO *v27; // rdi
  struct tagTHREADINFO **v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  DWORD LowPart; // eax
  int v32; // r8d
  __int64 v33; // [rsp+88h] [rbp+20h]

  v4 = a2;
  if ( (_DWORD)a2 == 7 )
  {
    if ( (int)IsNtGdiFlushUserBatchSupported_0() >= 0 )
      NtGdiFlushUserBatch_0();
    return 0LL;
  }
  else if ( (_DWORD)a2 == 2 )
  {
    v8 = 0LL;
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v13 = 0LL;
    while ( 1 )
    {
      v14 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v14 )
        v13 = *v14;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbRITBlockedOnDIT )
      {
        if ( v13 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
      }
      else
      {
        if ( gbDITInHitTest != 1 || v13 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
    }
    v17 = PsGetCurrentThreadWin32Thread(v16);
    if ( v17 )
    {
      v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
      {
        v20 = (unsigned __int8)byte_1C00FEA58;
        if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v20) = byte_1C00FEA58 - 1;
          Template_xqx(
            v20,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v19,
            v18.LowPart,
            0,
            gullUserCritAcquireToken);
        }
      }
      if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v19,
          0,
          1000 * v18.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v13;
    gbValidateHandleForIL = 1;
    if ( v9
      && (*(_DWORD *)(v9 + 448) & 0x20000000) != 0
      && (v21 = *(_QWORD *)(*(_QWORD *)(v9 + 384) + 728LL), (*(_DWORD *)(v21 + 24) & 0x20) != 0) )
    {
      v8 = *(_QWORD *)(v21 + 16);
    }
    else
    {
      v22 = PsGetCurrentProcess();
      ProcessJob = PsGetProcessJob(v22);
      v24 = ProcessJob;
      if ( !v9 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
      {
        v25 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v25[1] == v24 )
              break;
            v25 = (_QWORD *)*v25;
          }
          while ( v25 );
        }
        v8 = v25[2];
      }
      else if ( (int)IsReferenceWindowStationSupported_0() < 0
             || (v26 = PsGetCurrentProcess(), PsGetProcessWin32WindowStation(v26), (int)ReferenceWindowStation_0() < 0) )
      {
        if ( (int)IsModerncoreAtomTableSupported_0() >= 0 )
          v8 = ModerncoreAtomTable_0();
      }
      else
      {
        v8 = *(_QWORD *)(v33 + 136);
      }
    }
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    v27 = 0LL;
    v28 = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v28 )
      v27 = *v28;
    if ( v27 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
    {
      v30 = PsGetCurrentThreadWin32Thread(v29);
      if ( v30 )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          Template_xqx(
            *(_QWORD *)(v30 + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v32,
            LowPart - *(_DWORD *)(v30 + 8),
            0,
            *(_QWORD *)(v30 + 16));
      }
    }
    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
    result = 0LL;
    *a3 = v8;
  }
  else
  {
    switch ( (int)a2 )
    {
      case 0:
        if ( (int)IsW32pProcessCalloutSupported_0() < 0 )
          goto LABEL_34;
        result = W32pProcessCallout_0();
        break;
      case 1:
        if ( (int)IsW32pThreadCalloutSupported_0() < 0 )
          goto LABEL_34;
        result = W32pThreadCallout_0();
        break;
      case 3:
        if ( gbPowerCalloutsReady && gbVideoInitialized )
          result = QueuePowerRequest(a3, 0LL, a2);
        else
          result = 3221225473LL;
        break;
      case 4:
        result = UserPowerStateCallout(a3);
        break;
      case 5:
        result = UserPowerInfoCallout(*(_DWORD *)a3, 0xC0000000, *((_DWORD *)a3 + 2), a3[2], *((_DWORD *)a3 + 6), a3[4]);
        break;
      case 6:
        if ( (int)IsUserJobCalloutSupported_0() < 0 )
          goto LABEL_34;
        result = UserJobCallout_0();
        break;
      case 8:
        if ( (int)IsDesktopOpenProcedureSupported_0() < 0 )
          goto LABEL_34;
        result = DesktopOpenProcedure_0();
        break;
      case 9:
        if ( (int)IsOkayToCloseDesktopSupported_0() < 0 )
          goto LABEL_34;
        result = OkayToCloseDesktop_0();
        break;
      case 10:
        if ( (int)IsUnmapDesktopSupported_0() < 0 )
          goto LABEL_34;
        result = UnmapDesktop_0();
        break;
      case 11:
        if ( (int)IsFreeDesktopSupported_0() < 0 )
          goto LABEL_34;
        result = FreeDesktop_0();
        break;
      case 12:
        if ( (int)IsOkayToCloseWindowStationSupported_0() < 0 )
          goto LABEL_34;
        result = OkayToCloseWindowStation_0();
        break;
      case 13:
        if ( (int)IsDestroyWindowStationSupported_0() < 0 )
          goto LABEL_34;
        result = DestroyWindowStation_0();
        break;
      case 14:
        if ( (int)IsFreeWindowStationSupported_0() < 0 )
          goto LABEL_34;
        result = FreeWindowStation_0();
        break;
      case 15:
        if ( (int)IsParseWindowStationSupported_0() < 0 )
          goto LABEL_34;
        result = ParseWindowStation_0();
        break;
      case 16:
        if ( (int)IsWindowStationOpenProcedureSupported_0() < 0 )
LABEL_34:
          result = 3221225659LL;
        else
          result = WindowStationOpenProcedure_0();
        break;
      case 17:
        goto LABEL_46;
      case 18:
        result = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
        break;
      case 19:
        v6 = a3[1];
        if ( *((_BYTE *)a3 + 24) && (unsigned int)PsGetProcessSessionIdEx(*a3) == -1 )
          result = 3221225506LL;
        else
          result = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(v6 + 8) + 32LL))(
                     *(_QWORD *)(v6 + 8),
                     a3,
                     v4);
        break;
      case 20:
        result = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a3[1] + 8) + 40LL))(
                   *(_QWORD *)(a3[1] + 8),
                   a3,
                   a2);
        break;
      case 21:
        result = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(*a3 + 8) + 48LL))(
                   *(_QWORD *)(*a3 + 8),
                   a3,
                   a2);
        break;
      case 22:
        ((void (__fastcall *)(__int64 *))qword_1C01010A8)(a3);
        result = UserProcessFreezeCallout(a3);
        break;
      case 23:
        ((void (__fastcall *)(__int64 *))qword_1C01010B0)(a3);
        result = UserProcessThawCallout(a3);
        break;
      case 24:
        ((void (__fastcall *)(__int64, __int64, __int64))qword_1C0101588)(*a3, a3[1], a2);
LABEL_46:
        result = 0LL;
        break;
      case 25:
        ((void (__fastcall *)(__int64 *))qword_1C0101590)(a3);
        result = 0LL;
        break;
      case 26:
        v7 = gpepCSRSS;
        if ( gpepCSRSS && !(unsigned __int8)ObReferenceObjectSafe(gpepCSRSS) )
          v7 = 0LL;
        result = 0LL;
        *a3 = (__int64)v7;
        break;
      case 27:
      case 28:
      case 29:
      case 30:
        result = RIMObjectManagerCallout((unsigned int)a2, a3);
        break;
      case 31:
        WakeRITForShutdown_0();
        result = 0LL;
        break;
      default:
        result = 3221225485LL;
        break;
    }
  }
  return result;
}
