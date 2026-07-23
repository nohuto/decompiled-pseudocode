/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x180073990
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x1800738A0 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x180073980 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     ReadUlongFromKey @ 0x180073BF8 (ReadUlongFromKey.c)
 *     RtlGetVersion @ 0x1800742A0 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     ZwQueryLicenseValue @ 0x1800A7850 (ZwQueryLicenseValue.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // r14
  unsigned int Data; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Type[2]; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize[4]; // [rsp+80h] [rbp-80h] BYREF
  _OSVERSIONINFOEXW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
    DestinationString.Length = 0;
    *(_QWORD *)&DestinationString.MaximumLength = 0LL;
    *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
    HIWORD(DestinationString.Buffer) = 0;
    v6 = 0LL;
    *(_QWORD *)Type = 0LL;
    Data = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey((PHANDLE)Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)ReadUlongFromKey(*(HANDLE *)Type) >= 0 )
        v6 = Data;
      NtClose(*(HANDLE *)Type);
    }
    VersionInformation.dwOSVersionInfoSize = 284;
    RtlGetVersion(&VersionInformation);
    *a1 = v6
        + ((VersionInformation.dwBuildNumber
          + ((VersionInformation.dwMinorVersion + ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    DestinationString.Length = 0;
    *(_QWORD *)&DestinationString.MaximumLength = 0LL;
    *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
    HIWORD(DestinationString.Buffer) = 0;
    Data = 3;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, Type, &Data, 4u, ResultDataSize);
    *a2 = Data;
  }
  if ( a3 )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
    DestinationString.Length = 0;
    *(_QWORD *)&DestinationString.MaximumLength = 0LL;
    *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
    HIWORD(DestinationString.Buffer) = 0;
    *(_QWORD *)Type = 0LL;
    Data = 0;
    *a3 = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey((PHANDLE)Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)ReadUlongFromKey(*(HANDLE *)Type) >= 0 )
        *a3 = Data;
      NtClose(*(HANDLE *)Type);
    }
  }
}
