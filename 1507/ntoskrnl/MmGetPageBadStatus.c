/*
 * XREFs of MmGetPageBadStatus @ 0x140213070
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1406FD5B0 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MmGetPageBadStatus(__int64 *a1)
{
  __int64 v1; // r9
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // esi

  v2 = 0;
  if ( !MI_IS_PFN(*a1 >> 12) )
    return 3221225711LL;
  v4 = 48 * v1 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_QWORD *)(v4 + 24) & 0x8000000000000000uLL) != 0 );
  }
  if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL
      || (v2 = -1073740023, (*(_BYTE *)(v4 + 34) & 7) != 5) )
    {
      v2 = 259;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v2;
}
