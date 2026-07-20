/*
 * XREFs of sub_1400064F8 @ 0x1400064F8
 * Callers:
 *     sub_140009BE0 @ 0x140009BE0 (sub_140009BE0.c)
 * Callees:
 *     sub_140007750 @ 0x140007750 (sub_140007750.c)
 *     sub_1400077A0 @ 0x1400077A0 (sub_1400077A0.c)
 *     sub_14000787C @ 0x14000787C (sub_14000787C.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memset @ 0x14000C48C (memset.c)
 */

NTSTATUS sub_1400064F8()
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
  _BYTE VersionInformation[284]; // [rsp+70h] [rbp-90h] BYREF

  v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  qword_140020458 = (__int64)&qword_140020450;
  qword_140020450 = &qword_140020450;
  qword_140020438 = (__int64)&qword_140020430;
  qword_140020430 = (__int64)&qword_140020430;
  v11 = 11141288;
  qword_140020480 = (unsigned int)dword_14002018C * (unsigned __int64)(unsigned int)dword_140020188;
  v8 = 8388734;
  ObjectAttributes.RootDirectory = 0LL;
  word_140020448 = RtlUpcaseUnicodeChar(MEMORY[0x7FFE0030]);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      dword_140020478 = sub_1400077A0(v2, v1);
      byte_140020200 = sub_14000787C(v4, v3);
      byte_140020201 = sub_140007750(v6, v5);
      memset(VersionInformation, 0, sizeof(VersionInformation));
      *(_DWORD *)VersionInformation = 284;
      if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0 )
      {
        v7 = byte_14002046D;
        if ( VersionInformation[282] == 1 )
          v7 = 1;
        byte_14002046D = v7;
      }
      return 0;
    }
  }
  return result;
}
