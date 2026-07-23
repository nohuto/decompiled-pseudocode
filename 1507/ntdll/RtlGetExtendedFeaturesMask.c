/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x180077D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x180077D6C (RtlpLocateXStateChunk.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)RtlpLocateXStateChunk(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
