/*
 * XREFs of MiDeleteValidSystemPage @ 0x14004B220
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiDeleteKernelStackPages @ 0x14009FFF0 (MiDeleteKernelStackPages.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPte @ 0x1401234B4 (MiDeleteSystemPte.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiIsPfnSystemCharged @ 0x14012E64C (MiIsPfnSystemCharged.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x1401E5D18 (MiDriverPageIsDangling.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 */

unsigned __int64 __fastcall MiDeleteValidSystemPage(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  ULONG_PTR v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  unsigned __int16 v10; // ax
  struct _KEVENT *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 PrototypePteDirect; // rax
  char v15; // r10
  unsigned __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // dl
  __int64 v22; // rcx
  int IsZero; // ebx
  char v24; // dl
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT *v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h] BYREF
  int v31; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v28 = 0LL;
  v29 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  v6 = v29;
  v8 = MI_GET_PFN_FROM_PTE(&v29);
  v9 = *(_QWORD *)(v8 + 40);
  v10 = (HIDWORD(v9) >> 8) & 0x3FF;
  if ( v10 == 1023 )
    v11 = (struct _KEVENT *)MiSystemPartition;
  else
    v11 = *(struct _KEVENT **)(qword_140327038 + 8LL * v10);
  v27 = v11;
  if ( (v9 & 0x200000000000000LL) != 0 )
  {
    v12 = *(_QWORD *)(v8 + 8);
    if ( v12 >= 0 )
      v28 = v12 | 0x8000000000000000uLL;
    v13 = 48 * MiGetContainingPageTable(BugCheckParameter2) - 0x58000000000LL;
    MiLockPageAtDpcInline(v8);
    if ( (v6 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v8);
    if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 || (v6 & 0x200) != 0 )
    {
      ++*(_QWORD *)(a3 + 24);
      v15 = a2;
    }
    else
    {
      PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v8 + 16));
      v15 = a2;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x820) == 0x820 )
        ++*(_QWORD *)(a3 + 24);
    }
LABEL_29:
    if ( (v15 & 0x10) != 0 )
      *(_BYTE *)(v8 + 35) &= ~8u;
    *BugCheckParameter2 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2, v7) )
      MiWritePteShadow(v20, 0LL);
    v21 = *(_BYTE *)(v8 + 34);
    v22 = *(_QWORD *)(v8 + 24);
    if ( (v21 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v8 + 0x58000000000LL) / 48, v21 & 7, v22 & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v8 + 24) = v22 ^ (((v22 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v22) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v22 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      IsZero = MiPfnShareCountIsZero(v8);
    else
      IsZero = 2;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v13 )
    {
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v24 = *(_BYTE *)(v13 + 34);
      v25 = *(_QWORD *)(v13 + 24);
      if ( (v24 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (v13 + 0x58000000000LL) / 48, v24 & 7, v25 & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v13 + 24) = v25 ^ (((v25 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v25) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v25 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v13);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v4 )
      MiReleasePageFileInfo(v27, v4, 1);
    result = v28;
    if ( v28 )
    {
      result = MiDecrementCombinedPte(v28);
      IsZero = result;
    }
    if ( IsZero == 3 )
      ++*(_QWORD *)(a3 + 8);
    return result;
  }
  if ( v8 != qword_1403276C0 )
  {
    if ( (_QWORD *)(*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x1Au, 0x404uLL, (ULONG_PTR)BugCheckParameter2, v6, *(_QWORD *)(v8 + 8));
    v18 = v9 & 0xFFFFFFFFFLL;
    if ( v18 == 0xFFFFFFFFFLL )
      v13 = 0LL;
    else
      v13 = 48 * v18 - 0x58000000000LL;
    ++*(_QWORD *)(a3 + 24);
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0 );
    }
    v19 = *(_QWORD *)(v8 + 40);
    *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
    if ( ((v19 >> 54) & 7) == 2 )
      *(_QWORD *)(v8 + 40) = v19 & 0xFE3FFFFFFFFFFFFFuLL;
    v15 = a2;
    if ( (a2 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v8) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v8 + 35) &= ~0x20u;
    }
    goto LABEL_29;
  }
  *BugCheckParameter2 = 0LL;
  result = MiPteInShadowRange(BugCheckParameter2, v7);
  if ( (_DWORD)result )
    return MiWritePteShadow(v17, 0LL);
  return result;
}
