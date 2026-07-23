/*
 * XREFs of MiObtainTransitionPage @ 0x140104F94
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiCanPageMove @ 0x1401051DC (MiCanPageMove.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiObtainTransitionPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 *a6)
{
  unsigned __int8 v6; // r10
  int v9; // r9d
  int *v10; // r13
  unsigned __int8 v11; // r10
  __int64 v12; // r15
  unsigned int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // rdi
  int v16; // eax
  __int64 Page; // rax
  __int64 v18; // r14
  __int64 v19; // rbp
  unsigned __int8 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edi

  v6 = a2;
  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_3:
    __writecr8(v6);
    return 0LL;
  }
  if ( !(unsigned int)MiCanPageMove(a1, a2, 0LL, a4) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_3;
  }
  v10 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v11);
  v12 = (a1 + 0x58000000000LL) / 48;
  if ( v9 == -1 )
  {
    v15 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v16 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0);
    v13 = 32;
    v14 = (v16 << byte_140326A09) | v12 & dword_140326A38 | ((_DWORD)v15 << byte_140326A18);
    if ( (a5 & 0x3000000) != 0 )
      v13 = 16416;
  }
  else
  {
    v13 = 16;
    v14 = v12 & dword_140326A38 | v9 & ~dword_140326A38;
  }
  Page = MiGetPage((__int64)v10, v14, v13);
  v18 = Page;
  if ( Page == -1 )
    return 1LL;
  v19 = 48 * Page - 0x58000000000LL;
  v20 = MiLockPageInline(a1);
  if ( v19 == a1 )
  {
    v18 = -1LL;
    goto LABEL_23;
  }
  if ( !MiIsPfnInline((a1 + 0x58000000000LL) / 48)
    || (unsigned int)MiIsPfnFileOnly(a1) == 1
    || *(_WORD *)(a1 + 32)
    || v10 != MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF)
    || !(unsigned int)MiCanPageMove(a1, v21, v22, v23) )
  {
    v24 = 0;
    goto LABEL_21;
  }
  v24 = 2;
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) > 2u )
  {
LABEL_21:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v20);
    MiReleaseFreshPage(v19);
    return v24;
  }
  MiReplaceTransitionPage(a1, v19, a3);
LABEL_23:
  *(_QWORD *)(a1 + 16) = 0LL;
  MiSetOriginalPtePfnFromFreeList(a1 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v20);
  if ( a6 )
    *a6 = v18;
  return 3LL;
}
