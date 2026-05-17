/*
 * XREFs of RtlpSetMachineUILanguagesImmediate @ 0x1800E7C4C
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180071804 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007182C (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwCreateKey @ 0x1800A67C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 */

__int64 RtlpSetMachineUILanguagesImmediate()
{
  int Key; // ebx
  __int64 v1; // r8
  __int64 v2; // r9
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v5; // [rsp+50h] [rbp-30h]
  char *v6; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  __int128 v9; // [rsp+70h] [rbp-10h]
  char *v10; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v10 = 0LL;
  DestinationString.Length = 0;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  p_DestinationString = &DestinationString;
  v5 = 48;
  v6 = 0LL;
  v8 = 64;
  v9 = 0LL;
  Key = ZwCreateKey();
  if ( Key >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    Key = ZwSetValueKey();
    if ( Key >= 0 && (int)OpenGlobalizationUserSettingsKey(0x2000000u, 3u, v1, v2, (__int64)&v10) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      v6 = v10;
      p_DestinationString = &DestinationString;
      v5 = 48;
      v8 = 64;
      v9 = 0LL;
      Key = ZwCreateKey();
      if ( Key >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        Key = ZwSetValueKey();
      }
    }
  }
  if ( v10 )
    CloseGlobalizationUserSettingsKey(v10);
  return (unsigned int)Key;
}
