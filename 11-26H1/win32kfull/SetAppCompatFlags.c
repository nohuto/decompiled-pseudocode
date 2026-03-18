/*
 * XREFs of SetAppCompatFlags @ 0x140269460
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1401B8B20 (IsCurrentDesktopComposed.c)
 *     WPP_RECORDER_AND_TRACE_SF_DS @ 0x1401D2A68 (WPP_RECORDER_AND_TRACE_SF_DS.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __report_rangecheckfailure @ 0x140297D70 (__report_rangecheckfailure.c)
 *     SetAppImeCompatFlags @ 0x1402CE334 (SetAppImeCompatFlags.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1402D1F7C (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 v3; // rax
  int v4; // ecx
  struct _UNICODE_STRING *v6; // rax
  char v7; // r14
  char *v8; // rbx
  WCHAR *ULong64FromUser; // rax
  ULONG64 v10; // rdx
  PWSTR Buffer; // rcx
  PWSTR v12; // rbx
  WCHAR *v13; // rdx
  PWSTR v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // r15
  _WORD *v17; // rcx
  size_t v18; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  bool v34; // si
  __int64 UserSessionState; // rax
  int v36; // r8d
  int v37; // edx
  ULONG Value; // [rsp+50h] [rbp-228h] BYREF
  volatile void *Address; // [rsp+58h] [rbp-220h]
  int v40; // [rsp+60h] [rbp-218h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-208h] BYREF
  unsigned int v42; // [rsp+80h] [rbp-1F8h]
  PWSTR v43; // [rsp+88h] [rbp-1F0h]
  PWSTR v44; // [rsp+90h] [rbp-1E8h]
  __int64 v45; // [rsp+98h] [rbp-1E0h]
  __int64 v46; // [rsp+A0h] [rbp-1D8h]
  __int64 v47; // [rsp+A8h] [rbp-1D0h]
  __int64 v48; // [rsp+B8h] [rbp-1C0h]
  struct _UNICODE_STRING v49; // [rsp+C0h] [rbp-1B8h] BYREF
  struct _UNICODE_STRING v50; // [rsp+D0h] [rbp-1A8h] BYREF
  WCHAR v51[96]; // [rsp+F0h] [rbp-188h] BYREF
  WCHAR SourceString[80]; // [rsp+1B0h] [rbp-C8h] BYREF

  Value = 0;
  v50 = 0LL;
  v49 = 0LL;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  Address = (volatile void *)PsGetProcessPeb(ThreadProcess);
  v3 = a1[87];
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 672);
    *((_DWORD *)a1 + 168) = v4;
    a1[85] = *(_QWORD *)(v3 + 680);
    *(_DWORD *)(a1[64] + 20LL) = v4;
    *(_DWORD *)(a1[64] + 24LL) = *((_DWORD *)a1 + 170);
    return 0LL;
  }
  v6 = (struct _UNICODE_STRING *)a1[66];
  v7 = 1;
  if ( !v6 )
  {
    v45 = 1LL;
    ProbeForRead(Address, 1uLL, 1u);
    v8 = (char *)*((_QWORD *)Address + 4);
    v46 = 1LL;
    ProbeForRead(v8, 1uLL, 1u);
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
    *(_DWORD *)&DestinationString.Length = RtlReadULongFromUser(v8 + 96);
    ULong64FromUser = (WCHAR *)RtlReadULong64FromUser(v8 + 104);
    DestinationString.Buffer = ULong64FromUser;
    v49 = DestinationString;
    if ( ((unsigned __int8)ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (ULONG64)ULong64FromUser + DestinationString.Length + 2;
    if ( v10 <= (unsigned __int64)ULong64FromUser || v10 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( DestinationString.Length > DestinationString.MaximumLength )
    {
      if ( (DestinationString.Length & 1) == 0 )
        goto LABEL_71;
    }
    else if ( (DestinationString.Length & 1) == 0 )
    {
      v6 = &v49;
      goto LABEL_11;
    }
    LODWORD(Address) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 216LL);
LABEL_71:
    ExRaiseAccessViolation();
  }
LABEL_11:
  Buffer = v6->Buffer;
  v12 = &Buffer[(unsigned __int64)v6->Length >> 1];
  v44 = v12;
  v13 = v12;
  v43 = v12;
  while ( v12 != Buffer )
  {
    if ( *v12 == 46 )
      goto LABEL_15;
    v44 = --v12;
  }
  v12 = v13;
  v44 = v13;
LABEL_15:
  v14 = v12;
  v43 = v12;
  while ( v14 != Buffer )
  {
    if ( *v14 == 92 || *v14 == 58 )
    {
      v43 = ++v14;
      break;
    }
    v43 = --v14;
  }
  v15 = 2 * (v12 - v14);
  v42 = v15;
  if ( v15 >= 0xA4 )
    v15 = 162;
  v42 = v15;
  v16 = v15;
  memmove(v51, v14, v15);
  v17 = (_WORD *)(a1[57] + 976LL);
  if ( !*v17 )
  {
    v18 = 30LL;
    if ( v15 < 0x1E )
      v18 = v15;
    memmove(v17, v14, v18);
    *(_WORD *)(a1[57] + 1006LL) = 0;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
  v47 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v20 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process = v20;
    v47 = v20;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) == 0 )
  {
    v24 = *((_QWORD *)Address + 90);
  }
  else
  {
    v22 = (unsigned int *)(PsGetThreadTeb(*a1) + 8240);
    ProbeForRead(v22, 4uLL, 4u);
    v23 = *v22;
    ProbeForRead((volatile void *)(unsigned int)v23, 0x488uLL, 4u);
    v24 = *(_QWORD *)(v23 + 480);
  }
  a1[85] = v24;
  if ( (v24 & 0x800000000000000LL) != 0 )
  {
    v40 = 0;
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL);
    v29 = PsGetCurrentProcessWin32Process(v25);
    v48 = v29;
    if ( v29 )
    {
      v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
      v48 = v29;
    }
    *(_DWORD *)(v29 + 12) |= 0x20000000u;
    TraceLoggingGDIScaledAppEvent();
  }
  v26 = *((unsigned int *)a1 + 170);
  *(_DWORD *)(a1[64] + 24LL) = v26;
  if ( (a1[85] & 0x2000000) != 0 || (v27 = IsCurrentDesktopComposed(v26, v20), v28 = 0LL, !v27) )
    v28 = 1LL;
  LOBYTE(v26) = *(_BYTE *)(a1[57] + 808LL) & 0x30;
  if ( (_BYTE)v26 == 16 )
    *(_QWORD *)a1[64] |= 0x10000000uLL;
  if ( (_DWORD)v28 )
  {
LABEL_46:
    *(_QWORD *)a1[64] |= 0x20000000uLL;
    goto LABEL_49;
  }
  v26 = 0x880000000000000LL;
  if ( (a1[85] & 0x880000000000000LL) == 0 )
  {
    v26 = a1[57];
    if ( (*(_BYTE *)(v26 + 808) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v26) )
        *(_QWORD *)(a1[64] + 224LL) |= 0x80uLL;
      goto LABEL_49;
    }
    goto LABEL_46;
  }
  *(_QWORD *)(a1[64] + 224LL) |= 0x10uLL;
LABEL_49:
  if ( _bittest64(a1 + 85, 0x38u) )
    *(_QWORD *)(a1[64] + 224LL) |= 0x20uLL;
  v30 = *((_DWORD *)a1 + 170);
  if ( (v30 & 0x10000000) == 0 )
  {
    v26 = 1536LL;
    if ( *((_WORD *)a1 + 332) < 0x600u )
    {
      *((_DWORD *)a1 + 170) = v30 | 0x20000000;
      *(_DWORD *)(a1[64] + 24LL) |= 0x20000000u;
    }
  }
  v31 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v31 >= 0xB4 )
    _report_rangecheckfailure(v26, v28, v21);
  *(WCHAR *)((char *)v51 + v31) = 0;
  v32 = PsGetCurrentProcessWin32Process(v26);
  if ( v32 )
    v32 &= -(__int64)(*(_QWORD *)v32 != 0LL);
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v32 + 12) & 0x80u) != 0 ? 43 : 33, v51, 0LL) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v33);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v7;
    WPP_RECORDER_AND_TRACE_SF_DS(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(UserSessionState + 69152),
      (unsigned int)SourceString,
      80,
      0);
  }
  *(_DWORD *)(a1[64] + 20LL) = Value;
  *((_DWORD *)a1 + 168) = Value;
  *(WCHAR *)((char *)v51 + v31) = 0;
  RtlInitUnicodeString(&v50, v51);
  return SetAppImeCompatFlags(a1, &v50);
}
