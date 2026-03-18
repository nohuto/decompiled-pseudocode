/*
 * XREFs of MiDeletePartialVad @ 0x1400F14D0
 * Callers:
 *     MiFreeVadRange @ 0x1400F1340 (MiFreeVadRange.c)
 * Callees:
 *     MiUpControlAreaRefs @ 0x1400013E8 (MiUpControlAreaRefs.c)
 *     MiReturnFullProcessCharges @ 0x1400095C8 (MiReturnFullProcessCharges.c)
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertVad @ 0x14008AC30 (MiInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     MiCaptureDeleteHierarchy @ 0x1400F1960 (MiCaptureDeleteHierarchy.c)
 *     MiAdvanceVadView @ 0x1400F1AD4 (MiAdvanceVadView.c)
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiLockNestedVad @ 0x140533E1C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14053BDD0 (MiUnlockNestedVad.c)
 *     MiCreateRotateView @ 0x1405563AC (MiCreateRotateView.c)
 *     MiFreeRotateView @ 0x1406A2FC0 (MiFreeRotateView.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 Process; // r14
  int v9; // eax
  SIZE_T v10; // r15
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rax
  volatile signed __int32 *v16; // r14
  unsigned int v17; // r13d
  signed __int32 v18; // eax
  unsigned __int64 v19; // rbx
  unsigned int *v20; // r15
  unsigned __int8 v21; // bl
  __int64 v22; // r8
  __int64 v23; // rsi
  _DWORD *v24; // rax
  __int64 j; // r13
  __int64 v26; // rbx
  _QWORD *i; // rax
  char v29; // dl
  unsigned __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  _DWORD *v35; // rax
  __int64 m; // r12
  _QWORD *k; // rax
  __int64 CurrentIrql; // r15
  unsigned int v39; // r15d
  signed __int32 v40; // eax
  __int16 *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rdx
  PVOID PoolWithTag; // rax
  unsigned __int64 v45; // rbx
  int inserted; // ebx
  __int64 v47; // rcx
  void *v48; // rcx
  unsigned int v49; // r13d
  signed __int32 v50; // eax
  char v51; // al
  unsigned int v52; // r13d
  signed __int32 v53; // eax
  __int64 v54; // r13
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  int v58; // r9d
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // rbx
  __int64 v61; // r9
  unsigned __int8 v62; // r13
  unsigned int v63; // ebx
  signed __int32 v64; // eax
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 *v68; // rcx
  __int64 v69; // rsi
  volatile signed __int32 *v70; // rbx
  unsigned __int8 v71; // r14
  unsigned int v72; // edi
  signed __int32 v73; // eax
  __int64 v74; // rax
  unsigned int v75; // [rsp+38h] [rbp-79h]
  unsigned int v76; // [rsp+38h] [rbp-79h]
  unsigned int v77; // [rsp+38h] [rbp-79h]
  unsigned int *v78; // [rsp+40h] [rbp-71h] BYREF
  __int64 v79; // [rsp+48h] [rbp-69h]
  __int64 v80; // [rsp+50h] [rbp-61h]
  unsigned int *v81; // [rsp+58h] [rbp-59h] BYREF
  __int64 v82; // [rsp+60h] [rbp-51h]
  unsigned __int64 v83; // [rsp+68h] [rbp-49h]
  __int64 v84; // [rsp+70h] [rbp-41h]
  unsigned int v85; // [rsp+78h] [rbp-39h]
  __int64 v86; // [rsp+80h] [rbp-31h]
  unsigned __int64 v87; // [rsp+88h] [rbp-29h]
  __int64 v88; // [rsp+90h] [rbp-21h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-19h]
  __int64 v90; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-9h]
  __int64 v92; // [rsp+B0h] [rbp-1h]
  __int64 v93; // [rsp+B8h] [rbp+7h]
  void *retaddr; // [rsp+110h] [rbp+5Fh]
  bool v95; // [rsp+118h] [rbp+67h]
  unsigned __int64 v97; // [rsp+128h] [rbp+77h]
  int v98; // [rsp+130h] [rbp+7Fh]

  v98 = a4;
  v97 = a3;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v95 = 0;
  v5 = 0LL;
  v87 = (a3 - a2 + 1) >> 12;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v78 = 0LL;
  v81 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = P[12];
  v85 = 0;
  v80 = Process;
  if ( (v9 & 0x8000) != 0 )
  {
    v86 = 0LL;
    v10 = 64LL;
    v82 = 64LL;
    if ( (v9 & 7) == 6 )
      v85 = 8;
  }
  else
  {
    v42 = (__int64 *)*((_QWORD *)P + 9);
    v10 = 136LL;
    v82 = 136LL;
    v43 = *v42;
    v86 = v43;
    if ( *(_QWORD *)(v43 + 64) )
    {
      a3 = 0x8000000000000000uLL;
      if ( *((__int64 *)P + 15) < 0 )
        return 3221225505LL;
      v95 = (*(_DWORD *)(v43 + 56) & 0x420) == 0;
    }
  }
  if ( (_DWORD)a4 == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x46646156u);
    v7 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, P, v10);
    *(_DWORD *)(v7 + 36) = 0;
    *(_QWORD *)(v7 + 16) = -2LL;
    *(_DWORD *)(v7 + 52) &= 0x80000000;
    *(_BYTE *)(v7 + 34) = 0;
    *(_QWORD *)(v7 + 40) = 0LL;
    v45 = ((v97 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
    if ( (*(_BYTE *)(v7 + 48) & 7) != 6 || (*(_QWORD *)(v7 + 56) = 0LL, (unsigned int)MiCreateRotateView(v7)) )
    {
      MiLockNestedVad(v7);
      MiAdvanceVadView(v7, v45);
      MiUnlockNestedVad(v7);
      if ( v10 == 64
        || (v47 = v86,
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
        if ( v86 )
          MiRemoveSharedCommitNode(v86, Process, 0LL);
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
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v80, a3, a4);
  v12 = (unsigned int)P[13];
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v13 = ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v12;
  if ( v13 )
  {
    if ( v82 == 64 )
    {
      v16 = (volatile signed __int32 *)(v80 + 1272);
      CurrentIrql = KeGetCurrentIrql();
      v84 = CurrentIrql;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v80 + 1272);
      }
      else
      {
        v39 = 0;
        if ( _interlockedbittestandset(v16, 0x1Fu) )
          v39 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
        while ( 1 )
        {
          v40 = *v16;
          if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v40 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v16, v40 | 0x40000000, v40);
          if ( (++v39 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v39);
        }
        LOBYTE(CurrentIrql) = v84;
      }
      LOBYTE(v11) = CurrentIrql;
      LOBYTE(v79) = CurrentIrql;
      v14 = MiComputePageCommitment(a2, v97, (_DWORD)P, v11, 0LL);
      v84 = v14;
      goto LABEL_13;
    }
    v14 = ((__int64)(((v97 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
        - MiCountSharedPages(
            (__int64)P,
            ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((v97 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            v11)
        + 1;
    v84 = v14;
    v16 = (volatile signed __int32 *)(v80 + 1272);
    v79 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v80 + 1272);
    }
    else
    {
      v77 = 0;
      if ( _interlockedbittestandset(v16, 0x1Fu) )
        v77 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
      v52 = v77;
      while ( 1 )
      {
        v53 = *v16;
        if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v53 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v16, v53 | 0x40000000, v53);
        if ( (++v52 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v52);
      }
      v5 = 0LL;
    }
    v51 = v79;
  }
  else
  {
    v14 = 0LL;
    v84 = 0LL;
    v15 = KeGetCurrentIrql();
    v16 = (volatile signed __int32 *)(v80 + 1272);
    if ( v82 == 64 )
    {
      v79 = v15;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v80 + 1272);
      }
      else
      {
        v75 = 0;
        if ( _interlockedbittestandset(v16, 0x1Fu) )
          v75 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
        v17 = v75;
        while ( 1 )
        {
          v18 = *v16;
          if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v18 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v16, v18 | 0x40000000, v18);
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        v5 = 0LL;
      }
      goto LABEL_13;
    }
    v79 = v15;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v80 + 1272);
    }
    else
    {
      v76 = 0;
      if ( _interlockedbittestandset(v16, 0x1Fu) )
        v76 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
      v49 = v76;
      while ( 1 )
      {
        v50 = *v16;
        if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v50 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v16, v50 | 0x40000000, v50);
        if ( (++v49 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v49);
      }
      v5 = 0LL;
    }
    v51 = v79;
  }
  LOBYTE(v79) = v51;
LABEL_13:
  if ( v98 == 1 )
  {
    if ( v82 != 64 && v95 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        1u,
        &v78);
    v19 = v13 - v14;
    P[13] ^= (v19 ^ P[13]) & 0x7FFFFFFF;
    *((_BYTE *)P + 34) = v19 >> 31;
    MiAdvanceVadView(
      P,
      ((v97 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)));
    if ( v82 != 64 && v95 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        1u,
        &v81);
    v20 = v78;
    v6 = P;
  }
  else
  {
    v29 = v95;
    v30 = v13 - v14;
    if ( v98 == 2 )
    {
      v31 = (v30 ^ P[13]) & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v30 >> 31;
      P[13] ^= v31;
      v32 = v82;
      if ( v82 != 64 && v95 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
          1u,
          &v81);
        v29 = 1;
        v81 = (unsigned int *)*((_QWORD *)v81 + 2);
      }
      v33 = (a2 - 1) >> 44;
      v34 = (a2 - 1) >> 12;
      P[7] = v34;
      *((_BYTE *)P + 33) = v33;
      if ( v32 == 64 || v29 != 1 )
      {
        v20 = v78;
      }
      else
      {
        MiGetProtoPteAddress((__int64)P, (unsigned int)v34 | ((unsigned __int64)(unsigned __int8)v33 << 32), 1u, &v78);
        v20 = (unsigned int *)*((_QWORD *)v78 + 2);
        v78 = v20;
        MiAdvanceVadView(P, 0LL);
      }
    }
    else
    {
      v54 = v82;
      v83 = v30;
      if ( v82 != 64 && v95 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
          1u,
          &v81);
        v29 = 1;
        v81 = (unsigned int *)*((_QWORD *)v81 + 2);
      }
      v55 = a2 - 1;
      v56 = (a2 - 1) >> 12;
      v57 = (a2 - 1) >> 44;
      P[7] = v56;
      *((_BYTE *)P + 33) = v57;
      if ( v54 == 64 || v29 != 1 )
      {
        v20 = v78;
      }
      else
      {
        MiGetProtoPteAddress((__int64)P, (unsigned int)v56 | ((unsigned __int64)(unsigned __int8)v57 << 32), 1u, &v78);
        v20 = (unsigned int *)*((_QWORD *)v78 + 2);
        v78 = v20;
        MiAdvanceVadView(P, 0LL);
      }
      v87 += (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
           - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
           + 1;
      MiInsertVad(v7, v80);
      if ( v54 == 64 )
      {
        LOBYTE(v58) = v79;
        v59 = MiComputePageCommitment(P[6] << 12, v55, (_DWORD)P, v58, 0LL);
      }
      else
      {
        MiUnlockWorkingSetExclusive((__int64)v16, v79);
        v60 = 8 * (((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v59 = ((__int64)(((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v60) >> 3)
            - MiCountSharedPages((__int64)P, v60, ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v61)
            + 1;
        v62 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
        }
        else
        {
          v63 = 0;
          if ( _interlockedbittestandset(v16, 0x1Fu) )
            v63 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
          while ( 1 )
          {
            v64 = *v16;
            if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v64 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v16, v64 | 0x40000000, v64);
            if ( (++v63 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v63);
          }
          v20 = v78;
        }
        v30 = v83;
        LOBYTE(v79) = v62;
      }
      v65 = v30 - v59;
      P[13] ^= (v59 ^ P[13]) & 0x7FFFFFFF;
      v66 = v59 >> 31;
      v6 = (_QWORD *)v7;
      *((_BYTE *)P + 34) = v66;
      *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ v65) & 0x7FFFFFFF;
      *(_BYTE *)(v7 + 34) = v65 >> 31;
    }
    v5 = P;
  }
  v21 = v79;
  MiDeleteVirtualAddresses(a2, v97, v85, v79, (__int64)&v90);
  if ( v20 )
  {
    v67 = *(_QWORD **)(v80 + 1288);
    if ( v67 )
    {
      MiEmptyPageAccessLog(v67);
      *(_QWORD *)(v80 + 1288) = 0LL;
    }
  }
  LOBYTE(v22) = v21;
  MiCaptureDeleteHierarchy(a2, v97, v22, &v88);
  MiUnlockWorkingSetExclusive((__int64)v16, v21);
  if ( v7 && (*(_DWORD *)(v7 + 48) & 0x8000) == 0 )
  {
    v68 = *(__int64 **)(v7 + 72);
    *(_QWORD *)(v7 + 112) = v80 | 1;
    MiManageSubsectionView(v68, (_QWORD *)(v7 + 96), 3);
  }
  v23 = v80;
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v80);
  if ( !v5 )
  {
    v5 = *(_QWORD **)P;
    v24 = P;
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
        if ( !v5 || (_DWORD *)v5[1] == v24 )
          break;
        v24 = v5;
      }
    }
  }
  if ( !v6 )
  {
    v6 = (_QWORD *)*((_QWORD *)P + 1);
    v35 = P;
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
        if ( !v6 || (_DWORD *)*v6 == v35 )
          break;
        v35 = v6;
      }
    }
  }
  v26 = v84 - v92 - v91;
  if ( v84 != v92 )
    MiReturnFullProcessCharges(v23, v84 - v92);
  if ( v26 )
  {
    v41 = MiPartitionIdToPointer(*(_WORD *)(v23 + 1452));
    MiReturnCommit((__int64)v41, v26);
  }
  if ( v82 != 64 )
    PsReturnProcessPagedPoolQuota(v23, 8 * v87);
  MiFinishVadDeletion(P, (__int64)v5, (__int64)v6, a2, v97, (__int64)&v88);
  if ( v20 && v20 != v81 )
  {
    v69 = 0LL;
    v70 = (volatile signed __int32 *)(v86 + 72);
    v71 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v86 + 72);
    }
    else
    {
      v72 = 0;
      if ( _interlockedbittestandset(v70, 0x1Fu) )
        v72 = ExpWaitForSpinLockExclusiveAndAcquire(v70);
      while ( 1 )
      {
        v73 = *v70;
        if ( (*v70 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v73 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v70, v73 | 0x40000000, v73);
        if ( (++v72 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v72);
      }
      v20 = v78;
    }
    do
    {
      v74 = MiDecrementSubsections((__int64)v20, (__int64)v20, 1u);
      v20 = (unsigned int *)*((_QWORD *)v20 + 2);
      v69 += v74;
    }
    while ( v20 != v81 );
    v78 = v20;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v70, retaddr);
    else
      *v70 = 0;
    __writecr8(v71);
    if ( v69 )
      MiReturnSubsectionCharges(v69);
  }
  return 0LL;
}
