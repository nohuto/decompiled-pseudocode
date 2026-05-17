/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180005100
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180005200 (RtlpMuiRegCreateLanguageList.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180006D78 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009598 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800EAFE4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800EC1E8 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // ebx
  __int64 LanguageList; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  __int128 v18; // [rsp+70h] [rbp-10h]
  unsigned __int8 v19; // [rsp+B8h] [rbp+38h] BYREF
  __int16 v20; // [rsp+C8h] [rbp+48h] BYREF

  v12 = 0LL;
  Handle = 0LL;
  v19 = 0;
  v20 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v15 = a1;
    }
    else
    {
      v8 = OpenGlobalizationUserSettingsKey(0x2000000, 0, v6, v7, (__int64)&v12);
      if ( v8 < 0 )
        goto LABEL_6;
      v15 = v12;
    }
    Handle = 0LL;
    p_DestinationString = &DestinationString;
    v14 = 48;
    v17 = 64;
    v18 = 0LL;
    v8 = NtOpenKey(&Handle, 131097LL, &v14);
    if ( v8 >= 0 )
    {
      v8 = RtlpLoadPolicyLanguageSpec(Handle, a2, &v19, &v20);
      if ( !v8 )
      {
        if ( *(_QWORD *)a3 )
        {
          if ( *(_WORD *)(*(_QWORD *)a3 + 4LL) < *(_WORD *)(*(_QWORD *)a3 + 6LL) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)a3 + 24LL) + 6LL * *(unsigned __int16 *)(*(_QWORD *)a3 + 4LL)) = v19;
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)a3 + 24LL)
                     + 6LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)a3 + 4LL))++
                     + 4) = v20;
            goto LABEL_6;
          }
          LanguageList = RtlpMuiRegGrowLanguageList();
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a2);
        }
        *(_QWORD *)a3 = LanguageList;
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
  if ( v12 )
    CloseGlobalizationUserSettingsKey(v12);
  return (unsigned int)v8;
}
