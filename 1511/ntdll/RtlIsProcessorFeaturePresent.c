/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18000FE20
 * Callers:
 *     LdrpGenRandom @ 0x18000FDE0 (LdrpGenRandom.c)
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
