/*
 * XREFs of MxSwapPages @ 0x140797EAC
 * Callers:
 *     MxRelocatePageTables @ 0x14078F670 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x1407978A8 (MxMovePageTables.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MxGetPhase0Mapping @ 0x14079826C (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v4; // r15
  __int64 result; // rax
  unsigned __int64 v6; // r13
  _WORD *v7; // rcx
  __int16 v8; // dx
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // r10d
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rbx
  __int64 v27; // [rsp+60h] [rbp+18h] BYREF

  v27 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v6 = result;
  if ( !result )
    return result;
  v7 = *(_WORD **)a1;
  v8 = *(_WORD *)(a1 + 8);
  result = MiGetPage(
             (__int64)MiSystemPartition,
             *(unsigned __int16 *)(a1 + 10) | (unsigned int)(unsigned __int16)(++*v7 & v8),
             8u);
  v9 = result;
  if ( result == -1 )
    return result;
  v10 = 48 * result - 0x58000000000LL;
  v11 = 48 * v4 - 0x58000000000LL;
  v12 = (unsigned __int8)MiLockPageInline(v11);
  MiLockNestedPageAtDpcInline(v10);
  MiFinalizePageAttribute(v10, *(unsigned __int8 *)(v11 + 34) >> 6, 1u);
  MiCopyPfnEntry(v10, (__int128 *)v11);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v12);
  v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)v13 = MiMakeValidKernelPte(v9, 4, v13) | 0x42;
  v16 = MiPteInShadowRange(v13);
  if ( v16 )
    MiWritePteShadow(v15, v14);
  v17 = 32LL;
  v18 = (_OWORD *)v6;
  v19 = (__int64)(a2 << 25) >> 16;
  do
  {
    *v18 = *(_OWORD *)v19;
    v18[1] = *(_OWORD *)(v19 + 16);
    v18[2] = *(_OWORD *)(v19 + 32);
    v18[3] = *(_OWORD *)(v19 + 48);
    v18[4] = *(_OWORD *)(v19 + 64);
    v18[5] = *(_OWORD *)(v19 + 80);
    v18[6] = *(_OWORD *)(v19 + 96);
    v18 += 8;
    v20 = *(_OWORD *)(v19 + 112);
    v19 += 128LL;
    *(v18 - 1) = v20;
    --v17;
  }
  while ( v17 );
  if ( ((v13 ^ ((__int64)(a2 << 25) >> 16)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    *(_QWORD *)v13 = 0LL;
    if ( v16 )
    {
      v22 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_12:
      MiWritePteShadow(v22, 0LL);
    }
  }
  else
  {
    v21 = (_QWORD *)(v6 + 8 * ((v13 >> 3) & 0x1FF));
    *v21 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v21) )
      goto LABEL_12;
  }
  v23 = v27 ^ (v27 ^ (v9 << 12)) & 0xFFFFFFFFF000LL | 0x20;
  v27 = v23;
  *(_QWORD *)a2 = v23;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(v24, v23);
  KeFlushSingleTb(v25, 0, 1u);
  KeFlushSingleTb(v6, 0, 1u);
  v26 = (unsigned __int8)MiLockPageInline(48 * v4 - 0x58000000000LL);
  *(_WORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v11 + 34) &= 0xD7u;
  MiInsertPageInFreeOrZeroedList(v4, 2);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v26);
  return result;
}
