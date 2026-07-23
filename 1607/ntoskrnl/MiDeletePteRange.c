/*
 * XREFs of MiDeletePteRange @ 0x1400FE550
 * Callers:
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     MiDeleteAllHashMappings @ 0x1400FF190 (MiDeleteAllHashMappings.c)
 *     MiConvertWsleHash @ 0x140100840 (MiConvertWsleHash.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiTryDeleteTransitionPte @ 0x1400B6E00 (MiTryDeleteTransitionPte.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiFreeUnmappedPageTables @ 0x1400E1870 (MiFreeUnmappedPageTables.c)
 *     MiDeleteValidSystemPte @ 0x1400FE970 (MiDeleteValidSystemPte.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     MiReplicatePteChange @ 0x140148860 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiDeletePteRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  char *AnyMultiplexedVm; // r13
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  LONG *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r14
  ULONG_PTR NextPageTable; // rsi
  __int64 v15; // rax
  _KPROCESS *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 updated; // rax
  __int64 v22; // r9
  __int64 v23; // rcx
  ULONG_PTR v24; // r15
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  ULONG_PTR v27; // rbx
  unsigned int i; // r12d
  __int64 v29; // rax
  __int16 v30; // cx
  _KPROCESS *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v43; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+60h] [rbp-A0h]
  int *v45; // [rsp+68h] [rbp-98h]
  LONG *SharedVm; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v52; // [rsp+A4h] [rbp-5Ch]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]

  v39 = a4;
  v48 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  AnyMultiplexedVm = (char *)a1;
  SharedVm = MiGetSharedVm(a1);
  if ( (*(_BYTE *)(v7 + 184) & 7) == 2 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v45 = MiPartitionIdToPointer(*((_WORD *)AnyMultiplexedVm + 82));
  v8 = (__int64)v45;
  v9 = a3 - 8;
  v53 = 20LL;
  v51 = MiTbFlushType(AnyMultiplexedVm);
  v12 = 0LL;
  v52 = 0;
  v13 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v41 = 0LL;
  v44 = v9;
  v38 = 0LL;
  if ( a2 <= v9 )
  {
    while ( 1 )
    {
      LOBYTE(v11) = 17;
      NextPageTable = MiGetNextPageTable(a2, v9, 0LL, v11, 5, &v42);
      if ( !NextPageTable )
        goto LABEL_29;
      do
      {
        v15 = MI_READ_PTE_LOCK_FREE(NextPageTable);
        v19 = v15;
        if ( (v15 & 1) != 0 )
        {
          if ( (v39 & 0x20) != 0 )
          {
            v20 = MI_GET_PFN_FROM_PTE(NextPageTable);
            updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), 0LL);
            *(_QWORD *)(v22 + 16) = updated;
          }
          MiDeleteValidSystemPte(NextPageTable, (__int64)&v38);
LABEL_9:
          ++v13;
          goto LABEL_17;
        }
        if ( (v15 & 0x400) != 0 )
          goto LABEL_17;
        if ( (v15 & 0x800) != 0 )
        {
          if ( (unsigned int)MiTryDeleteTransitionPte(NextPageTable) != 1 )
            goto LABEL_9;
          v19 = MI_READ_PTE_LOCK_FREE(NextPageTable);
        }
        MiReleasePageFileSpace((struct _KEVENT *)v8, v19, 1LL);
        if ( v19 )
        {
          *(_QWORD *)NextPageTable = 0LL;
          ++v13;
          if ( (unsigned int)MiPteInShadowRange(NextPageTable, v16) )
            MiWritePteShadow(v23, 0LL);
        }
LABEL_17:
        NextPageTable += 8LL;
      }
      while ( NextPageTable <= v9 && (NextPageTable & 0xFFF) != 0 );
      v40 = v13;
      v43 = NextPageTable;
      MiFlushTbList((__int64)&v51, v16, v17, v18);
      MiFreeUnmappedPageTables(v38, &v47);
      v24 = NextPageTable - 8;
      v38 = 0LL;
      v25 = ((NextPageTable - 8) >> 9) & 0x7FFFFFFFF8LL;
      v26 = v41;
      v27 = v25 - 0x98000000000LL;
      for ( i = 1; i < 4; ++i )
      {
        v29 = MI_GET_PFN_FROM_PTE(v27);
        if ( (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          break;
        v30 = *(_WORD *)(v29 + 32);
        if ( v30 != 1 && (v30 != 2 || (*(_BYTE *)(v29 + 34) & 8) == 0) )
          break;
        MiDeleteValidSystemPte(v27, (__int64)&v38);
        if ( i == 3 && (AnyMultiplexedVm[184] & 7) != 0 )
          MiReplicatePteChange(v24, v24);
        MiFlushTbList((__int64)&v51, v31, v32, v33);
        MiFreeUnmappedPageTables(v38, &v47);
        v38 = 0LL;
        v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v26;
      }
      v9 = v44;
      v13 = v40;
      v8 = (__int64)v45;
      v41 = v26;
      a2 = v43;
      if ( v43 > v44 )
      {
LABEL_29:
        LOBYTE(v11) = v39;
        v12 = v41;
        v10 = SharedVm;
        break;
      }
    }
  }
  v34 = v12 + v13;
  if ( (v11 & 0x10) != 0 )
  {
    if ( (AnyMultiplexedVm[184] & 7) != 1 )
    {
      v35 = *((_QWORD *)v10 + 6);
      v36 = *((_QWORD *)v10 + 7) - v34;
      *((_QWORD *)v10 + 7) = v36;
      if ( v35 )
      {
        if ( (AnyMultiplexedVm[184] & 7u) >= 2 || v36 + v34 <= v35 )
        {
          v34 = 0LL;
        }
        else if ( v36 < v35 )
        {
          v34 += v36 - v35;
        }
      }
    }
  }
  else if ( (v11 & 0x20) != 0 )
  {
    if ( !v34 )
      return v34;
    *((_QWORD *)v10 + 9) -= v34;
    if ( (AnyMultiplexedVm[184] & 7) != 1 )
      _InterlockedExchangeAdd64(&qword_140327940, -(__int64)v34);
  }
  if ( v34 )
  {
    if ( (int *)v8 == MiSystemPartition )
      MiReturnResidentAvailable(v34);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 6528), v34);
    v34 -= v48;
    MiReturnCommit(v8, v34);
  }
  return v34;
}
