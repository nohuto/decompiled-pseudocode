/*
 * XREFs of VerifierExIsProcessorFeaturePresent @ 0x1406C03C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  return pXdvExIsProcessorFeaturePresent(ProcessorFeature);
}
