/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x140127210
 * Callers:
 *     PiIsDriverBlocked @ 0x1403B6AD0 (PiIsDriverBlocked.c)
 *     VerifierExIsProcessorFeaturePresent @ 0x1406C03C8 (VerifierExIsProcessorFeaturePresent.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
}
