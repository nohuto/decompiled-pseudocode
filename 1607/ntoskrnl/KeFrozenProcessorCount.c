/*
 * XREFs of KeFrozenProcessorCount @ 0x1401D7A34
 * Callers:
 *     IoInitializeBugCheckProgress @ 0x1401C5F90 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1401C6100 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1401C6180 (IoSetBugCheckProgressFlag.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 */

__int64 KeFrozenProcessorCount()
{
  unsigned int v0; // edi
  ULONG i; // ebx
  __int64 Prcb; // rax

  v0 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb && (*(_DWORD *)(Prcb + 11528) & 0xF) == 2 )
      ++v0;
  }
  return v0;
}
