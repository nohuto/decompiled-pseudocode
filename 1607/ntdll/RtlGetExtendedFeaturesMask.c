/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800889D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800889EC (RtlpLocateXStateChunk.c)
 */

unsigned __int64 RtlGetExtendedFeaturesMask()
{
  return *(_QWORD *)RtlpLocateXStateChunk() & 0xFFFFFFFFFFFFFFFCuLL;
}
