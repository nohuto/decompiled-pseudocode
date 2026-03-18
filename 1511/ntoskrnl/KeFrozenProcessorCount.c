/*
 * XREFs of KeFrozenProcessorCount @ 0x1401C8E60
 * Callers:
 *     IoInitializeBugCheckProgress @ 0x1401B8338 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1401B8474 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1401B84F4 (IoSetBugCheckProgressFlag.c)
 * Callees:
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
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
