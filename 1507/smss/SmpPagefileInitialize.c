/*
 * XREFs of SmpPagefileInitialize @ 0x140008580
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000B440 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpQueryFilterPagesDumpSetting @ 0x1400096B0 (SmpQueryFilterPagesDumpSetting.c)
 *     SmpQueryCrashDumpType @ 0x140009700 (SmpQueryCrashDumpType.c)
 *     SmpQueryDedicatedDumpSetting @ 0x1400097DC (SmpQueryDedicatedDumpSetting.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 */

NTSTATUS SmpPagefileInitialize()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  int v8; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v9; // [rsp+28h] [rbp-D8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v12; // [rsp+68h] [rbp-98h]
  _OSVERSIONINFOW VersionInformation; // [rsp+70h] [rbp-90h] BYREF
  char v14; // [rsp+18Ah] [rbp+8Ah]

  v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  qword_140023CB8 = (__int64)&SmpPagingFileDescriptorList;
  SmpPagingFileDescriptorList = &SmpPagingFileDescriptorList;
  qword_140023C98 = (__int64)&SmpVolumeDescriptorList;
  SmpVolumeDescriptorList = (__int64)&SmpVolumeDescriptorList;
  v11 = 11141288;
  SmpMemorySize = (unsigned int)dword_1400239EC * (unsigned __int64)(unsigned int)dword_1400239E8;
  v8 = 8388734;
  ObjectAttributes.RootDirectory = 0LL;
  SmpOsVolumeLetter = RtlUpcaseUnicodeChar(MEMORY[0x7FFE0030]);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&SmpMmKey, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&SmpCrashDumpKey, 0x2001Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      SmpDumpType = SmpQueryCrashDumpType(v2, v1);
      SmpUseDedicatedDumpFile = SmpQueryDedicatedDumpSetting(v4, v3);
      SmpUseFilterPagesDumpFile = SmpQueryFilterPagesDumpSetting(v6, v5);
      memset_0(&VersionInformation, 0, 0x11CuLL);
      VersionInformation.dwOSVersionInfoSize = 284;
      if ( RtlGetVersion(&VersionInformation) >= 0 )
      {
        v7 = SmpClientSku;
        if ( v14 == 1 )
          v7 = 1;
        SmpClientSku = v7;
      }
      return 0;
    }
  }
  return result;
}
