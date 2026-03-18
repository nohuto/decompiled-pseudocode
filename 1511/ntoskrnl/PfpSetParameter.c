/*
 * XREFs of PfpSetParameter @ 0x140540C00
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x140540B68 (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x14076A4D8 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
