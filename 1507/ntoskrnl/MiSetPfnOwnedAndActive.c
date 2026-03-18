/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x1401225E4
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiFindLargeNodePages @ 0x140214640 (MiFindLargeNodePages.c)
 *     MiRemoveMdlPages @ 0x1406A28CC (MiRemoveMdlPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // esi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // edi
  char v10; // al
  __int64 result; // rax

  v4 = a4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL )
    *(_QWORD *)(a1 + 40) &= 0xFFFFFFF000000000uLL;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a3 )
    MiChangePageAttribute(a1, a3, 1LL, a4);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( v4 )
    *(_WORD *)(a1 + 32) = v4;
  v10 = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 34) = v10 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
