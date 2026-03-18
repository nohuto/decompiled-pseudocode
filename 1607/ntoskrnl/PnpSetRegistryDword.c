/*
 * XREFs of PnpSetRegistryDword @ 0x140554CB4
 * Callers:
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryDword(HANDLE KeyHandle, const WCHAR *a2)
{
  int Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  Data = 1;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
}
