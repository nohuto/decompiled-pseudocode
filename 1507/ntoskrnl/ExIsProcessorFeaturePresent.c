/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x14015A72C
 * Callers:
 *     PiIsDriverBlocked @ 0x1405AA694 (PiIsDriverBlocked.c)
 *     VerifierExIsProcessorFeaturePresent @ 0x140741BBC (VerifierExIsProcessorFeaturePresent.c)
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
