/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140142038 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmLazyRemoveKeysWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140254D80 (-StDmLazyRemoveKeysWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x140255608 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x140255FC4 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB88C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB91C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140140998 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1401424F4 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401428FC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140142AB8 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140142B20 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142BCC (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEA.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142D78 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140144790 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140250E1C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x140257474 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140258EC4 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(struct NP_CONTEXT::NP_CTX *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // r14
  _QWORD *v5; // r13
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // r8
  __int64 CurrentThread; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // r12d
  int v15; // eax
  char *v16; // rsi
  int v17; // eax
  __int64 v18; // r9
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r10d
  char v22; // r12
  __int64 v23; // rdx
  int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // esi
  int v27; // eax
  _DWORD **v29; // rax
  _DWORD **v30; // rax
  __int64 LeafSibling; // rax
  int v32; // eax
  char *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // al
  __int64 v38; // rcx
  unsigned int v39; // r14d
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  __int16 v44; // ax
  __int64 v45; // rsi
  int v46; // r14d
  struct _KTHREAD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // r14
  _DWORD *v50; // rdx
  __int64 v51; // rbx
  __int16 v52; // ax
  __int64 v53; // r9
  __int64 v54; // rbx
  int v55; // esi
  struct _KTHREAD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // r9
  __int64 v59; // rsi
  unsigned int v60; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v61; // [rsp+44h] [rbp-25h]
  unsigned int v62; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v63; // [rsp+4Ch] [rbp-1Dh]
  __int128 v64; // [rsp+50h] [rbp-19h] BYREF
  __int64 v65; // [rsp+60h] [rbp-9h]
  __int64 v66; // [rsp+68h] [rbp-1h]
  unsigned __int64 v67; // [rsp+70h] [rbp+7h]
  LARGE_INTEGER v68; // [rsp+78h] [rbp+Fh] BYREF
  LARGE_INTEGER Interval; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v70; // [rsp+88h] [rbp+1Fh]

  v2 = *(_DWORD *)(a2 + 12);
  v64 = 0uLL;
  v4 = a2;
  v66 = a2;
  v5 = (_QWORD *)((char *)a1 + 24);
  v6 = *(_DWORD *)(a2 + 8) + v2 - 1;
  v67 = (unsigned __int64)&qword_140353088 & -(__int64)((dword_140353094 & 0x10) != 0);
  if ( (*((_BYTE *)a1 + 56) & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1,
      (__int64)a1 + 24);
  *((_DWORD *)a1 + 14) &= ~1u;
  if ( (*((_BYTE *)a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1 + 8,
      (__int64)a1 + 88);
  *((_DWORD *)a1 + 30) &= ~1u;
  v61 = 0;
  v65 = 0LL;
  v60 = 0;
  while ( 1 )
  {
    v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
           a1,
           *(unsigned int *)(v4 + 8),
           (char *)a1 + 24);
    if ( v7 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
      a1,
      &v64,
      (char *)a1 + 24);
    v10 = *((_QWORD *)&v64 + 1);
    v8 = -1LL;
    v11 = v64;
    v12 = v66;
    do
    {
      if ( !v11 )
      {
LABEL_31:
        v26 = v61;
        if ( v61 )
        {
          v51 = *((_QWORD *)a1 + 19);
          if ( (*(_BYTE *)(v51 + 4485) & 4) != 0 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v51 + 4488));
            KeAbPostRelease(v51 + 4488);
            CurrentThread = (__int64)KeGetCurrentThread();
            v52 = *(_WORD *)(CurrentThread + 486) + 1;
            *(_WORD *)(CurrentThread + 486) = v52;
            if ( !v52 && *(_QWORD *)(CurrentThread + 152) != CurrentThread + 152 )
              KiCheckForKernelApcDelivery();
          }
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(CurrentThread, &v60, v26, *((_QWORD *)a1 + 19));
          v54 = *((_QWORD *)a1 + 19);
          if ( (*(_BYTE *)(v54 + 4485) & 4) != 0 )
          {
            v68.QuadPart = -150000LL;
            if ( *(_DWORD *)(v54 + 5032) )
            {
              v55 = 20;
              do
              {
                if ( !v55 )
                  break;
                if ( *(_BYTE *)(v54 + 4486) < 3u )
                  break;
                KeDelayExecutionThread(0, 0, &v68);
                --v55;
              }
              while ( *(_DWORD *)(v54 + 5032) );
            }
            v56 = KeGetCurrentThread();
            --v56->SpecialApcDisable;
            v57 = KeAbPreAcquire(v54 + 4488, 0LL, 0LL, v53);
            v59 = v57;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 4488), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v54 + 4488), v57, v54 + 4488, v58);
            if ( v59 )
              *(_BYTE *)(v59 + 26) |= 1u;
            ++*(_DWORD *)(v54 + 4500);
            *(_DWORD *)(v54 + 4496) = 1;
          }
        }
        if ( !(unsigned __int8)*((_DWORD *)a1 + 32) && (*((_BYTE *)a1 + 1160) & 3) != 3 )
        {
          v27 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction((__int64)a1, 0);
          if ( v27 )
          {
            v34 = (*((unsigned __int8 *)a1 + 184) >> 1) & 1;
            if ( v27 == 1 )
            {
              v36 = 4294967294LL;
              v35 = *((_BYTE *)a1 + 128) != 0 ? 400 : 30;
              v37 = *((_BYTE *)a1 + 1160) & 0xFC | 1;
            }
            else
            {
              v35 = 0LL;
              v36 = 0LL;
              v37 = *((_BYTE *)a1 + 1160) & 0xFC | 2;
            }
            v38 = *((_QWORD *)a1 + 146);
            *((_BYTE *)a1 + 1160) = v37;
            ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v38, v34, v35, v36);
          }
        }
        v7 = 0;
        goto LABEL_36;
      }
      v10 += 16LL;
      v13 = v11 + 16 + 16LL * (unsigned __int16)*(_DWORD *)v11;
      *((_QWORD *)&v64 + 1) = v10;
      if ( v10 < v13 )
        goto LABEL_10;
      v29 = (_DWORD **)((char *)a1 + 16);
      if ( !a1 )
        v29 = 0LL;
      if ( **v29 == -1 )
      {
        v30 = (_DWORD **)((char *)a1 + 16);
        if ( !a1 )
          v30 = 0LL;
        if ( **v30 == -1 )
          LeafSibling = *(_QWORD *)(v11 + 8);
        else
          LeafSibling = 3358LL;
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                        a1,
                        v11,
                        -1LL);
        v8 = -1LL;
        if ( LeafSibling == -1 )
        {
          CurrentThread = -1LL;
          goto LABEL_11;
        }
      }
      if ( LeafSibling )
      {
        v10 = LeafSibling + 16;
        *(_QWORD *)&v64 = LeafSibling;
        *((_QWORD *)&v64 + 1) = LeafSibling + 16;
        v11 = LeafSibling;
LABEL_10:
        CurrentThread = v10;
        goto LABEL_11;
      }
      CurrentThread = 0LL;
LABEL_11:
      if ( CurrentThread == -1 )
      {
        v7 = -1073741818;
        goto LABEL_36;
      }
      if ( !CurrentThread || v6 < *(_DWORD *)CurrentThread )
        goto LABEL_31;
      v62 = *(_DWORD *)CurrentThread;
      v14 = 4096;
      v63 = *(_DWORD *)(CurrentThread + 4);
      if ( (*(_DWORD *)(CurrentThread + 8) & 0xFFF) != 0 )
        v14 = *(_DWORD *)(CurrentThread + 8) & 0xFFF;
    }
    while ( (*(_DWORD *)(v12 + 16) & 2) != 0 && (*(_BYTE *)(CurrentThread + 11) & 1) == 0 );
    v15 = *((_DWORD *)a1 + 12);
    if ( v15 == -1 || !v15 )
      v16 = (char *)a1 + 32;
    else
      v16 = (char *)(*v5 + 16LL * (unsigned int)(v15 - 1));
    if ( *(_QWORD *)v16 == v11 )
    {
      *((_QWORD *)v16 + 1) = v10;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
        (__int64 *)a1,
        (__int64)a1 + 24);
      if ( *((_DWORD *)a1 + 12) == -1 )
      {
        *(_OWORD *)v16 = v64;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
          a1,
          *(unsigned int *)(v11 + 16),
          (char *)a1 + 24);
        v32 = *((_DWORD *)a1 + 12);
        if ( v32 == -1 || !v32 )
          v33 = (char *)a1 + 32;
        else
          v33 = (char *)(*v5 + 16LL * (unsigned int)(v32 - 1));
        *((_QWORD *)v33 + 1) = v10;
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(&v64, a1, v8);
    v64 = 0uLL;
    v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(a1);
    if ( v7 < 0 )
      break;
    v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
            (char *)a1 + 64,
            v63,
            (char *)a1 + 88);
    v7 = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741275 )
        break;
      v22 = v63;
    }
    else
    {
      v7 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 64));
      if ( v7 < 0 )
        break;
      v19 = *((_DWORD *)a1 + 41);
      v20 = *((_DWORD *)a1 + 32);
      v21 = v14 + *((_DWORD *)a1 + 44) + 15;
      v22 = v63;
      v18 = *((_QWORD *)a1 + 59);
      v23 = v63 >> v19;
      v24 = -(v21 >> 4);
      v70 = v63 >> v19;
      if ( (_BYTE)v20 )
        v25 = 0;
      else
        v25 = *(unsigned __int16 *)(v18 + 2 * v23) >> 13;
      *(_WORD *)(v18 + 2 * v23) += v24;
      *((_DWORD *)a1 + 2 * v25 + 273) += v24;
      if ( (*(_WORD *)(v18 + 2 * v23) & 0x1FFF) == 0 && (_DWORD)v23 != *((_DWORD *)a1 + 4 * v25 + 162) )
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v23);
      if ( (*(_DWORD *)(v66 + 16) & 1) != 0 )
      {
        v39 = v61;
        v40 = v62;
        v41 = v65;
        if ( v61 )
        {
          v42 = v62 - (unsigned int)v65;
          if ( (_DWORD)v42 != v61 )
          {
            v43 = *((_QWORD *)a1 + 19);
            if ( (*(_BYTE *)(v43 + 4485) & 4) != 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v43 + 4488));
              KeAbPostRelease(v43 + 4488);
              v42 = (unsigned __int64)KeGetCurrentThread();
              v44 = *(_WORD *)(v42 + 486) + 1;
              *(_WORD *)(v42 + 486) = v44;
              if ( !v44 && *(_QWORD *)(v42 + 152) != v42 + 152 )
                KiCheckForKernelApcDelivery();
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v42, &v60, v39, *((_QWORD *)a1 + 19));
            v45 = *((_QWORD *)a1 + 19);
            if ( (*(_BYTE *)(v45 + 4485) & 4) != 0 )
            {
              v46 = 20;
              Interval.QuadPart = -150000LL;
              while ( *(_DWORD *)(v45 + 5032) && v46 && *(_BYTE *)(v45 + 4486) >= 3u )
              {
                KeDelayExecutionThread(0, 0, &Interval);
                --v46;
              }
              v47 = KeGetCurrentThread();
              --v47->SpecialApcDisable;
              v48 = KeAbPreAcquire(v45 + 4488, 0LL, 0LL, v18);
              v49 = v48;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 4488), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v45 + 4488), v48, v45 + 4488, v18);
              if ( v49 )
                *(_BYTE *)(v49 + 26) |= 1u;
              ++*(_DWORD *)(v45 + 4500);
              *(_DWORD *)(v45 + 4496) = 1;
            }
            v41 = v60;
            v39 = 0;
            v40 = v62;
            v65 = v60;
            v61 = 0;
          }
        }
        v50 = (_DWORD *)*((_QWORD *)a1 + 147);
        if ( !*v50 || *v50 == 3 && v40 < v50[1] )
        {
          if ( !v39 )
            v41 = v40;
          v61 = v39 + 1;
          v65 = v41;
          v60 = v41;
        }
      }
    }
    v4 = v66;
    if ( v67 )
      SmEtwLogStoreOp(v67, 1, (unsigned int)&v62, v18, v22, (char)a1, 0, 0);
  }
LABEL_36:
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(&v64, a1, v8);
  return (unsigned int)v7;
}
