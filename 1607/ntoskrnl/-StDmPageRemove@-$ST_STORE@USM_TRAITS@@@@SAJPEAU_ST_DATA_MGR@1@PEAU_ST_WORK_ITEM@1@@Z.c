/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14021ECFC (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14021F69C (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039A4 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039F0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140004428 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140004548 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400045D8 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140114FC8 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401178B0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117A14 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     SmHpChunkFree @ 0x140117B64 (SmHpChunkFree.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117BD4 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140118160 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14011820C (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011B91C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011C188 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14011C75C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011CB48 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14011E168 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14021B868 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x14022042C (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1402213F8 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(struct NP_CONTEXT::NP_CTX *a1, __int64 a2)
{
  __int64 v3; // rsi
  ULONGLONG *v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // r12d
  int v9; // esi
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // ebx
  _DWORD *Chunk; // rax
  int v16; // eax
  char *v17; // rsi
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  _DWORD **v23; // rax
  _DWORD **v24; // rax
  __int64 LeafSibling; // rax
  int v26; // eax
  char *v27; // rax
  __int64 v28; // r13
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // [rsp+40h] [rbp-38h]
  unsigned int *v33; // [rsp+48h] [rbp-30h]
  _DWORD *v34; // [rsp+50h] [rbp-28h]
  ULONGLONG *v35; // [rsp+58h] [rbp-20h]
  __int128 v36; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+48h]
  unsigned int v39; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v40; // [rsp+D8h] [rbp+60h]

  v36 = 0uLL;
  v3 = a2;
  v4 = SmEtwEnabled(0);
  v5 = (_QWORD *)((char *)a1 + 24);
  v7 = *(_DWORD *)(v6 + 8) + *(_DWORD *)(v6 + 12) - 1;
  v8 = 0;
  v35 = v4;
  if ( (*((_BYTE *)a1 + 56) & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      (__int64)a1 + 24);
  *((_DWORD *)a1 + 14) &= ~1u;
  if ( (*((_BYTE *)a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)a1 + 8,
      (__int64)a1 + 88);
  *((_DWORD *)a1 + 30) &= ~1u;
  if ( (*((_BYTE *)a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)a1 + 16,
      (__int64)a1 + 152);
  *((_DWORD *)a1 + 46) &= ~1u;
  v37 = 0;
  v32 = 0LL;
  v39 = 0;
  while ( 1 )
  {
    v9 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
           a1,
           *(unsigned int *)(v3 + 8),
           (char *)a1 + 24);
    if ( v9 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      (unsigned __int8 **)a1,
      (unsigned __int8 **)&v36,
      (__int64)a1 + 24);
    v10 = v36;
    if ( !(_QWORD)v36 )
      goto LABEL_34;
    v11 = *((_QWORD *)&v36 + 1) + 8LL;
    v12 = (unsigned __int16)*(_DWORD *)v36;
    v33 = (unsigned int *)(v36 + 16);
    *((_QWORD *)&v36 + 1) = v11;
    if ( v11 < (__int64)v36 + 16 + 8 * v12 )
    {
      v13 = v11;
      goto LABEL_12;
    }
    v23 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v23 = 0LL;
    if ( **v23 == -1 )
    {
      v24 = (_DWORD **)((char *)a1 + 16);
      if ( !a1 )
        v24 = 0LL;
      if ( **v24 == -1 )
        LeafSibling = *(_QWORD *)(v36 + 8);
      else
        LeafSibling = 3358LL;
    }
    else
    {
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                      a1,
                      v36);
      if ( LeafSibling == -1 )
      {
        v13 = -1LL;
        goto LABEL_12;
      }
    }
    if ( LeafSibling )
    {
      v10 = LeafSibling;
      *(_QWORD *)&v36 = LeafSibling;
      v33 = (unsigned int *)(LeafSibling + 16);
      v11 = LeafSibling + 16;
      *((_QWORD *)&v36 + 1) = LeafSibling + 16;
      v13 = LeafSibling + 16;
    }
    else
    {
      v13 = 0LL;
    }
LABEL_12:
    if ( v13 == -1 )
    {
      v9 = -1073741818;
      break;
    }
    if ( !v13 || (v14 = *(_DWORD *)v13, v7 < *(_DWORD *)v13) )
    {
      v8 = v37;
LABEL_34:
      if ( v8 )
      {
        SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*((_QWORD *)a1 + 100));
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v31, &v39, v8);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*((_QWORD *)a1 + 100));
      }
      if ( !(unsigned __int8)*((_DWORD *)a1 + 194) && (*((_BYTE *)a1 + 1864) & 3) != 3 )
      {
        v21 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v21 )
          ST_STORE<SM_TRAITS>::StQueueCompaction((__int64)a1, v21);
      }
      v9 = 0;
      break;
    }
    v40 = *(_DWORD *)(v13 + 4);
    Chunk = (_DWORD *)SmHpIdGetChunk((char *)a1 + 192, v40);
    v34 = Chunk;
    if ( v35 )
      SmEtwLogStoreOp((_DWORD)v35, 1, v13, (_DWORD)v35, *Chunk, (char)a1, 0, 0);
    v16 = *((_DWORD *)a1 + 12);
    if ( v16 == -1 || !v16 )
      v17 = (char *)a1 + 32;
    else
      v17 = (char *)(*v5 + 16LL * (unsigned int)(v16 - 1));
    if ( *(_QWORD *)v17 == v10 )
    {
      *((_QWORD *)v17 + 1) = v11;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        (__int64)a1 + 24);
      if ( *((_DWORD *)a1 + 12) == -1 )
      {
        *(_OWORD *)v17 = v36;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          a1,
          *v33,
          (char *)a1 + 24);
        v26 = *((_DWORD *)a1 + 12);
        if ( v26 == -1 || !v26 )
          v27 = (char *)a1 + 32;
        else
          v27 = (char *)(*v5 + 16LL * (unsigned int)(v26 - 1));
        *((_QWORD *)v27 + 1) = v11;
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      (__int64 *)&v36,
      (__int64)a1);
    v36 = 0uLL;
    v9 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
           a1,
           (__int64)a1 + 24);
    if ( v9 < 0 )
      break;
    if ( !(unsigned __int8)*((_DWORD *)a1 + 194) )
    {
      v8 = v37;
      v3 = a2;
      v18 = v34[1] & 0xFFF | (((v34[1] >> 12) - 1) << 12);
      v34[1] = v18;
      if ( (v18 & 0xFFFFF000) != 0 )
        continue;
    }
    v19 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            (char *)a1 + 64,
            v40,
            (char *)a1 + 88);
    v9 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741275 )
        break;
      v8 = v37;
      v3 = a2;
    }
    else
    {
      v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
             (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 64),
             (__int64)a1 + 88);
      if ( v9 < 0 )
        break;
      if ( !(unsigned __int8)*((_DWORD *)a1 + 194) )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          (char *)a1 + 128,
          v40,
          (char *)a1 + 152);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
          (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 128),
          (__int64)a1 + 152);
      }
      if ( (v34[1] & 0xFFF) != 0 )
        v20 = v34[1] & 0xFFF;
      else
        v20 = 4096;
      ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
        a1,
        (unsigned int)(*v34 >> *((_DWORD *)a1 + 203)),
        -((unsigned int)(v20 + *((_DWORD *)a1 + 206) + 15) >> 4),
        0LL);
      SmHpChunkFree((_DWORD *)a1 + 48, (unsigned __int64)v34);
      v3 = a2;
      v8 = v37;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        v28 = v32;
        if ( v37 && v14 - (_DWORD)v32 != v37 )
        {
          SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*((_QWORD *)a1 + 100));
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v29, &v39, v37);
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*((_QWORD *)a1 + 100));
          v28 = v39;
          v8 = 0;
          v37 = 0;
          v32 = v39;
        }
        v30 = (_DWORD *)*((_QWORD *)a1 + 235);
        if ( !*v30 || *v30 == 3 && v14 < v30[1] )
        {
          if ( !v8 )
            v28 = v14;
          v37 = ++v8;
          v32 = v28;
          v39 = v28;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    (__int64 *)&v36,
    (__int64)a1);
  return (unsigned int)v9;
}
