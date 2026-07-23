/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x140719A08
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(void *a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_1406FEBB0);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_1406FEBB0);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(a1, 0);
}
