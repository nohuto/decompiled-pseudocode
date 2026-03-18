/*
 * XREFs of PfpSetParameter @ 0x1405B69C4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x1405B692C (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x1407DEF34 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
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
