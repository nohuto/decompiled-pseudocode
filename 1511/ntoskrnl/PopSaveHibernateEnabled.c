/*
 * XREFs of PopSaveHibernateEnabled @ 0x1406322A4
 * Callers:
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140127654 (PopOpenKey.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
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
