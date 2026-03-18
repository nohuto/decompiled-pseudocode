/*
 * XREFs of PnpSetRegistryRequirementsList @ 0x14067DD40
 * Callers:
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryRequirementsList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"BasicConfigVector");
  if ( a3 )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xAu, a3, *a3);
  else
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
}
