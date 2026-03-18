/*
 * XREFs of CmpDoCreateChild @ 0x140448EE0
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmpUnlockAndLockKcbs @ 0x14042A760 (CmpUnlockAndLockKcbs.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmpAssignSecurityDescriptorWrapper @ 0x140449A94 (CmpAssignSecurityDescriptorWrapper.c)
 *     EnlistKeyBodyWithKCB @ 0x140449DEC (EnlistKeyBodyWithKCB.c)
 *     CmpIsHiveLoadingOnOtherThread @ 0x140449E34 (CmpIsHiveLoadingOnOtherThread.c)
 *     SeAssignSecurity @ 0x140449E58 (SeAssignSecurity.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpCopyName @ 0x1404A1054 (CmpCopyName.c)
 *     CmpNameSize @ 0x1404A109C (CmpNameSize.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     SeDeassignSecurity @ 0x1405411DC (SeDeassignSecurity.c)
 *     CmReferenceKtmTransaction @ 0x140554498 (CmReferenceKtmTransaction.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpDoCreateChild(
        ULONG_PTR BugCheckParameter2,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int16 *a5,
        char a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        __int16 a10,
        _DWORD *a11,
        PVOID *a12,
        __int64 a13)
{
  __int64 v14; // rsi
  PSECURITY_DESCRIPTOR AppHiveSecurityDescriptor; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  BOOL v18; // ecx
  unsigned __int16 v19; // ax
  int v20; // ecx
  __int64 v21; // rdx
  int Object; // edi
  _QWORD *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // eax
  unsigned __int16 v27; // ax
  __int64 KeyControlBlock; // rax
  _QWORD *v29; // r14
  char v30; // r14
  struct _SECURITY_SUBJECT_CONTEXT *v31; // r8
  void *v32; // rdx
  __int64 *v33; // r14
  unsigned __int64 *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rdx
  signed __int64 *v39; // rdi
  signed __int64 v40; // rax
  signed __int64 v41; // rcx
  signed __int64 v42; // rtt
  __int64 v43; // r13
  void *v44; // rcx
  __int64 v45; // rax
  void *v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  struct _KTHREAD *v50; // rcx
  struct _KTHREAD *v51; // r14
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdi
  signed __int8 v55; // cf
  _QWORD *v56; // rdx
  _QWORD *v57; // rcx
  signed __int32 v58; // eax
  struct _KTHREAD *v59; // rcx
  __int16 v60; // ax
  _QWORD *v61; // r14
  _QWORD *v62; // r15
  _QWORD *UnitOfWork; // rax
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v67; // r15
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rdi
  _QWORD *v71; // rdx
  _QWORD *v72; // rcx
  signed __int32 v73; // eax
  struct _KTHREAD *v74; // rcx
  __int16 v75; // ax
  PVOID v76; // r15
  _QWORD *v78; // r14
  void *v79; // rcx
  PVOID v80; // r14
  PVOID v81; // r15
  int v82; // [rsp+50h] [rbp-C8h]
  char v83; // [rsp+54h] [rbp-C4h]
  int v84; // [rsp+58h] [rbp-C0h]
  int v85; // [rsp+60h] [rbp-B8h] BYREF
  int v86; // [rsp+64h] [rbp-B4h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-B0h]
  __int64 v88; // [rsp+70h] [rbp-A8h]
  PVOID v89; // [rsp+78h] [rbp-A0h]
  unsigned int v90; // [rsp+80h] [rbp-98h]
  PVOID P; // [rsp+88h] [rbp-90h]
  __int64 v92; // [rsp+90h] [rbp-88h] BYREF
  PSECURITY_DESCRIPTOR ParentDescriptor; // [rsp+98h] [rbp-80h]
  void *v94; // [rsp+A0h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+A8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR v96; // [rsp+B0h] [rbp-68h]
  _QWORD *v97; // [rsp+B8h] [rbp-60h]
  __int64 *v98; // [rsp+C0h] [rbp-58h]
  BOOL v99; // [rsp+C8h] [rbp-50h]
  __int64 v100; // [rsp+D0h] [rbp-48h]

  ParentDescriptor = a3;
  v84 = 0;
  v97 = 0LL;
  LODWORD(BugCheckParameter3) = -1;
  v92 = 0LL;
  v86 = -1;
  v94 = 0LL;
  v85 = -1;
  v14 = 0LL;
  v88 = 0LL;
  NewDescriptor = 0LL;
  v89 = 0LL;
  P = 0LL;
  v96 = 0LL;
  if ( !(unsigned __int8)CmpIsHiveLoadingOnOtherThread() )
  {
    if ( CmpVEEnabled && (*(_WORD *)(a9 + 186) & 0x100) != 0 )
      a10 |= 0x100u;
    if ( (*(_WORD *)(a9 + 186) & 0x200) != 0 )
      a10 |= 0x200u;
    v18 = (*(_BYTE *)(a7 + 24) & 1) != 0;
    v99 = v18;
    if ( a13 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a9 + 32) + 144LL) & 2) != 0 )
      {
        Object = -1072103423;
        goto LABEL_105;
      }
      v90 = 1;
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      v89 = UnitOfWork;
      if ( !UnitOfWork )
        goto LABEL_88;
      v64 = UnitOfWork + 4;
      v65 = *(_QWORD **)(a9 + 208);
      UnitOfWork[4] = a9 + 200;
      UnitOfWork[5] = v65;
      if ( *v65 != a9 + 200 )
        __fastfail(3u);
      *v65 = v64;
      *(_QWORD *)(a9 + 208) = v64;
      CmpReferenceKeyControlBlock(a9);
      *((_QWORD *)v89 + 6) = a9;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v67 = KeGetCurrentThread();
      v69 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v68);
      v70 = v69;
      v55 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
      if ( !v55 )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v69);
      if ( v70 )
        *(_BYTE *)(v70 + 26) |= 1u;
      qword_14034D768 = (__int64)v67;
      v71 = *(_QWORD **)(a13 + 24);
      v72 = v89;
      *(_QWORD *)v89 = a13 + 16;
      v72[1] = v71;
      if ( *v71 != a13 + 16 )
        __fastfail(3u);
      *v71 = v72;
      *(_QWORD *)(a13 + 24) = v72;
      qword_14034D768 = 0LL;
      v73 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v73 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v73);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v74 = KeGetCurrentThread();
      v75 = v74->KernelApcDisable + 1;
      v74->KernelApcDisable = v75;
      if ( !v75
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v74->ApcState.ApcListHead[0].Flink != &v74->152
        && !v74->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v76 = v89;
      *((_QWORD *)v89 + 7) = a13;
      v84 = 1;
      if ( !CmpLockIXLockIntent((unsigned int *)(a9 + 240), (__int64)v76) )
      {
        Object = -1072103423;
        v14 = v88;
        goto LABEL_105;
      }
      v14 = v88;
    }
    else
    {
      if ( *(_QWORD *)(a9 + 232) || *(int *)(a9 + 240) < 0 )
      {
        Object = CmpSnapshotTxOwnerArray(a9 + 240, a7 + 112, a7 + 120);
        if ( Object >= 0 )
        {
          Object = 260;
          *(_DWORD *)(a7 + 88) |= 4u;
        }
        goto LABEL_105;
      }
      v90 = v18;
    }
    v19 = CmpNameSize(a5);
    v20 = HvAllocateCell(BugCheckParameter2, (unsigned int)v19 + 76, v90, &v92, &v86);
    *a11 = v20;
    if ( v20 == -1 )
      goto LABEL_88;
    v84 = 2;
    v21 = *(unsigned int *)(a7 + 4);
    if ( (_DWORD)v21 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(BugCheckParameter2, v21, v90, &v94, &v85);
      if ( (_DWORD)BugCheckParameter3 == -1 )
        goto LABEL_88;
    }
    v84 = 3;
    LOBYTE(v20) = a6;
    LOBYTE(v17) = a6;
    Object = ObCreateObjectEx(v20, (_DWORD)CmKeyObjectType, 0, v17);
    if ( Object < 0 )
      goto LABEL_105;
    v23 = *a12;
    v97 = v23;
    *(_DWORD *)v23 = 1803104306;
    v23[1] = 0LL;
    v23[7] = 0LL;
    v23[8] = 0LL;
    *((_DWORD *)v23 + 12) &= 0xFFFF0000;
    *((_DWORD *)v23 + 12) = (unsigned __int16)*((_DWORD *)v23 + 12) | (*(_DWORD *)(a7 + 20) << 16);
    v23[10] = v23 + 9;
    v23[9] = v23 + 9;
    if ( *(_DWORD *)(a7 + 4) )
    {
      memmove(v94, *(const void **)(a7 + 8), *(unsigned int *)(a7 + 4));
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v85);
      v94 = 0LL;
    }
    v24 = v92;
    *(_WORD *)v92 = 27502;
    *(_WORD *)(v24 + 2) = a10;
    v100 = MEMORY[0xFFFFF78000000014];
    v25 = v92;
    *(_QWORD *)(v92 + 4) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v25 + 16) = a2;
    *(_QWORD *)(v25 + 20) = 0LL;
    *(_DWORD *)(v25 + 28) = -1;
    *(_DWORD *)(v25 + 32) = -1;
    *(_DWORD *)(v25 + 36) = 0;
    *(_DWORD *)(v25 + 40) = -1;
    *(_DWORD *)(v25 + 44) = -1;
    *(_DWORD *)(v25 + 64) = 0;
    *(_DWORD *)(v25 + 52) &= 0xFFFF0000;
    *(_DWORD *)(v25 + 52) &= 0xFFF0FFFF;
    *(_DWORD *)(v25 + 12) = 0;
    *(_DWORD *)(v25 + 48) = BugCheckParameter3;
    *(_WORD *)(v25 + 74) = *(_WORD *)(a7 + 4);
    *(_DWORD *)(v25 + 56) = 0;
    v26 = *(_DWORD *)(a9 + 184);
    if ( (v26 & 0x80u) != 0 )
      *(_DWORD *)(v25 + 52) ^= (*(_DWORD *)(v25 + 52) ^ (v26 << 16)) & 0xF00000;
    else
      *(_DWORD *)(v25 + 52) &= 0xFF0FFFFF;
    *(_DWORD *)(v25 + 52) &= 0xFFFFFFu;
    *(_DWORD *)(v25 + 60) = 0;
    v27 = CmpCopyName(v25 + 76, a5);
    *(_WORD *)(v25 + 72) = v27;
    if ( v27 < *a5 )
      *(_WORD *)(v24 + 2) |= 0x20u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
    v92 = 0LL;
    KeyControlBlock = CmpCreateKeyControlBlock(BugCheckParameter2, (__int64)a5);
    v14 = KeyControlBlock;
    v88 = KeyControlBlock;
    if ( !KeyControlBlock )
    {
      ObDereferenceObjectDeferDelete(*a12);
      goto LABEL_88;
    }
    CmpUnlockAndLockKcbs(a8, 0LL, KeyControlBlock, 0LL);
    if ( (*(_DWORD *)(a7 + 24) & 0x1000000) != 0 )
    {
      *(_DWORD *)(v14 + 96) = *(_DWORD *)(a7 + 56);
      *(_DWORD *)(v14 + 184) = (unsigned __int16)*(_DWORD *)(v14 + 184) | ((*(unsigned __int16 *)(v14 + 186) | 0x40) << 16);
    }
    v29 = v97;
    *(_DWORD *)v97 = 1803104306;
    v23[1] = v14;
    v29[2] = 0LL;
    v29[3] = PsGetCurrentThreadProcessId();
    v23[10] = v23 + 9;
    v23[9] = v23 + 9;
    EnlistKeyBodyWithKCB(v29, 2LL);
    v23[7] = 0LL;
    v23[8] = 0LL;
    v84 = 5;
    v98 = (__int64 *)(v14 + 32);
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 5360LL) & 0x20) != 0 )
    {
      AppHiveSecurityDescriptor = ParentDescriptor;
      if ( ParentDescriptor )
      {
        v30 = 0;
        v83 = 0;
        v96 = ParentDescriptor;
      }
      else
      {
        AppHiveSecurityDescriptor = CmpGenerateAppHiveSecurityDescriptor();
        ParentDescriptor = AppHiveSecurityDescriptor;
        v96 = AppHiveSecurityDescriptor;
        if ( !AppHiveSecurityDescriptor )
          goto LABEL_88;
        v30 = 1;
        v83 = 1;
      }
      Object = 0;
      NewDescriptor = AppHiveSecurityDescriptor;
    }
    else
    {
      v30 = 0;
      v83 = 0;
      if ( (*(_WORD *)(v14 + 186) & 0x200) == 0 || (unsigned __int8)CmpIsSystemEntity(a7 + 16) )
      {
        v31 = (struct _SECURITY_SUBJECT_CONTEXT *)a4;
        v32 = *(void **)(a4 + 64);
      }
      else
      {
        v32 = 0LL;
        v31 = (struct _SECURITY_SUBJECT_CONTEXT *)a4;
      }
      Object = SeAssignSecurity(
                 ParentDescriptor,
                 v32,
                 &NewDescriptor,
                 1u,
                 v31 + 1,
                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                 *((POOL_TYPE *)CmKeyObjectType + 25));
      AppHiveSecurityDescriptor = v96;
      ParentDescriptor = v96;
    }
    if ( Object >= 0 )
    {
      v33 = v98;
      v34 = (unsigned __int64 *)(*v98 + 2952);
      v35 = KeAbPreAcquire((ULONG_PTR)v34, 0LL, 0LL, v17);
      v37 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
        ExfAcquirePushLockExclusiveEx(v34, v35, (ULONG_PTR)v34, v36);
      if ( v37 )
        *(_BYTE *)(v37 + 26) |= 1u;
      v82 = CmpAssignSecurityDescriptorWrapper(*a12, NewDescriptor, 0LL);
      v39 = (signed __int64 *)(*v33 + 2952);
      _m_prefetchw(v39);
      v40 = *v39;
      v41 = *v39 - 16;
      if ( (*v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v41 = 0LL;
      if ( (v40 & 2) != 0 || (v42 = *v39, v42 != _InterlockedCompareExchange64(v39, v41, v40)) )
        ExfReleasePushLock(v39, v38);
      KeAbPostRelease((ULONG_PTR)v39);
      Object = v82;
      v14 = v88;
      ParentDescriptor = v96;
      v30 = v83;
    }
    if ( (*(_DWORD *)(*v98 + 5360) & 0x20) == 0 )
    {
      if ( (*(_BYTE *)a7 & 1) != 0 && (*(_BYTE *)(a7 + 24) & 4) != 0 )
      {
        SeDeassignSecurity(&NewDescriptor);
      }
      else
      {
        v43 = *(_QWORD *)(a4 + 72);
        v44 = *(void **)(v43 + 48);
        if ( v44 )
          ExFreePoolWithTag(v44, 0);
        *(_QWORD *)(v43 + 48) = NewDescriptor;
      }
    }
    if ( v30 )
      ExFreePoolWithTag(ParentDescriptor, 0x65536D43u);
    if ( Object < 0 )
      goto LABEL_105;
    if ( !a13 )
    {
LABEL_44:
      CmpReportNotify(v14, *v98, *(_DWORD *)(v14 + 40), a13, 1, 0LL);
      goto LABEL_105;
    }
    v23[7] = *(_QWORD *)(a13 + 48);
    v45 = 0LL;
    if ( !*(_QWORD *)(a13 + 48) )
      v45 = a13 + 80;
    v23[8] = v45;
    v46 = (void *)v23[7];
    if ( v46 )
    {
      Object = CmReferenceKtmTransaction(v46);
      if ( Object < 0 )
      {
        v23[7] = 0LL;
        v23[8] = 0LL;
        goto LABEL_105;
      }
    }
    v47 = (_QWORD *)CmpAllocateUnitOfWork();
    P = v47;
    if ( v47 )
    {
      v48 = v47 + 4;
      v49 = *(_QWORD **)(v14 + 208);
      v47[4] = v14 + 200;
      v47[5] = v49;
      if ( *v49 != v14 + 200 )
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v14 + 208) = v48;
      CmpReferenceKeyControlBlock(v14);
      *((_QWORD *)P + 6) = v14;
      v50 = KeGetCurrentThread();
      --v50->KernelApcDisable;
      v51 = KeGetCurrentThread();
      v53 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v52);
      v54 = v53;
      v55 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
      if ( !v55 )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v53);
      if ( v54 )
        *(_BYTE *)(v54 + 26) |= 1u;
      qword_14034D768 = (__int64)v51;
      v56 = *(_QWORD **)(a13 + 24);
      v57 = P;
      *(_QWORD *)P = a13 + 16;
      v57[1] = v56;
      if ( *v56 != a13 + 16 )
        __fastfail(3u);
      *v56 = v57;
      *(_QWORD *)(a13 + 24) = v57;
      qword_14034D768 = 0LL;
      v58 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v58 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v58);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v59 = KeGetCurrentThread();
      v60 = v59->KernelApcDisable + 1;
      v59->KernelApcDisable = v60;
      if ( !v60
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v59->ApcState.ApcListHead[0].Flink != &v59->152
        && !v59->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v61 = P;
      *((_QWORD *)P + 7) = a13;
      *((_DWORD *)v61 + 17) = 0;
      *((_DWORD *)v61 + 18) = v99;
      v14 = v88;
      *(_QWORD *)(v88 + 232) = a13;
      CmpLockIXLockExclusive(v14 + 240, v61, 0);
      CmpLockIXLockExclusive(v14 + 256, v61, 1);
      v62 = v89;
      *((_DWORD *)v89 + 17) = 1;
      v62[10] = v14;
      Object = CmAddLogForAction(v61);
      if ( Object >= 0 )
        goto LABEL_44;
LABEL_105:
      if ( v94 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v85);
      if ( v92 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
      if ( Object >= 0 )
        return (unsigned int)Object;
      if ( v84 != 1 )
      {
        if ( v84 != 2 )
        {
          if ( v84 != 3 )
          {
            if ( v84 != 5 )
              return (unsigned int)Object;
            v78 = v97;
            v79 = (void *)v97[7];
            if ( v79 )
            {
              ObfDereferenceObject(v79);
              v78[7] = 0LL;
              v78[8] = 0LL;
            }
            v80 = P;
            if ( P )
            {
              CmpRundownUnitOfWork(P, (__int64)AppHiveSecurityDescriptor, v16, v17);
              ExFreePoolWithTag(v80, 0x77554D43u);
            }
            *(_DWORD *)(v14 + 4) |= 0x20000u;
            CmpRemoveKeyHash(*(_QWORD *)(v14 + 32), v14 + 16);
            *(_QWORD *)(v14 + 24) = -1LL;
            CmpUnlockAndLockKcbs(a8, (void *)v14, 0LL, 0LL);
            ObDereferenceObjectDeferDelete(*a12);
          }
          if ( (_DWORD)BugCheckParameter3 != -1 )
            HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3);
        }
        HvFreeCell(BugCheckParameter2, (unsigned int)*a11);
      }
      v81 = v89;
      if ( v89 )
      {
        CmpRundownUnitOfWork(v89, (__int64)AppHiveSecurityDescriptor, v16, v17);
        ExFreePoolWithTag(v81, 0x77554D43u);
      }
      return (unsigned int)Object;
    }
LABEL_88:
    Object = -1073741670;
    goto LABEL_105;
  }
  return 3221225524LL;
}
