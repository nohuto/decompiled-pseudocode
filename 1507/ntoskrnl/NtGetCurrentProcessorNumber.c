/*
 * XREFs of NtGetCurrentProcessorNumber @ 0x1406BF9FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NtGetCurrentProcessorNumber(void)
{
  ULONG result; // eax

  result = KeGetCurrentPrcb()->GroupIndex;
  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    return result & 0x1F;
  return result;
}
