/*
 * XREFs of PopResetCurrentPolicies @ 0x1405996E0
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14015A76C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopApplyPolicy @ 0x1405997B4 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1405C19C0 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyValueInformation, 0, 248);
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
      PopDefaultPolicy(&KeyValueInformation[3]);
      v2 = 232LL;
    }
    else
    {
      v2 = ResultLength - 12;
    }
    ResultLength = v2;
    PopApplyPolicy(0LL, 0LL, &KeyValueInformation[3], v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
