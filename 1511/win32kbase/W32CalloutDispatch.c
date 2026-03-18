/*
 * XREFs of W32CalloutDispatch @ 0x1C000C060
 * Callers:
 *     <none>
 * Callees:
 *     IsNtGdiFlushUserBatchSupported_0 @ 0x1C0001000 (IsNtGdiFlushUserBatchSupported_0.c)
 *     NtGdiFlushUserBatch_0 @ 0x1C0001008 (NtGdiFlushUserBatch_0.c)
 *     IsW32pProcessCalloutSupported_0 @ 0x1C0001B88 (IsW32pProcessCalloutSupported_0.c)
 *     W32pProcessCallout_0 @ 0x1C0001B90 (W32pProcessCallout_0.c)
 *     IsW32pThreadCalloutSupported_0 @ 0x1C0001B98 (IsW32pThreadCalloutSupported_0.c)
 *     W32pThreadCallout_0 @ 0x1C0001BA0 (W32pThreadCallout_0.c)
 *     IsUserJobCalloutSupported_0 @ 0x1C0001BA8 (IsUserJobCalloutSupported_0.c)
 *     UserJobCallout_0 @ 0x1C0001BB0 (UserJobCallout_0.c)
 *     IsDesktopOpenProcedureSupported_0 @ 0x1C0001BB8 (IsDesktopOpenProcedureSupported_0.c)
 *     DesktopOpenProcedure_0 @ 0x1C0001BC0 (DesktopOpenProcedure_0.c)
 *     IsOkayToCloseDesktopSupported_0 @ 0x1C0001BC8 (IsOkayToCloseDesktopSupported_0.c)
 *     OkayToCloseDesktop_0 @ 0x1C0001BD0 (OkayToCloseDesktop_0.c)
 *     IsUnmapDesktopSupported_0 @ 0x1C0001BD8 (IsUnmapDesktopSupported_0.c)
 *     UnmapDesktop_0 @ 0x1C0001BE0 (UnmapDesktop_0.c)
 *     IsFreeDesktopSupported_0 @ 0x1C0001BE8 (IsFreeDesktopSupported_0.c)
 *     FreeDesktop_0 @ 0x1C0001BF0 (FreeDesktop_0.c)
 *     IsOkayToCloseWindowStationSupported_0 @ 0x1C0001BF8 (IsOkayToCloseWindowStationSupported_0.c)
 *     OkayToCloseWindowStation_0 @ 0x1C0001C00 (OkayToCloseWindowStation_0.c)
 *     IsDestroyWindowStationSupported_0 @ 0x1C0001C08 (IsDestroyWindowStationSupported_0.c)
 *     DestroyWindowStation_0 @ 0x1C0001C10 (DestroyWindowStation_0.c)
 *     IsFreeWindowStationSupported_0 @ 0x1C0001C18 (IsFreeWindowStationSupported_0.c)
 *     FreeWindowStation_0 @ 0x1C0001C20 (FreeWindowStation_0.c)
 *     IsParseWindowStationSupported_0 @ 0x1C0001C28 (IsParseWindowStationSupported_0.c)
 *     ParseWindowStation_0 @ 0x1C0001C30 (ParseWindowStation_0.c)
 *     IsWindowStationOpenProcedureSupported_0 @ 0x1C0001C38 (IsWindowStationOpenProcedureSupported_0.c)
 *     WindowStationOpenProcedure_0 @ 0x1C0001C40 (WindowStationOpenProcedure_0.c)
 *     WakeRITForShutdown_0 @ 0x1C0001C48 (WakeRITForShutdown_0.c)
 *     IsReferenceWindowStationSupported_0 @ 0x1C0002B20 (IsReferenceWindowStationSupported_0.c)
 *     ReferenceWindowStation_0 @ 0x1C0002B28 (ReferenceWindowStation_0.c)
 *     IsModerncoreAtomTableSupported_0 @ 0x1C0002B30 (IsModerncoreAtomTableSupported_0.c)
 *     ModerncoreAtomTable_0 @ 0x1C0002B38 (ModerncoreAtomTable_0.c)
 *     UserPowerStateCallout @ 0x1C000B158 (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C000BF30 (QueuePowerRequest.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C000C980 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     RIMObjectManagerCallout @ 0x1C000C9EC (RIMObjectManagerCallout.c)
 *     UserProcessFreezeCallout @ 0x1C000CAB4 (UserProcessFreezeCallout.c)
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 *     UserProcessThawCallout @ 0x1C000EA64 (UserProcessThawCallout.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     vReleaseDwmHitTestWaiters @ 0x1C00A90FC (vReleaseDwmHitTestWaiters.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rdi
  PVOID v7; // rdi
  LARGE_INTEGER *v8; // rbx
  struct tagTHREADINFO *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  int v14; // ecx
  PVOID v15; // rax
  __int64 v16; // r12
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v20; // rdi
  struct tagTHREADINFO **v21; // rax
  PVOID CurrentProcess; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r13
  int v26; // r8d
  LARGE_INTEGER v27; // r15
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 ProcessJob; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  struct tagTHREADINFO *v37; // rdi
  struct tagTHREADINFO **v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  DWORD LowPart; // eax
  int v42; // r8d
  __int64 v43; // [rsp+88h] [rbp+20h]

  v4 = a2;
  if ( (_DWORD)a2 == 7 )
  {
    if ( (int)IsNtGdiFlushUserBatchSupported_0() >= 0 )
      NtGdiFlushUserBatch_0();
    return 0LL;
  }
  else if ( (_DWORD)a2 == 2 )
  {
    v16 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a2);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v20 = 0LL;
    while ( 1 )
    {
      v21 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v21 )
        v20 = *v21;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbRITBlockedOnDIT )
      {
        if ( v20 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
      }
      else
      {
        if ( gbDITInHitTest != 1 || v20 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
    }
    v25 = PsGetCurrentThreadWin32Thread(v23);
    if ( v25 )
    {
      v27 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v25 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
      {
        v28 = (unsigned __int8)byte_1C01020C8;
        if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v28) = byte_1C01020C8 - 1;
          Template_xqx(
            v28,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v26,
            v27.LowPart,
            0,
            gullUserCritAcquireToken);
        }
      }
      if ( v27.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v26,
          0,
          1000 * v27.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v25 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v20;
    gbValidateHandleForIL = 1;
    if ( v16
      && (*(_DWORD *)(v16 + 440) & 0x20000000) != 0
      && (v29 = *(_QWORD *)(*(_QWORD *)(v16 + 376) + 728LL), (*(_DWORD *)(v29 + 24) & 0x20) != 0) )
    {
      v30 = *(_QWORD *)(v29 + 16);
    }
    else
    {
      v31 = PsGetCurrentProcess();
      ProcessJob = PsGetProcessJob(v31);
      v33 = ProcessJob;
      if ( !v16 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
      {
        v34 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v34[1] == v33 )
              break;
            v34 = (_QWORD *)*v34;
          }
          while ( v34 );
        }
        v30 = v34[2];
      }
      else if ( (int)IsReferenceWindowStationSupported_0() < 0
             || (v35 = PsGetCurrentProcess(), PsGetProcessWin32WindowStation(v35), (int)ReferenceWindowStation_0() < 0) )
      {
        if ( (int)IsModerncoreAtomTableSupported_0() < 0 )
          v30 = 0LL;
        else
          v30 = ModerncoreAtomTable_0();
      }
      else
      {
        v30 = *(_QWORD *)(v43 + 136);
      }
    }
    v36 = (unsigned int)gcSwitchInProgressWaiters;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    v37 = 0LL;
    v38 = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread(), v24, v36);
    if ( v38 )
      v37 = *v38;
    if ( v37 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8 )
    {
      v40 = PsGetCurrentThreadWin32Thread(v39);
      if ( v40 )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          Template_xqx(
            *(_QWORD *)(v40 + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v42,
            LowPart - *(_DWORD *)(v40 + 8),
            0,
            *(_QWORD *)(v40 + 16));
      }
    }
    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
    *a3 = v30;
    return 0LL;
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
          return QueuePowerRequest((__int128 *)a3, 0);
        else
          return 3221225473LL;
      case 4:
        return UserPowerStateCallout((char *)a3);
      case 5:
        return UserPowerInfoCallout(*(_DWORD *)a3, 0xC0000000, *((_DWORD *)a3 + 2), a3[2], *((_DWORD *)a3 + 6), a3[4]);
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
        return 0LL;
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
        ((void (__fastcall *)(__int64 *))qword_1C0103EC8)(a3);
        result = UserProcessFreezeCallout(a3);
        break;
      case 23:
        ((void (__fastcall *)(__int64 *))qword_1C0103ED0)(a3);
        result = UserProcessThawCallout(a3);
        break;
      case 24:
        ((void (__fastcall *)(__int64, __int64, __int64))qword_1C01043A0)(*a3, a3[1], a2);
        return 0LL;
      case 25:
        ((void (__fastcall *)(__int64 *))qword_1C01043A8)(a3);
        return 0LL;
      case 26:
        v7 = gpepCSRSS;
        if ( gpepCSRSS && !(unsigned __int8)ObReferenceObjectSafe(gpepCSRSS) )
          v7 = 0LL;
        *a3 = (__int64)v7;
        return 0LL;
      case 27:
      case 28:
      case 29:
      case 30:
        result = RIMObjectManagerCallout((unsigned int)a2, a3);
        break;
      case 31:
        WakeRITForShutdown_0();
        return 0LL;
      case 32:
        v8 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
        if ( v8 )
          v8[1] = KeQueryPerformanceCounter(0LL);
        v9 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
        v11 = PsGetCurrentThreadWin32Thread(v10);
        if ( v11 )
        {
          v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
          {
            v14 = (unsigned __int8)byte_1C01020C8;
            if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
              && (qword_1C01020B0 & 0x200000010000000LL) != 0
              && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              LOBYTE(v14) = byte_1C01020C8 - 1;
              Template_xqx(
                v14,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v13,
                v12.LowPart,
                0,
                gullUserCritAcquireToken);
            }
          }
          if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
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
          *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v9;
        gbValidateHandleForIL = 1;
        v15 = (PVOID)PsGetCurrentProcess();
        if ( v15 && v15 == g_pepDwm || SeSinglePrivilegeCheck(SeExports->SeTcbPrivilege, 1) )
          vReleaseDwmHitTestWaiters();
        UserSessionSwitchLeaveCrit();
        return 0LL;
      default:
        result = 3221225485LL;
        break;
    }
  }
  return result;
}
