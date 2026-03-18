/*
 * XREFs of PopResetCurrentPolicies @ 0x14056DF0C
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     PopChangeCapability @ 0x14056DEF8 (PopChangeCapability.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140132520 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PopApplyPolicy @ 0x14056DFD8 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x14057F920 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           &ResultLength);
    if ( v1 < 0 )
    {
      PopDefaultPolicy(&KeyValueInformation[12]);
      v2 = 232LL;
    }
    else
    {
      v2 = ResultLength - 12;
    }
    ResultLength = v2;
    PopApplyPolicy(0LL, 0LL, &KeyValueInformation[12], v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
