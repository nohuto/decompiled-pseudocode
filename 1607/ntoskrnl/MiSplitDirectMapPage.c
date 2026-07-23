/*
 * XREFs of MiSplitDirectMapPage @ 0x1401ED884
 * Callers:
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

ULONG_PTR __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3)
{
  __int16 v5; // si
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int64 v8; // r13
  unsigned int v9; // esi
  int *v10; // r14
  __int64 i; // rcx
  __int64 Page; // rax
  ULONG_PTR v13; // rdi
  __int64 v14; // rsi
  unsigned __int8 v15; // r14
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int16 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 updated; // rax
  __int64 *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int128 v31; // [rsp+20h] [rbp-30h] BYREF
  __int128 v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+40h] [rbp-10h]
  unsigned __int64 v34; // [rsp+48h] [rbp-8h]

  v5 = *(_WORD *)(a2 + 8);
  v6 = 48 * a3 - 0x58000000000LL;
  v7 = *(_WORD **)a2;
  ++*v7;
  v8 = *(_QWORD *)a1;
  v9 = *(unsigned __int16 *)(a2 + 10) | (unsigned __int16)(*v7 & v5);
  v10 = MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF);
  for ( i = (__int64)v10; ; i = (__int64)v10 )
  {
    Page = MiGetPage(i, v9, 0);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v10);
  }
  v14 = 48 * Page - 0x58000000000LL;
  v15 = MiLockPageInline(v6);
  MiLockNestedPageAtDpcInline(v14);
  MiFinalizePageAttribute(v14, *(unsigned __int8 *)(v6 + 34) >> 6, 1u);
  v16 = *(_OWORD *)(v6 + 16);
  v17 = *(_QWORD *)(v14 + 40) >> 58 << 58;
  v31 = *(_OWORD *)v6;
  v18 = *(__m128i *)(v6 + 32);
  v32 = v16;
  v33 = v18.m128i_i64[0];
  v34 = _mm_srli_si128(v18, 8).m128i_u64[0] & 0x3FFFFFFFFFFFFFFLL | v17;
  LODWORD(v17) = a1[16];
  v34 &= ~0x10000000000000uLL;
  *(_QWORD *)&v32 = MiMakeDemandZeroPte(((unsigned int)v17 >> 1) & 0x1F, 0x3FFFFFFFFFFFFFFLL, v19, v20);
  if ( (unsigned int)MiPteInShadowRange(&v32, v32) )
    MiWritePteShadow(&v32, v21);
  MiCopyPfnEntry(v14, &v31);
  *(_BYTE *)(v14 + 34) |= 0x10u;
  *(_WORD *)(v14 + 32) = v22;
  MiAddLockedPageCharge(v14, 1);
  MiDereferenceControlAreaPfnList(v8, 0LL, 1LL, 2);
  MiCopyPage(v13, a3, 0LL, 6);
  *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 5;
  v23 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000);
  v24 = MI_READ_PTE_LOCK_FREE(v23 + 8LL * ((*(_DWORD *)(v6 + 8) >> 3) & 0x1FF));
  updated = MiUpdateTransitionPteFrame(v24, v13);
  *v26 = updated;
  if ( (unsigned int)MiPteInShadowRange(v26, updated) )
    MiWritePteShadow(v28, v27);
  LOBYTE(v27) = 17;
  MiUnmapPageInHyperSpaceWorker(v29, v27);
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v15);
  return v13;
}
