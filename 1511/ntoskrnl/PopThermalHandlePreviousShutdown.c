/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x140530008
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140127640 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopThermalHandlePreviousShutdown()
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-40h] BYREF
  ULONG MatchingChangeStamp; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp-20h] BYREF
  int v5; // [rsp+70h] [rbp-10h]

  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ThermalShutdownOccurred");
    KeyValueInformation = 0uLL;
    v5 = 0;
    result = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &MatchingChangeStamp);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      result = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( result >= 0 )
        result = ZwUpdateWnfStateData(&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
