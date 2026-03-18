/*
 * XREFs of IoEnableIoQos @ 0x1401BD738
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ZwLoadDriver @ 0x140152500 (ZwLoadDriver.c)
 */

NTSTATUS IoEnableIoQos()
{
  NTSTATUS result; // eax

  result = ZwLoadDriver((PUNICODE_STRING)&IopIoQosDriverName);
  if ( result == -1073741554 )
    return 0;
  return result;
}
