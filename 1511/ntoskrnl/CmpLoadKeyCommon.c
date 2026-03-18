/*
 * XREFs of CmpLoadKeyCommon @ 0x140002D44
 * Callers:
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpUnlockHiveList @ 0x1403BAB54 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1403BABA4 (CmpLockHiveListExclusive.c)
 *     UnlockShutdown @ 0x1403BABE4 (UnlockShutdown.c)
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     LockShutdownShared @ 0x1403BDB38 (LockShutdownShared.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1403DB2CC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     CmpAddToHiveFileList @ 0x1404C26DC (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404C2C8C (CmRmFinalizeRecovery.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1404C69AC (CmpSetGlobalQuotaAllowed.c)
 *     CmpAddStringToMapping @ 0x140549E4C (CmpAddStringToMapping.c)
 *     CmpRemoveHiveFromMapping @ 0x1405E28F4 (CmpRemoveHiveFromMapping.c)
 *     ObDrainDeferredObjectDeletion @ 0x14062DBC4 (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        ULONG_PTR BugCheckParameter2,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        char a7,
        char a8)
{
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  _QWORD *v18; // r12
  int v19; // esi
  __int64 **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // r8
  _WORD *v27; // rdx
  __int64 v28; // rbx
  ULONG_PTR v29; // rax
  _QWORD *v30; // rcx
  __int64 *v31; // rbx
  __int64 *v32; // rcx
  __int64 **v33; // rax
  _QWORD v34[2]; // [rsp+58h] [rbp-89h] BYREF
  _DWORD v35[36]; // [rsp+68h] [rbp-79h] BYREF
  PVOID Object; // [rsp+128h] [rbp+47h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 144) |= 0x20u;
  *(_QWORD *)(BugCheckParameter2 + 5416) = KeGetCurrentThread();
  Object = 0LL;
  v12 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5360) |= 0x20u;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 0x40u;
  }
  *(_DWORD *)(BugCheckParameter2 + 5360) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v13) = 1;
  CmpLockRegistryFreezeAware(v13);
  if ( a4 )
  {
    if ( (unsigned __int8)CmRmIsKCBDeleted(*(_QWORD *)(a4 + 8), 0LL) == 1 )
    {
      v19 = -1073741444;
      goto LABEL_39;
    }
    v25 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 5360) & 1) == 0 )
      {
        v19 = -1073741811;
        goto LABEL_39;
      }
      memset(v34, 0, sizeof(v34));
      v26 = 0LL;
      v27 = (_WORD *)(*(_QWORD *)(a2[2] + 8LL) + 2 * (((unsigned __int64)*(unsigned __int16 *)a2[2] - 2) >> 1));
      if ( *v27 != 92 )
      {
        do
        {
          --v27;
          LOWORD(v26) = v26 + 2;
        }
        while ( *v27 != 92 );
        LOWORD(v34[0]) = v26;
      }
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 2u;
      v34[1] = v27 + 1;
      v19 = CmpAddStringToMapping(v34, BugCheckParameter2, v26);
      CmpLockHiveListExclusive();
      v28 = v25 + 5368;
      v29 = BugCheckParameter2 + 5368;
      v30 = *(_QWORD **)(v28 + 8);
      *(_QWORD *)(BugCheckParameter2 + 5368) = v28;
      *(_QWORD *)(BugCheckParameter2 + 5376) = v30;
      if ( *v30 != v28 )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v28 + 8) = v29;
      CmpUnlockHiveList();
      if ( v19 < 0 )
        goto LABEL_39;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v14) = a7;
  v15 = CmpLinkHiveToMaster(a2[2], a2[1], BugCheckParameter2, v14, 512, v12 != 0, a5, a2[4], 0);
  v18 = a6;
  v19 = v15;
  if ( (a3 & 0x800) != 0 && v15 >= 0 )
  {
    memset(v35, 0, 136);
    v19 = ObReferenceObjectByNameEx((_DWORD)a2, v16, 131097, (_DWORD)CmKeyObjectType, 0, (__int64)v35, (__int64)&Object);
    if ( v19 >= 0 )
    {
      v24 = (ULONG_PTR *)Object;
      CmpLockKcbExclusive(*((_QWORD *)Object + 1));
      CmpReferenceKeyControlBlock(v24[1]);
      CmpUnlockKcb((PVOID)v24[1]);
      *v18 = v24[1];
      ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    }
  }
  LOBYTE(v17) = 1;
  CmpLockRegistryFreezeAware(v17);
  if ( v19 >= 0 )
  {
    if ( v12 )
    {
      CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 4104));
      *v18 = *(_QWORD *)(BugCheckParameter2 + 4104);
    }
    CmpLockHiveListExclusive();
    v20 = (__int64 **)qword_1406FBD10;
    *(_QWORD *)(BugCheckParameter2 + 2736) = qword_1406FBD10;
    *(_QWORD *)(BugCheckParameter2 + 2728) = &CmpHiveListHead;
    if ( *v20 != &CmpHiveListHead )
      __fastfail(3u);
    *v20 = (__int64 *)(BugCheckParameter2 + 2728);
    qword_1406FBD10 = BugCheckParameter2 + 2728;
    CmpUnlockHiveList();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    if ( (a3 & 0x110) == 0 )
    {
      LOBYTE(v21) = a8;
      CmpInitCmRM(BugCheckParameter2, v21);
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 8u;
    }
    if ( a7 == 1 )
      CmpFlushHive(BugCheckParameter2);
    if ( !v12 )
      CmpAddToHiveFileList(BugCheckParameter2);
    v22 = *(_QWORD *)(BugCheckParameter2 + 5400);
    if ( v22 )
    {
      TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v22 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 5400));
      CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 5400));
    }
    CmpTrimHive(BugCheckParameter2);
    LOCK_HIVE_LOAD();
    *(_DWORD *)(BugCheckParameter2 + 144) &= ~0x20u;
    *(_QWORD *)(BugCheckParameter2 + 5416) = 0LL;
    UNLOCK_HIVE_LOAD();
    goto LABEL_19;
  }
LABEL_39:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  ObDrainDeferredObjectDeletion();
  CmpDestroySecurityCache(BugCheckParameter2);
  v31 = (__int64 *)(BugCheckParameter2 + 5368);
  if ( (__int64 *)*v31 != v31 )
  {
    CmpLockHiveListExclusive();
    v32 = (__int64 *)*v31;
    v33 = *(__int64 ***)(BugCheckParameter2 + 5376);
    if ( *(__int64 **)(*v31 + 8) != v31 || *v33 != v31 )
      __fastfail(3u);
    *v33 = v32;
    v32[1] = (__int64)v33;
    CmpUnlockHiveList();
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 2) != 0 )
    CmpRemoveHiveFromMapping(BugCheckParameter2);
  HvFreeHive(BugCheckParameter2);
  CmpCmdHiveClose(BugCheckParameter2);
  CmpDereferenceHive(BugCheckParameter2);
LABEL_19:
  UnlockShutdown();
  if ( !BYTE5(NlsMbCodePageTag) && !CmpWasSetupBoot )
  {
    BYTE5(NlsMbCodePageTag) = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return (unsigned int)v19;
}
