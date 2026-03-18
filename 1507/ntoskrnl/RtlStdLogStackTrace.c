/*
 * XREFs of RtlStdLogStackTrace @ 0x140245C34
 * Callers:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1402461FC (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(__int64 a1, ULONG a2)
{
  _BYTE v4[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v7; // [rsp+148h] [rbp+10h] BYREF

  v7 = a2;
  if ( RtlCaptureStackBackTrace(2u, 0x20u, &BackTrace, &v7) )
    return RtlpStdLogCapturedStackTrace(a1, v4, v7);
  else
    return 0LL;
}
