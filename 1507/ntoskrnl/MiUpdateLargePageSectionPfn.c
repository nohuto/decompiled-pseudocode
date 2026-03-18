/*
 * XREFs of MiUpdateLargePageSectionPfn @ 0x140216CE0
 * Callers:
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfn(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // edi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 40) |= 0x200000FFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(a1 + 8) = a2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
