/*
 * XREFs of PpmInitIllegalThrottleLogging @ 0x140148094
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140132AA4 (PopOpenKey.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 */

NTSTATUS PpmInitIllegalThrottleLogging()
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v5; // [rsp+60h] [rbp-10h]

  result = PopOpenKey(&KeyHandle, L"Control\\Session Manager\\Power", 0x2001Fu);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ProcessorThrottleLogInterval");
    KeyValueInformation = 0uLL;
    v5 = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      PopProcessorThrottleLogInterval = HIDWORD(KeyValueInformation);
      if ( HIDWORD(KeyValueInformation) > 0x2710 )
        PopProcessorThrottleLogInterval = 10000;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
