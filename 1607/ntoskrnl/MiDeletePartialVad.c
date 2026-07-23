/*
 * XREFs of MiDeletePartialVad @ 0x1400955C0
 * Callers:
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 * Callees:
 *     MiManageSubsectionView @ 0x1400138A0 (MiManageSubsectionView.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiReturnFullProcessCharges @ 0x140027160 (MiReturnFullProcessCharges.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiInsertVad @ 0x1400424D0 (MiInsertVad.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCountSharedPages @ 0x140092450 (MiCountSharedPages.c)
 *     MiCaptureDeleteHierarchy @ 0x1400959C0 (MiCaptureDeleteHierarchy.c)
 *     MiAdvanceVadView @ 0x140095AA8 (MiAdvanceVadView.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     MiUpControlAreaRefs @ 0x14010A768 (MiUpControlAreaRefs.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiCreateRotateView @ 0x1404D151C (MiCreateRotateView.c)
 *     MiUnlockNestedVad @ 0x14050B010 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x14050B040 (MiLockNestedVad.c)
 *     MiFreeRotateView @ 0x140659D18 (MiFreeRotateView.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  _QWORD *v5; // r14
  _QWORD *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 Process; // r12
  char v9; // dl
  int v10; // r9d
  char v11; // r10
  int v12; // eax
  SIZE_T v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  LONG *v17; // rbx
  KIRQL v18; // al
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  int v22; // eax
  __int64 v23; // r12
  __int64 *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 j; // r14
  __int64 v29; // r13
  unsigned __int64 v30; // rsi
  ULONG_PTR v31; // r13
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 m; // r15
  _QWORD *i; // rax
  _QWORD *k; // rax
  LONG *v40; // rbx
  KIRQL v41; // al
  int v42; // r9d
  __int64 v43; // rdx
  int *v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rcx
  PVOID PoolWithTag; // rax
  unsigned __int64 v48; // r13
  int inserted; // ebx
  __int64 v50; // r13
  void *v51; // rcx
  LONG *v52; // rbx
  __int64 v53; // rbx
  __int64 *v54; // rax
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  int v59; // r9d
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // rbx
  LONG *v62; // rbx
  KIRQL v63; // al
  unsigned __int64 v64; // r12
  unsigned __int64 v65; // rax
  _SLIST_ENTRY *v66; // rcx
  __int64 *v67; // rcx
  __int64 *v68; // r14
  __int64 v69; // rsi
  __int64 v70; // rdi
  KIRQL v71; // r15
  __int64 v72; // rax
  char v73; // [rsp+38h] [rbp-69h]
  __int64 *v74; // [rsp+40h] [rbp-61h] BYREF
  __int64 *v75; // [rsp+48h] [rbp-59h] BYREF
  __int64 v76; // [rsp+50h] [rbp-51h]
  __int64 v77; // [rsp+58h] [rbp-49h]
  int v78; // [rsp+60h] [rbp-41h]
  __int64 v79; // [rsp+68h] [rbp-39h]
  __int64 v80; // [rsp+70h] [rbp-31h]
  __int64 v81; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int64 v82; // [rsp+80h] [rbp-21h]
  LONG *SharedVm; // [rsp+88h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-11h]
  __int64 v85; // [rsp+98h] [rbp-9h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-1h]
  __int64 v87; // [rsp+A8h] [rbp+7h]
  __int64 v88; // [rsp+B0h] [rbp+Fh]
  KIRQL v89; // [rsp+108h] [rbp+67h]

  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v75 = 0LL;
  v82 = (a3 - a2 + 1) >> 12;
  v5 = 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v73 = 0;
  v74 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v78 = 0;
  v79 = Process;
  v77 = Process + 1280;
  SharedVm = MiGetSharedVm(Process + 1280);
  v12 = P[12];
  if ( (v12 & 0x8000) != 0 )
  {
    v80 = 0LL;
    v13 = 64LL;
    v76 = 64LL;
    if ( (v12 & 7) == 6 )
      v78 = 8;
  }
  else
  {
    v45 = (__int64 *)*((_QWORD *)P + 9);
    v13 = 136LL;
    v76 = 136LL;
    v46 = *v45;
    v80 = v46;
    if ( *(_QWORD *)(v46 + 64) )
    {
      if ( *((__int64 *)P + 15) < 0 )
        return 3221225505LL;
      if ( (*(_DWORD *)(v46 + 56) & 0x420) == 0 )
        v9 = v11;
      v73 = v9;
    }
  }
  if ( v10 == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x46646156u);
    v7 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, P, v13);
    *(_DWORD *)(v7 + 36) = 0;
    *(_QWORD *)(v7 + 16) = -2LL;
    *(_DWORD *)(v7 + 52) &= 0x80000000;
    *(_BYTE *)(v7 + 34) = 0;
    *(_QWORD *)(v7 + 40) = 0LL;
    v48 = ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
    if ( (*(_BYTE *)(v7 + 48) & 7) != 6 || (*(_QWORD *)(v7 + 56) = 0LL, (unsigned int)MiCreateRotateView(v7)) )
    {
      MiLockNestedVad(v7);
      MiAdvanceVadView(v7, v48);
      MiUnlockNestedVad(v7);
      v50 = v80;
      if ( v13 == 64
        || (*(_DWORD *)(v7 + 64) &= ~0x2000000u,
            *(_QWORD *)(v7 + 120) = 0LL,
            inserted = MiInsertSharedCommitNode(v50, Process, 0LL),
            inserted >= 0) )
      {
        inserted = MiInsertVadCharges(v7, Process);
        if ( inserted >= 0 )
        {
          v13 = v76;
          if ( v76 == 64 )
          {
            if ( (*(_DWORD *)(v7 + 48) & 0x100000) != 0 )
              ++*(_QWORD *)(qword_140327FD0 + 276840648);
          }
          else
          {
            v51 = *(void **)(v7 + 128);
            if ( v51 )
            {
              ObfReferenceObjectWithTag(v51, 0x746C6644u);
            }
            else if ( (*(_DWORD *)(v7 + 48) & 0x100000) != 0 )
            {
              ++*(_QWORD *)(qword_140327FD0 + 276840656);
            }
            MiUpControlAreaRefs(v7);
          }
          goto LABEL_5;
        }
        if ( v50 )
          MiRemoveSharedCommitNode(v50, Process, 0LL);
        if ( (*(_BYTE *)(v7 + 48) & 7) == 6 )
          MiFreeRotateView(v7);
      }
    }
    else
    {
      inserted = -1073741670;
    }
    ExFreePoolWithTag((PVOID)v7, 0);
    return (unsigned int)inserted;
  }
LABEL_5:
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v14 = (unsigned int)P[13];
  LODWORD(v14) = v14 & 0x7FFFFFFF;
  v15 = ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v14;
  if ( !v15 )
  {
    v16 = 0LL;
    v17 = MiGetSharedVm(v77);
    v18 = ExAcquireSpinLockExclusive(v17);
    v17[1] = 0;
LABEL_7:
    v20 = a3;
    v89 = v18;
    goto LABEL_8;
  }
  if ( v13 != 64 )
  {
    v16 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
        - MiCountSharedPages(
            (__int64)P,
            ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
        + 1;
    v52 = MiGetSharedVm(v77);
    v18 = ExAcquireSpinLockExclusive(v52);
    v52[1] = 0;
    goto LABEL_7;
  }
  v40 = MiGetSharedVm(v77);
  v41 = ExAcquireSpinLockExclusive(v40);
  v40[1] = 0;
  LOBYTE(v42) = v41;
  v20 = a3;
  v89 = v41;
  v16 = MiComputePageCommitment(a2, a3, (_DWORD)P, v42, 0LL);
LABEL_8:
  if ( a4 == 1 )
  {
    if ( v76 != 64 && v73 == 1 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        1,
        &v75);
    v21 = v15 - v16;
    v22 = v21 ^ P[13];
    *((_BYTE *)P + 34) = v21 >> 31;
    P[13] ^= v22 & 0x7FFFFFFF;
    MiAdvanceVadView(
      P,
      ((v20 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)));
    v23 = v76;
    if ( v76 != 64 && v73 == 1 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        1,
        &v74);
    v6 = P;
  }
  else
  {
    v33 = v15 - v16;
    if ( a4 == 2 )
    {
      P[13] ^= (v33 ^ P[13]) & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v33 >> 31;
      v23 = v76;
      if ( v76 != 64 && v73 == 1 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
          1,
          &v74);
        v74 = (__int64 *)v74[2];
      }
      v34 = (a2 - 1) >> 44;
      v35 = (a2 - 1) >> 12;
      P[7] = v35;
      *((_BYTE *)P + 33) = v34;
      if ( v23 == 64 || v73 != 1 )
      {
        v24 = v75;
      }
      else
      {
        MiGetProtoPteAddress((__int64)P, (unsigned int)v35 | ((unsigned __int64)(unsigned __int8)v34 << 32), 1, &v75);
        v24 = (__int64 *)v75[2];
        MiAdvanceVadView(P, 0LL);
      }
      v5 = P;
      goto LABEL_13;
    }
    v53 = v76;
    if ( v76 == 64 || v73 != 1 )
    {
      v54 = v74;
    }
    else
    {
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
        1,
        &v74);
      v54 = (__int64 *)v74[2];
    }
    v55 = a2 - 1;
    v74 = v54;
    v56 = (a2 - 1) >> 12;
    v57 = (a2 - 1) >> 44;
    P[7] = v56;
    *((_BYTE *)P + 33) = v57;
    if ( v53 != 64 && v73 == 1 )
    {
      MiGetProtoPteAddress((__int64)P, (unsigned int)v56 | ((unsigned __int64)(unsigned __int8)v57 << 32), 1, &v75);
      v75 = (__int64 *)v75[2];
      MiAdvanceVadView(P, 0LL);
    }
    v82 += (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
         - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
         + 1;
    MiInsertVad(v7, v79);
    if ( v53 == 64 )
    {
      LOBYTE(v59) = v89;
      v60 = MiComputePageCommitment(P[6] << 12, v55, (_DWORD)P, v59, 0LL);
    }
    else
    {
      LOBYTE(v58) = v89;
      MiUnlockWorkingSetExclusive(v77, v58);
      v61 = 8 * (((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) & 0xFFFFFFFFFLL)
          - 0x98000000000LL;
      v60 = ((__int64)(((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v61) >> 3)
          - MiCountSharedPages((__int64)P, v61, ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v62 = MiGetSharedVm(v77);
      v63 = ExAcquireSpinLockExclusive(v62);
      v62[1] = 0;
      v89 = v63;
    }
    v64 = v33 - v60;
    v6 = (_QWORD *)v7;
    P[13] ^= (v60 ^ P[13]) & 0x7FFFFFFF;
    v65 = v60 >> 31;
    v5 = P;
    *((_BYTE *)P + 34) = v65;
    *(_DWORD *)(v7 + 52) ^= (v64 ^ *(_DWORD *)(v7 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v7 + 34) = v64 >> 31;
    v23 = v76;
  }
  v24 = v75;
LABEL_13:
  LOBYTE(v19) = v89;
  MiDeleteVirtualAddresses(a2, a3, v78, v19, (__int64)&v85);
  if ( v24 )
  {
    v66 = (_SLIST_ENTRY *)*((_QWORD *)SharedVm + 5);
    if ( v66 )
    {
      MiEmptyPageAccessLog(v66);
      *((_QWORD *)SharedVm + 5) = 0LL;
    }
  }
  LOBYTE(v25) = v89;
  MiCaptureDeleteHierarchy(a2, a3, v25, &v81);
  LOBYTE(v26) = v89;
  MiUnlockWorkingSetExclusive(v77, v26);
  if ( v7 && (*(_DWORD *)(v7 + 48) & 0x8000) == 0 )
  {
    v67 = *(__int64 **)(v7 + 72);
    *(_QWORD *)(v7 + 112) = v79 | 1;
    MiManageSubsectionView(v67, (_QWORD *)(v7 + 96), 3);
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v79);
  if ( !v5 )
  {
    v5 = *(_QWORD **)P;
    v27 = P;
    if ( *(_QWORD *)P )
    {
      for ( i = (_QWORD *)v5[1]; i; i = (_QWORD *)i[1] )
        v5 = i;
    }
    else
    {
      for ( j = *((_QWORD *)P + 2); ; j = v5[2] )
      {
        v5 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_DWORD *)v5[1] == v27 )
          break;
        v27 = v5;
      }
    }
  }
  if ( !v6 )
  {
    v6 = (_QWORD *)*((_QWORD *)P + 1);
    v36 = P;
    if ( v6 )
    {
      for ( k = (_QWORD *)*v6; k; k = (_QWORD *)*k )
        v6 = k;
    }
    else
    {
      for ( m = *((_QWORD *)P + 2); ; m = v6[2] )
      {
        v6 = (_QWORD *)(m & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_DWORD *)*v6 == v36 )
          break;
        v36 = v6;
      }
    }
  }
  v29 = v16 - v87;
  v30 = v29 - v86;
  if ( v29 )
  {
    v43 = v29;
    v31 = v79;
    MiReturnFullProcessCharges(v79, v43);
  }
  else
  {
    v31 = v79;
  }
  if ( v30 )
  {
    v44 = MiPartitionIdToPointer(*(_WORD *)(v31 + 1444));
    MiReturnCommit((__int64)v44, v30);
  }
  if ( v23 != 64 )
    PsReturnProcessPagedPoolQuota(v31, 8 * v82);
  MiFinishVadDeletion(P, (__int64)v5, (__int64)v6, a2, a3, (__int64)&v81);
  if ( v24 )
  {
    v68 = v74;
    if ( v24 != v74 )
    {
      v69 = v80;
      v70 = 0LL;
      v71 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v80 + 72));
      do
      {
        v72 = MiDecrementSubsections((__int64)v24, (__int64)v24, 1u);
        v24 = (__int64 *)v24[2];
        v70 += v72;
      }
      while ( v24 != v68 );
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v69 + 72), v71);
      if ( v70 )
        MiReturnSubsectionCharges(v70);
    }
  }
  return 0LL;
}
