/*
 * XREFs of MiIncrementPfn @ 0x14015A42C
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1401495B0 (MiDeleteSessionAddressSpace.c)
 *     MxRelocatePageTables @ 0x1407C4868 (MxRelocatePageTables.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiIncrementPfn(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  ++*(_WORD *)(a1 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
