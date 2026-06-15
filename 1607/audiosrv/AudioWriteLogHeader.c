/*
 * XREFs of AudioWriteLogHeader @ 0x180032634
 * Callers:
 *     ServiceMain @ 0x180032340 (ServiceMain.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_DDDSSS @ 0x180083884 (WPP_SF_DDDSSS.c)
 *     WPP_SF_ddddddd @ 0x1800839D0 (WPP_SF_ddddddd.c)
 */

int __fastcall AudioWriteLogHeader(__int64 a1)
{
  const wchar_t *v1; // rcx
  int result; // eax
  const wchar_t *v3; // rax
  DWORD LastError; // eax
  DWORD nSize; // [rsp+58h] [rbp-B0h] BYREF
  _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-A8h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+78h] [rbp-90h] BYREF
  __int16 v8; // [rsp+190h] [rbp+88h]
  WCHAR Buffer[16]; // [rsp+198h] [rbp+90h] BYREF

  nSize = 16;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, a1);
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
      v1 = &pwsz;
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = L" - ";
      if ( !VersionInformation.szCSDVersion[0] )
        v3 = &pwsz;
      WPP_SF_DDDSSS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (_DWORD)WPP_GLOBAL_Control,
        (unsigned int)&pwsz,
        VersionInformation.dwMajorVersion,
        VersionInformation.dwMinorVersion,
        VersionInformation.dwBuildNumber,
        (__int64)v3,
        (__int64)VersionInformation.szCSDVersion,
        (__int64)v1);
    }
  }
  else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, LastError);
  }
  GetSystemTime(&SystemTime);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
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
    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, Buffer);
  }
  return result;
}
