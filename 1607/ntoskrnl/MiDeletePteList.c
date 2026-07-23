/*
 * XREFs of MiDeletePteList @ 0x1400DD960
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009DBAC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiReduceShareCount @ 0x1401F2D34 (MiReduceShareCount.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiDeletePteList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 *v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r12
  unsigned __int16 v19; // ax
  struct _KEVENT *v20; // r13
  unsigned __int64 v21; // rbp
  bool v22; // r14
  __int64 ContainingPageTable; // r12
  unsigned __int64 v24; // rbx
  int v25; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v27; // rdx
  ULONG_PTR v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r10
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned int PageFileReservationOffset; // eax
  unsigned __int16 v35; // dx
  __int64 v36; // r10
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  char v40; // dl
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned int v43; // [rsp+30h] [rbp-98h]
  __int64 v44; // [rsp+38h] [rbp-90h] BYREF
  __int64 v45; // [rsp+40h] [rbp-88h] BYREF
  int v46; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v47; // [rsp+4Ch] [rbp-7Ch]
  int v48; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v49; // [rsp+58h] [rbp-70h]
  __int64 v50; // [rsp+60h] [rbp-68h]
  unsigned __int64 v51; // [rsp+68h] [rbp-60h]
  __int64 v52; // [rsp+70h] [rbp-58h]
  __int64 v53; // [rsp+78h] [rbp-50h]
  unsigned int v54; // [rsp+D0h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 12);
  v5 = 0;
  v54 = 0;
  v6 = a4;
  v50 = -1LL;
  v8 = 0LL;
  v47 = v4;
  result = MiFlushTbList(a1);
  v45 = 0LL;
  v43 = 0;
  if ( v4 )
  {
    result = a1 + 24;
    v53 = a1 + 24;
    do
    {
      v10 = *(_QWORD *)result;
      v11 = (v10 & 0x3FF) + 1;
      v12 = v10 & 0xFFFFFFFFFFFFF000uLL;
      v52 = v11;
      v51 = v12;
      do
      {
        v13 = (__int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v49 = v13;
        v14 = MI_READ_PTE_LOCK_FREE(v13) & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v44 = v14;
        v15 = MI_GET_PFN_FROM_PTE(&v44);
        v18 = *(_QWORD *)(v15 + 40);
        v19 = (HIDWORD(v18) >> 8) & 0x3FF;
        if ( v19 == 1023 )
          v20 = (struct _KEVENT *)MiSystemPartition;
        else
          v20 = *(struct _KEVENT **)(qword_140327038 + 8LL * v19);
        if ( (v18 & 0x200000000000000LL) != 0 )
        {
          v21 = v16 | *(_QWORD *)(v15 + 8);
          v22 = (v16 & *(_QWORD *)(v15 + 8)) == 0;
          ContainingPageTable = MiGetContainingPageTable(v13);
          v24 = 0LL;
          MiLockPageAtDpcInline(v15);
          if ( (v14 & 0x42) != 0 )
            v24 = MiCaptureDirtyBitToPfn(v15);
          MiDecrementShareCount(v15);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v24 )
            MiReleasePageFileInfo(v20, v24, 1);
          if ( v22 )
          {
            v25 = MiDecrementCombinedPte(v21);
          }
          else
          {
            CloneAddress = MiLocateCloneAddress(a2, v21);
            v25 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v27, v28);
          }
          v6 = a4;
          if ( v25 == 3 )
          {
            ++*(_QWORD *)(a4 + 8);
          }
          else if ( v25 == 5 )
          {
            ++*(_QWORD *)(a4 + 16);
          }
          v29 = a3;
          v13 = v49;
          v5 = v54;
          v44 = a3;
        }
        else
        {
          v46 = 0;
          ContainingPageTable = v18 & 0xFFFFFFFFFLL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v46);
              while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
            v13 = v49;
            v17 = 0x3FFFFFFFFFFFFFFFLL;
          }
          v30 = *(_QWORD *)(v15 + 16);
          *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
          if ( (v30 & 2) != 0 && !MI_IS_PTE_IN_WS_SWAP_SET((_QWORD *)(v15 + 16)) && *(_WORD *)(v15 + 32) == 1 && a3 )
          {
            *(_QWORD *)(v15 + 16) &= ~2uLL;
            v45 = v31;
          }
          v32 = *(_QWORD *)(v15 + 24);
          if ( (*(_BYTE *)(v15 + 34) & 7) != 6 )
            KeBugCheckEx(0x4Eu, 0x99uLL, (v15 + 0x58000000000LL) / 48, *(_BYTE *)(v15 + 34) & 7, v17 & v32);
          v33 = (v17 & v32) - 1;
          *(_QWORD *)(v15 + 24) = v32 ^ v17 & (v33 ^ v32);
          if ( (v17 & v32) == 1 && (unsigned int)MiPfnShareCountIsZero(v15, v33) == 3 )
            ++*(_QWORD *)(v6 + 8);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v44 = a3;
          if ( v45 )
          {
            PageFileReservationOffset = MiGetPageFileReservationOffset(&v45);
            v44 = MiTransferSoftwarePte(
                    v36,
                    *((_QWORD *)&v20[262].Header.WaitListHead.Blink + (v35 >> 12)),
                    PageFileReservationOffset,
                    2LL);
            v45 = 0LL;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v29 = v44;
        }
        *v13 = v29;
        if ( (unsigned int)MiPteInShadowRange(v13, v29) )
          MiWritePteShadow(v38, v37);
        if ( ContainingPageTable != v50 )
        {
          if ( v8 )
          {
            MiLockPageAtDpcInline(v8);
            MiReduceShareCount(v8, v5);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v5 = 0;
          }
          v8 = 48 * ContainingPageTable - 0x58000000000LL;
          v50 = ContainingPageTable;
        }
        ++v5;
        v12 = v51 + 4096;
        v54 = v5;
        v39 = v52-- == 1;
        v51 += 4096LL;
      }
      while ( !v39 );
      result = v53 + 8;
      ++v43;
      v53 += 8LL;
    }
    while ( v43 < v47 );
    if ( v5 )
    {
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v40 = *(_BYTE *)(v8 + 34);
      v41 = *(_QWORD *)(v8 + 24);
      if ( (v40 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (v8 + 0x58000000000LL) / 48, v40 & 7, v41 & 0x3FFFFFFFFFFFFFFFLL);
      v42 = (v41 & 0x3FFFFFFFFFFFFFFFLL) - v5;
      *(_QWORD *)(v8 + 24) = v41 ^ (v42 ^ v41) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v41 & 0x3FFFFFFFFFFFFFFFLL) == v5 )
        MiPfnShareCountIsZero(v8, v42);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
