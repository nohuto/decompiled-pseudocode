/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x180072340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(a1 + 0x7FFE0274LL);
}
