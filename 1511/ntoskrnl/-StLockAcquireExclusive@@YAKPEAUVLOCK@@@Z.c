/*
 * XREFs of ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1400F7E0C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14010A09C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14010BA28 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14010D6FC (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140110060 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140110D84 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140202894 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeEmptyInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140202910 (-SmFeEmptyInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140202B90 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeEmptyComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140209B68 (-SmFeEmptyComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140209BE4 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall StLockAcquireExclusive(__int64 BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v2; // rsi
  struct _KTHREAD *v3; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int16 v8; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  v2 = BugCheckParameter2;
  --CurrentThread->SpecialApcDisable;
  if ( !KiAbEnabled )
  {
    v6 = 0LL;
    goto LABEL_11;
  }
  v3 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  --v3->SpecialApcDisable;
  if ( !v3->AbEntrySummary )
  {
    if ( !v3->AbOrphanedEntrySummary )
    {
      v6 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v3, BugCheckParameter2);
      goto LABEL_22;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    v3->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v3->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  BugCheckParameter2 = 96 * v5;
  v6 = (__int64)v3->LockEntries + BugCheckParameter2;
  if ( !v6 )
  {
LABEL_22:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v2 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = v3->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v7 = -1;
  }
  else
  {
    v7 = *(_DWORD *)(v11 + 8);
  }
  *(_DWORD *)(v6 + 40) = v7;
  BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v6 + 32) = v2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v8 = v3->SpecialApcDisable + 1;
  v3->SpecialApcDisable = v8;
  if ( !v8 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(BugCheckParameter2);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v6, v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  return 1LL;
}
