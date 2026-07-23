/*
 * XREFs of RtlGetVersion @ 0x18002EE40
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002EBD0 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A750 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180085A90 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002CD30 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     RtlStringCbCopyW @ 0x180040FC4 (RtlStringCbCopyW.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  struct _PEB *v1; // rdi
  wchar_t *Buffer; // r8
  _NT_PRODUCT_TYPE v5; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  VersionInformation->dwMajorVersion = v1->OSMajorVersion;
  VersionInformation->dwMinorVersion = v1->OSMinorVersion;
  VersionInformation->dwBuildNumber = v1->OSBuildNumber;
  VersionInformation->dwPlatformId = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(VersionInformation->szCSDVersion, 256LL) < 0 )
      VersionInformation->szCSDVersion[0] = 0;
  }
  else
  {
    VersionInformation->szCSDVersion[0] = 0;
  }
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
  {
    VersionInformation->wServicePackMajor = HIBYTE(v1->OSCSDVersion);
    VersionInformation->wServicePackMinor = (unsigned __int8)v1->OSCSDVersion;
    VersionInformation->wSuiteMask = RtlGetSuiteMask();
    if ( VersionInformation->dwOSVersionInfoSize == 292 )
      VersionInformation[1].dwOSVersionInfoSize = RtlGetSuiteMask() & 0x1FFFF;
    VersionInformation->wProductType = 0;
    if ( RtlGetNtProductType(&NtProductType) )
    {
      v5 = NtProductType;
      VersionInformation->wProductType = NtProductType;
      if ( v5 == NtProductWinNt )
      {
        VersionInformation->wSuiteMask &= ~0x10u;
        if ( VersionInformation->dwOSVersionInfoSize == 292 )
          VersionInformation[1].dwOSVersionInfoSize &= 0x1FFEFu;
      }
    }
  }
  return 0;
}
