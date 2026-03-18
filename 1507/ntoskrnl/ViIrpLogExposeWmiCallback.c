/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x14074E768
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(void *a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_140732D50);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_140732D50);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(a1, 0);
}
