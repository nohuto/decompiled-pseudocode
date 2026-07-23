/*
 * XREFs of RtlStdLogStackTrace @ 0x140211584
 * Callers:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x140211A20 (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(PKSPIN_LOCK SpinLock, ULONG a2)
{
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v5; // [rsp+148h] [rbp+10h] BYREF

  v5 = a2;
  if ( RtlCaptureStackBackTrace(2u, 0x20u, &BackTrace, &v5) )
    return RtlpStdLogCapturedStackTrace(SpinLock);
  else
    return 0LL;
}
