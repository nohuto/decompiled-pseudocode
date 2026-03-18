/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140111F54 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400F6B34 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14010C2BC (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C31C (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14010E2F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401111E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140111678 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140112048 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140202784 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140203A80 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140203C50 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402048A0 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402051DC (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140205848 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRemoveKeysWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140205AF0 (-StDmLazyRemoveKeysWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140206A98 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140206B18 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140206B9C (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402076D8 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // ebp
  int v6; // edi
  int v7; // r13d
  unsigned __int64 v8; // r12
  unsigned int Stats; // eax
  unsigned int v10; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  unsigned int v19; // edi
  char *v20; // r14
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // rdi
  char v37; // bl
  int v38; // eax

  v3 = a2;
  if ( (a2 & 1) != 0 )
  {
    v4 = 1;
    v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v4 = 0;
  }
  v5 = -1;
  v6 = *(_DWORD *)v3 & 7;
  v7 = 0;
  v8 = 0LL;
  if ( !v4 )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 4224);
  if ( !v6 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 80, v3);
LABEL_7:
    v10 = Stats;
    goto LABEL_8;
  }
  v13 = v6 - 1;
  if ( !v13 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((struct NP_CONTEXT::NP_CTX *)(a1 + 80));
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a1 + 448, v3);
    goto LABEL_7;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v3);
    goto LABEL_7;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v3 + 8) & 7u) - 4 <= 1 )
      {
        Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v3);
        v5 = 0;
        goto LABEL_7;
      }
      v10 = -1073741811;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      v10 = 0;
    }
    goto LABEL_8;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      v5 = 259;
      if ( *(_DWORD *)(v3 + 8) != 1 )
        v8 = v3;
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4480LL);
      v20 = (char *)&SmGlobals + 176 * (v19 & 0x1F);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v20 + 1) )
      {
        if ( (*((_WORD *)v20 + 12) & 0x7FF) == v19 >> 5 )
        {
          v21 = *(_QWORD *)v20;
          goto LABEL_28;
        }
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v20 + 1);
      }
      v21 = 0LL;
LABEL_28:
      if ( !v21 )
      {
        v10 = -1073741431;
        goto LABEL_8;
      }
      v22 = *(_DWORD *)(v3 + 8);
      v10 = 0;
      v7 = 1;
      switch ( v22 )
      {
        case 1:
          v23 = *(_DWORD *)(v3 + 16);
          if ( v23 < 0 )
            goto LABEL_9;
          if ( v23 > 1 )
          {
            if ( v23 == 4 )
            {
              ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
              goto LABEL_9;
            }
            if ( v23 == 2 )
            {
              Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 80, 0LL, a1 + 296);
            }
            else
            {
              if ( v23 != 3 )
              {
                if ( v23 == 5 )
                  v10 = -1073741811;
LABEL_9:
                if ( v8 )
                  ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v8);
                if ( !v7 )
                  goto LABEL_12;
                goto LABEL_36;
              }
              Stats = ST_STORE<SM_TRAITS>::StDmLazyRemoveKeysWorker(a1 + 80);
            }
          }
          else
          {
            v24 = a1 + 80;
            if ( v23 )
              v24 = a1 + 1264;
            Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(v24);
          }
          goto LABEL_7;
        case 2:
          Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
          goto LABEL_7;
        case 3:
          Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v3);
          v8 = 0LL;
          goto LABEL_7;
        case 4:
          v26 = 3LL;
          v27 = 10000LL;
          v28 = 1000LL;
          break;
        case 5:
          if ( (*(_BYTE *)(v3 + 14) & 1) != 0 )
          {
            v28 = 200LL;
            v27 = 2000LL;
          }
          else
          {
            v27 = 30000LL;
            v28 = 2000LL;
          }
          v26 = 2LL;
          break;
        case 6:
          _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
LABEL_36:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_1403027C8 + 22
                                                                       * (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4480LL) & 0x1F));
LABEL_12:
          if ( v5 != -1 )
            return v5;
          return v10;
        case 7:
          _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
          if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 4464)) >= 0x989680
            && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2LL) == 2 )
          {
            ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
            *(_QWORD *)(a1 + 4464) = KiQueryUnbiasedInterruptTime();
          }
          goto LABEL_36;
        default:
          v10 = -1073741811;
LABEL_8:
          if ( v10 == -1073741818 )
          {
            if ( *(_DWORD *)(a1 + 4216) != 2 )
              SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(
                &SmGlobals,
                *(_DWORD *)(*(_QWORD *)(a1 + 232) + 4480LL) & 0x1F,
                1LL);
            ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
          }
          goto LABEL_9;
      }
      ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1248), v26, v28, v27);
      goto LABEL_36;
    }
    if ( v18 == 1 )
    {
      v25 = a1 + 1264;
      if ( (*(_DWORD *)(v3 + 28) & 2) == 0 )
        v25 = a1 + 80;
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(v25, v3);
      return 259;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    v29 = *(_DWORD *)(v3 + 8) & 7;
    if ( v29 )
    {
      if ( v29 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
      }
      else if ( v29 == 3 )
      {
        v30 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 0LL);
        if ( v30 )
        {
          v31 = (*(unsigned __int8 *)(a1 + 264) >> 1) & 1;
          if ( v30 == 1 )
          {
            v32 = 4294967294LL;
            v33 = *(_BYTE *)(a1 + 208) != 0 ? 400 : 30;
            v34 = *(_BYTE *)(a1 + 1240) & 0xFC | 1;
          }
          else
          {
            v33 = 0LL;
            v34 = *(_BYTE *)(a1 + 1240) & 0xFC | 2;
            v32 = 0LL;
          }
          v35 = *(_QWORD *)(a1 + 1248);
          *(_BYTE *)(a1 + 1240) = v34;
          ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v35, v31, v33, v32);
        }
      }
      else
      {
        v36 = a1 + 80;
        do
        {
          if ( !(unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v36, 1LL) )
            break;
          v37 = *(_BYTE *)(v36 + 1160);
          *(_BYTE *)(v36 + 1160) = v37 | 3;
          v38 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v36, 0LL);
          *(_BYTE *)(v36 + 1160) ^= (*(_BYTE *)(v36 + 1160) ^ v37 & 3) & 3;
        }
        while ( v38 >= 0 );
      }
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
    }
    return 0;
  }
}
