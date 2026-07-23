/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140115888 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x140003118 (SmKmStoreReference.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400046B4 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140114FC8 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140115888 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140115974 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401159F4 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401189D0 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011D580 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14011E168 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140120514 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021D430 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021D600 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021E2F4 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14021F3CC (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021F44C (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021F4D0 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021FB54 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  int v4; // eax
  unsigned int v5; // ebp
  int v6; // edi
  int v7; // r12d
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v11; // r11
  unsigned int Stats; // eax
  unsigned int v13; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // r9d
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  char v30; // bl
  int v31; // eax

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    v4 = 1;
    v2 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v4 = 0;
  }
  v5 = -1;
  v6 = *(_DWORD *)v2 & 7;
  v7 = 0;
  v8 = 0LL;
  if ( !v4 )
  {
    v9 = *(_QWORD *)(a1 + 5768);
    *(_QWORD *)(a1 + 5768) = 0LL;
    if ( *(_QWORD *)(a1 + 5752) != -1LL )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( *(_QWORD *)(v11 + 120) <= UnbiasedInterruptTime )
      {
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v11, UnbiasedInterruptTime);
      }
      else if ( v9 )
      {
        ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(v11, UnbiasedInterruptTime);
      }
    }
  }
  if ( !v6 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 80, v2);
LABEL_10:
    v13 = Stats;
    goto LABEL_11;
  }
  v16 = v6 - 1;
  if ( !v16 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((struct NP_CONTEXT::NP_CTX *)(a1 + 80), v2);
    goto LABEL_10;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a1 + 992, v2);
    goto LABEL_10;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v2);
    goto LABEL_10;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      v13 = 0;
LABEL_11:
      if ( v13 == -1073741818 )
        ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v2 + 8) & 7u) - 4 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v2);
      v5 = 0;
      goto LABEL_10;
    }
LABEL_66:
    v13 = -1073741811;
    goto LABEL_11;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    v13 = v20 - 1;
    if ( !v13 )
    {
      v5 = 259;
      if ( *(_DWORD *)(v2 + 8) != 1 )
        v8 = v2;
      if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5856LL)) )
      {
        v13 = -1073741431;
        goto LABEL_11;
      }
      v21 = *(_DWORD *)(v2 + 8);
      v7 = 1;
      switch ( v21 )
      {
        case 1:
          v22 = *(_DWORD *)(v2 + 16);
          if ( v22 < 0 )
            goto LABEL_13;
          if ( v22 > 1 )
          {
            if ( v22 == 3 )
            {
              ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
              goto LABEL_13;
            }
            if ( v22 != 2 )
            {
              if ( v22 == 4 )
                v13 = -1073741811;
LABEL_13:
              if ( v8 )
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v8);
              if ( !v7 )
                goto LABEL_16;
              goto LABEL_36;
            }
            Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 80, 0LL, a1 + 944);
          }
          else
          {
            v23 = a1 + 80;
            if ( v22 )
              v23 = a1 + 1968;
            Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(v23);
          }
          goto LABEL_10;
        case 2:
          Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
          goto LABEL_10;
        case 3:
          Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v2);
          v8 = 0LL;
          goto LABEL_10;
        case 4:
          if ( (*(_BYTE *)(v2 + 14) & 1) != 0 )
          {
            v25 = 200;
            v26 = 2000;
          }
          else
          {
            v26 = 30000;
            v25 = 2000;
          }
          ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1952), 2LL, v25, v26);
          goto LABEL_36;
        case 5:
          _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
LABEL_36:
          SmKmStoreDereference((__int64)&SmGlobals, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5856LL));
LABEL_16:
          if ( v5 != -1 )
            return v5;
          return v13;
        case 6:
          _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
          if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 5848)) >= 0x989680
            && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2LL) == 2 )
          {
            ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
            *(_QWORD *)(a1 + 5848) = KiQueryUnbiasedInterruptTime();
          }
          goto LABEL_36;
      }
      goto LABEL_66;
    }
    if ( v13 == 1 )
    {
      v24 = a1 + 1968;
      if ( (*(_DWORD *)(v2 + 28) & 2) == 0 )
        v24 = a1 + 80;
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(v24, v2);
      return 259;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    v27 = *(_DWORD *)(v2 + 8) & 7;
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
      }
      else if ( v27 == 3 )
      {
        v28 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 0LL);
        if ( v28 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1 + 80, v28);
      }
      else
      {
        v29 = a1 + 80;
        do
        {
          if ( !(unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v29, 1LL) )
            break;
          v30 = *(_BYTE *)(v29 + 1864);
          *(_BYTE *)(v29 + 1864) = v30 | 3;
          v31 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v29, 0LL);
          *(_BYTE *)(v29 + 1864) ^= (v30 & 3 ^ *(_BYTE *)(v29 + 1864)) & 3;
        }
        while ( v31 >= 0 );
      }
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
    }
    return 0;
  }
}
