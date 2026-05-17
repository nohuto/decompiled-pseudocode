/*
 * XREFs of RtlpStdLockAcquire @ 0x1800E4F68
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800E4A40 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800E4C34 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800E4D10 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800E4DEC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800E4FA8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(volatile signed __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  if ( !byte_180146208 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
