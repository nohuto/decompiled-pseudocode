/*
 * XREFs of PfpSetParameter @ 0x1405721C8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x140572130 (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x1407B3C34 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
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
