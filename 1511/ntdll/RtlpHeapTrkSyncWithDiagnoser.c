/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800E7124
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800E6E20 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800E7018 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1800A5C10 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_180147308 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
