/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18000FE20
 * Callers:
 *     LdrpGenRandom @ 0x18000FDE0 (LdrpGenRandom.c)
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
