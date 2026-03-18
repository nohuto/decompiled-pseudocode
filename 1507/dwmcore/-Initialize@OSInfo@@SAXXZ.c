/*
 * XREFs of ?Initialize@OSInfo@@SAXXZ @ 0x180095084
 * Callers:
 *     ?Startup@@YAJXZ @ 0x180095124 (-Startup@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void OSInfo::Initialize(void)
{
  BOOL Version; // eax
  int v1; // ecx
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-168h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int8 v4; // [rsp+16Ah] [rbp-1Eh]

  GetSystemInfo(&SystemInfo);
  OSInfo::VAllocChunk = SystemInfo.dwAllocationGranularity;
  OSInfo::PageSize = SystemInfo.dwPageSize;
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = GetVersionExW(&VersionInformation);
  v1 = 0;
  if ( Version )
  {
    OSInfo::MajorVersion = VersionInformation.dwMajorVersion;
    LOBYTE(v1) = VersionInformation.dwPlatformId == 2;
    OSInfo::MinorVersion = VersionInformation.dwMinorVersion;
    OSInfo::ProductType = v4;
    OSInfo::IsNT = v1;
  }
}
