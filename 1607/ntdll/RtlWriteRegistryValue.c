/*
 * XREFs of RtlWriteRegistryValue @ 0x180090CA0
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1800E5440 (RtlSetPortableOperatingSystem.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800E55C8 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 */

NTSTATUS __cdecl RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(KeyHandle);
    return v10;
  }
  return result;
}
