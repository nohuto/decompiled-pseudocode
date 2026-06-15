/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180006690
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180006498 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18000609C (-StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006210 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18000794C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     WPP_SF_SDq @ 0x18006B978 (WPP_SF_SDq.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchADGProcess(CAudioDGProcess *this, char a2)
{
  size_t v4; // rdx
  const unsigned __int16 *v5; // r8
  int ADGProcessSD; // ebx
  int v7; // edx
  int v8; // r8d
  signed int LastError; // eax
  __int64 v11; // rcx
  char *v12; // rcx
  signed int v13; // eax
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+58h] [rbp-B0h] BYREF
  _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *v16; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp-78h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+98h] [rbp-70h] BYREF
  WCHAR Buffer; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v20[526]; // [rsp+10Ah] [rbp+2h] BYREF

  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  StartupInfo.cb = 0;
  memset_0(&StartupInfo.lpReserved, 0, 0x60uLL);
  Buffer = 0;
  memset_0(v20, 0, 0x206uLL);
  memset(&ProcessAttributes, 0, sizeof(ProcessAttributes));
  if ( !GetSystemDirectoryW(&Buffer, 0x104u) )
  {
    LastError = GetLastError();
    ADGProcessSD = LastError;
    if ( LastError > 0 )
      ADGProcessSD = (unsigned __int16)LastError | 0x80070000;
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_22;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      14LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)ADGProcessSD);
    goto LABEL_21;
  }
  ADGProcessSD = StringCbCatExW(&Buffer, v4, v5, &v16, &v17);
  if ( ADGProcessSD < 0
    || (ADGProcessSD = StringCbPrintfW(v16, v17, L" 0x%Ix", *((_QWORD *)this + 13)), ADGProcessSD < 0)
    || (StartupInfo.cb = 104,
        ProcessAttributes.nLength = 24,
        ProcessAttributes.bInheritHandle = 0,
        ADGProcessSD = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor),
        ADGProcessSD < 0) )
  {
LABEL_21:
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
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
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SDq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
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
  v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      15,
      (unsigned int)&WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)&Buffer,
      ADGProcessSD);
    goto LABEL_21;
  }
LABEL_22:
  if ( *((_QWORD *)this + 11) )
  {
    if ( (struct _GUID *)v11 != &WPP_GLOBAL_Control && (*(_BYTE *)(v11 + 28) & 4) != 0 && *(_BYTE *)(v11 + 25) >= 4u )
      WPP_SF_D(
        *(_QWORD *)(v11 + 16),
        18LL,
        &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
        ProcessInformation.dwProcessId);
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      17LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)ADGProcessSD);
  }
  return (unsigned int)ADGProcessSD;
}
