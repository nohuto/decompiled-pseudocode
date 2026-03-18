/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1400ED9BC
 * Callers:
 *     KiDispatchInterrupt @ 0x14018A3F0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x14000C7EC (KiInsertDeferredPreemptionApc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x1400EDC94 (KiAddThreadToScbQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  unsigned int ThreadEffectiveRankNonZero; // ebp
  unsigned int v5; // esi
  __int64 v6; // rsi
  __int64 v7; // r10
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  char v12; // r8
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // rcx

  if ( !*(_QWORD *)(a1 + 104) || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1 )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(_QWORD *)(a2 + 48) );
  }
  v6 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v6 == *(_QWORD *)(a2 + 24)
    || *(unsigned __int8 *)(a2 + 1616) != *(_WORD *)(a1 + 584)
    || (*(_QWORD *)(a2 + 1608) & *(_QWORD *)(a1 + 576)) == 0LL
    || ((v7 = *(_QWORD *)(v6 + 104)) == 0
     || (v7 += *(unsigned int *)(a2 + 1624)) == 0
     || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(*(_QWORD *)(a2 + 16), v7, 1)) == 0)
    && *(_BYTE *)(v6 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( *(char *)(a1 + 195) >= 16
      || !*(_QWORD *)(a1 + 104)
      || (v9 = *(_QWORD *)(a1 + 104)) == 0
      || (v10 = *(unsigned int *)(a2 + 1624) + v9) == 0
      || (v11 = KiGetThreadEffectiveRankNonZero(a1, v10, 0), v8 = v12 + 1, !v11) )
    {
      v8 = *(_BYTE *)(a1 + 195);
    }
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v8;
  *(_BYTE *)(v6 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
  {
    KiAddThreadToScbQueue(a2, v7, v6, 1LL);
  }
  else
  {
    v13 = *(char *)(v6 + 195);
    v14 = *(_QWORD *)(a2 + 24768);
    if ( (*(_DWORD *)(v6 + 120) & 0x1000) != 0 && v14 && (v14 & *(_QWORD *)(v6 + 576)) == v14 )
    {
      v15 = *(_QWORD *)(a2 + 24776);
      v16 = (__int64 *)(v15 + 16 * (v13 + 1));
      while ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      {
        do
        {
          if ( (++ThreadEffectiveRankNonZero & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(ThreadEffectiveRankNonZero);
        }
        while ( *(_QWORD *)v15 );
      }
      v17 = *v16;
      v18 = v6 + 216;
      *(_QWORD *)(v6 + 216) = *v16;
      *(_QWORD *)(v6 + 224) = v16;
      if ( *(__int64 **)(v17 + 8) != v16 )
        __fastfail(3u);
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = v18;
      _bittestandreset((signed __int32 *)(a2 + 22684), v13);
      *(_DWORD *)(v15 + 8) |= 1 << v13;
      *(_DWORD *)(v6 + 536) |= 0x80000000;
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    }
    else
    {
      v19 = (__int64 *)(v6 + 216);
      v20 = (__int64 *)(a2 + 16 * (v13 + 1424));
      v21 = *v20;
      *v19 = *v20;
      v19[1] = (__int64)v20;
      if ( *(__int64 **)(v21 + 8) != v20 )
        __fastfail(3u);
      *(_QWORD *)(v21 + 8) = v19;
      *v20 = (__int64)v19;
      _bittestandset((signed __int32 *)(a2 + 22684), v13);
      *(_DWORD *)(a2 + 22680) |= 1 << v13;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  KiInsertDeferredPreemptionApc(a2, a1, 0);
  return 1;
}
