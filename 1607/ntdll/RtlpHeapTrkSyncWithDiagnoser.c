/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800F0304
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800F0000 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800F01F8 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1800A6F70 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_180154440 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
