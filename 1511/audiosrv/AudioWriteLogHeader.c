/*
 * XREFs of AudioWriteLogHeader @ 0x18004556C
 * Callers:
 *     ServiceMain @ 0x180045270 (ServiceMain.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_DDDSSS @ 0x18009B10C (WPP_SF_DDDSSS.c)
 *     WPP_SF_ddddddd @ 0x18009B2AC (WPP_SF_ddddddd.c)
 */

int __fastcall AudioWriteLogHeader(__int64 a1)
{
  const wchar_t *v1; // rcx
  int result; // eax
  __int16 *v3; // rax
  DWORD LastError; // eax
  DWORD nSize; // [rsp+58h] [rbp-B0h] BYREF
  _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-A8h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+78h] [rbp-90h] BYREF
  __int16 v8; // [rsp+190h] [rbp+88h]
  WCHAR Buffer[16]; // [rsp+198h] [rbp+90h] BYREF

  nSize = 16;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_7f352500bd04dee852eccd7763aed2fc_Traceguids, a1);
  }
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
  {
    if ( (v8 & 0x80u) != 0 )
    {
      v1 = L"DC";
    }
    else if ( (v8 & 2) != 0 )
    {
      v1 = L"AS";
    }
    else
    {
      v1 = (const wchar_t *)&word_1800AFAB8;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = L" - ";
      if ( !VersionInformation.szCSDVersion[0] )
        v3 = &word_1800AFAB8;
      WPP_SF_DDDSSS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (_DWORD)WPP_GLOBAL_Control,
        (unsigned int)&word_1800AFAB8,
        VersionInformation.dwMajorVersion,
        VersionInformation.dwMinorVersion,
        VersionInformation.dwBuildNumber,
        (__int64)v3,
        (__int64)VersionInformation.szCSDVersion,
        (__int64)v1);
    }
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      (__int64)&WPP_7f352500bd04dee852eccd7763aed2fc_Traceguids,
      LastError);
  }
  GetSystemTime(&SystemTime);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      SystemTime.wSecond,
      SystemTime.wMinute,
      SystemTime.wYear,
      SystemTime.wMonth,
      SystemTime.wDay,
      SystemTime.wHour,
      SystemTime.wMinute,
      SystemTime.wSecond,
      SystemTime.wMilliseconds,
      nSize);
  }
  result = GetComputerNameExW(ComputerNameNetBIOS, Buffer, &nSize);
  if ( result
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_7f352500bd04dee852eccd7763aed2fc_Traceguids, Buffer);
  }
  return result;
}
