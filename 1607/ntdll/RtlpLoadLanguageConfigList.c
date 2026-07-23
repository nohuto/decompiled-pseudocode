/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x1800710B4
 * Callers:
 *     RtlpInitializeUserList @ 0x180010CD4 (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x180012650 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x180070DB0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x1800717F4 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x180071B00 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180071C14 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800720C8 (RtlpMuiRegFreeStringPool.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800F3CCC (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  void *v5; // r12
  HANDLE v6; // rdi
  int v7; // eax
  NTSTATUS v8; // eax
  int PolicyLanguageSpec; // ebx
  __int64 LanguageConfigList; // rax
  NTSTATUS v12; // eax
  void *v13; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  HANDLE CurrentUserKey; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  CurrentUserKey = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a2 && a3 )
  {
    v5 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( PolicyLanguageSpec >= 0 )
        goto LABEL_11;
      if ( a1 == 8 )
        RtlpHasMachineUILock(KeyHandle);
      NtClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v7 = OpenGlobalizationUserSettingsKey(0x2000000u, &CurrentUserKey);
    v6 = CurrentUserKey;
    if ( v7 < 0 )
      v6 = 0LL;
    CurrentUserKey = v6;
    if ( a1 != 8 )
    {
      if ( a1 != 4 )
        goto LABEL_10;
      if ( v6 )
      {
        RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v6;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
      else
      {
        v12 = -1073741772;
      }
      if ( v12 >= 0 )
        goto LABEL_10;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v8;
      if ( v8 >= 0 )
      {
LABEL_10:
        PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle);
LABEL_11:
        v6 = CurrentUserKey;
        goto LABEL_12;
      }
LABEL_21:
      if ( v8 == -1073741772 )
        PolicyLanguageSpec = 0;
      goto LABEL_11;
    }
    if ( v6 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      Handle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
        if ( PolicyLanguageSpec >= 0 )
          goto LABEL_11;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = CurrentUserKey;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v8;
      if ( v8 >= 0 )
        goto LABEL_10;
      goto LABEL_21;
    }
    PolicyLanguageSpec = 0;
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_12:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    v6 = CurrentUserKey;
  }
  if ( Handle )
  {
    NtClose(Handle);
    v6 = CurrentUserKey;
  }
  if ( v6 )
    CloseGlobalizationUserSettingsKey(v6);
  if ( PolicyLanguageSpec < 0 )
  {
    if ( a2 )
    {
      v13 = (void *)*a2;
      if ( (void *)*a2 != v5 )
      {
        if ( v13 )
          RtlpMuiRegFreeStringPool(v13);
        goto LABEL_44;
      }
    }
  }
  else if ( !*a2 )
  {
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( !LanguageConfigList )
    {
      PolicyLanguageSpec = -1073741801;
LABEL_44:
      *a2 = (__int64)v5;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
