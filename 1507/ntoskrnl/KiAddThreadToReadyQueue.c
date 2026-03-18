/*
 * XREFs of KiAddThreadToReadyQueue @ 0x1400ED780
 * Callers:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

unsigned int __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  __int64 v6; // r10
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 *v11; // rsi
  unsigned int v12; // r15d
  __int64 *v13; // rax
  __int64 **v14; // rcx
  unsigned int result; // eax
  __int64 *v16; // rbx
  __int64 *v17; // rax
  __int64 **v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rcx

  v6 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a3 + 104);
    if ( v6 )
      v6 += *(unsigned int *)(a1 + 1624);
  }
  *(_BYTE *)(a3 + 388) = 1;
  if ( v6 && (*(_DWORD *)(a3 + 120) & 0x600) == 0 && (unsigned int)KiGetThreadEffectiveRankNonZero(a3, v6, 0) )
    return KiAddThreadToScbQueue(a1, v20, a3, a5);
  v8 = *(_QWORD *)(a1 + 24768);
  v9 = *(char *)(a3 + 195);
  if ( (*(_DWORD *)(a3 + 120) & 0x1000) != 0 && v8 && (v8 & *(_QWORD *)(a3 + 576)) == v8 )
  {
    v10 = *(_QWORD *)(a1 + 24776);
    v11 = (__int64 *)(v10 + 16 * (v9 + 1));
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( *(_QWORD *)v10 );
    }
    v13 = (__int64 *)(a3 + 216);
    if ( a5 )
    {
      v19 = *v11;
      *v13 = *v11;
      *(_QWORD *)(a3 + 224) = v11;
      if ( *(__int64 **)(v19 + 8) != v11 )
        __fastfail(3u);
      *(_QWORD *)(v19 + 8) = v13;
      *v11 = (__int64)v13;
      _bittestandreset((signed __int32 *)(a1 + 22684), v9);
    }
    else
    {
      v14 = (__int64 **)v11[1];
      *v13 = (__int64)v11;
      *(_QWORD *)(a3 + 224) = v14;
      if ( *v14 != v11 )
        __fastfail(3u);
      *v14 = v13;
      v11[1] = (__int64)v13;
    }
    *(_DWORD *)(v10 + 8) |= 1 << v9;
    result = *(_DWORD *)(a3 + 536) | 0x80000000;
    *(_DWORD *)(a3 + 536) = result;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  }
  else
  {
    v16 = (__int64 *)(a3 + 216);
    v17 = (__int64 *)(a1 + 16 * (v9 + 1424));
    if ( a5 )
    {
      v21 = *v17;
      *v16 = *v17;
      v16[1] = (__int64)v17;
      if ( *(__int64 **)(v21 + 8) != v17 )
        __fastfail(3u);
      *(_QWORD *)(v21 + 8) = v16;
      *v17 = (__int64)v16;
      _bittestandset((signed __int32 *)(a1 + 22684), v9);
    }
    else
    {
      v18 = (__int64 **)v17[1];
      *v16 = (__int64)v17;
      v16[1] = (__int64)v18;
      if ( *v18 != v17 )
        __fastfail(3u);
      *v18 = v16;
      v17[1] = (__int64)v16;
    }
    result = *(_DWORD *)(a1 + 22680) | (1 << v9);
    *(_DWORD *)(a1 + 22680) = result;
  }
  return result;
}
