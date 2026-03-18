/*
 * XREFs of MiFinishLastForkPageTable @ 0x1400ECA54
 * Callers:
 *     MiFreeForkMaps @ 0x1400EC940 (MiFreeForkMaps.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400EC988 (MiDoneWithThisPageGetAnother.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 result; // rax

  v2 = 48 * a2 - 0x58000000000LL;
  v4 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
  v5 = MiLockPageInline(v2);
  MiRemoveLockedPageChargeAndDecRef(v2);
  if ( (unsigned __int64)(((__int64)(v4 << 25) >> 16 << 25 >> 16) + 0x98000000000LL) > 0x7FFFFFFFFFLL )
  {
    if ( (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v2);
    }
    else
    {
      v6 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                     + 8LL * ((*(_DWORD *)(v2 + 8) >> 3) & 0x1FF));
      if ( (MI_READ_PTE_LOCK_FREE(v6) & 1) == 0 )
      {
        v7 = qword_140381320 ^ (qword_140381320 ^ (a2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
        if ( v4 + 0x904C0000000LL <= 0x3FFFFFFF )
          v7 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v4 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v4 >= 0xFFFFF68000000000uLL
          || v4 >= 0xFFFFF6FB40000000uLL
          && v4 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
          || v4 >= 0xFFFFF6FB7DA00000uLL
          && v4 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
          || v4 >= 0xFFFFF6FB7DBED000uLL
          && v4 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
        {
          v7 |= 4uLL;
        }
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v4) )
          v7 |= 0x100uLL;
        v8 = v7 | 0x42;
        *v6 = v8;
        if ( (unsigned int)MiPteInShadowRange(v6) )
          MiWritePteShadow(v6, v8);
      }
      MiUnmapPageInHyperSpaceWorker((__int64)v6, 0x11u);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v5;
  __writecr8(v5);
  return result;
}
