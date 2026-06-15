/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180033478
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180033280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002FB10 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180033D00 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180033D7C (-StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     WPP_SF_SDq @ 0x18006A708 (WPP_SF_SDq.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchADGProcess(CAudioDGProcess *this, char a2)
{
  unsigned __int64 v4; // rdx
  const unsigned __int16 *v5; // r8
  signed int ADGProcessSD; // ebx
  int v7; // edx
  int v8; // r8d
  signed int LastError; // eax
  TraceLoggingHProvider v11; // rcx
  char *v12; // rcx
  signed int v13; // eax
  unsigned int dwCreationFlags; // [rsp+30h] [rbp-D8h]
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+58h] [rbp-B0h] BYREF
  _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *v17; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp-78h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+98h] [rbp-70h] BYREF
  WCHAR Buffer; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v21[526]; // [rsp+10Ah] [rbp+2h] BYREF

  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  StartupInfo.cb = 0;
  memset_0(&StartupInfo.lpReserved, 0, 0x60uLL);
  Buffer = 0;
  memset_0(v21, 0, 0x206uLL);
  memset(&ProcessAttributes, 0, sizeof(ProcessAttributes));
  if ( !GetSystemDirectoryW(&Buffer, 0x104u) )
  {
    LastError = GetLastError();
    ADGProcessSD = LastError;
    if ( LastError > 0 )
      ADGProcessSD = (unsigned __int16)LastError | 0x80070000;
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_22;
    }
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      (unsigned int)ADGProcessSD);
    goto LABEL_21;
  }
  ADGProcessSD = StringCbCatExW(&Buffer, v4, v5, &v17, &v18, dwCreationFlags);
  if ( ADGProcessSD < 0
    || (ADGProcessSD = StringCbPrintfW(v17, v18, L" 0x%Ix", *((_QWORD *)this + 13)), ADGProcessSD < 0)
    || (StartupInfo.cb = 104,
        ProcessAttributes.nLength = 24,
        ProcessAttributes.bInheritHandle = 0,
        ADGProcessSD = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor),
        ADGProcessSD < 0) )
  {
LABEL_21:
    v11 = WPP_GLOBAL_Control;
    goto LABEL_22;
  }
  if ( CreateProcessW(
         0LL,
         &Buffer,
         &ProcessAttributes,
         0LL,
         1,
         a2 != 0 ? 0x40000 : 0,
         0LL,
         0LL,
         &StartupInfo,
         &ProcessInformation) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SDq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v7,
        v8,
        (unsigned int)&Buffer,
        ProcessInformation.dwProcessId,
        (char)ProcessInformation.hProcess);
    }
    *((_QWORD *)this + 11) = ProcessInformation.hProcess;
    goto LABEL_11;
  }
  v13 = GetLastError();
  ADGProcessSD = v13;
  if ( v13 > 0 )
    ADGProcessSD = (unsigned __int16)v13 | 0x80070000;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15,
      (unsigned int)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      (unsigned int)&Buffer,
      ADGProcessSD);
    goto LABEL_21;
  }
LABEL_22:
  if ( *((_QWORD *)this + 11) )
  {
    if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v11 + 28) & 4) != 0
      && *((_BYTE *)v11 + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)v11 + 2),
        18LL,
        &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
        ProcessInformation.dwProcessId);
    }
    WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
    v12 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v12);
      *((_QWORD *)this + 11) = 0LL;
    }
  }
LABEL_11:
  operator delete(ProcessAttributes.lpSecurityDescriptor);
  ProcessAttributes.lpSecurityDescriptor = 0LL;
  if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( ADGProcessSD < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      (unsigned int)ADGProcessSD);
  }
  return (unsigned int)ADGProcessSD;
}
