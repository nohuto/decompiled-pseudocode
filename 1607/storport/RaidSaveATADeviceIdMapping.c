/*
 * XREFs of RaidSaveATADeviceIdMapping @ 0x1C002C470
 * Callers:
 *     ATAShimGetMsftId @ 0x1C0042DA4 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSaveATADeviceIdMapping(PVOID ValueData, ULONG ValueLength, const GUID *Guid)
{
  char v5; // di
  NTSTATUS v7; // ebx
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v5 = 0;
  GuidString.Length = 0;
  *(_QWORD *)&GuidString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&GuidString.Buffer + 2) = 0;
  HIWORD(GuidString.Buffer) = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\ATADeviceIdMappings");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v7 >= 0 )
  {
    v5 = 1;
    v7 = RtlStringFromGUID(Guid, &GuidString);
    if ( v7 >= 0 )
      v7 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, GuidString.Buffer, 3u, ValueData, ValueLength);
  }
  RtlFreeUnicodeString(&GuidString);
  if ( v5 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v7;
}
