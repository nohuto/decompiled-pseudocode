/*
 * XREFs of NtUserSetWindowsHookEx @ 0x14027A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1401E6C74 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402A3124 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 *     Feature_119486776__private_IsEnabledDeviceUsageNoInline @ 0x1402AF094 (Feature_119486776__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v8; // rsi
  char v10; // di
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 ULong64FromUser; // r15
  ULONG64 v17; // rcx
  __int64 *v18; // rax
  unsigned int *v19; // rcx
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  struct tagTHREADINFO *v24; // rax
  int v25; // ecx
  char v26; // di
  bool v27; // r14
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  volatile void *Address[2]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-60h]
  __int128 v34; // [rsp+80h] [rbp-48h]

  v8 = a2;
  if ( a4 + 1 > 0xF )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0LL;
      v26 = 0;
    }
    else
    {
      v26 = 1;
      v12 = 0LL;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v26;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        5,
        13,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        a4);
    }
    v25 = 1426;
    goto LABEL_51;
  }
  v10 = 1;
  if ( a4 <= 1 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v12 = 0LL;
      v10 = 0;
    }
    else
    {
      v12 = 0LL;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69152),
        3,
        5,
        14,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v24 = PtiCurrent((__int64)v19);
    *(_QWORD *)(*((_QWORD *)v24 + 64) + 224LL) |= 0x1000uLL;
    v25 = 5;
LABEL_51:
    UserSetLastError(v25);
    return v12;
  }
  EnterLeaveCritShared::EnterLeaveCritShared(Address, 1LL);
  v12 = 0LL;
  if ( !a3 )
  {
    v13 = 0LL;
    goto LABEL_8;
  }
  v13 = PtiFromThreadId(a3);
  if ( v13 )
  {
LABEL_8:
    if ( !a1 )
      goto LABEL_24;
    CurrentProcess = PsGetCurrentProcess(v11);
    Address[0] = (volatile void *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(Address[0], 0x7D0uLL, 1u);
    if ( *((_QWORD *)Address[0] + 2) == a1 )
    {
      a1 = 0LL;
      v8 = 0LL;
    }
    if ( !a1 || !v8 )
    {
LABEL_24:
      ULong64FromUser = 0LL;
LABEL_25:
      if ( a6 && (a6 & 0xFFFFFFBD) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3544LL);
      if ( (unsigned int)Feature_119486776__private_IsEnabledDeviceUsageNoInline() )
      {
        v12 = zzzSetWindowsHookEx_New(a1, ULong64FromUser, v13, a4, a5, a6, 0LL);
      }
      else
      {
        v18 = (__int64 *)zzzSetWindowsHookEx(a1, ULong64FromUser, v13, a4, a5, a6, 0LL);
        if ( v18 )
          v12 = *v18;
      }
      EtwTraceAuditApiSetWindowsHookEx(a4, ULong64FromUser, a1, a5, v12);
      goto LABEL_6;
    }
    *(_OWORD *)Address = 0LL;
    LODWORD(Address[0]) = RtlReadULongFromUser(v8);
    ULong64FromUser = RtlReadULong64FromUser(v8 + 8);
    Address[1] = (volatile void *)ULong64FromUser;
    v34 = *(_OWORD *)Address;
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = ULong64FromUser + LOWORD(Address[0]) + 2LL;
    if ( v17 <= ULong64FromUser || v17 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( LOWORD(Address[0]) > WORD1(Address[0]) )
    {
      if ( ((__int64)Address[0] & 1) == 0 )
        goto LABEL_22;
    }
    else if ( ((__int64)Address[0] & 1) == 0 )
    {
      v33 = ULong64FromUser;
      goto LABEL_25;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3532LL);
LABEL_22:
    ExRaiseAccessViolation();
  }
  UserSetLastError(87);
LABEL_6:
  UserSessionSwitchLeaveCrit(v14);
  return v12;
}
