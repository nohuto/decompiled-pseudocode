/*
 * XREFs of MiCopySinglePage @ 0x140215494
 * Callers:
 *     MmCopyMemory @ 0x1402160E4 (MmCopyMemory.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  int v14; // r15d
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  const void *v18; // rsi
  __int64 v19; // r9

  if ( !MI_IS_PFN(a2) )
    return 3221225793LL;
  v10 = 48 * a2 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = 17;
  }
  if ( !MI_IS_PFN(a2) )
  {
    if ( CurrentIrql != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v10 + 35) < 0
    || (MiFlags & 0x80000) != 0
    && ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 3
    && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0
    && ((v13 = *(_QWORD *)(v10 + 8)) == 0
     || v13 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
     && v13 >= 0xFFFFF68000000000uLL) )
  {
    if ( CurrentIrql != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    return 3221227273LL;
  }
  else
  {
    v14 = *(unsigned __int8 *)(v10 + 34) >> 6;
    if ( v14 == 3 )
      MiChangePageAttribute(48 * a2 - 0x58000000000LL, 1u, 1LL, (__int64)MmHighestUserAddress);
    if ( a5 )
    {
      MiMakeProtectionPfnCompatible(1, 48 * a2 - 0x58000000000LL);
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a5) )
        v15 |= 0x100uLL;
      v16 = v15 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      *(_QWORD *)a5 = v16;
      if ( a5 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(a5, v16);
      v17 = (__int64)(a5 << 25) >> 16;
    }
    else
    {
      v17 = MiMapPageInHyperSpaceWorker(a2, 0LL);
    }
    v18 = (const void *)(a3 + v17);
    memmove(a1, v18, a4);
    if ( a5 )
    {
      *(_QWORD *)a5 = 0LL;
      if ( a5 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(a5, 0LL);
    }
    else
    {
      MiUnmapPageInHyperSpaceWorker((__int64)v18, 0x11u);
    }
    if ( v14 == 3 )
      MiChangePageAttribute(v10, 3u, 3LL, v19);
    if ( CurrentIrql != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
