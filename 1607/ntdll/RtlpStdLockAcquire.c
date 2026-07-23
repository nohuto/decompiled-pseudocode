/*
 * XREFs of RtlpStdLockAcquire @ 0x1800F2DD8
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800F28B0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F2AA4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800F2B80 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800F2C5C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800F2E18 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(_RTL_SRWLOCK *a1)
{
  if ( !byte_180152408 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
