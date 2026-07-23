/*
 * XREFs of RtlpSetMachineUILanguagesImmediate @ 0x1800D6C0C
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180049B04 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180049B2C (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwCreateKey @ 0x180093AD0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180093F00 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlpSetMachineUILanguagesImmediate(__int64 a1)
{
  NTSTATUS v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  DestinationString.Length = 0;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  KeyHandle = 0LL;
  v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 7u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
    if ( v2 >= 0 && OpenGlobalizationUserSettingsKey(0x2000000u, 3LL, v3, v4, (HANDLE *)&v10) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      ObjectAttributes.RootDirectory = (HANDLE)v10;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Handle = 0LL;
      v2 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        v2 = ZwSetValueKey(Handle, &DestinationString, 0, 7u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v10 )
    CloseGlobalizationUserSettingsKey((char *)v10);
  return (unsigned int)v2;
}
