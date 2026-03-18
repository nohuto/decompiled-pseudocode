/*
 * XREFs of CmpLoadKeyCommon @ 0x1400D2048
 * Callers:
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140195A80 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14044C1E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpUnlockHiveList @ 0x1404EA638 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1404EA688 (CmpLockHiveListExclusive.c)
 *     UnlockShutdown @ 0x1404EA6C8 (UnlockShutdown.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 *     LockShutdownShared @ 0x1404EA8B0 (LockShutdownShared.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404EC588 (CmRmFinalizeRecovery.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     CmpSetGlobalQuotaAllowed @ 0x14055D358 (CmpSetGlobalQuotaAllowed.c)
 *     CmpAddStringToMapping @ 0x1405BFB4C (CmpAddStringToMapping.c)
 *     CmpRemoveHiveFromMapping @ 0x140658DD0 (CmpRemoveHiveFromMapping.c)
 *     ObDrainDeferredObjectDeletion @ 0x1406AB79C (ObDrainDeferredObjectDeletion.c)
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
  int v14; // esi
  __int64 v15; // rbx
  __int16 v16; // dx
  unsigned __int16 *v17; // rax
  unsigned __int64 v18; // r8
  _WORD *v19; // rax
  _QWORD *v20; // rdx
  ULONG_PTR v21; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // r12
  PVOID *v26; // rbx
  __int64 **v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rbx
  __int64 *v31; // rcx
  __int64 **v32; // rax
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
  if ( a4 && !v12 )
  {
    if ( (unsigned __int8)CmRmIsKCBDeleted(*(_QWORD *)(a4 + 8), 0LL) == 1 )
    {
      v14 = -1073741444;
LABEL_36:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ObDrainDeferredObjectDeletion();
      CmpDestroySecurityCache(BugCheckParameter2);
      v30 = (__int64 *)(BugCheckParameter2 + 5368);
      if ( (__int64 *)*v30 != v30 )
      {
        CmpLockHiveListExclusive();
        v31 = (__int64 *)*v30;
        v32 = *(__int64 ***)(BugCheckParameter2 + 5376);
        if ( *(__int64 **)(*v30 + 8) != v30 || *v32 != v30 )
          __fastfail(3u);
        *v32 = v31;
        v31[1] = (__int64)v32;
        CmpUnlockHiveList();
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 2) != 0 )
        CmpRemoveHiveFromMapping(BugCheckParameter2);
      HvFreeHive(BugCheckParameter2);
      CmpCmdHiveClose(BugCheckParameter2);
      CmpDereferenceHive(BugCheckParameter2);
      goto LABEL_43;
    }
    v15 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 5360) & 1) == 0 )
      {
        v14 = -1073741811;
        goto LABEL_36;
      }
      v16 = 0;
      v17 = (unsigned __int16 *)a2[2];
      memset(v34, 0, sizeof(v34));
      v18 = *((_QWORD *)v17 + 1);
      v19 = (_WORD *)(v18 + 2 * (((unsigned __int64)*v17 - 2) >> 1));
      if ( *v19 != 92 )
      {
        do
        {
          v16 += 2;
          --v19;
        }
        while ( (unsigned __int64)v19 >= v18 && *v19 != 92 );
        LOWORD(v34[0]) = v16;
      }
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 2u;
      v34[1] = v19 + 1;
      v14 = CmpAddStringToMapping(v34, BugCheckParameter2);
      CmpLockHiveListExclusive();
      v20 = *(_QWORD **)(v15 + 5376);
      v21 = BugCheckParameter2 + 5368;
      *(_QWORD *)(BugCheckParameter2 + 5368) = v15 + 5368;
      *(_QWORD *)(BugCheckParameter2 + 5376) = v20;
      if ( *v20 != v15 + 5368 )
        __fastfail(3u);
      *v20 = v21;
      *(_QWORD *)(v15 + 5376) = v21;
      CmpUnlockHiveList();
      if ( v14 < 0 )
        goto LABEL_36;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v22) = a7;
  v23 = CmpLinkHiveToMaster(a2[2], a2[1], BugCheckParameter2, v22, 512, v12 != 0, a5, a2[4], 0);
  v25 = a6;
  v14 = v23;
  if ( (a3 & 0x800) != 0 && v23 >= 0 )
  {
    memset(v35, 0, 136);
    v14 = ObReferenceObjectByNameEx((_DWORD)a2, 0, 131097, (_DWORD)CmKeyObjectType, 0, (__int64)v35, (__int64)&Object);
    if ( v14 >= 0 )
    {
      v26 = (PVOID *)Object;
      CmpLockKcbExclusive(*((_QWORD *)Object + 1));
      CmpReferenceKeyControlBlock(v26[1]);
      CmpUnlockKcb(v26[1]);
      *v25 = v26[1];
      ObfDereferenceObjectWithTag(v26, 0x746C6644u);
    }
  }
  LOBYTE(v24) = 1;
  CmpLockRegistryFreezeAware(v24);
  if ( v14 < 0 )
    goto LABEL_36;
  if ( v12 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 4104));
    *v25 = *(_QWORD *)(BugCheckParameter2 + 4104);
  }
  CmpLockHiveListExclusive();
  v27 = (__int64 **)qword_14077ED20;
  *(_QWORD *)(BugCheckParameter2 + 2736) = qword_14077ED20;
  *(_QWORD *)(BugCheckParameter2 + 2728) = &CmpHiveListHead;
  if ( *v27 != &CmpHiveListHead )
    __fastfail(3u);
  *v27 = (__int64 *)(BugCheckParameter2 + 2728);
  qword_14077ED20 = BugCheckParameter2 + 2728;
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v28) = a8;
    CmpInitCmRM(BugCheckParameter2, v28);
    *(_DWORD *)(BugCheckParameter2 + 5360) |= 8u;
  }
  if ( a7 == 1 )
    CmpFlushHive(BugCheckParameter2);
  if ( !v12 )
    CmpAddToHiveFileList(BugCheckParameter2);
  v29 = *(_QWORD *)(BugCheckParameter2 + 5400);
  if ( v29 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v29 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 5400));
    CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 5400));
  }
  CmpTrimHive(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(BugCheckParameter2 + 144) &= ~0x20u;
  *(_QWORD *)(BugCheckParameter2 + 5416) = 0LL;
  UNLOCK_HIVE_LOAD();
LABEL_43:
  UnlockShutdown();
  if ( !BYTE5(NlsMbCodePageTag) && !CmpWasSetupBoot )
  {
    BYTE5(NlsMbCodePageTag) = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return (unsigned int)v14;
}
