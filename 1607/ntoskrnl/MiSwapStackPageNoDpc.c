/*
 * XREFs of MiSwapStackPageNoDpc @ 0x1401098D4
 * Callers:
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x1401E6214 (MiJumpStackTarget.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x140021DA0 (MiClearPfnReuseFields.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (a3 + 0x58000000000LL) / 48;
  v8 = MI_READ_PTE_LOCK_FREE(v3);
  v9 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8) )
    return 0LL;
  KeFlushSingleTb((__int64)(v3 << 25) >> 16, 0, 2u);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntry(a3, (__int128 *)a2);
  MiCopyPage(v7, (a2 + 0x58000000000LL) / 48, a1, 4);
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)v3,
               v9 ^ (v9 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20,
               v9) )
  {
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    MiSetFreshPfnFromFreeList(a3);
    *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  MiClearPfnReuseFields(a2);
  *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
  return 1LL;
}
