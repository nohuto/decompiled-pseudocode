/*
 * XREFs of MiFreeLargePageMemory @ 0x1400FF890
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x14022F190 (MiFreeLargePages.c)
 *     MiReturnLargePages @ 0x14022FA34 (MiReturnLargePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR a1)
{
  ULONG_PTR v1; // r8
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  ULONG_PTR v6; // rdi
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // cl
  char v11; // al
  unsigned __int64 v12; // r8
  char v13; // cl
  __int64 v14; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned __int64 v20; // [rsp+70h] [rbp+8h]
  unsigned __int64 v21; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+80h] [rbp+18h]
  unsigned __int8 CurrentIrql; // [rsp+88h] [rbp+20h]

  v1 = a1 + 511;
  v3 = 48 * (a1 + 511) - 0x58000000000LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a1 + 511;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  do
  {
    v7 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
      v1 = a1 + 511;
    }
    *(_QWORD *)(v3 + 40) &= ~0x200000000000000uLL;
    v8 = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(v3 + 34) & 7) == 5 )
      ++*(_WORD *)(v3 + 32);
    v9 = *(_QWORD *)(v3 + 24);
    if ( (v9 & 0x4000000000000000LL) == 0 )
      *(_QWORD *)(v3 + 24) = v9 | 0x4000000000000000LL;
    if ( ((v8 >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v3, 0xCu);
      v1 = a1 + 511;
    }
    if ( *(_WORD *)(v3 + 32) == 2
      && (v10 = *(_BYTE *)(v3 + 34), (v10 & 0xC0) == 0x40)
      && (v11 = *(_BYTE *)(v3 + 35), (v11 & 0x40) == 0) )
    {
      if ( !v5 )
      {
        v12 = *(_QWORD *)(v3 + 40);
        *(_QWORD *)(v3 + 24) &= 0xC000000000000000uLL;
        v13 = v10 & 0xEF;
        *(_BYTE *)(v3 + 35) = v11 & 0xF8;
        *(_WORD *)(v3 + 32) = 0;
        *(_BYTE *)(v3 + 34) = v13;
        if ( ((v12 >> 54) & 7) == 1 )
          *(_QWORD *)(v3 + 40) = v12 & 0xFE3FFFFFFFFFFFFFuLL;
        v14 = *(_QWORD *)(v3 + 40);
        *(_QWORD *)(v3 + 24) &= ~0x4000000000000000uLL;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 40) = v14 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
        *(_BYTE *)(v3 + 34) = v13 & 0xF8 | 1;
        if ( v6 == a1 )
        {
          MiInsertLargePageInNodeList(v6, 512LL, 1LL, 0xFFFFFFFFELL);
          v4 = 512LL;
        }
        goto LABEL_17;
      }
    }
    else if ( !v5 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v5 = v3;
      v21 = v3;
      v6 = v1;
      v3 = 48 * v1 - 0x58000000000LL;
      if ( v3 > v5 )
      {
        v16 = v3 + 24;
        v17 = (v3 - v5 - 1) / 0x30 + 1;
        v22 = v17 + v4;
        v20 = -48LL * v17 + v3;
        do
        {
          v18 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) )
          {
            do
            {
              if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v18);
            }
            while ( (*(_QWORD *)v16 & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) );
          }
          *(_QWORD *)(v16 + 16) &= 0xFFFFFFF000000000uLL;
          MiInsertPageInFreeOrZeroedList(v6, 2);
          _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
          --v6;
          v16 -= 48LL;
          --v17;
        }
        while ( v17 );
        v3 = v20;
        v1 = a1 + 511;
        v5 = v21;
        v4 = v22;
      }
      v19 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v19);
        }
        while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
        v1 = a1 + 511;
      }
    }
    *(_QWORD *)(v3 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v3 + 32) -= 2;
    if ( !*(_WORD *)(v3 + 32) )
    {
      MiPfnReferenceCountIsZero(v3, v6);
      ++v4;
LABEL_17:
      v1 = a1 + 511;
      goto LABEL_18;
    }
    *(_BYTE *)(v3 + 34) |= 7u;
LABEL_18:
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v3 -= 48LL;
    --v6;
  }
  while ( v6 >= a1 );
  __writecr8(CurrentIrql);
  return v4;
}
