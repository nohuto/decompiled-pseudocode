/*
 * XREFs of MiDeletePteRun @ 0x140064CC0
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiDeletePagablePteRange @ 0x140075220 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiDeleteBatch @ 0x140064690 (MiDeleteBatch.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiTryDeleteTransitionPte @ 0x1400B6E00 (MiTryDeleteTransitionPte.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiDeletePteRun(_QWORD *BugCheckParameter2, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v5; // ax
  _QWORD *v6; // r12
  ULONG_PTR v7; // r14
  struct _KEVENT *v8; // r15
  struct _KEVENT *v9; // rsi
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  _QWORD *v19; // r14
  __int64 v20; // r14
  unsigned __int16 v21; // ax
  int *v22; // rax
  unsigned __int8 v23; // cl
  __int64 v24; // rdx
  unsigned __int16 v25; // ax
  __int64 v26; // rcx
  char v27; // dl
  unsigned __int16 v28; // ax
  struct _KEVENT *v29; // rax
  int IsZero; // r15d
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  ULONG_PTR v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h] BYREF
  struct _KEVENT *v46; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v47; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v53; // [rsp+70h] [rbp-90h]
  struct _KEVENT *v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  unsigned __int8 v56[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h]
  _QWORD v58[16]; // [rsp+A0h] [rbp-60h]

  v5 = *(_WORD *)(a3 + 1444);
  v6 = BugCheckParameter2;
  v55 = a4;
  v49 = a2;
  v7 = a2;
  *(_WORD *)v56 = 0;
  v8 = 0LL;
  v57 = 0LL;
  v46 = 0LL;
  if ( v5 == 1023 )
    v9 = (struct _KEVENT *)MiSystemPartition;
  else
    v9 = *(struct _KEVENT **)(qword_140327038 + 8LL * v5);
  v54 = v9;
  if ( (unsigned __int64)BugCheckParameter2 <= a2 )
  {
    while ( 1 )
    {
      v10 = MI_READ_PTE_LOCK_FREE(v6);
      BugCheckParameter3 = v10;
      if ( !v10 )
        goto LABEL_101;
      if ( (v10 & 0x400) == 0 )
      {
        *(_QWORD *)(a5 + 8) += MiDeleteBatch(v56);
        v36 = MiTryDeleteTransitionPte((ULONG_PTR)v6);
        if ( v36 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v6);
          v37 = BugCheckParameter3;
          MiReleasePageFileSpace(v9, BugCheckParameter3, 1LL);
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v37, v38, v39, v40) )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          *v6 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v6, v41) )
            MiWritePteShadow(v42, 0LL);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          if ( v36 == 3 )
            ++*(_QWORD *)(a5 + 8);
        }
        goto LABEL_101;
      }
      v47 = 0LL;
      BugCheckParameter2a = 0LL;
      BugCheckParameter3 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v11 = 0LL;
      v53 = 0LL;
      v12 = MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter3);
      v16 = v12;
      if ( v12 > qword_140326AD0
        || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        MiDeleteBatch(v56);
        MiDereferenceIoPages(1LL, v16, 1LL, v31);
        v20 = 48 * MiGetContainingPageTable(v6) - 0x58000000000LL;
        IsZero = 4;
        goto LABEL_75;
      }
      if ( (v12 & 0xF) == 0 && (__int64)((v7 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL) >= 120 )
      {
        v17 = MiDeleteClusterPage(v6, v56, a5);
        v13 = a3;
        v14 = 0x8000000000000000uLL;
        v15 = 0xFFFFF68000000000uLL;
        if ( v17 == 1 )
        {
          v6 += 15;
          goto LABEL_101;
        }
      }
      v18 = 48 * v16 - 0x58000000000LL;
      v19 = (_QWORD *)(v14 | *(_QWORD *)(v18 + 8));
      if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 )
        break;
      *(_QWORD *)(a5 + 8) += MiDeleteBatch(v56);
      if ( v19 != v6 )
        KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v6, BugCheckParameter3, *(_QWORD *)(v18 + 8));
      v20 = 48 * (*(_QWORD *)(v18 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      v51 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v51);
        while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0 );
      }
      *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
LABEL_57:
      v27 = *(_BYTE *)(v18 + 34);
      if ( (v27 & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v18 + 0x58000000000LL) / 48,
          *(_BYTE *)(v18 + 34) & 7,
          *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v28 = ((unsigned int)HIDWORD(*(_QWORD *)(v18 + 40)) >> 8) & 0x3FF;
      if ( v28 == 1023 )
        v29 = (struct _KEVENT *)MiSystemPartition;
      else
        v29 = *(struct _KEVENT **)(qword_140327038 + 8LL * v28);
      v46 = v29;
      if ( (BugCheckParameter3 & 0x42) != 0 )
      {
        v11 = 0LL;
        if ( (v27 & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 && (v27 & 8) == 0 )
            v11 = MiCapturePageFileInfoInline(v18 + 16, 1LL, 0LL);
          *(_BYTE *)(v18 + 34) |= 0x10u;
        }
      }
      IsZero = 4;
      *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
      {
        IsZero = MiPfnShareCountIsZero(v18);
        if ( IsZero == 3 && (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 && !v47 && !BugCheckParameter2a )
          IsZero = 4;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_75:
      v52 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v52);
        while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v32 = *(_QWORD *)(v20 + 24);
      if ( (*(_BYTE *)(v20 + 34) & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (v20 + 0x58000000000LL) / 48, *(_BYTE *)(v20 + 34) & 7, v32 & 0x3FFFFFFFFFFFFFFFLL);
      v33 = (v32 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v20 + 24) = v32 ^ (v33 ^ v32) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v32 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v20);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 )
        MiReleasePageFileInfo(v46, v11, 1);
      if ( v47 )
      {
        v34 = MiDecrementCombinedPte(v47);
LABEL_87:
        IsZero = v34;
        goto LABEL_88;
      }
      if ( BugCheckParameter2a )
      {
        v34 = MiDecrementCloneBlockReference(BugCheckParameter2a, v53);
        goto LABEL_87;
      }
LABEL_88:
      if ( IsZero == 3 )
      {
        ++*(_QWORD *)(a5 + 8);
      }
      else if ( IsZero == 5 )
      {
        ++*(_QWORD *)(a5 + 16);
      }
      *v6 = 0LL;
      if ( !(unsigned int)MiPteInShadowRange(v6, v33) )
        goto LABEL_49;
      MiWritePteShadow(v35, 0LL);
      v7 = v49;
LABEL_101:
      if ( (unsigned __int64)++v6 > v7 )
        return MiDeleteBatch(v56);
      v8 = v46;
      v9 = v54;
    }
    if ( (unsigned __int64)v6 <= v15 + 0x3FFFFFFF78LL && (unsigned __int64)v6 >= v15 )
    {
      if ( (*(_QWORD *)(v18 + 8) & v14) == 0 )
      {
        v47 = v14 | *(_QWORD *)(v18 + 8);
LABEL_21:
        *(_QWORD *)(a5 + 8) += MiDeleteBatch(v56);
        goto LABEL_22;
      }
      if ( *(_QWORD *)(v13 + 912) )
      {
        v53 = v14 | *(_QWORD *)(v18 + 8);
        BugCheckParameter2a = MiLocateCloneAddress(v13, v53);
        if ( BugCheckParameter2a )
          goto LABEL_21;
      }
    }
LABEL_22:
    v20 = 48 * MiGetContainingPageTable(v6) - 0x58000000000LL;
    if ( !v56[0] )
      goto LABEL_31;
    if ( v20 != v57
      || ((v21 = (HIDWORD(*(_QWORD *)(v18 + 40)) >> 8) & 0x3FF, v21 != 1023)
        ? (v22 = *(int **)(qword_140327038 + 8LL * v21))
        : (v22 = MiSystemPartition),
          v22 != (int *)v8 || _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL)) )
    {
      *(_QWORD *)(a5 + 8) += MiDeleteBatch(v56);
    }
    v23 = v56[0];
    if ( !v56[0] )
    {
LABEL_31:
      v57 = v20;
      v50 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v23 = v56[0];
    }
    v24 = *(unsigned __int8 *)(v18 + 34);
    if ( (v24 & 7) == 6
      && (*(_DWORD *)(v18 + 16) & 0x400LL) == 0
      && ((BugCheckParameter3 & 0x42) != 0 || (v24 & 0x10) != 0)
      && !v47
      && !BugCheckParameter2a )
    {
      v58[v23] = BugCheckParameter3;
      if ( !v56[0] )
      {
        v25 = ((unsigned int)HIDWORD(*(_QWORD *)(v18 + 40)) >> 8) & 0x3FF;
        if ( v25 == 1023 )
          v46 = (struct _KEVENT *)MiSystemPartition;
        else
          v46 = *(struct _KEVENT **)(qword_140327038 + 8LL * v25);
      }
      *v6 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v6, v24) )
        MiWritePteShadow(v26, 0LL);
      if ( ++v56[0] == 16 )
        *(_QWORD *)(a5 + 8) += MiDeleteBatch(v56);
LABEL_49:
      v7 = v49;
      goto LABEL_101;
    }
    if ( v23 )
    {
      v56[1] = 1;
      *(_QWORD *)(a5 + 8) += MiDeleteBatch(v56);
      v56[1] = 0;
    }
    goto LABEL_57;
  }
  return MiDeleteBatch(v56);
}
