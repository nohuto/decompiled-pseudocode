/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x1406CAFF8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(void *a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_1406B2D50);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_1406B2D50);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(a1, 0);
}
