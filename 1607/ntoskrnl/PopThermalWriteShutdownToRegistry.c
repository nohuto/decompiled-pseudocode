/*
 * XREFs of PopThermalWriteShutdownToRegistry @ 0x1402072DC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140146EF4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalProcessUsermodeEvent @ 0x1406703AC (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140132534 (PopOpenKey.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 */

NTSTATUS PopThermalWriteShutdownToRegistry()
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+50h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+10h] BYREF

  Data = 1;
  result = PopOpenKey(&KeyHandle, L"Control\\Session Manager\\Power", 0x2001Fu);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ThermalShutdownOccurred");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
