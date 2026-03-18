/*
 * XREFs of MiObtainTransitionPage @ 0x140071020
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiCanPageMove @ 0x1400712E0 (MiCanPageMove.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiObtainTransitionPage(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int v7; // r9d
  unsigned __int8 v8; // r10
  int *v9; // rbp
  unsigned __int16 v10; // ax
  int *v11; // r15
  __int64 v12; // rdi
  int v13; // edx
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // edx
  __int64 Page; // rax
  __int64 v18; // r14
  __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int16 v21; // ax
  unsigned int v23; // esi
  int v24; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    return 0LL;
  }
  if ( !(unsigned int)MiCanPageMove(a1) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    return 0LL;
  }
  v9 = &MiSystemPartition;
  v10 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v10 == 1023 )
    v11 = &MiSystemPartition;
  else
    v11 = *(int **)(qword_1402FEC28 + 8LL * v10);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  if ( v7 == -1 )
  {
    v12 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v13 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL);
    v14 = dword_1402FE708;
    v15 = 32;
    v16 = ((_DWORD)v12 << byte_1402FE6E8) | (v13 << byte_1402FE6D9);
  }
  else
  {
    v14 = dword_1402FE708;
    v15 = 16;
    v16 = v7 & ~dword_1402FE708;
  }
  Page = MiGetPage((__int64)v11, ((a1 + 0x58000000000LL) / 48) & v14 | v16, v15);
  v18 = Page;
  if ( Page == -1 )
    return 1LL;
  v19 = 48 * Page - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v24);
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0 );
  }
  if ( v19 == a1 )
  {
    v18 = -1LL;
    goto LABEL_19;
  }
  if ( !MI_IS_PFN((a1 + 0x58000000000LL) / 48) || (unsigned int)MI_IS_PFN_FILE_ONLY(a1) == 1 || *(_WORD *)(a1 + 32) )
    goto LABEL_28;
  v21 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v21 != 1023 )
    v9 = *(int **)(qword_1402FEC28 + 8LL * v21);
  if ( v11 != v9 || !(unsigned int)MiCanPageMove(a1) )
  {
LABEL_28:
    v23 = 0;
    goto LABEL_27;
  }
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) > 2u )
  {
    v23 = 2;
LABEL_27:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    MiReleaseFreshPage(v19);
    return v23;
  }
  MiReplaceTransitionPage(a1, v19, a3);
LABEL_19:
  *(_QWORD *)(a1 + 16) = 128LL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  if ( a5 )
    *a5 = v18;
  return 3LL;
}
