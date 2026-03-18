/*
 * XREFs of PopSaveHibernateEnabled @ 0x1406B0814
 * Callers:
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x14015A780 (PopOpenKey.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
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
