/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x180077D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x180077D6C (RtlpLocateXStateChunk.c)
 */

unsigned __int64 RtlGetExtendedFeaturesMask()
{
  return *(_QWORD *)RtlpLocateXStateChunk() & 0xFFFFFFFFFFFFFFFCuLL;
}
