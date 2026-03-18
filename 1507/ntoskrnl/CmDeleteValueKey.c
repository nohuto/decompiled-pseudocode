/*
 * XREFs of CmDeleteValueKey @ 0x1404EFE30
 * Callers:
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     sub_1406ED5D0 @ 0x1406ED5D0 (sub_1406ED5D0.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmpMarkValueDataDirty @ 0x14042B6CC (CmpMarkValueDataDirty.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpRemoveValueFromList @ 0x1404F0AAC (CmpRemoveValueFromList.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpCloneKCBValueListForTrans @ 0x1404F3184 (CmpCloneKCBValueListForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     CmpSnapshotKCBSecurity @ 0x140659C90 (CmpSnapshotKCBSecurity.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x140660968 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  __int64 v5; // r15
  char v6; // r12
  struct _KTHREAD *v7; // rax
  unsigned __int64 v8; // rtt
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // r14
  unsigned int v15; // edi
  ULONG_PTR v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int ValueForAudit; // edi
  _DWORD *v23; // rax
  unsigned int v24; // r13d
  int v25; // ecx
  int v26; // r8d
  unsigned __int64 v27; // rtt
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  __int64 v31; // rax
  _DWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 UnitOfWork; // rax
  __int64 v36; // rcx
  __int64 *v37; // rdx
  struct _KTHREAD *v38; // rax
  struct _KTHREAD *v39; // r12
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 *v44; // rcx
  signed __int32 v45; // eax
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  ULONG_PTR v48; // rdx
  unsigned __int64 v49; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v51; // ax
  struct _KTHREAD *v52; // rcx
  __int16 v53; // ax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  PVOID v57; // rbx
  int v58; // ebx
  unsigned __int64 v59; // rtt
  struct _KTHREAD *v60; // rdx
  __int16 v61; // ax
  char v62; // [rsp+48h] [rbp-69h]
  char v63[3]; // [rsp+49h] [rbp-68h] BYREF
  unsigned int v64; // [rsp+4Ch] [rbp-65h] BYREF
  int v65; // [rsp+50h] [rbp-61h] BYREF
  int v66; // [rsp+54h] [rbp-5Dh] BYREF
  unsigned int BugCheckParameter3; // [rsp+58h] [rbp-59h]
  int BugCheckParameter3_4; // [rsp+5Ch] [rbp-55h] BYREF
  ULONG_PTR v69; // [rsp+60h] [rbp-51h]
  __int64 v70; // [rsp+68h] [rbp-49h]
  __int64 v71; // [rsp+70h] [rbp-41h] BYREF
  _DWORD *v72; // [rsp+78h] [rbp-39h]
  PVOID v73; // [rsp+80h] [rbp-31h] BYREF
  __int64 v74; // [rsp+88h] [rbp-29h] BYREF
  _QWORD *v75[2]; // [rsp+98h] [rbp-19h] BYREF
  int v76; // [rsp+A8h] [rbp-9h] BYREF
  __int128 P; // [rsp+ACh] [rbp-5h]
  __int64 v78; // [rsp+BCh] [rbp+Bh]
  int v79; // [rsp+C4h] [rbp+13h]

  v66 = -1;
  v4 = a1;
  v65 = -1;
  v5 = 0LL;
  v70 = 0LL;
  P = 0uLL;
  v6 = 0;
  v78 = 0LL;
  v79 = 0;
  v75[1] = v75;
  v75[0] = v75;
  v71 = 0LL;
  v63[0] = 0;
  v62 = 1;
  v76 = 0;
  v73 = 0LL;
  BugCheckParameter3_4 = 0;
  while ( 1 )
  {
    if ( v6 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v49 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v49 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v51 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v51;
      if ( !v51
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v8 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpShutdownRundown,
                 (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                 CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v52 = KeGetCurrentThread();
      v53 = v52->KernelApcDisable + 1;
      v52->KernelApcDisable = v53;
      if ( !v53
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
        && !v52->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225865LL;
    }
    v6 = 1;
    v9 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v10 = *(_QWORD *)(v4 + 8);
    CmpLockKcbExclusive(v10, v11, v12, v13);
    if ( (*(_DWORD *)(v10 + 4) & 0x20000) != 0 )
      break;
    v14 = *(_QWORD *)(v10 + 32);
    v15 = *(_DWORD *)(v10 + 40);
    BugCheckParameter3 = v15;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
    if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
    {
      if ( CmRmIsKCBDeleted(v10, 0LL) )
      {
        ValueForAudit = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_25;
      }
      ValueForAudit = CmpSearchAddTrans(v4, 0, 0, *(_QWORD *)(v4 + 56), *(_QWORD *)(v4 + 64), 0, (__int64)&v71);
      if ( ValueForAudit < 0 )
        goto LABEL_25;
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 144LL) & 2) != 0 )
      {
        ValueForAudit = -1072103423;
        goto LABEL_25;
      }
      UnitOfWork = CmpAllocateUnitOfWork();
      v5 = UnitOfWork;
      if ( !UnitOfWork )
      {
        ValueForAudit = -1073741670;
        goto LABEL_25;
      }
      v36 = UnitOfWork + 32;
      v37 = *(__int64 **)(v10 + 208);
      *(_QWORD *)(UnitOfWork + 32) = v10 + 200;
      *(_QWORD *)(UnitOfWork + 40) = v37;
      if ( *v37 != v10 + 200 )
        __fastfail(3u);
      *v37 = v36;
      *(_QWORD *)(v10 + 208) = v36;
      CmpReferenceKeyControlBlock(v10);
      *(_QWORD *)(v5 + 48) = v10;
      v38 = KeGetCurrentThread();
      --v38->KernelApcDisable;
      v39 = KeGetCurrentThread();
      v41 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v40);
      v42 = v41;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v41);
      if ( v42 )
        *(_BYTE *)(v42 + 26) |= 1u;
      qword_14034D768 = (__int64)v39;
      v43 = v71 + 16;
      v44 = *(__int64 **)(v71 + 24);
      *(_QWORD *)v5 = v71 + 16;
      *(_QWORD *)(v5 + 8) = v44;
      if ( *v44 != v43 )
        __fastfail(3u);
      *v44 = v5;
      *(_QWORD *)(v43 + 8) = v5;
      qword_14034D768 = 0LL;
      v45 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v45 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v45);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v46 = KeGetCurrentThread();
      v47 = v46->KernelApcDisable + 1;
      v46->KernelApcDisable = v47;
      if ( !v47
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
        && !v46->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v17 = v71;
      *(_QWORD *)(v5 + 56) = v71;
      if ( !CmpLockIXLockIntent((unsigned int *)(v10 + 240), v5) || !CmpLockIXLockExclusive(v10 + 256, (_QWORD *)v5, 1) )
      {
        ValueForAudit = -1072103423;
        goto LABEL_18;
      }
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v10, v17, v63) )
        goto LABEL_93;
      v15 = BugCheckParameter3;
LABEL_10:
      if ( CmRmIsKCBDeleted(v10, v17) )
      {
        ValueForAudit = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_21;
      }
      v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v14 + 8))(v14, v15, &v66);
      v70 = v21;
      if ( !v21 )
      {
LABEL_93:
        ValueForAudit = -1073741670;
        goto LABEL_21;
      }
      CmpUpdateKeyNodeAccessBits(v14, v21, v15);
      ValueForAudit = -1073741772;
      if ( v17 )
        v23 = (_DWORD *)(v10 + 272);
      else
        v23 = (_DWORD *)(v70 + 36);
      LODWORD(v69) = -1;
      v72 = v23;
      if ( !*v23 )
        goto LABEL_18;
      if ( !CmpFindNameInList(v14, (__int64)v23) )
      {
        ValueForAudit = -1073741670;
        goto LABEL_18;
      }
      v24 = v69;
      if ( (_DWORD)v69 == -1 )
        goto LABEL_17;
      if ( a4 == 1 )
      {
        ValueForAudit = CmpGetValueForAudit(v14, (unsigned int)v69, &v76, 826363203LL);
        if ( ValueForAudit < 0 )
          goto LABEL_17;
        ValueForAudit = CmpSnapshotKCBSecurity(v10, v17, 843140419LL, &v73);
        if ( ValueForAudit < 0 )
          goto LABEL_17;
      }
      if ( !v17 )
      {
        if ( !HvpMarkCellDirty(v14, BugCheckParameter3, 0, 0LL)
          || !HvpMarkCellDirty(v14, *(unsigned int *)(v70 + 40), 0, 0LL)
          || !HvpMarkCellDirty(v14, v24, 0, 0LL) )
        {
          goto LABEL_101;
        }
        v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v14 + 8))(v14, v24, &v65);
        if ( v31 )
        {
          if ( CmpMarkValueDataDirty(v14, v31) )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(v14 + 16))(v14, &v65);
            goto LABEL_39;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v14 + 16))(v14, &v65);
LABEL_101:
          ValueForAudit = -1073741443;
LABEL_17:
          v4 = a1;
LABEL_18:
          if ( v70 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(v14 + 16))(v14, &v66);
LABEL_20:
          if ( ValueForAudit < 0 )
          {
LABEL_21:
            if ( v5 )
            {
              CmpRundownUnitOfWork((_QWORD *)v5, v18, v19, v20);
              ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
            }
            if ( v63[0] )
            {
              v48 = *(unsigned int *)(v10 + 276);
              if ( (_DWORD)v48 != -1 )
                HvFreeCell(*(_QWORD *)(v10 + 32), v48, v19, v20);
              *(_DWORD *)(v10 + 276) = -1;
              *(_DWORD *)(v10 + 272) = 0;
              *(_QWORD *)(v10 + 280) = 0LL;
            }
          }
          if ( v62 )
LABEL_25:
            ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
          CmpUnlockKcb((char *)v10);
          CmpUnlockRegistry();
          CmpSignalDeferredPosts(v75);
          if ( a4 == 1 )
          {
            v57 = v73;
            if ( ValueForAudit >= 0 )
              SeAdtRegistryValueChangedAuditAlarm(v25, (_DWORD)v73, v26, a2, v4, a3, (__int64)&v76, 2);
            if ( *(_QWORD *)((char *)&P + 4) )
              ExFreePoolWithTag(*(PVOID *)((char *)&P + 4), 0x31414D43u);
            if ( v57 )
              ExFreePoolWithTag(v57, 0x32414D43u);
          }
          _m_prefetchw(&CmpShutdownRundown);
          v27 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v27 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v28 = KeGetCurrentThread();
          v29 = v28->KernelApcDisable + 1;
          v28->KernelApcDisable = v29;
          if ( !v29
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
            && !v28->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          return (unsigned int)ValueForAudit;
        }
LABEL_99:
        ValueForAudit = -1073741670;
        goto LABEL_17;
      }
      *(_DWORD *)(v5 + 68) = 6;
      *(_DWORD *)(v5 + 80) = v24;
LABEL_39:
      v32 = v72;
      if ( (int)CmpRemoveValueFromList(v14) < 0 )
        goto LABEL_99;
      if ( v17 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
        v62 = 0;
        ValueForAudit = CmAddLogForAction(v5);
        if ( ValueForAudit < 0 )
          goto LABEL_17;
      }
      else
      {
        if ( !CmpFreeValue(v14, v24) )
          goto LABEL_99;
        v33 = v70;
        *(_QWORD *)(v70 + 4) = v9;
        *(_QWORD *)(v10 + 168) = v9;
        if ( !*(_DWORD *)(v33 + 36) )
        {
          *(_QWORD *)(v33 + 60) = 0LL;
          *(_WORD *)(v10 + 178) = 0;
          *(_DWORD *)(v10 + 180) = 0;
        }
        CmpCleanUpKcbValueCache(v10);
        *(_DWORD *)(v10 + 96) = *v32;
        v34 = (unsigned int)v32[1];
        ValueForAudit = 0;
        *(_QWORD *)(v10 + 104) = v34;
      }
      CmpReportNotify(v10, *(_QWORD *)(v10 + 32), *(_DWORD *)(v10 + 40), v17, 4, (__int64)v75);
      goto LABEL_17;
    }
    v16 = v10 + 240;
    if ( *(int *)(v10 + 240) >= 0 )
    {
      v16 = v10 + 256;
      if ( !*(_DWORD *)(v10 + 256) )
      {
        v17 = v71;
        goto LABEL_10;
      }
    }
    ValueForAudit = CmpSnapshotTxOwnerArray(v16, &v64, &v74);
    if ( ValueForAudit < 0 )
      goto LABEL_25;
    ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
    CmpUnlockKcb((char *)v10);
    CmpUnlockRegistry();
    ValueForAudit = CmpRollbackTransactionArray(v64, v74, 0LL, &BugCheckParameter3_4);
    if ( ValueForAudit < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v10, v54, v55, v56);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
      goto LABEL_20;
    }
  }
  v58 = (*(_BYTE *)(v4 + 48) & 1) != 0 ? 0x2A9 : 0;
  CmpUnlockKcb((char *)v10);
  CmpUnlockRegistry();
  _m_prefetchw(&CmpShutdownRundown);
  v59 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v59 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v60 = KeGetCurrentThread();
  v61 = v60->KernelApcDisable + 1;
  v60->KernelApcDisable = v61;
  if ( !v61
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v60->ApcState.ApcListHead[0].Flink != &v60->152
    && !v60->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)(v58 - 1073741444);
}
