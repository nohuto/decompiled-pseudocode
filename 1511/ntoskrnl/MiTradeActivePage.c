/*
 * XREFs of MiTradeActivePage @ 0x140007470
 * Callers:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiTradeActivePage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v6; // edi
  __int64 v9; // rbp
  unsigned __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v14; // rdi
  unsigned int v15; // edi
  char v16; // al
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rbx

  v6 = 1;
  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v9 = (a2 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x80000) == 0 || !(unsigned int)MiGetPagePrivilege(a1, 0LL, 0LL) )
    v6 = 0;
  v10 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = MI_READ_PTE_LOCK_FREE(v10);
  v12 = v11;
  if ( a5 == 2 )
  {
    if ( (v11 & 0x42) != 0 || v6 )
      return 0LL;
  }
  else
  {
    v14 = v11 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    *v10 = v14;
    if ( (unsigned int)MiPteInShadowRange(v10) )
      MiWritePteShadow(v10, v14);
    KeFlushSingleTb(a3, a4, a5);
  }
  v15 = *(unsigned __int8 *)(a1 + 34) >> 6;
  MiLockPageAtDpcInline(a1);
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v15, 1LL);
  MiCopyPfnEntry(a2, a1);
  MiCopyPage(v9, (a1 + 0x58000000000LL) / 48, 0LL, 6LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v16 = *(_BYTE *)(a1 + 34) & 0xC0 | 5;
  *(_BYTE *)(a1 + 35) &= 0xD7u;
  *(_BYTE *)(a1 + 34) = v16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (v9 & 0xFFFFFFFFFLL) << 12;
  v18 = v17 | v12 & 0xFFFF000000000FFFuLL;
  *v10 = v18;
  if ( (unsigned int)MiPteInShadowRange(v10) )
    MiWritePteShadow(v10, v18);
  KeFlushSingleTb(a3, a4, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    v19 = (_QWORD *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
    v20 = v17 | MI_READ_PTE_LOCK_FREE(v19) & 0xFFFF000000000FFFuLL;
    *v19 = v20;
    if ( (unsigned int)MiPteInShadowRange(v19) )
      MiWritePteShadow(v19, v20);
  }
  return 1LL;
}
