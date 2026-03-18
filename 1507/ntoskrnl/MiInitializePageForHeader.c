/*
 * XREFs of MiInitializePageForHeader @ 0x1400E12C8
 * Callers:
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiInitializePageForHeader(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  char v6; // si
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  v6 = *(_BYTE *)(a1 + 35) ^ a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 35) ^= v6 & 7;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
