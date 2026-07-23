/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x1406752EC
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x140675590 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140082F44 (VfIsVerifierEnabled.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402004E4 (PpmIdlePrevetoWatchdog.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopFxChildDeviceActive @ 0x140202344 (PopFxChildDeviceActive.c)
 *     PopFxDeviceAccountingWatchdog @ 0x140202778 (PopFxDeviceAccountingWatchdog.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402079DC (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140207BB4 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x14020D4B8 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BBF0 (DbgkWerCaptureLiveKernelDump.c)
 */

char __fastcall PopDripsWatchdogTakeAction(int *a1, char a2)
{
  ULONG v2; // r12d
  unsigned __int64 v4; // rcx
  __int64 v6; // rbx
  __int64 v7; // r15
  unsigned __int16 *v8; // r14
  unsigned __int16 *v9; // r13
  unsigned __int8 v10; // al
  char result; // al
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+58h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B0h] [rbp+50h] BYREF
  __int64 SystemInformation; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(BugCheckParameter3) = -1;
  v2 = 0;
  v4 = (unsigned int)(10000 * a1[2]);
  v15 = 0LL;
  SystemInformation = 0LL;
  ReturnLength = 0;
  PopFxDeviceAccountingWatchdog(v4, (ULONG_PTR *)&SystemInformation, (unsigned int *)&BugCheckParameter3);
  v6 = SystemInformation;
  v7 = 0LL;
  v14 = 0LL;
  if ( SystemInformation )
  {
    PopFxChildDeviceActive(SystemInformation, &v14);
    v7 = v14;
  }
  v8 = 0LL;
  if ( v6 )
    v8 = (unsigned __int16 *)(*(_QWORD *)(v6 + 48) + 56LL);
  v9 = 0LL;
  if ( v7 )
    v9 = (unsigned __int16 *)(v7 + 56);
  if ( v6 )
  {
    v10 = 1;
  }
  else
  {
    PpmIdlePrevetoWatchdog((unsigned int)(10000 * a1[2]), &ReturnLength, &v15);
    v2 = ReturnLength;
    v10 = 0;
  }
  result = PopDiagTraceCsDripsWatchdog(*a1, a1[3], a1[2], *((_BYTE *)a1 + 24) != 0, a1[5], v10, a2, v8, v9, v2);
  v12 = *((_BYTE *)a1 + 24);
  if ( !v12 || (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      PopDiagTraceCsDripsWatchdogPerfTrack(*a1, a1[3], a1[2], v12, a1[5], v6 != 0, a2);
    if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
    {
      if ( (unsigned int)VfIsVerifierEnabled()
        || (SystemInformation = 8LL,
            ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength) >= 0)
        && (SystemInformation & 0x200000000LL) != 0 )
      {
        if ( v6 && (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v6, (unsigned int)BugCheckParameter3, 0LL);
      }
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (unsigned int)a1[4] <= 0x64 )
        __debugbreak();
    }
    else if ( v6 )
    {
      if ( (a2 & 0x40) != 0 )
        NT_ASSERT(
          "*** DRIPS watchdog timeout
    This break point indicates that screen-off battery
    life is being compromise"
          "d. This AOAC system broke
    into the debugger because a device has prevented
    the deepest runtime idle pl"
          "atform state (DRIPS) for
    a certain period of time, despite being in the
    resiliency phase of connected "
          "standby without
    activators active.

    Run !platformidle to identify the device with an
    unsatisifed D"
          "RIPS constraint.
");
      if ( (a2 & 0x20) != 0 )
        PopFxBugCheck(0x619uLL, v6, (unsigned int)BugCheckParameter3, 0LL);
    }
    result = PopDeviceConstraintsEnforced();
    if ( result && (a2 & 4) != 0 )
    {
      if ( v6 )
      {
        return DbgkWerCaptureLiveKernelDump(
                 L"DripsWatchdog",
                 351LL,
                 2LL,
                 v6,
                 (unsigned int)BugCheckParameter3,
                 v7,
                 0LL,
                 0LL,
                 0);
      }
      else if ( v2 )
      {
        if ( PopFxProcessorPlugin )
          v13 = *(_QWORD *)(PopFxProcessorPlugin + 104);
        else
          v13 = 0LL;
        return DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351LL, 3LL, v2, v15, v13, 0LL, 0LL, 0);
      }
      else if ( !(_BYTE)KdDebuggerEnabled )
      {
        return DbgkWerCaptureLiveKernelDump(
                 L"DripsWatchdog",
                 351LL,
                 1LL,
                 (__int64)a1,
                 (unsigned int)*a1,
                 0LL,
                 0LL,
                 0LL,
                 0);
      }
    }
  }
  return result;
}
