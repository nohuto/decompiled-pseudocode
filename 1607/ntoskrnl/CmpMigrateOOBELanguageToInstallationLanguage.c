/*
 * XREFs of CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407AE930
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 CmpMigrateOOBELanguageToInstallationLanguage()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  unsigned __int16 v2; // r8
  __int64 i; // rcx
  int v4; // edx
  __int16 v5; // dx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-48h] BYREF
  __int16 Data; // [rsp+68h] [rbp-18h] BYREF
  int v9; // [rsp+6Ah] [rbp-16h]
  __int16 v10; // [rsp+6Eh] [rbp-12h]

  result = 0LL;
  KeyHandle = 0LL;
  Data = 0;
  v9 = 0;
  v10 = 0;
  if ( CmInstallUILanguageFallbackToOOBm )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpCurrentControlSetControlNlsLanguagePathString;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( v1 >= 0 )
    {
      v2 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      for ( i = 3LL; i >= 0; --i )
      {
        v4 = v2 % 16;
        if ( (unsigned __int16)v4 <= 9u )
          v5 = v4 + 48;
        else
          v5 = v4 + 55;
        v2 >>= 4;
        *(&Data + i) = v5;
      }
      v1 = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpInstallLanguageString, 0, 1u, &Data, 8u);
      if ( v1 >= 0 )
        v1 = 0;
    }
    if ( KeyHandle )
      NtClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
