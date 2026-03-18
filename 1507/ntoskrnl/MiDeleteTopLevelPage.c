/*
 * XREFs of MiDeleteTopLevelPage @ 0x14020F0E8
 * Callers:
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiClearContainingMapping @ 0x1400EF404 (MiClearContainingMapping.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiBadShareCount @ 0x140226228 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteTopLevelPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int IsZero; // esi
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  IsZero = 2;
  __writecr8(2uLL);
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  MiClearContainingMapping(v2);
  *(_QWORD *)(v2 + 24) |= 0x4000000000000000uLL;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_BYTE *)(v2 + 34) & 7) != 6 )
    MiBadShareCount(v2);
  *(_QWORD *)(v2 + 24) = v6 ^ (((v6 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v6) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v6 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v2, 0LL);
  if ( (*(_BYTE *)(v2 + 34) & 7) != 6 )
    MiBadShareCount(v2);
  v7 = *(_QWORD *)(v2 + 24);
  v8 = (v7 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v2 + 24) = v7 ^ (v8 ^ v7) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v7 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    IsZero = MiPfnShareCountIsZero(v2, v8);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return IsZero;
}
