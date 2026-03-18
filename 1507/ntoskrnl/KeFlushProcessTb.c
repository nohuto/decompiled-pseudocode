/*
 * XREFs of KeFlushProcessTb @ 0x1400EF5C4
 * Callers:
 *     KeSwapDirectoryTableBase @ 0x1400D37D8 (KeSwapDirectoryTableBase.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 6) != 0 )
  {
    if ( (HvlEnlightenments & 2) != 0 )
      return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0LL);
    result = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
      return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
