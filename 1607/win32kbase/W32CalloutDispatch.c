/*
 * XREFs of W32CalloutDispatch @ 0x1C001CE70
 * Callers:
 *     <none>
 * Callees:
 *     IsNtGdiFlushUserBatchSupported_0 @ 0x1C0001000 (IsNtGdiFlushUserBatchSupported_0.c)
 *     NtGdiFlushUserBatch_0 @ 0x1C0001008 (NtGdiFlushUserBatch_0.c)
 *     IsW32pProcessCalloutSupported_0 @ 0x1C0001B58 (IsW32pProcessCalloutSupported_0.c)
 *     W32pProcessCallout_0 @ 0x1C0001B60 (W32pProcessCallout_0.c)
 *     IsW32pThreadCalloutSupported_0 @ 0x1C0001B68 (IsW32pThreadCalloutSupported_0.c)
 *     W32pThreadCallout_0 @ 0x1C0001B70 (W32pThreadCallout_0.c)
 *     IsUserJobCalloutSupported_0 @ 0x1C0001B78 (IsUserJobCalloutSupported_0.c)
 *     UserJobCallout_0 @ 0x1C0001B80 (UserJobCallout_0.c)
 *     IsDesktopOpenProcedureSupported_0 @ 0x1C0001B88 (IsDesktopOpenProcedureSupported_0.c)
 *     DesktopOpenProcedure_0 @ 0x1C0001B90 (DesktopOpenProcedure_0.c)
 *     IsOkayToCloseDesktopSupported_0 @ 0x1C0001B98 (IsOkayToCloseDesktopSupported_0.c)
 *     OkayToCloseDesktop_0 @ 0x1C0001BA0 (OkayToCloseDesktop_0.c)
 *     IsUnmapDesktopSupported_0 @ 0x1C0001BA8 (IsUnmapDesktopSupported_0.c)
 *     UnmapDesktop_0 @ 0x1C0001BB0 (UnmapDesktop_0.c)
 *     IsFreeDesktopSupported_0 @ 0x1C0001BB8 (IsFreeDesktopSupported_0.c)
 *     FreeDesktop_0 @ 0x1C0001BC0 (FreeDesktop_0.c)
 *     IsOkayToCloseWindowStationSupported_0 @ 0x1C0001BC8 (IsOkayToCloseWindowStationSupported_0.c)
 *     OkayToCloseWindowStation_0 @ 0x1C0001BD0 (OkayToCloseWindowStation_0.c)
 *     IsDestroyWindowStationSupported_0 @ 0x1C0001BD8 (IsDestroyWindowStationSupported_0.c)
 *     DestroyWindowStation_0 @ 0x1C0001BE0 (DestroyWindowStation_0.c)
 *     IsFreeWindowStationSupported_0 @ 0x1C0001BE8 (IsFreeWindowStationSupported_0.c)
 *     FreeWindowStation_0 @ 0x1C0001BF0 (FreeWindowStation_0.c)
 *     IsParseWindowStationSupported_0 @ 0x1C0001BF8 (IsParseWindowStationSupported_0.c)
 *     ParseWindowStation_0 @ 0x1C0001C00 (ParseWindowStation_0.c)
 *     IsWindowStationOpenProcedureSupported_0 @ 0x1C0001C08 (IsWindowStationOpenProcedureSupported_0.c)
 *     WindowStationOpenProcedure_0 @ 0x1C0001C10 (WindowStationOpenProcedure_0.c)
 *     WakeRITForShutdown_0 @ 0x1C0001C18 (WakeRITForShutdown_0.c)
 *     RIMObjectManagerCallout @ 0x1C000A168 (RIMObjectManagerCallout.c)
 *     QueuePowerRequest @ 0x1C000A740 (QueuePowerRequest.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     UserGlobalAtomTableCallout @ 0x1C001D2D8 (UserGlobalAtomTableCallout.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C001D538 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C001D5A4 (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0071E30 (UserPowerStateCallout.c)
 *     UserProcessFreezeCallout @ 0x1C007A498 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C007A818 (UserProcessThawCallout.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     vReleaseDwmHitTestWaiters @ 0x1C00B187C (vReleaseDwmHitTestWaiters.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     ?CoreMsgObjectCallout@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00F832C (-CoreMsgObjectCallout@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, __int64 a2, struct _WIN32_OPENMETHOD_PARAMETERS *a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  LARGE_INTEGER v10; // rbx
  int v11; // r8d
  PVOID CurrentProcess; // rax
  unsigned __int64 v13; // rdi

  if ( (int)a2 > 15 )
  {
    if ( (int)a2 > 23 )
    {
      switch ( (_DWORD)a2 )
      {
        case 0x19:
          ((void (__fastcall *)(struct _WIN32_OPENMETHOD_PARAMETERS *, __int64, struct _WIN32_OPENMETHOD_PARAMETERS *, __int64))qword_1C011B6F0)(
            a3,
            a2,
            a3,
            a2);
          return 0LL;
        case 0x18:
          ((void (__fastcall *)(_QWORD, _QWORD))qword_1C011B6E8)(*(_QWORD *)a3, *((_QWORD *)a3 + 1));
          return 0LL;
        case 0x1A:
          v13 = (unsigned __int64)gpepCSRSS;
          if ( gpepCSRSS )
            v13 &= -(__int64)((unsigned __int8)ObReferenceObjectSafe(gpepCSRSS, a2, a3, a2) != 0);
          *(_QWORD *)a3 = v13;
          return 0LL;
      }
      if ( (int)a2 <= 30 )
        return RIMObjectManagerCallout(a2, (__int64)a3);
      if ( (_DWORD)a2 == 32 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v6 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
        v9 = PsGetCurrentThreadWin32Thread(v7);
        if ( v9 )
        {
          v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
          {
            LOBYTE(v8) = byte_1C0118B28 - 1;
            if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u
              && (qword_1C0118B10 & 0x200000010000000LL) != 0
              && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              Template_xqx(
                v8,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v11,
                v10.LowPart,
                0,
                gullUserCritAcquireToken);
            }
          }
          if ( v10.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v11,
              0,
              1000 * v10.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v6;
        gbValidateHandleForIL = 1;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v8);
        if ( CurrentProcess && CurrentProcess == g_pepDwm || SeSinglePrivilegeCheck(SeExports->SeTcbPrivilege, 1) )
          vReleaseDwmHitTestWaiters();
        UserSessionSwitchLeaveCrit();
        return 0LL;
      }
      if ( (_DWORD)a2 == 31 )
      {
        WakeRITForShutdown_0();
        return 0LL;
      }
      if ( (unsigned int)(a2 - 33) <= 3 )
        return CoreMsgObjectCallout((unsigned int)a2, a3);
      return 3221225485LL;
    }
    if ( (_DWORD)a2 == 23 )
    {
      ((void (__fastcall *)(struct _WIN32_OPENMETHOD_PARAMETERS *, __int64, struct _WIN32_OPENMETHOD_PARAMETERS *, __int64))qword_1C011B210)(
        a3,
        a2,
        a3,
        a2);
      return UserProcessThawCallout(a3);
    }
    if ( (_DWORD)a2 != 16 )
    {
      switch ( (_DWORD)a2 )
      {
        case 0x11:
          return 0LL;
        case 0x12:
          return CompositionObject::Open(a3);
        case 0x13:
          return CompositionObject::OkToClose(a3);
        case 0x14:
          return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OPENMETHOD_PARAMETERS *))(**(_QWORD **)(*((_QWORD *)a3 + 1) + 8LL)
                                                                                          + 40LL))(
                   *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL),
                   a3);
        case 0x15:
          return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OPENMETHOD_PARAMETERS *))(**(_QWORD **)(*(_QWORD *)a3 + 8LL)
                                                                                          + 48LL))(
                   *(_QWORD *)(*(_QWORD *)a3 + 8LL),
                   a3);
      }
      ((void (__fastcall *)(struct _WIN32_OPENMETHOD_PARAMETERS *))qword_1C011B208)(a3);
      return UserProcessFreezeCallout(a3);
    }
    if ( (int)IsWindowStationOpenProcedureSupported_0() >= 0 )
      return WindowStationOpenProcedure_0();
    return 3221225659LL;
  }
  if ( (_DWORD)a2 == 15 )
  {
    if ( (int)IsParseWindowStationSupported_0() >= 0 )
      return ParseWindowStation_0();
    return 3221225659LL;
  }
  if ( (int)a2 > 7 )
  {
    switch ( (_DWORD)a2 )
    {
      case 8:
        if ( (int)IsDesktopOpenProcedureSupported_0() >= 0 )
          return DesktopOpenProcedure_0();
        break;
      case 9:
        if ( (int)IsOkayToCloseDesktopSupported_0() >= 0 )
          return OkayToCloseDesktop_0();
        break;
      case 0xA:
        if ( (int)IsUnmapDesktopSupported_0() >= 0 )
          return UnmapDesktop_0();
        break;
      case 0xB:
        if ( (int)IsFreeDesktopSupported_0() >= 0 )
          return FreeDesktop_0();
        break;
      case 0xC:
        if ( (int)IsOkayToCloseWindowStationSupported_0() >= 0 )
          return OkayToCloseWindowStation_0();
        break;
      case 0xD:
        if ( (int)IsDestroyWindowStationSupported_0() >= 0 )
          return DestroyWindowStation_0();
        break;
      default:
        if ( (int)IsFreeWindowStationSupported_0() >= 0 )
          return FreeWindowStation_0();
        break;
    }
    return 3221225659LL;
  }
  switch ( (_DWORD)a2 )
  {
    case 7:
      if ( (int)IsNtGdiFlushUserBatchSupported_0() >= 0 )
        NtGdiFlushUserBatch_0();
      return 0LL;
    case 0:
      if ( (int)IsW32pProcessCalloutSupported_0() >= 0 )
        return W32pProcessCallout_0();
      return 3221225659LL;
    case 1:
      if ( (int)IsW32pThreadCalloutSupported_0() >= 0 )
        return W32pThreadCallout_0();
      return 3221225659LL;
    case 2:
      *(_QWORD *)a3 = UserGlobalAtomTableCallout();
      return 0LL;
  }
  if ( (_DWORD)a2 != 3 )
  {
    switch ( (_DWORD)a2 )
    {
      case 4:
        return UserPowerStateCallout(a3);
      case 5:
        return UserPowerInfoCallout(
                 *(_DWORD *)a3,
                 5,
                 *((_DWORD *)a3 + 2),
                 *((_QWORD *)a3 + 2),
                 *((_DWORD *)a3 + 6),
                 *((_QWORD *)a3 + 4));
      case 6:
        if ( (int)IsUserJobCalloutSupported_0() >= 0 )
          return UserJobCallout_0();
        return 3221225659LL;
    }
    return 3221225485LL;
  }
  if ( gbPowerCalloutsReady && gbVideoInitialized )
    return QueuePowerRequest((__int128 *)a3, 0);
  else
    return 3221225473LL;
}
