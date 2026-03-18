/*
 * XREFs of IoEnableIoQos @ 0x1401F8FC0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     ZwLoadDriver @ 0x140180E90 (ZwLoadDriver.c)
 */

NTSTATUS IoEnableIoQos()
{
  NTSTATUS result; // eax

  result = ZwLoadDriver((PUNICODE_STRING)&IopIoQosDriverName);
  if ( result == -1073741554 )
    return 0;
  return result;
}
