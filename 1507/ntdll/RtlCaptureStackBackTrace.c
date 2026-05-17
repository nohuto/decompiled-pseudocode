/*
 * XREFs of RtlCaptureStackBackTrace @ 0x180012600
 * Callers:
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x1800535B0 (RtlActivateActivationContextEx.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlGetCallersAddress @ 0x1800D3C60 (RtlGetCallersAddress.c)
 *     RtlpHeapTrkTrackStack @ 0x1800E206C (RtlpHeapTrkTrackStack.c)
 *     RtlStdLogStackTrace @ 0x1800E49E0 (RtlStdLogStackTrace.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F0340 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1800126A0 (RtlWalkFrameChain.c)
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
