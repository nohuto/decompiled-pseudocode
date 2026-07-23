/*
 * XREFs of MiFinishLastForkPageTable @ 0x140108B7C
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x140108ABC (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x14010A2AC (MiFreeForkMaps.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  BOOL v3; // ebp
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 *v16; // r11
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 result; // rax

  v3 = 1;
  v4 = 48 * a2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  v6 = (__int64)(v5 << 25) >> 16 << 25 >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL )
    v3 = v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v7 = MiLockPageInline(48 * a2 - 0x58000000000LL);
  MiRemoveLockedPageChargeAndDecRef(v4, v8, v9, v10);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v4);
    }
    else
    {
      v11 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000);
      if ( (MI_READ_PTE_LOCK_FREE(v11 + 8LL * ((*(_DWORD *)(v4 + 8) >> 3) & 0x1FF)) & 1) == 0 )
      {
        v14 = qword_1403A9360 ^ (qword_1403A9360 ^ (a2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
        if ( v5 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL )
          v14 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v5 <= 0xFFFFF6BFFFFFFF78uLL && v5 >= 0xFFFFF68000000000uLL
          || v5 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB5FFFFFF8uLL
          || v5 >= 0xFFFFF6FB7DA00000uLL && v5 <= 0xFFFFF6FB7DAFFFF8uLL
          || v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v14 |= 4uLL;
        }
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
          v14 |= 0x100uLL;
        v17 = v14 | 0x42;
        *v16 = v17;
        if ( (unsigned int)MiPteInShadowRange(v16, v15) )
          MiWritePteShadow(v18, v17);
      }
      LOBYTE(v12) = 17;
      MiUnmapPageInHyperSpaceWorker(v13, v12);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v7;
  __writecr8(v7);
  return result;
}
