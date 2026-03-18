/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14010C8A0 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmLazyRemoveKeysWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140205AF0 (-StDmLazyRemoveKeysWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14020639C (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x140206D68 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010A414 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEA.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010CD88 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14010E2F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010EFF0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010F058 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010FD10 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140112048 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201D88 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x1402081E0 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140209B38 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(struct NP_CONTEXT::NP_CTX *a1, __int64 a2)
{
  __int64 v3; // r12
  ULONGLONG *v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // rdx
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r14d
  __int64 v12; // rcx
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  int v17; // edx
  int v18; // eax
  char *v19; // r14
  int v20; // eax
  char v21; // r13
  __int64 v22; // rdx
  unsigned int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // r14d
  int v26; // eax
  _DWORD **v28; // rax
  _DWORD **v29; // rax
  __int64 LeafSibling; // rax
  int v31; // eax
  char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // rcx
  unsigned int v37; // r12d
  unsigned int v38; // eax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // r14
  int v43; // r12d
  int v44; // eax
  _DWORD *v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rbx
  int v48; // edi
  int v49; // eax
  unsigned int v50; // [rsp+40h] [rbp-29h]
  int v51; // [rsp+44h] [rbp-25h]
  __int64 v52; // [rsp+50h] [rbp-19h]
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-11h] BYREF
  ULONGLONG *v54; // [rsp+60h] [rbp-9h]
  LARGE_INTEGER v55; // [rsp+68h] [rbp-1h] BYREF
  _OWORD v56[5]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v57; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v58; // [rsp+D8h] [rbp+6Fh]
  unsigned int v59; // [rsp+E0h] [rbp+77h]
  unsigned int v60; // [rsp+E8h] [rbp+7Fh] BYREF

  v58 = a2;
  v56[0] = 0uLL;
  v3 = a2;
  v4 = SmEtwEnabled(0);
  v5 = (_QWORD *)((char *)a1 + 24);
  v7 = *(_DWORD *)(v6 + 8) + *(_DWORD *)(v6 + 12) - 1;
  v8 = *((_DWORD *)a1 + 14) & 1;
  v54 = v4;
  if ( (_BYTE)v8 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1,
      (__int64)a1 + 24);
  *((_DWORD *)a1 + 14) &= ~1u;
  if ( (*((_BYTE *)a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1 + 8,
      (__int64)a1 + 88);
  *((_DWORD *)a1 + 30) &= ~1u;
  v52 = 0LL;
  v60 = 0;
  v59 = 0;
  while ( 1 )
  {
    v11 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
            (char **)a1,
            *(_DWORD *)(v3 + 8),
            (__int64)a1 + 24);
    if ( v11 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
      a1,
      v56,
      (char *)a1 + 24);
    v13 = *((_QWORD *)&v56[0] + 1);
    v10 = 0LL;
    v14 = *(_QWORD *)&v56[0];
    v15 = v58;
    do
    {
      if ( !v14 )
      {
LABEL_31:
        v25 = v59;
        if ( v59 )
        {
          v46 = *((_QWORD *)a1 + 19);
          if ( (*(_BYTE *)(v46 + 4485) & 4) != 0 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 4488));
            KeAbPostRelease(v46 + 4488);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          }
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v12, &v60, v25, *((_QWORD *)a1 + 19));
          v47 = *((_QWORD *)a1 + 19);
          if ( (*(_BYTE *)(v47 + 4485) & 4) != 0 )
          {
            v55.QuadPart = -150000LL;
            if ( *(_DWORD *)(v47 + 5032) )
            {
              v48 = 20;
              do
              {
                if ( !v48 )
                  break;
                if ( *(_BYTE *)(v47 + 4486) < 3u )
                  break;
                KeDelayExecutionThread(0, 0, &v55);
                --v48;
              }
              while ( *(_DWORD *)(v47 + 5032) );
            }
            v49 = StLockAcquireExclusive(v47 + 4488);
            ++*(_DWORD *)(v47 + 4500);
            *(_DWORD *)(v47 + 4496) = v49;
          }
          v10 = 0LL;
        }
        if ( !(unsigned __int8)*((_DWORD *)a1 + 32) && (*((_BYTE *)a1 + 1160) & 3) != 3 )
        {
          v26 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction((__int64)a1, 0);
          v10 = 0LL;
          if ( v26 )
          {
            v33 = (*((unsigned __int8 *)a1 + 184) >> 1) & 1;
            if ( v26 == 1 )
            {
              v10 = 4294967294LL;
              v34 = *((_BYTE *)a1 + 128) != 0 ? 400 : 30;
              v35 = *((_BYTE *)a1 + 1160) & 0xFC | 1;
            }
            else
            {
              v34 = 0LL;
              v35 = *((_BYTE *)a1 + 1160) & 0xFC | 2;
            }
            v36 = *((_QWORD *)a1 + 146);
            *((_BYTE *)a1 + 1160) = v35;
            ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v36, v33, v34, v10);
            v10 = 0LL;
          }
        }
        v11 = 0;
        goto LABEL_36;
      }
      v13 += 16LL;
      v16 = v14 + 16 + 16LL * (unsigned __int16)*(_DWORD *)v14;
      *((_QWORD *)&v56[0] + 1) = v13;
      if ( v13 < v16 )
        goto LABEL_10;
      v28 = (_DWORD **)((char *)a1 + 16);
      if ( !a1 )
        v28 = 0LL;
      if ( **v28 == -1 )
      {
        v29 = (_DWORD **)((char *)a1 + 16);
        if ( !a1 )
          v29 = 0LL;
        if ( **v29 == -1 )
          LeafSibling = *(_QWORD *)(v14 + 8);
        else
          LeafSibling = 3358LL;
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                        a1,
                        v14,
                        v9,
                        0LL);
        v10 = 0LL;
        if ( LeafSibling == -1 )
        {
          v12 = -1LL;
          goto LABEL_11;
        }
      }
      if ( LeafSibling )
      {
        v13 = LeafSibling + 16;
        *(_QWORD *)&v56[0] = LeafSibling;
        *((_QWORD *)&v56[0] + 1) = LeafSibling + 16;
        v14 = LeafSibling;
LABEL_10:
        v12 = v13;
        goto LABEL_11;
      }
      v12 = 0LL;
LABEL_11:
      if ( v12 == -1 )
      {
        v11 = -1073741818;
        goto LABEL_36;
      }
      if ( !v12 || v7 < *(_DWORD *)v12 )
        goto LABEL_31;
      v57 = *(_DWORD *)v12;
      v17 = 4096;
      v50 = *(_DWORD *)(v12 + 4);
      if ( (*(_DWORD *)(v12 + 8) & 0xFFF) != 0 )
        v17 = *(_DWORD *)(v12 + 8) & 0xFFF;
      v51 = v17;
    }
    while ( (*(_DWORD *)(v15 + 16) & 2) != 0 && (*(_BYTE *)(v12 + 11) & 1) == 0 );
    v18 = *((_DWORD *)a1 + 12);
    if ( v18 == -1 || !v18 )
      v19 = (char *)a1 + 32;
    else
      v19 = (char *)(*v5 + 16LL * (unsigned int)(v18 - 1));
    if ( *(_QWORD *)v19 == v14 )
    {
      *((_QWORD *)v19 + 1) = v13;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
        (__int64 *)a1,
        (__int64)a1 + 24);
      if ( *((_DWORD *)a1 + 12) == -1 )
      {
        *(_OWORD *)v19 = v56[0];
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
          (char **)a1,
          *(_DWORD *)(v14 + 16),
          (__int64)a1 + 24);
        v31 = *((_DWORD *)a1 + 12);
        if ( v31 == -1 || !v31 )
          v32 = (char *)a1 + 32;
        else
          v32 = (char *)(*v5 + 16LL * (unsigned int)(v31 - 1));
        *((_QWORD *)v32 + 1) = v13;
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(v56, a1, v9, v10);
    v56[0] = 0uLL;
    v11 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(a1);
    if ( v11 < 0 )
      break;
    v20 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
            (char **)a1 + 8,
            v50,
            (__int64)a1 + 88);
    v11 = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741275 )
        break;
      v21 = v50;
    }
    else
    {
      v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(
              (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 64),
              (__int64)a1 + 88);
      if ( v11 < 0 )
        break;
      v21 = v50;
      v10 = *((_QWORD *)a1 + 59);
      v22 = v50 >> *((_DWORD *)a1 + 41);
      v23 = -((unsigned int)(*((_DWORD *)a1 + 44) + v51 + 15) >> 4);
      if ( (unsigned __int8)*((_DWORD *)a1 + 32) )
        v24 = 0;
      else
        v24 = *(unsigned __int16 *)(v10 + 2 * v22) >> 13;
      *(_WORD *)(v10 + 2 * v22) -= (unsigned int)(*((_DWORD *)a1 + 44) + v51 + 15) >> 4;
      *((_DWORD *)a1 + 2 * v24 + 273) += v23;
      if ( (*(_WORD *)(v10 + 2 * v22) & 0x1FFF) == 0 && (_DWORD)v22 != *((_DWORD *)a1 + 4 * v24 + 162) )
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1);
      if ( (*(_DWORD *)(v58 + 16) & 1) != 0 )
      {
        v37 = v59;
        v38 = v57;
        v39 = v52;
        if ( v59 )
        {
          v40 = v57 - (unsigned int)v52;
          if ( (_DWORD)v40 != v59 )
          {
            v41 = *((_QWORD *)a1 + 19);
            if ( (*(_BYTE *)(v41 + 4485) & 4) != 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v41 + 4488));
              KeAbPostRelease(v41 + 4488);
              KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v40, &v60, v37, *((_QWORD *)a1 + 19));
            v42 = *((_QWORD *)a1 + 19);
            if ( (*(_BYTE *)(v42 + 4485) & 4) != 0 )
            {
              v43 = 20;
              Interval.QuadPart = -150000LL;
              while ( *(_DWORD *)(v42 + 5032) && v43 && *(_BYTE *)(v42 + 4486) >= 3u )
              {
                KeDelayExecutionThread(0, 0, &Interval);
                --v43;
              }
              v44 = StLockAcquireExclusive(v42 + 4488);
              ++*(_DWORD *)(v42 + 4500);
              *(_DWORD *)(v42 + 4496) = v44;
            }
            v39 = v60;
            v38 = v57;
            v37 = 0;
            v59 = 0;
            v52 = v60;
          }
        }
        v45 = (_DWORD *)*((_QWORD *)a1 + 147);
        if ( !*v45 || *v45 == 3 && v38 < v45[1] )
        {
          if ( !v37 )
            v39 = v38;
          v59 = v37 + 1;
          v52 = v39;
          v60 = v39;
        }
      }
    }
    v3 = v58;
    if ( v54 )
    {
      SmEtwLogStoreOp((_DWORD)v54, 1, (unsigned int)&v57, v10, v21, (char)a1, 0, 0);
      v3 = v58;
    }
  }
LABEL_36:
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(v56, a1, v9, v10);
  return (unsigned int)v11;
}
