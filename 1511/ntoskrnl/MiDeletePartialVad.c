/*
 * XREFs of MiDeletePartialVad @ 0x1400D6084
 * Callers:
 *     MiFreeVadRange @ 0x1400D5DC0 (MiFreeVadRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     MiInsertVad @ 0x14004AD80 (MiInsertVad.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiUpControlAreaRefs @ 0x14009A908 (MiUpControlAreaRefs.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     MiCaptureDeleteHierarchy @ 0x1400D65A4 (MiCaptureDeleteHierarchy.c)
 *     MiAdvanceVadView @ 0x1400D6688 (MiAdvanceVadView.c)
 *     MiComputePageCommitment @ 0x1400D66E0 (MiComputePageCommitment.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiUnlockNestedVad @ 0x1403F4C18 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x1403F4C48 (MiLockNestedVad.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 *     MiCreateRotateView @ 0x1404C40C4 (MiCreateRotateView.c)
 *     MiFreeRotateView @ 0x140623DAC (MiFreeRotateView.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *Src, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  _DWORD *v5; // rbx
  _DWORD *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 Process; // r13
  int v9; // eax
  SIZE_T v10; // r12
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  volatile LONG *v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // rax
  __int64 j; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // r12
  unsigned __int64 v27; // rsi
  __int64 v29; // rbx
  unsigned __int64 v30; // r15
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  _QWORD **v34; // r14
  _DWORD *v35; // rax
  __int64 m; // r14
  _QWORD *v37; // r14
  __int64 i; // rax
  _QWORD *k; // rax
  int v40; // r9d
  int *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rdx
  PVOID PoolWithTag; // rax
  unsigned __int64 v45; // r15
  int inserted; // r15d
  __int64 v47; // rcx
  void *v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  int v55; // r9d
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rbx
  KIRQL v65; // r14
  __int64 v66; // rax
  bool v67; // [rsp+38h] [rbp-69h]
  __int64 v68; // [rsp+40h] [rbp-61h] BYREF
  __int64 v69; // [rsp+48h] [rbp-59h] BYREF
  __int64 v70; // [rsp+50h] [rbp-51h]
  PEX_SPIN_LOCK SpinLock; // [rsp+58h] [rbp-49h]
  int v72; // [rsp+60h] [rbp-41h]
  __int64 v73; // [rsp+68h] [rbp-39h]
  unsigned __int64 v74; // [rsp+70h] [rbp-31h]
  __int64 v75; // [rsp+78h] [rbp-29h] BYREF
  __int64 v76; // [rsp+80h] [rbp-21h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-19h]
  __int64 v78; // [rsp+90h] [rbp-11h] BYREF
  __int64 v79; // [rsp+98h] [rbp-9h]
  __int64 v80; // [rsp+A0h] [rbp-1h]
  __int64 v81; // [rsp+A8h] [rbp+7h]
  unsigned __int64 v82; // [rsp+108h] [rbp+67h]
  KIRQL v83; // [rsp+108h] [rbp+67h]

  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v67 = 0;
  v5 = 0LL;
  v74 = (a3 - a2 + 1) >> 12;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v69 = 0LL;
  v68 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = Src[12];
  v72 = 0;
  v76 = Process;
  if ( (v9 & 0x8000) != 0 )
  {
    v73 = 0LL;
    v10 = 64LL;
    v70 = 64LL;
    if ( (v9 & 7) == 6 )
      v72 = 8;
  }
  else
  {
    v42 = (__int64 *)*((_QWORD *)Src + 9);
    v10 = 136LL;
    v70 = 136LL;
    v43 = *v42;
    v73 = v43;
    if ( *(_QWORD *)(v43 + 64) )
    {
      if ( *((__int64 *)Src + 15) < 0 )
        return 3221225505LL;
      v67 = (*(_DWORD *)(v43 + 56) & 0x420) == 0;
    }
  }
  if ( a4 == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x46646156u);
    v7 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, Src, v10);
    *(_DWORD *)(v7 + 36) = 0;
    *(_QWORD *)(v7 + 16) = -2LL;
    *(_DWORD *)(v7 + 52) &= 0x80000000;
    *(_BYTE *)(v7 + 34) = 0;
    *(_QWORD *)(v7 + 40) = 0LL;
    v45 = ((a3 + 1) >> 12) - ((unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32));
    if ( (*(_BYTE *)(v7 + 48) & 7) != 6 || (*(_QWORD *)(v7 + 56) = 0LL, (unsigned int)MiCreateRotateView(v7)) )
    {
      MiLockNestedVad(v7);
      MiAdvanceVadView(v7, v45);
      MiUnlockNestedVad(v7);
      if ( v10 == 64
        || (v47 = v73,
            *(_DWORD *)(v7 + 64) &= ~0x2000000u,
            *(_QWORD *)(v7 + 120) = 0LL,
            inserted = MiInsertSharedCommitNode(v47, Process, 0LL),
            inserted >= 0) )
      {
        inserted = MiInsertVadCharges(v7, Process);
        if ( inserted >= 0 )
        {
          if ( v10 != 64 )
          {
            v48 = *(void **)(v7 + 128);
            if ( v48 )
              ObfReferenceObjectWithTag(v48, 0x746C6644u);
            MiUpControlAreaRefs(v7);
          }
          goto LABEL_5;
        }
        if ( v73 )
          MiRemoveSharedCommitNode(v73, Process, 0LL);
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
  v11 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v82 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v12 = (unsigned int)Src[13];
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v13 = v12 | ((unsigned __int64)*((unsigned __int8 *)Src + 34) << 31);
  if ( v13 )
  {
    if ( v70 == 64 )
    {
      SpinLock = (PEX_SPIN_LOCK)(Process + 1280);
      LOBYTE(v40) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Process + 1280));
      v83 = v40;
      v14 = MiComputePageCommitment(a2, a3, (_DWORD)Src, v40, 0LL);
      goto LABEL_8;
    }
    v49 = MiCountSharedPages((__int64)Src, v82, v11);
    SpinLock = (PEX_SPIN_LOCK)(Process + 1280);
    v15 = (volatile LONG *)(Process + 1280);
    v14 = ((__int64)(v11 - v82) >> 3) - v49 + 1;
  }
  else
  {
    v14 = 0LL;
    SpinLock = (PEX_SPIN_LOCK)(Process + 1280);
    v15 = (volatile LONG *)(Process + 1280);
  }
  v83 = ExAcquireSpinLockExclusive(v15);
LABEL_8:
  if ( a4 == 1 )
  {
    v16 = v70;
    if ( v70 != 64 && v67 )
      MiGetProtoPteAddress(
        (__int64)Src,
        (unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32),
        1u,
        &v69);
    v17 = v13 - v14;
    Src[13] ^= (v17 ^ Src[13]) & 0x7FFFFFFF;
    *((_BYTE *)Src + 34) = v17 >> 31;
    MiAdvanceVadView(
      Src,
      ((a3 + 1) >> 12) - ((unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32)));
    if ( v16 != 64 && v67 )
      MiGetProtoPteAddress(
        (__int64)Src,
        (unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32),
        1u,
        &v68);
    v6 = Src;
    v18 = v69;
  }
  else
  {
    v29 = v70;
    v30 = v13 - v14;
    if ( a4 == 2 )
    {
      v31 = v30 ^ Src[13];
      *((_BYTE *)Src + 34) = v30 >> 31;
      Src[13] ^= v31 & 0x7FFFFFFF;
      if ( v29 != 64 && v67 )
      {
        MiGetProtoPteAddress(
          (__int64)Src,
          (unsigned int)Src[7] | ((unsigned __int64)*((unsigned __int8 *)Src + 33) << 32),
          1u,
          &v68);
        v68 = *(_QWORD *)(v68 + 16);
      }
      v32 = (a2 - 1) >> 44;
      v33 = (a2 - 1) >> 12;
      Src[7] = v33;
      *((_BYTE *)Src + 33) = v32;
      if ( v29 == 64 || !v67 )
      {
        v18 = v69;
      }
      else
      {
        MiGetProtoPteAddress((__int64)Src, (unsigned int)v33 | ((unsigned __int64)(unsigned __int8)v32 << 32), 1u, &v69);
        v18 = *(_QWORD *)(v69 + 16);
        MiAdvanceVadView(Src, 0LL);
      }
    }
    else
    {
      if ( v70 != 64 && v67 )
      {
        MiGetProtoPteAddress(
          (__int64)Src,
          (unsigned int)Src[7] | ((unsigned __int64)*((unsigned __int8 *)Src + 33) << 32),
          1u,
          &v68);
        v68 = *(_QWORD *)(v68 + 16);
      }
      v50 = a2 - 1;
      v51 = (a2 - 1) >> 12;
      v52 = (a2 - 1) >> 44;
      Src[7] = v51;
      *((_BYTE *)Src + 33) = v52;
      if ( v29 == 64 || !v67 )
      {
        v18 = v69;
      }
      else
      {
        MiGetProtoPteAddress((__int64)Src, (unsigned int)v51 | ((unsigned __int64)(unsigned __int8)v52 << 32), 1u, &v69);
        v18 = *(_QWORD *)(v69 + 16);
        MiAdvanceVadView(Src, 0LL);
      }
      v74 += (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
           - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
           + 1;
      MiInsertVad(v7, v76);
      if ( v29 == 64 )
      {
        LOBYTE(v55) = v83;
        v56 = MiComputePageCommitment(Src[6] << 12, v50, (_DWORD)Src, v55, 0LL);
      }
      else
      {
        LOBYTE(v53) = v83;
        MiUnlockWorkingSetExclusive((__int64)SpinLock, v53, v54);
        v57 = 8 * (((unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v56 = ((__int64)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v57) >> 3)
            - MiCountSharedPages((__int64)Src, v57, ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v83 = ExAcquireSpinLockExclusive(SpinLock);
      }
      v58 = v30 - v56;
      Src[13] ^= (Src[13] ^ v56) & 0x7FFFFFFF;
      v59 = v56 >> 31;
      v6 = (_DWORD *)v7;
      *((_BYTE *)Src + 34) = v59;
      *(_DWORD *)(v7 + 52) ^= (v58 ^ *(_DWORD *)(v7 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v7 + 34) = v58 >> 31;
    }
    v5 = Src;
  }
  MiDeleteVirtualAddresses(a2, a3, v72, v83, (__int64)&v78);
  v20 = v76;
  if ( v18 )
  {
    v60 = *(_QWORD **)(v76 + 1296);
    if ( v60 )
    {
      MiEmptyPageAccessLog(v60);
      *(_QWORD *)(v20 + 1296) = 0LL;
    }
  }
  LOBYTE(v19) = v83;
  MiCaptureDeleteHierarchy(a2, a3, v19, &v75);
  LOBYTE(v21) = v83;
  MiUnlockWorkingSetExclusive(v20 + 1280, v21, v22);
  if ( v7 && (*(_DWORD *)(v7 + 48) & 0x8000) == 0 )
  {
    v61 = *(_QWORD *)(v7 + 72);
    *(_QWORD *)(v7 + 112) = v20 | 1;
    MiManageSubsectionView(v61, (_QWORD *)(v7 + 96), 3);
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v20);
  if ( !v5 )
  {
    v23 = Src;
    if ( *(_QWORD *)Src )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)Src + 8LL); i; i = *(_QWORD *)(i + 8) )
        ;
    }
    else
    {
      for ( j = *((_QWORD *)Src + 2); ; j = *(_QWORD *)(v25 + 16) )
      {
        v25 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v25 || *(_DWORD **)(v25 + 8) == v23 )
          break;
        v23 = (_DWORD *)v25;
      }
    }
  }
  if ( !v6 )
  {
    v34 = (_QWORD **)*((_QWORD *)Src + 1);
    v35 = Src;
    if ( v34 )
    {
      for ( k = *v34; k; k = (_QWORD *)*k )
        ;
    }
    else
    {
      for ( m = *((_QWORD *)Src + 2); ; m = v37[2] )
      {
        v37 = (_QWORD *)(m & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v37 || (_DWORD *)*v37 == v35 )
          break;
        v35 = v37;
      }
    }
  }
  v26 = v14 - v80;
  v27 = v26 - v79;
  if ( v26 )
    MiReturnFullProcessCharges(v20, v26);
  if ( v27 )
  {
    v41 = MiPartitionIdToPointer(*(_WORD *)(v20 + 1460));
    MiReturnCommit((__int64)v41, v27);
  }
  if ( v70 != 64 )
    PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v20, 8 * v74);
  MiFinishVadDeletion(Src, a3, (__int64)&v75);
  if ( v18 )
  {
    v62 = v68;
    if ( v18 != v68 )
    {
      v63 = v73;
      v64 = 0LL;
      v65 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v73 + 72));
      do
      {
        v66 = MiDecrementSubsections(v18, v18, 1u);
        v18 = *(_QWORD *)(v18 + 16);
        v64 += v66;
      }
      while ( v18 != v62 );
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v63 + 72), v65);
      if ( v64 )
        MiReturnSubsectionCharges(v64);
    }
  }
  return 0LL;
}
