/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18002F910
 * Callers:
 *     LdrpGenRandom @ 0x18002F8CC (LdrpGenRandom.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature + 0x7FFE0274LL);
}
