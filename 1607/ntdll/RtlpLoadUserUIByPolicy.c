/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180071A00
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712C8 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x1800717F4 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180071964 (RtlpMuiRegCreateLanguageList.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800F4F5C (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS PolicyLanguageSpec; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *LanguageList; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE CurrentUserKey; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  CurrentUserKey = 0LL;
  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      ObjectAttributes.RootDirectory = a1;
    }
    else
    {
      PolicyLanguageSpec = OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, v6, v7, &CurrentUserKey);
      if ( PolicyLanguageSpec < 0 )
        goto LABEL_6;
      ObjectAttributes.RootDirectory = CurrentUserKey;
    }
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PolicyLanguageSpec = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( PolicyLanguageSpec >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( !PolicyLanguageSpec )
      {
        v12 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v12 + 4) < *(_WORD *)(v12 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * *(unsigned __int16 *)(*a3 + 4)) = 0;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = 0;
            goto LABEL_6;
          }
          LanguageList = (_QWORD *)RtlpMuiRegGrowLanguageList(v12, v10, v11);
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1, 0, a2);
        }
        *a3 = (__int64)LanguageList;
        if ( !LanguageList )
        {
          PolicyLanguageSpec = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_6:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( CurrentUserKey )
    CloseGlobalizationUserSettingsKey((char *)CurrentUserKey);
  return (unsigned int)PolicyLanguageSpec;
}
