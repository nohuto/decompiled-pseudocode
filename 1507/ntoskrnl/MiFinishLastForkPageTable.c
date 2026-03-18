/*
 * XREFs of MiFinishLastForkPageTable @ 0x140003EF4
 * Callers:
 *     MiFreeForkMaps @ 0x140001E70 (MiFreeForkMaps.c)
 *     MiDoneWithThisPageGetAnother @ 0x140003E18 (MiDoneWithThisPageGetAnother.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v6; // ebp
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r11d
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // rbx
  __int64 result; // rax

  v2 = 48 * a2 - 0x58000000000LL;
  v4 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_QWORD *)(v2 + 24) & 0x8000000000000000uLL) != 0 );
  }
  MiRemoveLockedPageChargeAndDecRef(v2);
  if ( (unsigned __int64)(((__int64)(v4 << 25) >> 16 << 25 >> 16) + 0x98000000000LL) > 0x7FFFFFFFFFLL )
  {
    v7 = *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v7 <= 1 )
    {
      if ( (*(_BYTE *)(v2 + 34) & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v2 + 0x58000000000LL) / 48,
          *(_BYTE *)(v2 + 34) & 7,
          *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v2 + 24) ^= ((v7 - 1) ^ *(_QWORD *)(v2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v7 == 1 )
        MiPfnShareCountIsZero(v2, 0LL);
    }
    else
    {
      v8 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL);
      v10 = 511;
      v11 = (__int64 *)(v8 + 8 * (((unsigned __int64)*(unsigned int *)(v2 + 8) >> 3) & 0x1FF));
      v12 = *v11;
      if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
        LOBYTE(v12) = MiReadPteShadow(v11, *v11);
      if ( (v12 & 1) == 0 )
      {
        v13 = qword_1403D0230 ^ (qword_1403D0230 ^ (a2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
        if ( v4 + 0x904C0000000LL <= 0x3FFFFFFF )
          v13 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
        v14 = 0x98000000000LL;
        if ( v4 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v4 >= 0xFFFFF68000000000uLL
          || v4 >= 0xFFFFF6FB40000000uLL
          && v4 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
          || v4 >= 0xFFFFF6FB7DA00000uLL
          && (v14 = 0x90482600000LL, v4 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
          || v4 >= 0xFFFFF6FB7DBED000uLL
          && v4 <= 8 * (*(_QWORD *)&v10 & ((unsigned __int64)MmHighestUserAddress >> 39)) - 0x90482413000LL )
        {
          v13 |= 4uLL;
        }
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v4, v14, 0x904C0000000LL) )
          v13 |= 0x100uLL;
        v17 = v13 | 0x42;
        *v11 = v17;
        if ( v15 <= v16 )
          MiWritePteShadow(v11, v17);
      }
      LOBYTE(v9) = 17;
      MiUnmapPageInHyperSpaceWorker(v11, v9, 0x80000000LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
