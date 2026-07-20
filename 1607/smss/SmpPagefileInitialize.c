/*
 * XREFs of SmpPagefileInitialize @ 0x1400067B0
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000A320 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpQueryFilterPagesDumpSetting @ 0x140007C04 (SmpQueryFilterPagesDumpSetting.c)
 *     SmpQueryCrashDumpType @ 0x140007C54 (SmpQueryCrashDumpType.c)
 *     SmpQueryDedicatedDumpSetting @ 0x140007D30 (SmpQueryDedicatedDumpSetting.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     memset_0 @ 0x14000CC60 (memset_0.c)
 */

NTSTATUS SmpPagefileInitialize()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-C8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+70h] [rbp-90h] BYREF
  char v20; // [rsp+18Ah] [rbp+8Ah]

  v15 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v17 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  qword_140025D58 = (__int64)&SmpPagingFileDescriptorList;
  SmpPagingFileDescriptorList = &SmpPagingFileDescriptorList;
  qword_140025D38 = (__int64)&SmpVolumeDescriptorList;
  SmpVolumeDescriptorList = (__int64)&SmpVolumeDescriptorList;
  v14 = 11141288;
  SmpMemorySize = (unsigned int)dword_140025A8C * (unsigned __int64)(unsigned int)dword_140025A88;
  v16 = 8388734;
  ObjectAttributes.RootDirectory = 0LL;
  SmpOsVolumeLetter = RtlUpcaseUnicodeChar(MEMORY[0x7FFE0030]);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&SmpMmKey, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&SmpCrashDumpKey, 0x2001Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      SmpDumpType = SmpQueryCrashDumpType(v2, v1, v3, v4);
      SmpUseDedicatedDumpFile = SmpQueryDedicatedDumpSetting(v6, v5, v7, v8);
      SmpUseFilterPagesDumpFile = SmpQueryFilterPagesDumpSetting(v10, v9, v11, v12);
      memset_0(&VersionInformation, 0, 0x11CuLL);
      VersionInformation.dwOSVersionInfoSize = 284;
      if ( RtlGetVersion(&VersionInformation) >= 0 )
      {
        v13 = SmpClientSku;
        if ( v20 == 1 )
          v13 = 1;
        SmpClientSku = v13;
      }
      return 0;
    }
  }
  return result;
}
