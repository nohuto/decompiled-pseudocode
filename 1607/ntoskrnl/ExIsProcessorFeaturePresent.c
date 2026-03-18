/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x140131F10
 * Callers:
 *     PiIsDriverBlocked @ 0x14049D1BC (PiIsDriverBlocked.c)
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
