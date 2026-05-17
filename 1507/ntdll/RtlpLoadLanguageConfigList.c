/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x1800493C4
 * Callers:
 *     InitializeTEBUserLangList @ 0x18001B7C8 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x180048720 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800490C0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegFreeStringPool @ 0x180047C60 (RtlpMuiRegFreeStringPool.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180049B04 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180049B2C (OpenGlobalizationUserSettingsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x180049D70 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180049E84 (RtlpMuiRegCreateLanguageConfigList.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800E646C (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800E6504 (RtlpLoadPolicyLanguageSpec.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int64 LanguageConfigList; // rax
  int v15; // eax
  unsigned __int64 v16; // rcx
  _BYTE v17[8]; // [rsp+30h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v19; // [rsp+40h] [rbp-29h] BYREF
  HANDLE v20; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  int v22; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  __int128 v26; // [rsp+80h] [rbp+17h]
  char v27; // [rsp+D8h] [rbp+6Fh] BYREF
  char v28; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    Handle = 0LL;
    p_DestinationString = &DestinationString;
    v22 = 48;
    v23 = 0LL;
    v25 = 64;
    v26 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131097LL, &v22) >= 0 )
    {
      v12 = RtlpLoadPolicyLanguageSpec(Handle, a3, &v28, v17);
      if ( v12 >= 0 )
        goto LABEL_11;
      if ( a1 == 8 )
      {
        v27 = 0;
        if ( !(unsigned int)RtlpHasMachineUILock(Handle, &v27) && v27 == 1 )
          a1 = 4;
      }
      NtClose(Handle);
      Handle = 0LL;
    }
    v10 = OpenGlobalizationUserSettingsKey(0x2000000, 0, v8, v9, (__int64)&v19);
    v7 = v19;
    if ( v10 < 0 )
      v7 = 0LL;
    v19 = v7;
    if ( a1 != 8 )
    {
      if ( a1 != 4 )
        goto LABEL_10;
      if ( v7 )
      {
        RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
        Handle = 0LL;
        p_DestinationString = &DestinationString;
        v22 = 48;
        v23 = v7;
        v25 = 64;
        v26 = 0LL;
        v15 = NtOpenKey(&Handle, 131097LL, &v22);
      }
      else
      {
        v15 = -1073741772;
      }
      if ( v15 >= 0 )
        goto LABEL_10;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      Handle = 0LL;
      p_DestinationString = &DestinationString;
      v22 = 48;
      v23 = 0LL;
      v25 = 64;
      v26 = 0LL;
      v11 = NtOpenKey(&Handle, 131097LL, &v22);
      v12 = v11;
      if ( v11 >= 0 )
      {
LABEL_10:
        v12 = RtlpPopulateLanguageConfigList(Handle, a2, a3);
LABEL_11:
        v7 = v19;
        goto LABEL_12;
      }
LABEL_21:
      if ( v11 == -1073741772 )
        v12 = 0;
      goto LABEL_11;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      v20 = 0LL;
      p_DestinationString = &DestinationString;
      v23 = v7;
      v22 = 48;
      v25 = 64;
      v26 = 0LL;
      if ( (int)NtOpenKey(&v20, 131097LL, &v22) >= 0 )
      {
        v12 = RtlpLoadPolicyLanguageSpec(v20, a3, &v28, v17);
        if ( v12 >= 0 )
          goto LABEL_11;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      v23 = v19;
      Handle = 0LL;
      p_DestinationString = &DestinationString;
      v22 = 48;
      v25 = 64;
      v26 = 0LL;
      v11 = NtOpenKey(&Handle, 131097LL, &v22);
      v12 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      goto LABEL_21;
    }
    v12 = 0;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_12:
  if ( Handle )
  {
    NtClose(Handle);
    v7 = v19;
  }
  if ( v20 )
  {
    NtClose(v20);
    v7 = v19;
  }
  if ( v7 )
    CloseGlobalizationUserSettingsKey(v7);
  if ( v12 < 0 )
  {
    if ( a2 )
    {
      v16 = *a2;
      if ( *a2 != v6 )
      {
        if ( v16 )
          RtlpMuiRegFreeStringPool(v16);
        goto LABEL_46;
      }
    }
  }
  else if ( !*a2 )
  {
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( !LanguageConfigList )
    {
      v12 = -1073741801;
LABEL_46:
      *a2 = v6;
    }
  }
  return (unsigned int)v12;
}
