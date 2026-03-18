/*
 * XREFs of PopSaveHibernateEnabled @ 0x14066A5B0
 * Callers:
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140132534 (PopOpenKey.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 */

NTSTATUS PopSaveHibernateEnabled()
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  PopHiberEnabledReg = PopHiberEnabled != 0;
  result = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HibernateEnabled");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberEnabledReg, 4u);
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
