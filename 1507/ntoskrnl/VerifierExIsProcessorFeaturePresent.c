/*
 * XREFs of VerifierExIsProcessorFeaturePresent @ 0x140741BBC
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
