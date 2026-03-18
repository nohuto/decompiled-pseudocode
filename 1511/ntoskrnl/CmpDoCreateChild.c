/*
 * XREFs of CmpDoCreateChild @ 0x1403DF308
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 * Callees:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpAssignSecurityDescriptorWrapper @ 0x1403DFD88 (CmpAssignSecurityDescriptorWrapper.c)
 *     EnlistKeyBodyWithKCB @ 0x1403E0248 (EnlistKeyBodyWithKCB.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     CmpIsHiveLoadingOnOtherThread @ 0x1403E0734 (CmpIsHiveLoadingOnOtherThread.c)
 *     SeAssignSecurity @ 0x1403E07AC (SeAssignSecurity.c)
 *     CmpNameSize @ 0x1403F4458 (CmpNameSize.c)
 *     CmpCopyName @ 0x1403F45B4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     SeDeassignSecurity @ 0x1404B4020 (SeDeassignSecurity.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmReferenceKtmTransaction @ 0x1404B8A10 (CmReferenceKtmTransaction.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpDoCreateChild(
        ULONG_PTR BugCheckParameter2,
        int a2,
        void *a3,
        __int64 a4,
        const UNICODE_STRING *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int16 a10,
        _DWORD *a11,
        PVOID *a12,
        __int64 a13)
{
  ULONG_PTR v14; // rsi
  BOOL v15; // ecx
  unsigned __int16 v16; // ax
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rdx
  int Object; // ebx
  _QWORD *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rbx
  int v24; // eax
  unsigned __int16 v25; // ax
  __int64 KeyControlBlock; // rax
  _QWORD *v27; // r14
  char v28; // r14
  struct _SECURITY_SUBJECT_CONTEXT *v29; // r8
  void *v30; // rdx
  _QWORD *v31; // r14
  unsigned __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  signed __int64 *v35; // rbx
  signed __int64 v36; // rax
  signed __int64 v37; // rcx
  signed __int64 v38; // rtt
  __int64 v39; // r13
  void *v40; // rcx
  PSECURITY_DESCRIPTOR AppHiveSecurityDescriptor; // rdx
  __int64 v42; // rax
  void *v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  struct _KTHREAD *v47; // rcx
  _QWORD *v48; // rdx
  _QWORD *v49; // rcx
  _DWORD *v50; // r14
  _QWORD *v51; // r15
  ULONG v52; // edx
  _QWORD *UnitOfWork; // rax
  _QWORD *v54; // rcx
  _QWORD *v55; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v57; // rdx
  _QWORD *v58; // rax
  PVOID v59; // r15
  __int64 v60; // r9
  _QWORD *v62; // r14
  void *v63; // rcx
  PVOID v64; // r14
  PVOID v65; // r15
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-F8h]
  int v67; // [rsp+50h] [rbp-C8h]
  char v68; // [rsp+54h] [rbp-C4h]
  int v69; // [rsp+58h] [rbp-C0h]
  char v70[4]; // [rsp+5Ch] [rbp-BCh] BYREF
  int v71; // [rsp+60h] [rbp-B8h] BYREF
  int v72; // [rsp+64h] [rbp-B4h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-B0h]
  ULONG_PTR v74; // [rsp+70h] [rbp-A8h]
  PVOID v75; // [rsp+78h] [rbp-A0h]
  unsigned int v76; // [rsp+80h] [rbp-98h]
  PVOID P; // [rsp+88h] [rbp-90h]
  __int64 v78; // [rsp+90h] [rbp-88h] BYREF
  PSECURITY_DESCRIPTOR ParentDescriptor; // [rsp+98h] [rbp-80h]
  void *v80; // [rsp+A0h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+A8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR v82; // [rsp+B0h] [rbp-68h]
  _QWORD *v83; // [rsp+B8h] [rbp-60h]
  _QWORD *v84; // [rsp+C0h] [rbp-58h]
  BOOL v85; // [rsp+C8h] [rbp-50h]
  __int64 v86; // [rsp+D0h] [rbp-48h]

  ParentDescriptor = a3;
  v69 = 0;
  v83 = 0LL;
  LODWORD(BugCheckParameter3) = -1;
  v78 = 0LL;
  v72 = -1;
  v80 = 0LL;
  v71 = -1;
  v14 = 0LL;
  v74 = 0LL;
  NewDescriptor = 0LL;
  v75 = 0LL;
  P = 0LL;
  v82 = 0LL;
  if ( !(unsigned __int8)CmpIsHiveLoadingOnOtherThread(BugCheckParameter2) )
  {
    if ( CmpVEEnabled && (*(_WORD *)(a9 + 186) & 0x100) != 0 )
      a10 |= 0x100u;
    if ( (*(_WORD *)(a9 + 186) & 0x200) != 0 )
      a10 |= 0x200u;
    v15 = (*(_BYTE *)(a7 + 24) & 1) != 0;
    v85 = v15;
    if ( a13 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a9 + 32) + 144LL) & 2) != 0 )
      {
        Object = -1072103423;
        goto LABEL_85;
      }
      v76 = 1;
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      v75 = UnitOfWork;
      if ( !UnitOfWork )
        goto LABEL_74;
      v54 = UnitOfWork + 4;
      v55 = *(_QWORD **)(a9 + 208);
      UnitOfWork[4] = a9 + 200;
      UnitOfWork[5] = v55;
      if ( *v55 != a9 + 200 )
        __fastfail(3u);
      *v55 = v54;
      *(_QWORD *)(a9 + 208) = v54;
      CmpReferenceKeyControlBlock(a9);
      *((_QWORD *)v75 + 6) = a9;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v57 = *(_QWORD **)(a13 + 24);
      v58 = v75;
      *(_QWORD *)v75 = a13 + 16;
      v58[1] = v57;
      if ( *v57 != a13 + 16 )
        __fastfail(3u);
      *v57 = v58;
      *(_QWORD *)(a13 + 24) = v58;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v59 = v75;
      *((_QWORD *)v75 + 7) = a13;
      v69 = 1;
      if ( !CmpLockIXLockIntent((unsigned int *)(a9 + 240), (__int64)v59) )
      {
        Object = -1072103423;
        v14 = v74;
        goto LABEL_85;
      }
      v14 = v74;
    }
    else
    {
      if ( *(_QWORD *)(a9 + 232) || *(int *)(a9 + 240) < 0 )
      {
        Object = CmpSnapshotTxOwnerArray(a9 + 240, a7 + 112, a7 + 120);
        if ( Object >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(a9, a5, 6u, v60, *(_DWORD *)(a7 + 112));
          Object = 260;
          *(_DWORD *)(a7 + 88) |= 4u;
        }
        goto LABEL_85;
      }
      v76 = v15;
    }
    v16 = CmpNameSize(a5);
    v17 = HvAllocateCell(BugCheckParameter2, (unsigned int)v16 + 76, v76, &v78, &v72);
    *a11 = v17;
    if ( v17 == -1 )
      goto LABEL_74;
    v69 = 2;
    v19 = *(unsigned int *)(a7 + 4);
    if ( (_DWORD)v19 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(BugCheckParameter2, v19, v76, &v80, &v71);
      if ( (_DWORD)BugCheckParameter3 == -1 )
        goto LABEL_74;
    }
    v69 = 3;
    v70[0] = 1;
    LOBYTE(v17) = a6;
    LOBYTE(v18) = a6;
    Object = ObCreateObjectEx(
               v17,
               (_DWORD)CmKeyObjectType,
               0,
               v18,
               (__int64)SubjectContext,
               88,
               0,
               0,
               (__int64)a12,
               (__int64)v70);
    if ( Object < 0 )
      goto LABEL_85;
    v21 = *a12;
    v83 = v21;
    *(_DWORD *)v21 = 1803104306;
    v21[1] = 0LL;
    v21[7] = 0LL;
    v21[8] = 0LL;
    *((_DWORD *)v21 + 12) &= 0xFFFF0000;
    *((_DWORD *)v21 + 12) = (unsigned __int16)*((_DWORD *)v21 + 12) | (*(_DWORD *)(a7 + 20) << 16);
    v21[10] = v21 + 9;
    v21[9] = v21 + 9;
    if ( *(_DWORD *)(a7 + 4) )
    {
      memmove(v80, *(const void **)(a7 + 8), *(unsigned int *)(a7 + 4));
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v71);
      v80 = 0LL;
    }
    v22 = v78;
    *(_WORD *)v78 = 27502;
    *(_WORD *)(v22 + 2) = a10;
    v86 = MEMORY[0xFFFFF78000000014];
    v23 = v78;
    *(_QWORD *)(v78 + 4) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v23 + 16) = a2;
    *(_QWORD *)(v23 + 20) = 0LL;
    *(_DWORD *)(v23 + 28) = -1;
    *(_DWORD *)(v23 + 32) = -1;
    *(_DWORD *)(v23 + 36) = 0;
    *(_DWORD *)(v23 + 40) = -1;
    *(_DWORD *)(v23 + 44) = -1;
    *(_DWORD *)(v23 + 64) = 0;
    *(_DWORD *)(v23 + 52) &= 0xFFFF0000;
    *(_DWORD *)(v23 + 52) &= 0xFFF0FFFF;
    *(_DWORD *)(v23 + 12) = 0;
    *(_DWORD *)(v23 + 48) = BugCheckParameter3;
    *(_WORD *)(v23 + 74) = *(_WORD *)(a7 + 4);
    *(_DWORD *)(v23 + 56) = 0;
    v24 = *(_DWORD *)(a9 + 184);
    if ( (v24 & 0x80u) != 0 )
      *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ (v24 << 16)) & 0xF00000;
    else
      *(_DWORD *)(v23 + 52) &= 0xFF0FFFFF;
    *(_DWORD *)(v23 + 52) &= 0xFFFFFFu;
    *(_DWORD *)(v23 + 60) = 0;
    v25 = CmpCopyName(v23 + 76, a5);
    *(_WORD *)(v23 + 72) = v25;
    if ( v25 < a5->Length )
      *(_WORD *)(v22 + 2) |= 0x20u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
    v78 = 0LL;
    KeyControlBlock = CmpCreateKeyControlBlock(BugCheckParameter2, (__int64)a5);
    v14 = KeyControlBlock;
    v74 = KeyControlBlock;
    if ( !KeyControlBlock )
    {
      ObDereferenceObjectDeferDelete(*a12);
      goto LABEL_74;
    }
    CmpUnlockAndLockKcbs(a8, 0LL, KeyControlBlock, 0LL);
    if ( (*(_DWORD *)(a7 + 24) & 0x1000000) != 0 )
    {
      *(_DWORD *)(v14 + 96) = *(_DWORD *)(a7 + 56);
      *(_DWORD *)(v14 + 184) = (unsigned __int16)*(_DWORD *)(v14 + 184) | ((*(unsigned __int16 *)(v14 + 186) | 0x40) << 16);
    }
    v27 = v83;
    *(_DWORD *)v83 = 1803104306;
    v21[1] = v14;
    v27[2] = 0LL;
    v27[3] = PsGetCurrentThreadProcessId();
    v21[10] = v21 + 9;
    v21[9] = v21 + 9;
    EnlistKeyBodyWithKCB(v27, 2LL);
    v21[7] = 0LL;
    v21[8] = 0LL;
    v69 = 5;
    v84 = (_QWORD *)(v14 + 32);
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 5360LL) & 0x20) != 0 )
    {
      AppHiveSecurityDescriptor = ParentDescriptor;
      if ( ParentDescriptor )
      {
        v28 = 0;
        v68 = 0;
        v82 = ParentDescriptor;
      }
      else
      {
        AppHiveSecurityDescriptor = CmpGenerateAppHiveSecurityDescriptor();
        ParentDescriptor = AppHiveSecurityDescriptor;
        v82 = AppHiveSecurityDescriptor;
        if ( !AppHiveSecurityDescriptor )
          goto LABEL_74;
        v28 = 1;
        v68 = 1;
      }
      Object = 0;
      NewDescriptor = AppHiveSecurityDescriptor;
    }
    else
    {
      v28 = 0;
      v68 = 0;
      if ( (*(_WORD *)(v14 + 186) & 0x200) == 0 || (unsigned __int8)CmpIsSystemEntity(a7 + 16) )
      {
        v29 = (struct _SECURITY_SUBJECT_CONTEXT *)a4;
        v30 = *(void **)(a4 + 64);
      }
      else
      {
        v30 = 0LL;
        v29 = (struct _SECURITY_SUBJECT_CONTEXT *)a4;
      }
      Object = SeAssignSecurity(
                 ParentDescriptor,
                 v30,
                 &NewDescriptor,
                 1u,
                 v29 + 1,
                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                 *((POOL_TYPE *)CmKeyObjectType + 25));
      ParentDescriptor = v82;
    }
    if ( Object >= 0 )
    {
      v31 = v84;
      v32 = (unsigned __int64 *)(*v84 + 2952LL);
      v33 = KeAbPreAcquire((ULONG_PTR)v32, 0LL, 0LL);
      v34 = v33;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
        ExfAcquirePushLockExclusiveEx(v32, v33, (ULONG_PTR)v32);
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
      v67 = CmpAssignSecurityDescriptorWrapper(*a12, NewDescriptor, 0LL);
      v35 = (signed __int64 *)(*v31 + 2952LL);
      _m_prefetchw(v35);
      v36 = *v35;
      v37 = *v35 - 16;
      if ( (*v35 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v37 = 0LL;
      if ( (v36 & 2) != 0 || (v38 = *v35, v38 != _InterlockedCompareExchange64(v35, v37, v36)) )
        ExfReleasePushLock(v35);
      KeAbPostRelease((ULONG_PTR)v35);
      Object = v67;
      v14 = v74;
      ParentDescriptor = v82;
      v28 = v68;
    }
    if ( (*(_DWORD *)(*v84 + 5360LL) & 0x20) == 0 )
    {
      if ( (*(_BYTE *)a7 & 1) != 0 && (*(_BYTE *)(a7 + 24) & 4) != 0 )
      {
        SeDeassignSecurity(&NewDescriptor);
      }
      else
      {
        v39 = *(_QWORD *)(a4 + 72);
        v40 = *(void **)(v39 + 48);
        if ( v40 )
          ExFreePoolWithTag(v40, 0);
        *(_QWORD *)(v39 + 48) = NewDescriptor;
      }
    }
    if ( v28 )
      ExFreePoolWithTag(ParentDescriptor, 0x65536D43u);
    if ( Object < 0 )
      goto LABEL_85;
    if ( !a13 )
    {
LABEL_44:
      CmpReportNotify(v14, *v84, *(_DWORD *)(v14 + 40), a13, 1, 0LL);
      goto LABEL_85;
    }
    v21[7] = *(_QWORD *)(a13 + 48);
    v42 = 0LL;
    if ( !*(_QWORD *)(a13 + 48) )
      v42 = a13 + 80;
    v21[8] = v42;
    v43 = (void *)v21[7];
    if ( v43 )
    {
      Object = CmReferenceKtmTransaction(v43);
      if ( Object < 0 )
      {
        v21[7] = 0LL;
        v21[8] = 0LL;
        goto LABEL_85;
      }
    }
    v44 = (_QWORD *)CmpAllocateUnitOfWork();
    P = v44;
    if ( v44 )
    {
      v45 = v44 + 4;
      v46 = *(_QWORD **)(v14 + 208);
      v44[4] = v14 + 200;
      v44[5] = v46;
      if ( *v46 != v14 + 200 )
        __fastfail(3u);
      *v46 = v45;
      *(_QWORD *)(v14 + 208) = v45;
      CmpReferenceKeyControlBlock(v14);
      *((_QWORD *)P + 6) = v14;
      v47 = KeGetCurrentThread();
      --v47->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v48 = *(_QWORD **)(a13 + 24);
      v49 = P;
      *(_QWORD *)P = a13 + 16;
      v49[1] = v48;
      if ( *v48 != a13 + 16 )
        __fastfail(3u);
      *v48 = v49;
      *(_QWORD *)(a13 + 24) = v49;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v50 = P;
      *((_QWORD *)P + 7) = a13;
      v50[17] = 0;
      v50[18] = v85;
      v14 = v74;
      *(_QWORD *)(v74 + 232) = a13;
      CmpLockIXLockExclusive(v14 + 240, (__int64)v50, 0);
      CmpLockIXLockExclusive(v14 + 256, (__int64)v50, 1);
      v51 = v75;
      *((_DWORD *)v75 + 17) = 1;
      v51[10] = v14;
      Object = CmAddLogForAction((__int64)v50, v52);
      if ( Object >= 0 )
        goto LABEL_44;
LABEL_85:
      if ( v80 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v71);
      if ( v78 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
      if ( Object >= 0 )
        return (unsigned int)Object;
      if ( v69 != 1 )
      {
        if ( v69 != 2 )
        {
          if ( v69 != 3 )
          {
            if ( v69 != 5 )
              return (unsigned int)Object;
            v62 = v83;
            v63 = (void *)v83[7];
            if ( v63 )
            {
              ObfDereferenceObject(v63);
              v62[7] = 0LL;
              v62[8] = 0LL;
            }
            v64 = P;
            if ( P )
            {
              CmpRundownUnitOfWork(P);
              ExFreePoolWithTag(v64, 0x77554D43u);
            }
            *(_DWORD *)(v14 + 4) |= 0x20000u;
            CmpRemoveKeyHash(*(_QWORD *)(v14 + 32), v14 + 16);
            *(_QWORD *)(v14 + 24) = -1LL;
            CmpUnlockAndLockKcbs(a8, v14, 0LL, 0LL);
            ObDereferenceObjectDeferDelete(*a12);
          }
          if ( (_DWORD)BugCheckParameter3 != -1 )
            HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3);
        }
        HvFreeCell(BugCheckParameter2, (unsigned int)*a11);
      }
      v65 = v75;
      if ( v75 )
      {
        CmpRundownUnitOfWork(v75);
        ExFreePoolWithTag(v65, 0x77554D43u);
      }
      return (unsigned int)Object;
    }
LABEL_74:
    Object = -1073741670;
    goto LABEL_85;
  }
  return 3221225524LL;
}
