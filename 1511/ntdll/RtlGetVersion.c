/*
 * XREFs of RtlGetVersion @ 0x1800742A0
 * Callers:
 *     RtlVerifyVersionInfo @ 0x180073630 (RtlVerifyVersionInfo.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180073990 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x18001C134 (RtlStringCbCopyW.c)
 *     RtlGetNtProductType @ 0x1800743D0 (RtlGetNtProductType.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  struct _PEB *v1; // rdi
  unsigned __int16 *Buffer; // r8
  DWORD dwOSVersionInfoSize; // ecx
  _NT_PRODUCT_TYPE v6; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  VersionInformation->dwMajorVersion = v1->OSMajorVersion;
  VersionInformation->dwMinorVersion = v1->OSMinorVersion;
  VersionInformation->dwBuildNumber = v1->OSBuildNumber;
  VersionInformation->dwPlatformId = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(VersionInformation->szCSDVersion, 0x100uLL, (__int64)Buffer) < 0 )
      VersionInformation->szCSDVersion[0] = 0;
  }
  else
  {
    VersionInformation->szCSDVersion[0] = 0;
  }
  dwOSVersionInfoSize = VersionInformation->dwOSVersionInfoSize;
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
  {
    VersionInformation->wServicePackMajor = HIBYTE(v1->OSCSDVersion);
    VersionInformation->wServicePackMinor = (unsigned __int8)v1->OSCSDVersion;
    VersionInformation->wSuiteMask = MEMORY[0x7FFE02D0];
    if ( dwOSVersionInfoSize == 292 )
      VersionInformation[1].dwOSVersionInfoSize = MEMORY[0x7FFE02D0] & 0x1FFFF;
    VersionInformation->wProductType = 0;
    if ( RtlGetNtProductType(&NtProductType) )
    {
      v6 = NtProductType;
      VersionInformation->wProductType = NtProductType;
      if ( v6 == NtProductWinNt )
      {
        VersionInformation->wSuiteMask &= ~0x10u;
        if ( VersionInformation->dwOSVersionInfoSize == 292 )
          VersionInformation[1].dwOSVersionInfoSize &= 0x1FFEFu;
      }
    }
  }
  return 0;
}
