/*
 * XREFs of CmSetValueKey @ 0x140428B40
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmpSyncNextBackupHive @ 0x14065C7C4 (CmpSyncNextBackupHive.c)
 *     ExReArmFastCache @ 0x1406EBBEC (ExReArmFastCache.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     sub_1406ED5D0 @ 0x1406ED5D0 (sub_1406ED5D0.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
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
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x14042A83C (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x1404A0F2C (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x1404A10D0 (CmpSetValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1404A1188 (CmpAddValueToListEx.c)
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
 *     CmpUpgradeKcbLockToExclusive @ 0x14055D194 (CmpUpgradeKcbLockToExclusive.c)
 *     CmpParseCacheAddSymbolicLink @ 0x1405BB434 (CmpParseCacheAddSymbolicLink.c)
 *     CmpSnapshotKCBSecurity @ 0x140659C90 (CmpSnapshotKCBSecurity.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x140660968 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        size_t a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  char v8; // r12
  int v9; // r13d
  char v10; // si
  struct _KTHREAD *v11; // rax
  unsigned __int64 v12; // rtt
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r12
  char v20; // r15
  int v21; // eax
  int ValueForAudit; // r15d
  int v23; // ecx
  int v24; // r8d
  unsigned __int64 v25; // rtt
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  ULONG_PTR v29; // r14
  unsigned int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rsi
  _DWORD *v33; // rdx
  char v34; // r15
  int v35; // r13d
  int v36; // eax
  unsigned int v37; // r13d
  unsigned int Length; // eax
  __int64 v39; // rcx
  _QWORD *UnitOfWork; // rax
  _QWORD *v41; // r15
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  struct _KTHREAD *v44; // rax
  struct _KTHREAD *v45; // r14
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  _QWORD *v50; // rcx
  signed __int32 v51; // eax
  struct _KTHREAD *v52; // rcx
  __int16 v53; // ax
  _DWORD *v54; // rcx
  int v55; // eax
  unsigned __int64 v56; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v58; // ax
  struct _KTHREAD *v59; // rcx
  __int16 v60; // ax
  __int64 *v61; // rbx
  __int64 v62; // rcx
  PVOID v63; // rbx
  ULONG_PTR v64; // rdx
  PVOID v65; // rbx
  void *Src; // [rsp+20h] [rbp-B1h]
  size_t Size; // [rsp+28h] [rbp-A9h]
  size_t v68; // [rsp+30h] [rbp-A1h]
  int v69; // [rsp+30h] [rbp-A1h]
  char v70; // [rsp+40h] [rbp-91h]
  char v71; // [rsp+41h] [rbp-90h]
  _BYTE v72[2]; // [rsp+42h] [rbp-8Fh] BYREF
  int v73; // [rsp+44h] [rbp-8Dh] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+48h] [rbp-89h]
  unsigned int v75; // [rsp+4Ch] [rbp-85h] BYREF
  unsigned int v76; // [rsp+50h] [rbp-81h] BYREF
  int v77; // [rsp+54h] [rbp-7Dh]
  __int64 v78; // [rsp+58h] [rbp-79h] BYREF
  PVOID P; // [rsp+60h] [rbp-71h]
  int v80; // [rsp+68h] [rbp-69h] BYREF
  int v81; // [rsp+6Ch] [rbp-65h] BYREF
  int v82; // [rsp+70h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-59h]
  PVOID v84; // [rsp+80h] [rbp-51h] BYREF
  __int64 v85; // [rsp+88h] [rbp-49h] BYREF
  int v86[2]; // [rsp+90h] [rbp-41h]
  _QWORD v87[2]; // [rsp+98h] [rbp-39h] BYREF
  int v88; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v89; // [rsp+ACh] [rbp-25h]
  _QWORD v90[10]; // [rsp+BCh] [rbp-15h] BYREF

  v7 = a1;
  v81 = -1;
  v80 = -1;
  v8 = 0;
  v73 = 0;
  v89 = 0uLL;
  v9 = 0;
  v10 = 0;
  memset(v90, 0, 12);
  *(_QWORD *)v86 = 0LL;
  v78 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v72[0] = 0;
  v88 = 0;
  v84 = 0LL;
  v77 = 0;
  v82 = 0;
  v87[0] = v87;
  v70 = 0;
  v87[1] = v87;
  while ( 2 )
  {
    if ( v10 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v56 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v56 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v58 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v58;
      if ( !v58
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v59 = KeGetCurrentThread();
      v60 = v59->KernelApcDisable + 1;
      v59->KernelApcDisable = v60;
      if ( !v60
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v59->ApcState.ApcListHead[0].Flink != &v59->152
        && !v59->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225865LL;
    }
    v13 = MEMORY[0xFFFFF78000000014];
    v10 = 1;
    CmpLockRegistry();
    v17 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 56) || *(_QWORD *)(v7 + 64) )
    {
      CmpLockKcbExclusive(*(_QWORD *)(v7 + 8));
      v9 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL), 1u);
      v8 = 1;
      v70 = 1;
    }
    else
    {
      v18 = *(_QWORD *)(v7 + 8);
      if ( v9 == 1 )
        CmpLockKcbExclusive(v18);
      else
        CmpLockKcbShared(v18, v14, v15, v16);
    }
    if ( *(_QWORD *)(v7 + 56) || *(_QWORD *)(v7 + 64) )
    {
      if ( (unsigned __int8)CmRmIsKCBDeleted(v17, 0LL) == 1 )
      {
LABEL_152:
        ValueForAudit = -1073741444;
        if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
          ValueForAudit = -1073740763;
        goto LABEL_154;
      }
      ValueForAudit = CmpSearchAddTrans(v7, 0, 0, *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 64), 0, (__int64)&v78);
      if ( ValueForAudit < 0 )
        goto LABEL_154;
      if ( (*(_DWORD *)(*(_QWORD *)(v17 + 32) + 144LL) & 2) != 0 )
      {
        ValueForAudit = -1072103423;
        goto LABEL_154;
      }
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      P = UnitOfWork;
      v41 = UnitOfWork;
      if ( !UnitOfWork )
      {
        ValueForAudit = -1073741670;
        goto LABEL_156;
      }
      v42 = UnitOfWork + 4;
      v43 = *(_QWORD **)(v17 + 208);
      UnitOfWork[4] = v17 + 200;
      UnitOfWork[5] = v43;
      if ( *v43 != v17 + 200 )
        __fastfail(3u);
      *v43 = v42;
      *(_QWORD *)(v17 + 208) = v42;
      CmpReferenceKeyControlBlock(v17);
      v41[6] = v17;
      v44 = KeGetCurrentThread();
      --v44->KernelApcDisable;
      v45 = KeGetCurrentThread();
      v47 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v46);
      v48 = v47;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v47);
      if ( v48 )
        *(_BYTE *)(v48 + 26) |= 1u;
      qword_14034D768 = (__int64)v45;
      v49 = v78 + 16;
      v50 = *(_QWORD **)(v78 + 24);
      *v41 = v78 + 16;
      v41[1] = v50;
      if ( *v50 != v49 )
        __fastfail(3u);
      *v50 = v41;
      v10 = 1;
      *(_QWORD *)(v49 + 8) = v41;
      qword_14034D768 = 0LL;
      v51 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v51 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v51);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v52 = KeGetCurrentThread();
      v53 = v52->KernelApcDisable + 1;
      v52->KernelApcDisable = v53;
      if ( !v53
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
        && !v52->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v19 = v78;
      v41[7] = v78;
      if ( !(unsigned __int8)CmpLockIXLockIntent(v17 + 240, v41)
        || !(unsigned __int8)CmpLockIXLockExclusive(v17 + 256, v41, 1LL) )
      {
        v8 = v70;
        ValueForAudit = -1072103423;
        goto LABEL_154;
      }
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v17, v19, v72) )
      {
        v8 = v70;
        ValueForAudit = -1073741670;
        goto LABEL_154;
      }
      v7 = a1;
    }
    else
    {
      v19 = v78;
    }
    v20 = v70;
    while ( 1 )
    {
      if ( (unsigned __int8)CmRmIsKCBDeleted(v17, v19) == 1 )
      {
        v8 = v70;
        goto LABEL_152;
      }
      if ( !v19 )
        break;
LABEL_16:
      if ( (*(_BYTE *)(v17 + 186) & 0x10) != 0
        && (a3 != 6
         || (a5 & 1) != 0
         || (unsigned int)a5 > 0xFFFF
         || !a2
         || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, a2, 1u)
         || RtlIsSandboxedToken(0LL, PreviousMode)) )
      {
        v8 = v70;
        ValueForAudit = -1073741790;
        goto LABEL_154;
      }
      if ( v9 )
      {
        v29 = *(_QWORD *)(v17 + 32);
        v30 = *(_DWORD *)(v17 + 40);
        if ( !v20 )
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v29 + 2848), 1u);
        v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v29 + 8))(v29, v30, &v81);
        v32 = v31;
        if ( !v31 )
        {
          v8 = v70;
          if ( !v70 )
            ExReleaseResourceLite(*(PERESOURCE *)(v29 + 2848));
          ValueForAudit = -1073741670;
          goto LABEL_154;
        }
        CmpUpdateKeyNodeAccessBits(v29, v31, v30);
        if ( !v20 )
          ExReleaseResourceLite(*(PERESOURCE *)(v29 + 2848));
        if ( v19 )
          v33 = (_DWORD *)(v17 + 272);
        else
          v33 = (_DWORD *)(v32 + 36);
        v34 = 0;
        v71 = 0;
        if ( !*v33 )
        {
          v75 = 0;
          goto LABEL_38;
        }
        if ( !(unsigned __int8)CmpFindNameInList(v29, (_DWORD)v33, (_DWORD)a2, 0, (__int64)&v75, (__int64)&v73) )
        {
          ValueForAudit = -1073741670;
          goto LABEL_55;
        }
        if ( v73 != -1 )
        {
          if ( v19
            || (*(_QWORD *)v86 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v29 + 8))(
                                   v29,
                                   (unsigned int)v73,
                                   &v80)) != 0LL )
          {
            v34 = 1;
            v71 = 1;
            goto LABEL_38;
          }
          ValueForAudit = -1073741670;
          goto LABEL_55;
        }
LABEL_38:
        if ( !v19 && !(unsigned __int8)HvpMarkCellDirty(v29, v30) )
        {
          ValueForAudit = -1073741443;
          goto LABEL_55;
        }
        if ( a7 != 1 )
          goto LABEL_41;
        ValueForAudit = CmpSnapshotKCBSecurity(v17, v19, 859917635LL, &v84);
        if ( ValueForAudit < 0 )
        {
LABEL_55:
          (*(void (__fastcall **)(ULONG_PTR, int *))(v29 + 16))(v29, &v81);
          if ( *(_QWORD *)v86 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(v29 + 16))(v29, &v80);
          v8 = v70;
          goto LABEL_58;
        }
        v34 = v71;
        if ( v71 )
        {
          ValueForAudit = CmpGetValueForAudit(v29, (unsigned int)v73, &v88, 876694851LL);
          if ( ValueForAudit >= 0 )
          {
            v34 = v71;
            v77 = 1;
            goto LABEL_41;
          }
          goto LABEL_55;
        }
        v77 = 0;
LABEL_41:
        v35 = v30 >> 31;
        if ( v19 )
        {
          LODWORD(Src) = a5;
          LODWORD(BugCheckParameter3) = CmpAddValueKeyNew(v29, (size_t)Src, 1);
          if ( (_DWORD)BugCheckParameter3 == -1 )
          {
            ValueForAudit = -1073741670;
            goto LABEL_55;
          }
          ValueForAudit = CmpAddValueToListEx(v29, v17 + 272, 1);
          if ( ValueForAudit < 0 )
          {
            CmpFreeValue(v29, (unsigned int)BugCheckParameter3);
            goto LABEL_55;
          }
          if ( v71 )
          {
            CmpRemoveValueFromList(v29);
            v54 = P;
            v55 = v73;
            *((_DWORD *)P + 17) = 5;
            v54[20] = v55;
          }
          else
          {
            v54 = P;
            *((_DWORD *)P + 17) = 4;
          }
          v54[21] = BugCheckParameter3;
          v54[18] = v35;
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL));
          v70 = 0;
          v36 = CmAddLogForAction(P);
LABEL_45:
          v37 = v73;
        }
        else
        {
          if ( !v34 )
          {
            if ( a3 == 6 && (*(_DWORD *)(v17 + 4) & 0x7FE00000) == 0x600000 )
            {
              ValueForAudit = CmpParseCacheAddSymbolicLink(v17);
              if ( ValueForAudit < 0 )
                goto LABEL_55;
            }
            LODWORD(v68) = a5;
            v36 = CmpSetValueKeyNew(v29, a3, (__int64)a4, v68, v35);
            goto LABEL_45;
          }
          v69 = v35;
          v37 = v73;
          LODWORD(Size) = a5;
          v36 = CmpSetValueKeyExisting(v29, v73, v86[0], a3, a4, Size, v69);
        }
        ValueForAudit = v36;
        if ( v36 >= 0 )
        {
          if ( !v19 )
          {
            Length = a2->Length;
            if ( *(_DWORD *)(v32 + 60) < Length )
            {
              *(_DWORD *)(v32 + 60) = Length;
              *(_WORD *)(v17 + 178) = a2->Length;
            }
            if ( *(_DWORD *)(v32 + 64) < (unsigned int)a5 )
            {
              *(_DWORD *)(v32 + 64) = a5;
              *(_DWORD *)(v17 + 180) = a5;
            }
            *(_QWORD *)(v32 + 4) = v13;
            *(_QWORD *)(v17 + 168) = v13;
            if ( v71 && (v39 = *(_QWORD *)(v17 + 104), (v39 & 1) != 0) && v39 != 0xFFFFFFFFLL )
            {
              v61 = (__int64 *)((v39 & 0xFFFFFFFFFFFFFFFEuLL) + 8 + 8LL * v75);
              v62 = *v61;
              if ( (*v61 & 1) != 0 && v62 != 0xFFFFFFFFLL )
                ExFreePoolWithTag((PVOID)(v62 & 0xFFFFFFFFFFFFFFFEuLL), 0);
              *v61 = v37;
            }
            else
            {
              CmpCleanUpKcbValueCache(v17);
              *(_DWORD *)(v17 + 96) = *(_DWORD *)(v32 + 36);
              *(_QWORD *)(v17 + 104) = *(unsigned int *)(v32 + 40);
            }
          }
          CmpReportNotify(v17, *(_QWORD *)(v17 + 32), *(_DWORD *)(v17 + 40), v19, 4, (__int64)v87);
        }
        goto LABEL_55;
      }
      v21 = CmpCompareNewValueDataAgainstKCBCache(v17, a2, a3, a4, a5);
      if ( v21 == 1 )
      {
        CmpUpgradeKcbLockToExclusive(v17);
      }
      else
      {
        if ( !v21 )
        {
          v8 = v70;
          ValueForAudit = 0;
          goto LABEL_21;
        }
        if ( *(struct _KTHREAD **)(v17 + 56) == KeGetCurrentThread()
          || (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(v17) )
        {
          v9 = 1;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL), 1u);
          v19 = v78;
          v20 = 1;
          v70 = 1;
        }
        else
        {
          CmpUpgradeKcbLockToExclusive(v17);
          v19 = v78;
        }
      }
    }
    if ( *(int *)(v17 + 240) < 0 )
    {
      v8 = v70;
      ValueForAudit = CmpSnapshotTxOwnerArray(v17 + 240, &v76, &v85);
      if ( ValueForAudit < 0 )
        goto LABEL_154;
      if ( !v70 )
        goto LABEL_125;
      goto LABEL_124;
    }
    if ( !*(_DWORD *)(v17 + 256) )
      goto LABEL_16;
    v8 = v70;
    ValueForAudit = CmpSnapshotTxOwnerArray(v17 + 256, &v76, &v85);
    if ( ValueForAudit < 0 )
      goto LABEL_154;
    if ( v70 )
    {
LABEL_124:
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL));
      v8 = 0;
      v70 = 0;
    }
LABEL_125:
    CmpUnlockKcb((PVOID)v17);
    CmpUnlockRegistry();
    ValueForAudit = CmpRollbackTransactionArray(v76, v85, 0LL, &v82);
    if ( ValueForAudit >= 0 )
      continue;
    break;
  }
  CmpLockRegistry();
  CmpLockKcbExclusive(v17);
LABEL_58:
  if ( ValueForAudit >= 0 )
    goto LABEL_21;
LABEL_154:
  v63 = P;
  if ( P )
  {
    CmpRundownUnitOfWork((ULONG_PTR)P);
    ExFreePoolWithTag(v63, 0x77554D43u);
  }
LABEL_156:
  if ( v72[0] )
  {
    v64 = *(unsigned int *)(v17 + 276);
    if ( (_DWORD)v64 != -1 )
      HvFreeCell(*(_QWORD *)(v17 + 32), v64);
    *(_DWORD *)(v17 + 276) = -1;
    *(_DWORD *)(v17 + 272) = 0;
    *(_QWORD *)(v17 + 280) = 0LL;
  }
LABEL_21:
  if ( v8 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v17 + 32) + 2848LL));
  CmpUnlockKcb((PVOID)v17);
  CmpUnlockRegistry();
  CmpSignalDeferredPosts(v87);
  if ( a7 == 1 )
  {
    v65 = v84;
    if ( ValueForAudit >= 0 && v84 )
    {
      HIDWORD(v89) = a3;
      LODWORD(v90[0]) = a5;
      *(_QWORD *)((char *)v90 + 4) = a4;
      SeAdtRegistryValueChangedAuditAlarm(v23, (_DWORD)v84, v24, (_DWORD)a2, a1, a6, (__int64)&v88, v77);
    }
    if ( *(_QWORD *)((char *)&v89 + 4) )
      ExFreePoolWithTag(*(PVOID *)((char *)&v89 + 4), 0x34414D43u);
    if ( v65 )
      ExFreePoolWithTag(v65, 0x33414D43u);
  }
  _m_prefetchw(&CmpShutdownRundown);
  v25 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v25 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)ValueForAudit;
}
