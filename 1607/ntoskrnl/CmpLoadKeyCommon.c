/*
 * XREFs of CmpLoadKeyCommon @ 0x14010BB8C
 * Callers:
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpJoinClassOfTrust @ 0x1401B4600 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAddToHiveFileList @ 0x1404CD0D8 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404CE378 (CmRmFinalizeRecovery.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1404D3700 (CmpSetGlobalQuotaAllowed.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpUnlockHiveList @ 0x1405183C8 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405193C8 (CmpLockHiveListExclusive.c)
 *     UnlockShutdown @ 0x140519408 (UnlockShutdown.c)
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     LockShutdownShared @ 0x14051A308 (LockShutdownShared.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x140601A84 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601D18 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     ObDrainDeferredObjectDeletion @ 0x140665DB4 (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        ULONG_PTR BugCheckParameter2,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        PRKEVENT Event,
        char a7,
        __int64 *a8,
        char a9,
        char a10)
{
  __int64 v10; // r14
  int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edi
  __int64 v19; // rdi
  int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 *v23; // r14
  __int64 v24; // rdi
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF

  v30 = 0LL;
  v10 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 144) |= 0x20u;
  *(_QWORD *)(BugCheckParameter2 + 5416) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5360) |= 0x20u;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 0x40u;
  }
  *(_DWORD *)(BugCheckParameter2 + 5360) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v16) = 1;
  CmpLockRegistryFreezeAware(v16);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v18 = -1073741444;
LABEL_17:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ObDrainDeferredObjectDeletion();
      CmpDestroySecurityCache(BugCheckParameter2);
      CmpUnJoinClassOfTrust(BugCheckParameter2);
      CmpVERemoveHiveFromSIDMappingTable(BugCheckParameter2);
      LOBYTE(v22) = 1;
      HvFreeHive(BugCheckParameter2, v22);
      CmpCmdHiveClose(BugCheckParameter2);
      CmpDereferenceHive(BugCheckParameter2);
      goto LABEL_33;
    }
    LOBYTE(v17) = a7;
    v18 = CmpJoinClassOfTrust(BugCheckParameter2, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL), v17);
    if ( v18 < 0 )
      goto LABEL_17;
    v18 = CmpVEAddHiveToSIDMappingTable(BugCheckParameter2, a2);
    if ( v18 < 0 )
      goto LABEL_17;
  }
  v19 = a5;
  if ( a5 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a5, 0LL) )
    {
      v18 = (*(_BYTE *)(v19 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_17;
    }
    v10 = *(_QWORD *)(v19 + 8);
    if ( (*(_BYTE *)(v10 + 178) & 4) == 0 )
    {
      v18 = -1073741811;
      goto LABEL_17;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v20) = a9;
  v18 = CmpLinkHiveToMaster(a2[2], a2[1], BugCheckParameter2, v20, 512, v15 != 0, Event, a2[4], v10, (__int64)&v30, 0);
  if ( v18 < 0 )
  {
    LOBYTE(v21) = 1;
    CmpLockRegistryFreezeAware(v21);
    goto LABEL_17;
  }
  v23 = a8;
  v24 = v30;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(v30);
    *v23 = v24;
  }
  LOBYTE(v21) = 1;
  CmpLockRegistryFreezeAware(v21);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 4104));
    *v23 = *(_QWORD *)(BugCheckParameter2 + 4104);
  }
  CmpLockHiveListExclusive();
  v25 = (_QWORD *)qword_140747E38;
  v26 = (_QWORD *)(BugCheckParameter2 + 2728);
  if ( *(__int64 **)qword_140747E38 != &CmpHiveListHead )
    __fastfail(3u);
  *v26 = &CmpHiveListHead;
  *(_QWORD *)(BugCheckParameter2 + 2736) = v25;
  *v25 = v26;
  qword_140747E38 = BugCheckParameter2 + 2728;
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpDereferenceKeyControlBlockUnsafe(v24);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v27) = a10;
    CmpInitCmRM(BugCheckParameter2, v27);
    *(_DWORD *)(BugCheckParameter2 + 5360) |= 8u;
  }
  if ( a9 )
    CmpFlushHive(BugCheckParameter2);
  if ( !v15 )
    CmpAddToHiveFileList(BugCheckParameter2);
  v28 = *(_QWORD *)(BugCheckParameter2 + 5400);
  if ( v28 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v28 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 5400));
    CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 5400));
  }
  CmpTrimHive(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(BugCheckParameter2 + 144) &= ~0x20u;
  *(_QWORD *)(BugCheckParameter2 + 5416) = 0LL;
  UNLOCK_HIVE_LOAD();
  v18 = 0;
LABEL_33:
  UnlockShutdown();
  if ( !BYTE5(NlsMbCodePageTag) && !CmpWasSetupBoot )
  {
    BYTE5(NlsMbCodePageTag) = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return (unsigned int)v18;
}
