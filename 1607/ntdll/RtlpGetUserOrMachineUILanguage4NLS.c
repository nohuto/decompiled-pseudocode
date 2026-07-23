/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F3970
 * Callers:
 *     RtlLcidToLocaleName @ 0x180042E70 (RtlLcidToLocaleName.c)
 *     RtlpMatchUILanguage @ 0x1800EF4B4 (RtlpMatchUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800716C4 (LdrpQueryValueKey.c)
 *     CloseGlobalizationUserSettingsKey @ 0x1800717F4 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned __int64 *a3, __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  HANDLE CurrentUserKey; // [rsp+40h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+C8h] [rbp+7Fh] BYREF

  CurrentUserKey = 0LL;
  KeyHandle = 0LL;
  LODWORD(v16) = 0;
  v11 = 7;
  v7 = OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, (__int64)a3, a4, &CurrentUserKey);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    ObjectAttributes.RootDirectory = CurrentUserKey;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v7 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v11, 0LL, (ULONG *)&v16);
      if ( v7 >= 0 )
        goto LABEL_10;
    }
    if ( v7 == -2147483643 )
      goto LABEL_10;
    NtClose(KeyHandle);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    ObjectAttributes.RootDirectory = 0LL;
  }
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v7 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v11, 0LL, (ULONG *)&v16);
LABEL_10:
  if ( v7 != -1073741772 && (_DWORD)v16 )
  {
    if ( v7 != -2147483643 )
    {
LABEL_20:
      v7 = -1073741772;
      goto LABEL_21;
    }
    v8 = (unsigned int)(v16 + 1);
    v9 = (unsigned int)v8 >> 1;
    if ( !a2 )
    {
      v7 = 0;
LABEL_15:
      *a3 = v9;
      goto LABEL_21;
    }
    if ( *a3 < v8 >> 1 )
    {
      v7 = -1073741789;
      goto LABEL_15;
    }
    v7 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v11, a2, (ULONG *)&v16);
    if ( v7 >= 0 )
    {
      if ( v11 == 7 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( CurrentUserKey )
  {
    CloseGlobalizationUserSettingsKey((char *)CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v7;
}
