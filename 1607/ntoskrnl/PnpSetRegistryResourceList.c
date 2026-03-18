/*
 * XREFs of PnpSetRegistryResourceList @ 0x14062D2C8
 * Callers:
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14015B5E0 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x1404C8F50 (PnpDetermineResourceListSize.c)
 */

NTSTATUS __fastcall PnpSetRegistryResourceList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"BootConfig");
  if ( !a3 )
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
  DataSize = PnpDetermineResourceListSize(a3);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 8u, a3, DataSize);
}
