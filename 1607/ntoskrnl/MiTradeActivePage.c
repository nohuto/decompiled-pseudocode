/*
 * XREFs of MiTradeActivePage @ 0x140108F04
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1401EAFB8 (MiReplaceLockedPage.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTradeActivePage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  ULONG_PTR v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v8 = (a2 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x20000) != 0 )
    MiGetPagePrivilege(a1, 0, 0LL);
  v9 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE(v9);
  v12 = v10;
  if ( a5 == 2 )
  {
    if ( (v10 & 0x42) != 0 || v11 )
      return 0LL;
  }
  else
  {
    v14 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    *v9 = v14;
    if ( (unsigned int)MiPteInShadowRange(v9, v14) )
      MiWritePteShadow(v16, v15);
    KeFlushSingleTb(a3, a4, a5);
  }
  v17 = *(unsigned __int8 *)(a1 + 34) >> 6;
  MiLockPageAtDpcInline(a1);
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v17, 1u);
  MiCopyPfnEntry(a2, (__int128 *)a1);
  MiCopyPage(v8, (a1 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a1 + 35) &= ~8u;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = (v8 & 0xFFFFFFFFFLL) << 12;
  v19 = v18 | v12 & 0xFFFF000000000FFFuLL;
  *v9 = v19;
  if ( (unsigned int)MiPteInShadowRange(v9, v20) )
    MiWritePteShadow(v21, v19);
  KeFlushSingleTb(a3, a4, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    v22 = v18 | MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) & 0xFFFF000000000FFFuLL;
    *v23 = v22;
    if ( (unsigned int)MiPteInShadowRange(v23, v22) )
      MiWritePteShadow(v25, v24);
  }
  return 1LL;
}
