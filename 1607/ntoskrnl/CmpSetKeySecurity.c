/*
 * XREFs of CmpSetKeySecurity @ 0x14000A1E0
 * Callers:
 *     CmpSecurityMethod @ 0x140403170 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmpCheckKcbStackAccess @ 0x1401B4C64 (CmpCheckKcbStackAccess.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1403FC434 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x1403FC47C (CmUnlockHiveSecurity.c)
 *     CmpUnlockHiveFlusher @ 0x1403FC4C8 (CmpUnlockHiveFlusher.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpTryAcquireIXLockExclusive @ 0x140401F50 (CmpTryAcquireIXLockExclusive.c)
 *     CmpIsKcbImmutable @ 0x140402628 (CmpIsKcbImmutable.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x14040336C (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14043F0C0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1404A9170 (CmpReleaseKeyNodeForKcb.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     SeSetSecurityAccessMask @ 0x140503EAC (SeSetSecurityAccessMask.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpFreeUnitOfWork @ 0x14060E384 (CmpFreeUnitOfWork.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpSetKeySecurity(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        POOL_TYPE a5,
        PGENERIC_MAPPING a6)
{
  char v7; // di
  char v8; // si
  char v9; // r12
  ULONG_PTR v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v12; // r15
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  ULONG_PTR v15; // rdi
  int started; // ebx
  int v17; // edx
  unsigned __int64 v18; // r15
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rsi
  char v22; // r10
  __int64 v23; // r8
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  __int64 UnitOfWork; // rax
  char v30; // r13
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 KeyNodeForKcb; // rax
  char v35; // [rsp+48h] [rbp-49h]
  char v36; // [rsp+49h] [rbp-48h]
  unsigned int v37; // [rsp+4Ch] [rbp-45h] BYREF
  int v38; // [rsp+50h] [rbp-41h] BYREF
  __int64 v39; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v40[32]; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v41; // [rsp+80h] [rbp-11h] BYREF
  __int64 v42; // [rsp+88h] [rbp-9h] BYREF
  __int64 v43; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v44[8]; // [rsp+98h] [rbp+7h] BYREF

  v42 = 0LL;
  v7 = 0;
  v35 = 0;
  v8 = 0;
  v36 = 0;
  CmpInitializeKcbStack(v40);
  v38 = 0;
  v9 = 0;
  v39 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v44[1] = v44;
  v44[0] = v44;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = ExAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v12 )
    {
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        if ( !KeGetCurrentIrql() )
        {
          __writecr8(1uLL);
          KiDeliverApc(0LL, 0LL, 0LL);
          __writecr8(0LL);
LABEL_53:
          started = -1073741431;
          goto LABEL_56;
        }
        KeGetCurrentThread()->ApcState.KernelApcPending = 1;
        ((void (*)(void))HalRequestSoftwareInterrupt)();
      }
    }
    if ( !v12 )
      goto LABEL_53;
    if ( v8 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v15 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int8)CmpIsKcbImmutable(v15) )
    {
LABEL_54:
      started = -1073741790;
      goto LABEL_55;
    }
    started = CmpStartKcbStackForTopLayerKcb(v40, v15);
    if ( started < 0 )
      break;
    if ( !v8 )
    {
      CmpLockKcbStackTopExclusiveRestShared(v40);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_55;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v42);
      if ( started < 0 )
        goto LABEL_55;
      started = CmpPerformKeyBodyDeletionCheck(a1, v42);
      if ( started < 0 )
        goto LABEL_55;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 5360LL) & 0x20) != 0 )
      goto LABEL_54;
    if ( !*(_WORD *)(v15 + 58) || (unsigned int)CmpGetEffectiveKcbSemantics(v15, 0LL) || v8 )
    {
      v21 = v42;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*a2, &v41);
        LOBYTE(v23) = v22;
        started = CmpCheckKcbStackAccess(v40, v21, v23, v41);
        if ( started < 0 )
          goto LABEL_55;
      }
      if ( *(_WORD *)(v15 + 58) )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v15, 0LL) )
        {
          started = CmpPromoteKey(v40, 1LL, 0LL);
          if ( started < 0 )
            goto LABEL_55;
          started = CmpPartialPromoteSubkeys(v40);
          if ( started < 0 )
            goto LABEL_55;
        }
      }
      if ( v21 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 144LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v15);
            started = CmpTransEnlistUowInCmTrans(v10, v21);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v15 + 240, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v15 + 256, v10, 1LL) )
              {
LABEL_78:
                if ( v35 )
                {
                  v30 = 0;
                }
                else
                {
                  CmpLockHiveFlusherShared(*(_QWORD *)(v15 + 24));
                  v30 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v15 + 24));
                  v36 = 1;
                }
                started = CmpSetSecurityDescriptorInfo(v15, a5, a6, v21, v10);
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v36 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v15 + 24));
                    v36 = 0;
                  }
                  if ( *(_WORD *)(v15 + 58) && !(unsigned int)CmpGetEffectiveKcbSemantics(v15, 0LL) )
                  {
                    LOBYTE(v32) = v30;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v31, &v39, v32);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v15, &v39);
                    *(_BYTE *)(v15 + 57) = 2;
                  }
                  if ( v30 )
                  {
                    CmpUnlockHiveFlusher(*(_QWORD *)(v15 + 24));
                    v30 = 0;
                  }
                  CmpReportNotify(v15, *(_QWORD *)(v15 + 24), *(_DWORD *)(v15 + 32), v21, 10, (__int64)v44);
                }
                if ( v36 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v15 + 24));
                if ( v30 )
                  CmpUnlockHiveFlusher(*(_QWORD *)(v15 + 24));
              }
              else
              {
                started = -1072103423;
              }
            }
            if ( v10 )
            {
              CmpRundownUnitOfWork(v10);
              CmpFreeUnitOfWork(v10);
            }
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_55:
        v7 = 1;
        goto LABEL_56;
      }
      if ( (unsigned __int8)CmpTryAcquireIXLockExclusive(v15 + 240)
        && (unsigned __int8)CmpTryAcquireIXLockExclusive(v15 + 256) )
      {
        goto LABEL_78;
      }
      started = CmpSnapshotTxOwnerArray(v24, &v37, &v43);
      if ( started < 0 )
        goto LABEL_55;
      if ( v9 )
      {
        CmpUnlockKcbStack(v40);
        v9 = 0;
      }
      CmpCleanupKcbStack(v40);
      CmpInitializeKcbStack(v40);
      CmpUnlockRegistry();
      v7 = 0;
      ExReleaseRundownProtection(&CmpShutdownRundown);
      v25 = KeGetCurrentThread();
      v26 = v25->KernelApcDisable + 1;
      v25->KernelApcDisable = v26;
      if ( !v26
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v25->ApcState.ApcListHead[0].Flink != &v25->152
        && !v25->SpecialApcDisable )
      {
        if ( KeGetCurrentIrql() )
        {
          KeGetCurrentThread()->ApcState.KernelApcPending = 1;
          ((void (*)(void))HalRequestSoftwareInterrupt)();
        }
        else
        {
          __writecr8(1uLL);
          KiDeliverApc(0LL, 0LL, 0LL);
          __writecr8(0LL);
        }
      }
      v12 = 0;
      started = CmpRollbackTransactionArray(v37, v43, 0LL, &v38);
      if ( started < 0 )
        goto LABEL_56;
      v8 = v35;
    }
    else
    {
      v18 = (unsigned int)(v17 + 1);
      v35 = v17 + 1;
      v8 = v17 + 1;
      CmpUnlockKcbStack(v40);
      v9 = 0;
      CmpCleanupKcbStack(v40);
      CmpInitializeKcbStack(v40);
      CmpUnlockRegistry();
      v7 = 0;
      ExReleaseRundownProtection(&CmpShutdownRundown);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        if ( KeGetCurrentIrql() )
        {
          LOBYTE(v19) = v18;
          KeGetCurrentThread()->ApcState.KernelApcPending = v18;
          HalRequestSoftwareInterrupt(v19);
        }
        else
        {
          __writecr8(v18);
          KiDeliverApc(0LL, 0LL, 0LL);
          __writecr8(0LL);
        }
      }
    }
  }
  v7 = 1;
LABEL_56:
  if ( v9 )
    CmpUnlockKcbStack(v40);
  CmpCleanupKcbStack(v40);
  if ( v7 )
    CmpUnlockRegistry();
  if ( (_QWORD *)v44[0] != v44 )
    CmpSignalDeferredPosts(v44);
  if ( v12 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      if ( KeGetCurrentIrql() )
      {
        KeGetCurrentThread()->ApcState.KernelApcPending = 1;
        ((void (*)(void))HalRequestSoftwareInterrupt)();
      }
      else
      {
        __writecr8(1uLL);
        KiDeliverApc(0LL, 0LL, 0LL);
        __writecr8(0LL);
      }
    }
  }
  return (unsigned int)started;
}
