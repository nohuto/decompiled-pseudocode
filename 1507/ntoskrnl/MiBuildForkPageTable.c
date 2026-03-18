/*
 * XREFs of MiBuildForkPageTable @ 0x140003AA4
 * Callers:
 *     MiUpdateForkMaps @ 0x14000336C (MiUpdateForkMaps.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 DemandZeroPte; // rax
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v15; // r15d
  unsigned int v16; // ebp
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 result; // rax

  v10 = 48 * a2 - 0x58000000000LL;
  v11 = 48 * a5 - 0x58000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  *(_BYTE *)(v10 + 34) |= 0x10u;
  *(_QWORD *)(v10 + 16) = DemandZeroPte;
  *(_QWORD *)(v10 + 40) ^= (v13 ^ *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v15);
    }
    while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v16);
    }
    while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
  }
  if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40 )
    MiChangePageAttribute(v10, 1LL, 1LL);
  v17 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v17 | 1;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  if ( a6 == 1 )
  {
    result = MiMakeTransitionPte(a2, 4LL);
    *a4 = result;
    if ( (unsigned __int64)(a4 + 0x12090482600LL) <= 0x7F8 )
      return MiWritePteShadow(a4, result);
  }
  else
  {
    v18 = qword_1403D0230 ^ (qword_1403D0230 ^ (a2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( a3 + 0x904C0000000LL <= 0x3FFFFFFF )
      v18 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    v19 = 0x98000000000LL;
    if ( a3 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a3 >= 0xFFFFF68000000000uLL
      || a3 >= 0xFFFFF6FB40000000uLL
      && a3 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || a3 >= 0xFFFFF6FB7DA00000uLL
      && (v19 = 0x90482600000LL, a3 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
      || a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v18 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a3, v19, 0x904C0000000LL) )
      v18 |= 0x100uLL;
    v20 = v18 | 0x46;
    result = (__int64)(a4 + 0x12090482600LL);
    *a4 = v20;
    if ( (unsigned __int64)(a4 + 0x12090482600LL) <= 0x7F8 )
      result = MiWritePteShadow(a4, v20);
    if ( a6 == 3 && (MiFlags & 0x600000) != 0 )
    {
      result = *(_QWORD *)(a1 + 1520);
      *(_QWORD *)((a3 & 0xFFF) + result) = v20;
    }
  }
  return result;
}
