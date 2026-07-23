/*
 * XREFs of CmDeleteKey @ 0x1403FE238
 * Callers:
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1403FAE14 (CmpLockKcbStackExclusive.c)
 *     CmGetVisibleSubkeyCount @ 0x1403FAE50 (CmGetVisibleSubkeyCount.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1403FAEDC (CmpCleanupDiscardReplaceContext.c)
 *     CmpUnlockHashEntryByKcb @ 0x1403FB840 (CmpUnlockHashEntryByKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140436860 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpRemoveFromDelayedDeref @ 0x1405192D8 (CmpRemoveFromDelayedDeref.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060B9BC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060BE64 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  char v2; // r14
  __int64 UnitOfWork; // r13
  __int64 v4; // r15
  ULONG_PTR v5; // rsi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int started; // edi
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  char v21; // r14
  char v22; // bl
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  char v35; // [rsp+30h] [rbp-89h]
  char v36; // [rsp+31h] [rbp-88h]
  BOOLEAN v37; // [rsp+32h] [rbp-87h]
  unsigned int v38; // [rsp+34h] [rbp-85h] BYREF
  int v39; // [rsp+38h] [rbp-81h] BYREF
  __int64 v40; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v41[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v42[8]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v43; // [rsp+60h] [rbp-59h] BYREF
  int v44; // [rsp+68h] [rbp-51h] BYREF
  __int16 v45; // [rsp+6Ch] [rbp-4Dh]
  __int64 KeyNodeForKcb; // [rsp+70h] [rbp-49h]
  _BYTE v47[8]; // [rsp+78h] [rbp-41h] BYREF
  _WORD v48[16]; // [rsp+80h] [rbp-39h] BYREF
  _WORD v49[16]; // [rsp+A0h] [rbp-19h] BYREF
  _QWORD v50[10]; // [rsp+C0h] [rbp+7h] BYREF
  char v51; // [rsp+128h] [rbp+6Fh]
  char v52; // [rsp+130h] [rbp+77h]
  char v53; // [rsp+138h] [rbp+7Fh]

  v41[1] = v41;
  v51 = 0;
  v36 = 0;
  v41[0] = v41;
  v35 = 0;
  v52 = 0;
  v2 = 0;
  memset(v49, 0, sizeof(v49));
  v49[1] = -1;
  memset(v48, 0, sizeof(v48));
  v48[1] = -1;
  v53 = 0;
  v43 = 0LL;
  UnitOfWork = 0LL;
  v39 = 0;
  v4 = 0LL;
  v5 = 0LL;
  KeyNodeForKcb = 0LL;
  v6 = MEMORY[0xFFFFF78000000014];
  HvpGetCellContextReinitialize((__int64)v47);
  HvpGetCellContextReinitialize((__int64)v42);
  memset(v50, 0, 0x20uLL);
  LODWORD(v50[1]) = -1073741823;
  v50[3] = &v50[2];
  v50[2] = &v50[2];
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v37 = ExAcquireRundownProtection(&CmpShutdownRundown);
      if ( !v37 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
        started = -1073741431;
        goto LABEL_85;
      }
      if ( v2 )
        CmpLockRegistryExclusive();
      else
        CmpLockRegistry();
      v5 = a1[1];
      v51 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL) & 0x100000) != 0 )
      {
        started = -1073741790;
        goto LABEL_85;
      }
      if ( !*(_QWORD *)(v5 + 64) )
        goto LABEL_76;
      if ( *(_WORD *)(v5 + 58) )
      {
        started = CmDeleteLayeredKey((__int64)a1, (__int64)v41);
        goto LABEL_85;
      }
      started = CmpStartKcbStackForTopLayerKcb(v48, v5);
      if ( started < 0 )
        goto LABEL_85;
      started = CmpStartKcbStackForTopLayerKcb(v49, *(_QWORD *)(v5 + 64));
      if ( started < 0 )
        goto LABEL_85;
      started = 0;
      if ( !v2 )
      {
        CmpLockHashEntryExclusiveByKcb(v5);
        v35 = 1;
        CmpLockKcbStackTopExclusiveRestShared((__int64)v49);
        CmpLockKcbStackExclusive((__int64)v48);
        v53 = 1;
      }
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
LABEL_95:
        v21 = 1;
        v22 = 0;
        goto LABEL_35;
      }
      if ( !a1[7] && !a1[8] )
      {
        v13 = v43;
        goto LABEL_16;
      }
      started = CmpTransSearchAddTransFromKeyBody(a1, &v43);
      if ( started < 0 )
        goto LABEL_85;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_85;
      }
      v13 = v43;
      started = 0;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v43) )
        goto LABEL_95;
      if ( v13 )
        break;
LABEL_16:
      v14 = *(_QWORD *)(v5 + 184);
      if ( !v14 || *(_QWORD *)(v14 + 32) == v14 + 32 || v36 )
        break;
      v2 = 1;
      v36 = 1;
      CmpUnlockKcbStack(v48);
      CmpUnlockKcbStack(v49);
      v53 = 0;
      CmpUnlockHashEntryByKcb(v5);
      v35 = 0;
      CmpCleanupKcbStack(v48);
      memset(v48, 0, sizeof(v48));
      v48[1] = -1;
      CmpCleanupKcbStack(v49);
      memset(v49, 0, sizeof(v49));
      v49[1] = -1;
      CmpUnlockRegistry();
      v51 = 0;
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
    }
    v15 = *(_QWORD *)(v5 + 232);
    if ( v15 )
    {
      if ( !CmEqualTrans(v13, v15) )
        break;
    }
    if ( v13 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      if ( !UnitOfWork )
      {
        v21 = 1;
        started = -1073741670;
        v22 = 0;
        goto LABEL_35;
      }
      v4 = CmpAllocateUnitOfWork();
      if ( !v4 )
      {
        started = -1073741670;
        goto LABEL_33;
      }
      CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v5 + 64));
      started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v13);
      if ( started < 0 )
        goto LABEL_33;
      CmpTransEnlistUowInKcb((_QWORD *)v4, v5);
      started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v13);
      if ( started < 0 )
        goto LABEL_33;
      if ( !CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v5 + 64) + 240LL), UnitOfWork)
        || !CmpLockIXLockExclusive(v5 + 240, (_QWORD *)v4, 0) )
      {
        started = -1072103423;
        goto LABEL_33;
      }
      if ( !CmpLockIXLockExclusive(v5 + 256, (_QWORD *)v4, 1) )
      {
        started = -1072103423;
        v21 = 1;
        goto LABEL_34;
      }
LABEL_24:
      if ( !v36 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL), 1u);
        v52 = 1;
      }
      LOBYTE(v12) = 1;
      KeyNodeForKcb = CmpGetKeyNodeForKcb(v5, v47, v12);
      v17 = KeyNodeForKcb;
      if ( (unsigned int)CmGetVisibleSubkeyCount(v5, KeyNodeForKcb, v13) || (*(_BYTE *)(v17 + 2) & 8) != 0 )
      {
        started = -1073741535;
        goto LABEL_33;
      }
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), v47);
      KeyNodeForKcb = 0LL;
      if ( v13 )
      {
        *(_DWORD *)(UnitOfWork + 68) = 3;
        *(_QWORD *)(UnitOfWork + 88) = v5;
        *(_DWORD *)(v4 + 68) = 2;
        *(_QWORD *)(v4 + 80) = UnitOfWork;
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
        v22 = 0;
        started = CmAddLogForAction(v4);
        if ( started >= 0 )
        {
          v4 = 0LL;
          UnitOfWork = 0LL;
          CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), v13, 1, (__int64)v41);
          started = 0;
        }
        v21 = 1;
        goto LABEL_35;
      }
      v18 = *(_QWORD *)(v5 + 184);
      if ( !v18 || *(_QWORD *)(v18 + 32) == v18 + 32 )
      {
        CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), 0, 1, (__int64)v41);
        started = CmpFreeKeyByCell(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32));
        if ( started < 0 )
        {
LABEL_33:
          v21 = 1;
LABEL_34:
          v22 = v52;
          goto LABEL_35;
        }
        CmpFlushNotifiesOnKeyBodyList(v5, 8LL);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v5 + 64));
        LOBYTE(v19) = 1;
        v20 = CmpGetKeyNodeForKcb(*(_QWORD *)(v5 + 64), v42, v19);
        *(_WORD *)(*(_QWORD *)(v5 + 64) + 168LL) = *(_WORD *)(v20 + 52);
        *(_QWORD *)(v20 + 4) = v6;
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 160LL) = v6;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL),
          v42);
        CmpMarkKeyUnbacked(v5);
        CmpDiscardKcb(v5);
      }
      else
      {
        started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
        if ( started < 0 )
          goto LABEL_33;
        CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), 0, 1, (__int64)v41);
        started = CmpFreeKeyByCell(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32));
        if ( started < 0 )
          goto LABEL_33;
        v44 = 8;
        v45 = 257;
        CmpEnumerateAllHigherLayerKcbs(
          v5,
          (unsigned int)CmpFlushNotifiesPreCallback,
          (unsigned int)CmpFlushNotifiesPostCallback,
          (unsigned int)&v44,
          1,
          1);
        CmpFlushNotifiesOnKeyBodyList(v5, 8LL);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v5 + 64));
        LOBYTE(v33) = 1;
        v34 = CmpGetKeyNodeForKcb(*(_QWORD *)(v5 + 64), v42, v33);
        *(_WORD *)(*(_QWORD *)(v5 + 64) + 168LL) = *(_WORD *)(v34 + 52);
        *(_QWORD *)(v34 + 4) = v6;
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 160LL) = v6;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL),
          v42);
        CmpMarkKeyUnbacked(v5);
        CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
      }
      started = 0;
      goto LABEL_33;
    }
    v16 = (int *)(*(_QWORD *)(v5 + 64) + 240LL);
    if ( *v16 >= 0 )
    {
      v16 = (int *)(v5 + 240);
      if ( !*(_DWORD *)(v5 + 240) )
      {
        v16 = (int *)(v5 + 256);
        if ( !*(_DWORD *)(v5 + 256) )
        {
          if ( (*(_BYTE *)(v5 + 56) & 1) != 0 )
            CmpRemoveFromDelayedDeref(v5);
          goto LABEL_24;
        }
      }
    }
    v21 = 0;
    started = CmpSnapshotTxOwnerArray(v16, &v38, &v40);
    if ( started < 0 )
      goto LABEL_85;
    if ( v53 )
    {
      CmpUnlockKcbStack(v48);
      CmpUnlockKcbStack(v49);
      v53 = 0;
    }
    if ( v35 )
    {
      CmpUnlockHashEntryByKcb(v5);
      v35 = 0;
    }
    CmpUnlockRegistry();
    v51 = 0;
    started = CmpRollbackTransactionArray(v38, v40, 0LL, &v39);
    if ( started < 0 )
      goto LABEL_86;
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
    v2 = v36;
  }
LABEL_76:
  started = -1073741535;
LABEL_85:
  v21 = v51;
LABEL_86:
  v22 = 0;
LABEL_35:
  CmpCleanupDiscardReplaceContext(v50);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), v47);
  if ( v22 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
  if ( v4 )
  {
    CmpRundownUnitOfWork((_QWORD *)v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((_QWORD *)UnitOfWork);
    ExFreePoolWithTag((PVOID)UnitOfWork, 0x77554D43u);
  }
  if ( v53 )
  {
    CmpUnlockKcbStack(v48);
    CmpUnlockKcbStack(v49);
  }
  if ( v35 )
    CmpUnlockHashEntryByKcb(v5);
  CmpCleanupKcbStack(v48);
  CmpCleanupKcbStack(v49);
  if ( v21 )
    CmpUnlockRegistry();
  if ( v41[0] != v41 )
    CmpSignalDeferredPosts(v41);
  if ( v37 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
  }
  return (unsigned int)started;
}
