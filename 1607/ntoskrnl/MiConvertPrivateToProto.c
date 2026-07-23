/*
 * XREFs of MiConvertPrivateToProto @ 0x1401F8734
 * Callers:
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009DBAC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400BBC00 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1400BBC2C (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiReleaseWsle @ 0x1400E02D0 (MiReleaseWsle.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14010D6A4 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiComparePages @ 0x1401F85AC (MiComparePages.c)
 *     MiFillCombinePage @ 0x1401F9994 (MiFillCombinePage.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 */

__m128i *__fastcall MiConvertPrivateToProto(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rbx
  __m128i *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r8
  __m128i *v18; // rbx
  __int64 v19; // r9
  __m128i *v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  _BYTE *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rbx
  struct _KEVENT *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r10
  _QWORD *v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rdx
  ULONG_PTR v43; // r13
  _QWORD *v44; // rdi
  signed __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rbx
  unsigned __int64 v49; // r12
  unsigned int v50; // ebx
  char *v51; // rax
  unsigned int v53; // ecx
  char v55; // [rsp+30h] [rbp-99h]
  bool v56; // [rsp+34h] [rbp-95h]
  int v57; // [rsp+34h] [rbp-95h]
  BOOL v58; // [rsp+38h] [rbp-91h]
  unsigned __int64 v60; // [rsp+48h] [rbp-81h] BYREF
  __int64 v61; // [rsp+50h] [rbp-79h]
  _BYTE *v62; // [rsp+58h] [rbp-71h]
  __int64 v63; // [rsp+60h] [rbp-69h]
  __int64 *v64; // [rsp+68h] [rbp-61h]
  ULONG_PTR *SharedWorkingSetList; // [rsp+70h] [rbp-59h]
  __int64 v66; // [rsp+78h] [rbp-51h]
  __int64 v67; // [rsp+80h] [rbp-49h]
  unsigned __int64 ContainingPageTable; // [rsp+88h] [rbp-41h]
  _KPROCESS *Process; // [rsp+90h] [rbp-39h]
  _QWORD v70[4]; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v71[2]; // [rsp+B8h] [rbp-11h] BYREF

  v66 = a5;
  v64 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v58 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v62 = a2;
  v60 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v7 = v60;
  v8 = (__m128i *)MI_GET_PFN_FROM_PTE((__int64)&v60);
  v61 = v9 << 25 >> 16;
  SharedWorkingSetList = MiGetSharedWorkingSetList(v10);
  if ( a6 == -1 )
  {
    v38 = MiLockProtoPoolPage(a3, 0LL);
    if ( !v38 )
      return 0LL;
    v39 = MiLockLeafPage(a3, 0);
    v40 = v39;
    if ( v39 )
    {
      if ( (*(_BYTE *)(v39 + 35) & 0x40) == 0 && ((*(_BYTE *)(v39 + 34) & 7) == 6 || (*(_BYTE *)(v39 + 34) & 0x20) == 0) )
      {
        v41 = MiMapPageInHyperSpaceWorker((v39 + 0x58000000000LL) / 48, 0LL, 0x80000000);
        v55 = MiComparePages(v41, v61);
        LOBYTE(v42) = 17;
        MiUnmapPageInHyperSpaceWorker(v41, v42);
        if ( v55 == 1 )
        {
          MiGetPfnPriority((__int64)v8);
          MiUpdatePfnPriority(v40);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v38, 0x11u);
        if ( !v55 )
          return 0LL;
        v43 = v8->m128i_i64[0];
        v44 = v62;
        if ( dword_1403271C8 )
          MI_WSLE_LOG_ACCESS(
            a1,
            (_DWORD *)(SharedWorkingSetList[10] + v43 * *((unsigned int *)SharedWorkingSetList + 8)),
            v62);
        v45 = MiMakePrototypePteDirect(a3) | 0x800;
        MiLockPageAtDpcInline((__int64)v8);
        if ( (v8[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v8[2].m128i_i16[0] == 1 )
        {
          v57 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v44, v45);
          if ( v58 )
          {
            memset(v70, 0, sizeof(v70));
            MiIdentifyPfn(v8, v70);
          }
          v8[1].m128i_i64[1] |= 0x4000000000000000uLL;
          v8[2].m128i_i8[2] |= 7u;
          v46 = v8[2].m128i_i64[1] & 0xFFFFFFFFFLL;
          _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          if ( v57 == 1 )
            MiInsertTbFlushEntry(v66, v61, 1LL, 0);
          MiUpdateWorkingSetPrivateSize(a1, v61, -1LL);
          MiRemoveWsle(v43, v47);
          MiReleaseWsle(v43, a1, v61, 1);
          v48 = 48 * v46 - 0x58000000000LL;
          MiLockPageAtDpcInline(v48);
          MiDecrementShareCount(v48);
          _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiResolveProtoCombine(v62, a1, a3);
          v37 = a1;
          goto LABEL_64;
        }
        goto LABEL_46;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockProtoPoolPage(v38, 0x11u);
    return 0LL;
  }
  v12 = 48 * a6 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(0xFFFFFA8000000000uLL, v12, v8, v11) )
    return 0LL;
  v13 = 0LL;
  v67 = a3 & 0x7FFFFFFFFFFFFFFFLL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v63 = 48 * ContainingPageTable - 0x58000000000LL;
  v56 = v64 != (__int64 *)&unk_140326E58;
  MiLockPageAtDpcInline((__int64)v8);
  if ( (v8[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) != 1 || v8[2].m128i_i16[0] != 1 )
  {
LABEL_46:
    _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( v58 )
  {
    memset(v70, 0, sizeof(v70));
    MiIdentifyPfn(v8, v70);
  }
  if ( (v7 & 0x42) != 0 )
    v60 = v7 & 0xFFFFFFFFFFFFFFBDuLL;
  LOBYTE(v15) = v8[2].m128i_i8[2];
  if ( (v15 & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v8[1].m128i_i64[0], v14, v15, v16) )
    v8[2].m128i_i8[2] = v17 | 0x10;
  v18 = v8 + 1;
  v19 = v8[1].m128i_i64[0];
  if ( (v19 & 2) == 0 )
  {
    if ( !v56 && (v19 & 4) != 0 )
    {
      v23 = MiCapturePageFileInfoInline((__m128i *)v8[1].m128i_i64, 1, 1);
      v8[2].m128i_i8[2] |= 0x10u;
      v13 = v23;
    }
    goto LABEL_22;
  }
  v20 = v8 + 1;
  if ( v56 )
  {
    if ( !MI_IS_PTE_IN_WS_SWAP_SET(v20) )
    {
      v13 = v21;
      goto LABEL_18;
    }
    v20 = v8 + 1;
  }
  v22 = MiCapturePageFileInfoInline(v20, 1, 1);
  v8[2].m128i_i8[2] |= 0x10u;
  v13 = v22;
LABEL_18:
  v18->m128i_i64[0] &= ~2uLL;
LABEL_22:
  MiLockNestedPageAtDpcInline(v12);
  MiFinalizePageAttribute(v12, v8[2].m128i_u8[2] >> 6, 1u);
  MiCopyPfnEntry(v12, (__int128 *)v8->m128i_i8);
  if ( (unsigned int)MiGetPfnPriority(v12) < 5 )
    *(_BYTE *)(v12 + 35) = *(_BYTE *)(v12 + 35) & 0xF8 | 5;
  v24 = ContainingPageTable;
  *(_QWORD *)(v12 + 8) = v67;
  *(_QWORD *)(v12 + 40) = v24 & 0xFFFFFFFFFLL | *(_QWORD *)(v12 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  MI_MAKE_PROTECT_WRITE_COPY(v12 + 16);
  if ( v56 )
    *(_QWORD *)(v12 + 16) |= 8uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v56 && (v18->m128i_i32[0] & 4) != 0 )
  {
    v18->m128i_i64[0] &= ~4uLL;
    if ( v13 )
      v13 &= ~4uLL;
  }
  v60 ^= (v60 ^ (a6 << 12)) & 0xFFFFFFFFF000LL;
  v25 = v60;
  if ( (v60 & 0x800) != 0 )
  {
    v25 = v60 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v60 = v25;
  }
  v26 = v62;
  *(_QWORD *)v62 = v25;
  if ( MiPteInShadowRange((unsigned __int64)v26) )
    MiWritePteShadow(v27, v28);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)a3 = v28;
  if ( MiPteInShadowRange(a3) )
    MiWritePteShadow(v29, v30);
  v8[1].m128i_i64[1] |= 0x4000000000000000uLL;
  v8[2].m128i_i8[2] |= 7u;
  _InterlockedAnd64(&v8[1].m128i_i64[1], v31);
  v32 = v61;
  MiInsertTbFlushEntry(v66, v61, 1LL, 0);
  if ( v13 )
  {
    v33 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(v8[2].m128i_i64[1]) >> 8) & 0x3FF);
    MiReleasePageFileInfo(v33, v13, 1);
  }
  MiLockPageAtDpcInline(v63);
  v34 = v63;
  *(_QWORD *)(v63 + 24) ^= (*(_QWORD *)(v63 + 24) ^ (*(_QWORD *)(v63 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v35 = *v64;
  if ( v56 )
  {
    if ( (int *)v35 == MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 6528), 1uLL);
    MiReturnCommit(v35, 1uLL);
    _InterlockedExchangeAdd64(&qword_140327928, 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v36 = (_QWORD *)(SharedWorkingSetList[10] + *(_QWORD *)v12 * *((unsigned int *)SharedWorkingSetList + 8));
    *v36 &= 0xFFFFFFFFFFFFFE0FuLL;
  }
  MiUpdateWorkingSetPrivateSize(a1, v32, -1LL);
LABEL_64:
  if ( (*(_BYTE *)(v37 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v58 )
  {
    if ( a6 == -1 )
      v49 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v49 = a3 | 1;
    v50 = EtwpActiveSystemLoggers;
    v71[0] = v70;
    v70[3] = v49;
    v71[1] = 32LL;
    while ( _BitScanForward(&v53, v50) )
    {
      v50 &= v50 - 1;
      v51 = (char *)&EtwpGroupMasks + 32 * v53;
      if ( v51 )
      {
        if ( (*((_DWORD *)v51 + 1) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            (__int64)v71,
            EtwpHostSiloState,
            (unsigned __int16)EtwpSystemLogger[2 * v53],
            1u,
            0x27Au,
            0x11401B02u);
      }
    }
  }
  return v8;
}
