/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x1406BD01C
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x1406BD240 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140025ADC (VfIsVerifierEnabled.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopFxChildDeviceActive @ 0x1402376A0 (PopFxChildDeviceActive.c)
 *     PopFxDeviceAccountingWatchdog @ 0x140237B18 (PopFxDeviceAccountingWatchdog.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14023D5F8 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14023D7BC (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x140241C84 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14066A574 (DbgkWerCaptureLiveKernelDump.c)
 */

char __fastcall PopDripsWatchdogTakeAction(int *a1, char a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v6; // rbx
  __int64 v7; // r14
  unsigned __int16 *v8; // rdx
  unsigned __int16 *v9; // r8
  int IsVerifierEnabled; // eax
  unsigned __int8 v11; // cl
  int v12; // eax
  __int64 v13; // r10
  int v14; // r11d
  ULONG v15; // r8d
  __int64 v17; // [rsp+28h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+38h] [rbp-28h]
  ULONG SystemInformation; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+54h] [rbp-Ch]
  __int64 v22; // [rsp+58h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+30h] BYREF
  ULONG ReturnLength; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  LODWORD(BugCheckParameter3) = -1;
  PopFxDeviceAccountingWatchdog(
    (unsigned int)(10000 * a1[1]),
    &BugCheckParameter2,
    (unsigned int *)&BugCheckParameter3,
    a4);
  v6 = BugCheckParameter2;
  v7 = 0LL;
  v22 = 0LL;
  if ( BugCheckParameter2 )
  {
    PopFxChildDeviceActive(BugCheckParameter2, &v22);
    v7 = v22;
  }
  v8 = 0LL;
  if ( v6 )
    v8 = (unsigned __int16 *)(*(_QWORD *)(v6 + 48) + 56LL);
  v9 = 0LL;
  if ( v7 )
    v9 = (unsigned __int16 *)(v7 + 56);
  LOBYTE(IsVerifierEnabled) = PopDiagTraceCsDripsWatchdog(
                                *a1,
                                a1[2],
                                a1[1],
                                *((_BYTE *)a1 + 20) != 0,
                                a1[4],
                                v6 != 0,
                                a2,
                                v8,
                                v9);
  v11 = *((_BYTE *)a1 + 20);
  if ( !v11 || (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      PopDiagTraceCsDripsWatchdogPerfTrack(*a1, a1[2], a1[1], v11, a1[4], v6 != 0, a2);
    if ( (a2 & 4) == 0 )
      goto LABEL_21;
    if ( v6 )
    {
      v12 = DbgkWerCaptureLiveKernelDump(
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
    else
    {
      if ( !PopDeviceConstraintsEnforced() || (_BYTE)KdDebuggerEnabled != (_BYTE)v13 )
        goto LABEL_18;
      v12 = DbgkWerCaptureLiveKernelDump(
              L"DripsWatchdog",
              351,
              1LL,
              (__int64)a1,
              (unsigned int)*a1,
              v13 & v17,
              v13 & v18,
              v13 & v19,
              v14);
    }
    LODWORD(v13) = v12;
LABEL_18:
    if ( (PoDebug & 2) != 0 )
      DbgPrint("%s: DRIPS watchdog action %u result: 0x%x\n", "PopDripsWatchdogTakeAction", 4, v13);
    v6 = BugCheckParameter2;
LABEL_21:
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (a2 & 8) != 0 )
      {
        if ( (unsigned int)a1[3] <= 0x64 )
          __debugbreak();
      }
      else if ( v6 && (a2 & 0x20) != 0 )
      {
        PopFxBugCheck(0x619uLL, v6, (unsigned int)BugCheckParameter3, 0LL);
      }
    }
    IsVerifierEnabled = VfIsVerifierEnabled();
    if ( IsVerifierEnabled
      || (v21 = 0,
          SystemInformation = v15,
          IsVerifierEnabled = ZwQuerySystemInformation(
                                SystemCodeIntegrityInformation,
                                &SystemInformation,
                                v15,
                                &ReturnLength),
          IsVerifierEnabled >= 0)
      && (v21 & 2) != 0 )
    {
      if ( v6 && (a2 & 0x20) != 0 )
        PopFxBugCheck(0x619uLL, v6, (unsigned int)BugCheckParameter3, 0LL);
    }
  }
  return IsVerifierEnabled;
}
