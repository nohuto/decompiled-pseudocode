/*
 * XREFs of RtlpStdLockAcquire @ 0x1800E9AC8
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800E95A0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800E9794 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800E9870 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800E994C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800E9B08 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( !byte_180145248 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
