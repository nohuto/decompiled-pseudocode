/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800845D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800845EC (RtlpLocateXStateChunk.c)
 */

unsigned __int64 RtlGetExtendedFeaturesMask()
{
  return *(_QWORD *)RtlpLocateXStateChunk() & 0xFFFFFFFFFFFFFFFCuLL;
}
