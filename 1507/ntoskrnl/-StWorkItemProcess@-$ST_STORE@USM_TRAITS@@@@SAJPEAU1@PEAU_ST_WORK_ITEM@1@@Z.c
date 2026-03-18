/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401446A0 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400DB9AC (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140140998 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140140BD0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1401419B8 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141A10 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140144474 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140144790 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140251834 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140252D28 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140252EF8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140254470 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140254AD4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRemoveKeysWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140254D80 (-StDmLazyRemoveKeysWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140255CF0 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140255D74 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140255DF8 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140256934 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // edi
  int v8; // r13d
  __int64 v9; // r12
  unsigned int Stats; // eax
  unsigned int v11; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  unsigned int v20; // r14d
  struct _EX_RUNDOWN_REF *v21; // r15
  struct _EX_RUNDOWN_REF *v22; // rdi
  unsigned __int64 v23; // rtt
  struct _EX_RUNDOWN_REF v24; // rax
  int v25; // eax
  struct _EX_RUNDOWN_REF *v26; // rcx
  unsigned __int64 v27; // rtt
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r8
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rdi
  char v43; // bl
  int v44; // eax

  v4 = -2LL;
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
    a2 &= ~1uLL;
  }
  else
  {
    v5 = 0;
  }
  v6 = -1;
  v7 = *(_DWORD *)a2 & 7;
  v8 = 0;
  v9 = 0LL;
  if ( !v5 )
  {
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 4224);
    v4 = -2LL;
  }
  if ( !v7 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 80, a2);
LABEL_7:
    v11 = Stats;
    goto LABEL_8;
  }
  v14 = v7 - 1;
  if ( !v14 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((struct NP_CONTEXT::NP_CTX *)(a1 + 80), a2);
    goto LABEL_7;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a1 + 448, a2);
    goto LABEL_7;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, a2);
    goto LABEL_7;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      v11 = 0;
LABEL_8:
      if ( v11 == -1073741818 )
      {
        if ( *(_DWORD *)(a1 + 4216) != 2 )
          SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(SmGlobals, *(_DWORD *)(*(_QWORD *)(a1 + 232) + 4480LL) & 0x1F, 1LL);
        ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      }
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(a2 + 8) & 7u) - 4 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, a2);
      v6 = 0;
      goto LABEL_7;
    }
LABEL_76:
    v11 = -1073741811;
    goto LABEL_8;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
    {
      v6 = 259;
      if ( *(_DWORD *)(a2 + 8) != 1 )
        v9 = a2;
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4480LL);
      v21 = (struct _EX_RUNDOWN_REF *)&SmGlobals[22 * (v20 & 0x1F)];
      v22 = v21 + 1;
      _m_prefetchw(&v21[1]);
      v23 = v21[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)&v21[1], v23 + 2, v23) )
      {
        if ( !ExfAcquireRundownProtection(v21 + 1) )
          goto LABEL_55;
        v4 = -2LL;
      }
      if ( (v21[3].Count & 0x7FF) == v20 >> 5 )
      {
        v24.Count = v21->Count;
        goto LABEL_27;
      }
      _m_prefetchw(v22);
      v31 = v22->Count & 0xFFFFFFFFFFFFFFFEuLL;
      v4 = v31 - 2;
      if ( v31 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v31 - 2, v31) )
        ExfReleaseRundownProtection(v21 + 1);
LABEL_55:
      v24.Count = 0LL;
LABEL_27:
      if ( !v24.Count )
      {
        v11 = -1073741431;
        goto LABEL_8;
      }
      v25 = *(_DWORD *)(a2 + 8);
      v11 = 0;
      v8 = 1;
      switch ( v25 )
      {
        case 1:
          v28 = *(_DWORD *)(a2 + 16);
          if ( v28 < 0 )
            goto LABEL_9;
          if ( v28 <= 1 )
          {
            v29 = a1 + 80;
            if ( v28 )
              v29 = a1 + 1264;
            Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(v29);
          }
          else
          {
            if ( v28 == 4 )
            {
              ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
              goto LABEL_9;
            }
            if ( v28 == 2 )
            {
              Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 80, 0LL);
            }
            else
            {
              if ( v28 != 3 )
              {
                if ( v28 == 5 )
                  v11 = -1073741811;
LABEL_9:
                if ( v9 )
                  ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v9);
                if ( !v8 )
                  goto LABEL_12;
                goto LABEL_35;
              }
              Stats = ST_STORE<SM_TRAITS>::StDmLazyRemoveKeysWorker(a1 + 80, v4);
            }
          }
          goto LABEL_7;
        case 2:
          Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
          goto LABEL_7;
        case 3:
          Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, a2);
          v9 = 0LL;
          goto LABEL_7;
        case 4:
          v32 = 3LL;
          v33 = 10000LL;
          v34 = 1000LL;
          break;
        case 5:
          if ( (*(_BYTE *)(a2 + 14) & 1) != 0 )
          {
            v34 = 200LL;
            v33 = 2000LL;
          }
          else
          {
            v33 = 30000LL;
            v34 = 2000LL;
          }
          v32 = 2LL;
          break;
        case 6:
          _InterlockedAnd16((volatile signed __int16 *)(a2 + 12), 0xFFFEu);
          goto LABEL_35;
        case 7:
          _InterlockedAnd16((volatile signed __int16 *)(a2 + 12), 0xFFFEu);
          if ( MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 4464) - MEMORY[0xFFFFF780000003B0] >= 0x989680uLL
            && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2) == 2 )
          {
            ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
            *(_QWORD *)(a1 + 4464) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
          }
          goto LABEL_35;
        default:
          goto LABEL_76;
      }
      ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1248), v32, v34, v33);
LABEL_35:
      v26 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176
                                                              * (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4480LL) & 0x1F));
      _m_prefetchw(v26);
      v27 = v26->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v26, v27 - 2, v27) )
        ExfReleaseRundownProtection(v26);
LABEL_12:
      if ( v6 != -1 )
        return v6;
      return v11;
    }
    if ( v19 == 1 )
    {
      v30 = a1 + 1264;
      if ( (*(_DWORD *)(a2 + 28) & 2) == 0 )
        v30 = a1 + 80;
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(v30);
      return 259;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    v35 = *(_DWORD *)(a2 + 8) & 7;
    if ( v35 )
    {
      if ( v35 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
      }
      else if ( v35 == 3 )
      {
        v36 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 0);
        if ( v36 )
        {
          v37 = (*(unsigned __int8 *)(a1 + 264) >> 1) & 1;
          if ( v36 == 1 )
          {
            v38 = 4294967294LL;
            v39 = *(_BYTE *)(a1 + 208) != 0 ? 400 : 30;
            v40 = *(_BYTE *)(a1 + 1240) & 0xFC | 1;
          }
          else
          {
            v39 = 0LL;
            v40 = *(_BYTE *)(a1 + 1240) & 0xFC | 2;
            v38 = 0LL;
          }
          v41 = *(_QWORD *)(a1 + 1248);
          *(_BYTE *)(a1 + 1240) = v40;
          ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v41, v37, v39, v38);
        }
      }
      else
      {
        v42 = a1 + 80;
        do
        {
          if ( !(unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v42, 1) )
            break;
          v43 = *(_BYTE *)(v42 + 1160);
          *(_BYTE *)(v42 + 1160) = v43 | 3;
          v44 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v42, 0LL);
          *(_BYTE *)(v42 + 1160) ^= (v43 & 3 ^ *(_BYTE *)(v42 + 1160)) & 3;
        }
        while ( v44 >= 0 );
      }
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
    }
    return 0;
  }
}
