/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F3970
 * Callers:
 *     RtlLcidToLocaleName @ 0x180042E80 (RtlLcidToLocaleName.c)
 *     RtlpMatchUILanguage @ 0x1800EF4B4 (RtlpMatchUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800716D4 (LdrpQueryValueKey.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180071804 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007182C (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned __int64 *a3, __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-11h]
  char *v13; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  int v15; // [rsp+58h] [rbp+Fh]
  char *v16; // [rsp+60h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+70h] [rbp+27h]
  __int128 v19; // [rsp+78h] [rbp+2Fh]
  unsigned int v20; // [rsp+C8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  Handle = 0LL;
  v20 = 0;
  v11 = 7;
  v7 = OpenGlobalizationUserSettingsKey(0x2000000u, 0, (__int64)a3, a4, (__int64)&v13);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v16 = v13;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    Handle = 0LL;
    v16 = v13;
    v15 = 48;
    p_DestinationString = &DestinationString;
    v18 = 64;
    v19 = 0LL;
    v7 = NtOpenKey();
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v7 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v11, 0LL, &v20);
      if ( v7 >= 0 )
        goto LABEL_10;
    }
    if ( v7 == -2147483643 )
      goto LABEL_10;
    NtClose(Handle);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v16 = 0LL;
  }
  Handle = 0LL;
  p_DestinationString = &DestinationString;
  v15 = 48;
  v18 = 64;
  v19 = 0LL;
  v7 = NtOpenKey();
  if ( v7 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v7 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v11, 0LL, &v20);
LABEL_10:
  if ( v7 != -1073741772 && v20 )
  {
    if ( v7 != -2147483643 )
    {
LABEL_20:
      v7 = -1073741772;
      goto LABEL_21;
    }
    v8 = v20 + 1;
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
    v7 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v11, a2, &v20);
    if ( v7 >= 0 )
    {
      if ( v11 == 7 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( v13 )
  {
    CloseGlobalizationUserSettingsKey(v13);
    v13 = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
