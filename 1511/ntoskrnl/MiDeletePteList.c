/*
 * XREFs of MiDeletePteList @ 0x140060900
 * Callers:
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiMakeProtoTransition @ 0x1400ED218 (MiMakeProtoTransition.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReduceShareCount @ 0x1401E0194 (MiReduceShareCount.c)
 */

void __fastcall MiDeletePteList(__int64 a1, _KPROCESS *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v6; // r15
  unsigned __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  char v15; // di
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // r13
  unsigned __int16 v20; // ax
  int *v21; // rbp
  __int64 v22; // r11
  unsigned __int64 v23; // rbp
  bool v24; // r15
  __int64 v25; // r13
  __int64 v26; // rbx
  int v27; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // r9
  __int64 v33; // r10
  unsigned __int64 v34; // r9
  __int64 v35; // rcx
  bool v36; // zf
  __int64 v37; // rax
  char v38; // al
  char v39; // al
  char v40; // al
  unsigned __int16 v41; // ax
  int *v42; // rdi
  __int64 v43; // rax
  char v44; // al
  unsigned int v45; // edx
  __int64 v46; // rax
  _QWORD *v47; // rdi
  _QWORD *v48; // rcx
  unsigned int v49; // edi
  char v50; // dl
  __int64 v51; // rdx
  unsigned int v52; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+38h] [rbp-A0h] BYREF
  int *v54; // [rsp+40h] [rbp-98h]
  int v55; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v56; // [rsp+4Ch] [rbp-8Ch]
  int v57; // [rsp+50h] [rbp-88h] BYREF
  __int64 v58; // [rsp+58h] [rbp-80h] BYREF
  __int64 v59; // [rsp+60h] [rbp-78h]
  __int64 v60; // [rsp+68h] [rbp-70h]
  __int64 v61; // [rsp+70h] [rbp-68h]
  unsigned __int64 v62; // [rsp+78h] [rbp-60h]
  _QWORD *v63; // [rsp+80h] [rbp-58h]
  unsigned int v64; // [rsp+E0h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 12);
  v5 = 0LL;
  v64 = 0;
  v6 = a4;
  v59 = -1LL;
  v56 = v4;
  MiFlushTbList(a1, a2);
  v52 = 0;
  v8 = 0LL;
  if ( v4 )
  {
    v9 = (__int64 *)(a1 + 24);
    v61 = a1 + 24;
    do
    {
      v10 = *v9;
      v11 = (v10 & 0x7FF) + 1;
      v12 = v10 & 0xFFFFFFFFFFFFF000uLL;
      v60 = v11;
      v62 = v12;
      do
      {
        v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v63 = (_QWORD *)v13;
        v14 = MI_READ_PTE_LOCK_FREE(v13);
        v15 = v14 & 0xFE | 1;
        v53 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v18 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v53) - 0x58000000000LL;
        v19 = *(_QWORD *)(v18 + 40);
        v20 = (HIDWORD(v19) >> 8) & 0x3FF;
        if ( v20 == 1023 )
          v21 = &MiSystemPartition;
        else
          v21 = *(int **)(qword_1402FEC28 + 8LL * v20);
        v22 = 0x200000000000000LL;
        v54 = v21;
        if ( (v19 & 0x200000000000000LL) != 0 )
        {
          v23 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
          v24 = *(_QWORD *)(v18 + 8) >= 0LL;
          v25 = MI_GET_PAGE_FRAME_FROM_PTE(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v26 = 0LL;
          MiLockPageAtDpcInline(v18);
          if ( (v15 & 0x42) != 0 )
            v26 = MiCaptureDirtyBitToPfn(v18);
          MiDecrementShareCount(v18);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v26 )
            MiReleasePageFileInfo(v54, v26, 1LL);
          if ( v24 )
          {
            v27 = MiDecrementCombinedPte(v23);
          }
          else
          {
            CloneAddress = MiLocateCloneAddress((__int64)a2, v23);
            v27 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v29, v30);
          }
          v6 = a4;
          if ( v27 == 3 )
          {
            v31 = a3;
            ++*(_QWORD *)(a4 + 8);
            v53 = a3;
          }
          else
          {
            if ( v27 == 5 )
              ++*(_QWORD *)(a4 + 16);
            v31 = a3;
            v53 = a3;
          }
        }
        else
        {
          v55 = 0;
          v25 = v19 & 0xFFFFFFFFFLL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v55);
              while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
            v21 = v54;
            v22 = 0x200000000000000LL;
          }
          v32 = *(_QWORD *)(v18 + 16);
          v33 = 0x4000000000000000LL;
          *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
          if ( (v32 & 0x1000) != 0
            && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v18 + 16, v16, v17, v32)
            && *(_WORD *)(v18 + 32) == 1
            && a3 )
          {
            *(_QWORD *)(v18 + 16) &= ~0x1000uLL;
            v8 = v34;
          }
          if ( (*(_BYTE *)(v18 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v18 + 0x58000000000LL) / 48,
              *(_BYTE *)(v18 + 34) & 7,
              *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v35 = *(_QWORD *)(v18 + 24);
          *(_QWORD *)(v18 + 24) = v35 ^ (((v35 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v35) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v35 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            if ( (v22 & *(_QWORD *)(v18 + 40)) != 0 )
            {
              MiMakeProtoTransition(v18);
              v33 = 0x4000000000000000LL;
            }
            v36 = (*(_WORD *)(v18 + 32))-- == 1;
            v37 = *(_QWORD *)(v18 + 24);
            if ( v36 )
            {
              if ( (v37 & v33) != 0 )
              {
                v40 = *(_BYTE *)(v18 + 35);
                if ( (v40 & 0x10) != 0 )
                  *(_BYTE *)(v18 + 35) = v40 & 0xEF;
                v41 = ((unsigned int)HIDWORD(*(_QWORD *)(v18 + 40)) >> 8) & 0x3FF;
                if ( v41 == 1023 )
                  v42 = &MiSystemPartition;
                else
                  v42 = *(int **)(qword_1402FEC28 + 8LL * v41);
                v58 = *(_QWORD *)(v18 + 16);
                if ( (v58 & 0x400) == 0 )
                {
                  v43 = (v58 & 0x2000) != 0 || (v58 & 0x1000) != 0 ? MI_READ_PTE_LOCK_FREE(&v58) : 0LL;
                  v58 = v43;
                  if ( v43 )
                    MiReleasePageFileInfo(v42, v43, 0LL);
                }
                MiInsertPageInFreeOrZeroedList((v18 + 0x58000000000LL) / 48, 2uLL);
              }
              else
              {
                v44 = *(_BYTE *)(v18 + 34);
                if ( (v44 & 0x10) != 0 )
                {
                  v45 = 8;
                }
                else
                {
                  v45 = 4;
                  *(_BYTE *)(v18 + 34) = v44 & 0xF8 | 2;
                }
                MiInsertPageInList(v18, v45);
              }
            }
            else
            {
              if ( (v37 & v33) != 0 )
              {
                *(_BYTE *)(v18 + 34) |= 7u;
              }
              else
              {
                v38 = *(_BYTE *)(v18 + 34);
                if ( (v38 & 0x10) != 0 )
                  v39 = v38 & 0xF8 | 3;
                else
                  v39 = v38 & 0xF8 | 2;
                *(_BYTE *)(v18 + 34) = v39;
              }
              if ( (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 && (unsigned int)MI_GET_PAGING_FILE_OFFSET(v18 + 16) )
                *(_BYTE *)(MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v18 + 40)) >> 8) & 0x3FF) + 594) = 1;
              ++*(_QWORD *)(v6 + 8);
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v8 )
          {
            v46 = a3 & 0x3E0 | (2
                              * ((HIDWORD(v8) << 31) | *(_WORD *)(*(_QWORD *)&v21[2 * ((v8 >> 1) & 0xF) + 1432] + 204LL) & 0xF)) | 0x1000;
            v8 = 0LL;
          }
          else
          {
            v46 = a3;
          }
          v53 = v46;
          _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
          v31 = v53;
        }
        v47 = v63;
        v48 = v63;
        *v63 = v31;
        if ( (unsigned int)MiPteInShadowRange(v48) )
          MiWritePteShadow(v47, v31);
        if ( v25 != v59 )
        {
          if ( v5 )
          {
            MiLockPageAtDpcInline(v5);
            MiReduceShareCount(v5, v64);
            _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v64 = 0;
          }
          v59 = v25;
          v5 = 48 * v25 - 0x58000000000LL;
        }
        v49 = v64 + 1;
        v12 = v62 + 4096;
        ++v64;
        v36 = v60-- == 1;
        v62 += 4096LL;
      }
      while ( !v36 );
      v9 = (__int64 *)(v61 + 8);
      ++v52;
      v61 += 8LL;
    }
    while ( v52 < v56 );
    if ( v49 )
    {
      v57 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v57);
          while ( (*(_QWORD *)(v5 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) );
        v49 = v64;
      }
      v50 = *(_BYTE *)(v5 + 34);
      if ( (v50 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (v5 + 0x58000000000LL) / 48, v50 & 7, *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v51 = (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v49;
      *(_QWORD *)(v5 + 24) ^= (v51 ^ *(_QWORD *)(v5 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v51 )
        MiPfnShareCountIsZero(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
}
