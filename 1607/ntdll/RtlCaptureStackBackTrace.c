/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1800325B0
 * Callers:
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180068C40 (RtlActivateActivationContextEx.c)
 *     RtlpHeapTrkTrackStack @ 0x18008EDAC (RtlpHeapTrkTrackStack.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlGetCallersAddress @ 0x1800E4F60 (RtlGetCallersAddress.c)
 *     RtlStdLogStackTrace @ 0x1800F2850 (RtlStdLogStackTrace.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F9D90 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180032650 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  ULONG v9; // ecx
  unsigned int v10; // r8d
  unsigned int i; // edx
  __int64 v13; // rax

  v4 = FramesToCapture;
  if ( FramesToCapture > 0xFFFF )
    v4 = 0xFFFF;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v7 + v4, v7 << 8);
  v9 = 0;
  v10 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v9 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v10 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v9;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
