/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x14063CAA4
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x14063CD1C (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140001FF0 (VfIsVerifierEnabled.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     PpmIdlePrevetoWatchdog @ 0x1401E7B00 (PpmIdlePrevetoWatchdog.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 *     PopFxChildDeviceActive @ 0x1401E9B40 (PopFxChildDeviceActive.c)
 *     PopFxDeviceAccountingWatchdog @ 0x1401E9F74 (PopFxDeviceAccountingWatchdog.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1401EF080 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1401EF258 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x1401F3BA8 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1405F18E4 (DbgkWerCaptureLiveKernelDump.c)
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
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B0h] [rbp+50h] BYREF
  __int64 SystemInformation; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(BugCheckParameter3) = -1;
  v2 = 0;
  v4 = (unsigned int)(10000 * a1[2]);
  v16 = 0LL;
  SystemInformation = 0LL;
  ReturnLength = 0;
  PopFxDeviceAccountingWatchdog(v4, (ULONG_PTR *)&SystemInformation, (unsigned int *)&BugCheckParameter3);
  v6 = SystemInformation;
  v7 = 0LL;
  v15 = 0LL;
  if ( SystemInformation )
  {
    PopFxChildDeviceActive(SystemInformation, &v15);
    v7 = v15;
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
    PpmIdlePrevetoWatchdog((unsigned int)(10000 * a1[2]), &ReturnLength, &v16);
    v2 = ReturnLength;
    v10 = 0;
  }
  result = PopDiagTraceCsDripsWatchdog(*a1, a1[3], a1[2], *((_BYTE *)a1 + 24) != 0, a1[5], v10, a2, v8, v9, v2);
  v12 = *((_BYTE *)a1 + 24);
  if ( !v12 || (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      PopDiagTraceCsDripsWatchdogPerfTrack(*a1, a1[3], a1[2], v12, a1[5], v6 != 0, a2);
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (a2 & 8) != 0 )
      {
        if ( (unsigned int)a1[4] <= 0x64 )
          __debugbreak();
      }
      else if ( v6 && (a2 & 0x20) != 0 )
      {
        PopFxBugCheck(0x619uLL, v6, (unsigned int)BugCheckParameter3, 0LL);
      }
    }
    if ( (unsigned int)VfIsVerifierEnabled()
      || (SystemInformation = v13,
          ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, v13, &ReturnLength) >= 0)
      && (SystemInformation & 0x200000000LL) != 0 )
    {
      if ( v6 && (a2 & 0x20) != 0 )
        PopFxBugCheck(0x619uLL, v6, (unsigned int)BugCheckParameter3, 0LL);
    }
    result = PopDeviceConstraintsEnforced();
    if ( result && (a2 & 4) != 0 )
    {
      if ( v6 )
      {
        return DbgkWerCaptureLiveKernelDump(
                 L"DripsWatchdog",
                 351,
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
          v14 = *(_QWORD *)(PopFxProcessorPlugin + 104);
        else
          v14 = 0LL;
        return DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 3LL, v2, v16, v14, 0LL, 0LL, 0);
      }
      else if ( !(_BYTE)KdDebuggerEnabled )
      {
        return DbgkWerCaptureLiveKernelDump(
                 L"DripsWatchdog",
                 351,
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
