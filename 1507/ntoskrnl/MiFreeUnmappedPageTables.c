/*
 * XREFs of MiFreeUnmappedPageTables @ 0x140039270
 * Callers:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiDeleteSessionPdes @ 0x14014BED8 (MiDeleteSessionPdes.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall MiFreeUnmappedPageTables(volatile signed __int32 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // r14
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v8; // r15d
  char v9; // cl
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx

  v2 = 0LL;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      v5 = *(volatile signed __int32 **)v4;
      v6 = 48 * (*((_QWORD *)v4 + 5) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8 = 0;
      if ( _interlockedbittestandset64(v4 + 6, 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( (*((_QWORD *)v4 + 3) & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v4 + 6, 0x3FuLL) );
      }
      v9 = *((_BYTE *)v4 + 34) & 0xF8 | 6;
      *((_BYTE *)v4 + 34) = v9;
      if ( (v9 & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (__int64)(v4 + 0x16000000000LL) / 48,
          v9 & 7,
          *((_QWORD *)v4 + 3) & 0x3FFFFFFFFFFFFFFFLL);
      v10 = *((_QWORD *)v4 + 3);
      v11 = (v10 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *((_QWORD *)v4 + 3) = v10 ^ (v11 ^ v10) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v10 & 0x3FFFFFFFFFFFFFFFLL) == 1 && (unsigned int)MiPfnShareCountIsZero(v4, v11) == 3 )
        ++a2[1];
      _InterlockedAnd64((volatile signed __int64 *)v4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      v12 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      }
      if ( (*(_BYTE *)(v6 + 34) & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v6 + 0x58000000000LL) / 48,
          *(_BYTE *)(v6 + 34) & 7,
          *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v13 = *(_QWORD *)(v6 + 24);
      v14 = (v13 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v6 + 24) = v13 ^ (v14 ^ v13) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v13 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v6, v14);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v2;
      v4 = v5;
    }
    while ( v5 );
  }
  a2[3] += v2;
  *a2 += v2;
}
