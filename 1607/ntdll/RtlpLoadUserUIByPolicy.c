/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180071A10
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180071804 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007182C (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180071974 (RtlpMuiRegCreateLanguageList.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800F4F5C (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 LanguageList; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  char *v15; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+50h] [rbp-30h] BYREF
  char *v18; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  __int128 v21; // [rsp+70h] [rbp-10h]
  unsigned __int8 v22; // [rsp+B8h] [rbp+38h] BYREF
  __int16 v23; // [rsp+C8h] [rbp+48h] BYREF

  v15 = 0LL;
  Handle = 0LL;
  v22 = 0;
  v23 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v18 = a1;
    }
    else
    {
      v8 = OpenGlobalizationUserSettingsKey(0x2000000u, 0, v6, v7, (__int64)&v15);
      if ( v8 < 0 )
        goto LABEL_6;
      v18 = v15;
    }
    Handle = 0LL;
    p_DestinationString = &DestinationString;
    v17 = 48;
    v20 = 64;
    v21 = 0LL;
    v8 = NtOpenKey(&Handle, 131097LL, &v17);
    if ( v8 >= 0 )
    {
      v8 = RtlpLoadPolicyLanguageSpec(Handle, a2, &v22, &v23);
      if ( !v8 )
      {
        v12 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v12 + 4) < *(_WORD *)(v12 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * *(unsigned __int16 *)(*a3 + 4)) = v22;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v23;
            goto LABEL_6;
          }
          LanguageList = RtlpMuiRegGrowLanguageList(v12, v10, v11);
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1, 0, a2);
        }
        *a3 = LanguageList;
        if ( !LanguageList )
        {
          v8 = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_6:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v15 )
    CloseGlobalizationUserSettingsKey(v15);
  return (unsigned int)v8;
}
