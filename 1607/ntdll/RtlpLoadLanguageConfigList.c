/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x1800710C4
 * Callers:
 *     RtlpInitializeUserList @ 0x180010CE4 (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x180012660 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x180070DC0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180071804 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007182C (OpenGlobalizationUserSettingsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x180071B10 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180071C24 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800720D8 (RtlpMuiRegFreeStringPool.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800F3CCC (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int64 LanguageConfigList; // rax
  int v15; // eax
  char v16[8]; // [rsp+30h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  int v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  __int128 v25; // [rsp+80h] [rbp+17h]
  char v26; // [rsp+D8h] [rbp+6Fh] BYREF
  char v27; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    Handle = 0LL;
    p_DestinationString = &DestinationString;
    v21 = 48;
    v22 = 0LL;
    v24 = 64;
    v25 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131097LL, &v21) >= 0 )
    {
      v12 = RtlpLoadPolicyLanguageSpec(Handle, a3, &v27, v16);
      if ( v12 >= 0 )
        goto LABEL_11;
      if ( a1 == 8 )
      {
        v26 = 0;
        if ( !(unsigned int)RtlpHasMachineUILock(Handle, &v26) && v26 == 1 )
          a1 = 4;
      }
      NtClose(Handle);
      Handle = 0LL;
    }
    v10 = OpenGlobalizationUserSettingsKey(0x2000000, 0, v8, v9, (__int64)&v18);
    v7 = v18;
    if ( v10 < 0 )
      v7 = 0LL;
    v18 = v7;
    if ( a1 != 8 )
    {
      if ( a1 != 4 )
        goto LABEL_10;
      if ( v7 )
      {
        RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
        Handle = 0LL;
        p_DestinationString = &DestinationString;
        v21 = 48;
        v22 = v7;
        v24 = 64;
        v25 = 0LL;
        v15 = NtOpenKey(&Handle, 131097LL, &v21);
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
      v21 = 48;
      v22 = 0LL;
      v24 = 64;
      v25 = 0LL;
      v11 = NtOpenKey(&Handle, 131097LL, &v21);
      v12 = v11;
      if ( v11 >= 0 )
      {
LABEL_10:
        v12 = RtlpPopulateLanguageConfigList(Handle, a2, a3);
LABEL_11:
        v7 = v18;
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
      v19 = 0LL;
      p_DestinationString = &DestinationString;
      v22 = v7;
      v21 = 48;
      v24 = 64;
      v25 = 0LL;
      if ( (int)NtOpenKey(&v19, 131097LL, &v21) >= 0 )
      {
        v12 = RtlpLoadPolicyLanguageSpec(v19, a3, &v27, v16);
        if ( v12 >= 0 )
          goto LABEL_11;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      v22 = v18;
      Handle = 0LL;
      p_DestinationString = &DestinationString;
      v21 = 48;
      v24 = 64;
      v25 = 0LL;
      v11 = NtOpenKey(&Handle, 131097LL, &v21);
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
    v7 = v18;
  }
  if ( v19 )
  {
    NtClose(v19);
    v7 = v18;
  }
  if ( v7 )
    CloseGlobalizationUserSettingsKey(v7);
  if ( v12 < 0 )
  {
    if ( a2 && *a2 != v6 )
    {
      if ( *a2 )
        RtlpMuiRegFreeStringPool();
      goto LABEL_46;
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
