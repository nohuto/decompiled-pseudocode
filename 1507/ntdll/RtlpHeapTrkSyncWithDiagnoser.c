/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800E1CE4
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800E19E0 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800E1BD8 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x180093EB0 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_1801486A8 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
