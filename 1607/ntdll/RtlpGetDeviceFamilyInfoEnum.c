/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x18007A760
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x18007A670 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x18007A750 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlGetVersion @ 0x18002EE50 (RtlGetVersion.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     ReadUlongFromKey @ 0x18007A9C8 (ReadUlongFromKey.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     ZwQueryLicenseValue @ 0x1800A8C10 (ZwQueryLicenseValue.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // r14
  unsigned int v7; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v11[5]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v12[16]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v13[72]; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    memset(v11, 0, sizeof(v11));
    DestinationString.Length = 0;
    *(_QWORD *)&DestinationString.MaximumLength = 0LL;
    *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
    HIWORD(DestinationString.Buffer) = 0;
    v6 = 0LL;
    Handle = 0LL;
    v7 = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v10 = 48;
    v11[1] = &DestinationString;
    v11[0] = 0LL;
    LODWORD(v11[2]) = 64;
    *(_OWORD *)&v11[3] = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"UBR", &v7) >= 0 )
        v6 = v7;
      NtClose(Handle);
    }
    v13[0] = 284;
    RtlGetVersion((__int64)v13);
    *a1 = v6 + ((v13[3] + ((v13[2] + ((unsigned __int64)v13[1] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    DestinationString.Length = 0;
    *(_QWORD *)&DestinationString.MaximumLength = 0LL;
    *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
    HIWORD(DestinationString.Buffer) = 0;
    v7 = 3;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &Handle, &v7, 4LL, v12);
    *a2 = v7;
  }
  if ( a3 )
  {
    memset(v11, 0, sizeof(v11));
    DestinationString.Length = 0;
    *(_QWORD *)&DestinationString.MaximumLength = 0LL;
    *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
    HIWORD(DestinationString.Buffer) = 0;
    Handle = 0LL;
    v7 = 0;
    *a3 = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    v10 = 48;
    v11[1] = &DestinationString;
    v11[0] = 0LL;
    LODWORD(v11[2]) = 64;
    *(_OWORD *)&v11[3] = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"DeviceForm", &v7) >= 0 )
        *a3 = v7;
      NtClose(Handle);
    }
  }
}
