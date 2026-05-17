/*
 * XREFs of RtlpStdLockAcquire @ 0x1800F2DD8
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800F28B0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F2AA4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800F2B80 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800F2C5C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800F2E18 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( !byte_180152408 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
