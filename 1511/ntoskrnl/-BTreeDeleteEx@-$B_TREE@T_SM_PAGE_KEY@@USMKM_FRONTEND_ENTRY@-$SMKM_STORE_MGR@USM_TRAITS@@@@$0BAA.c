/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010A268
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1400F7E0C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140107C9C (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14010A09C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14010D6FC (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeEmptyInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140202910 (-SmFeEmptyInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140209BE4 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140107C9C (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140109C98 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140110FEC (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 *v5; // rbx
  _DWORD *v6; // r14
  unsigned __int64 v7; // r9
  int v8; // eax
  const void *v9; // rdx
  unsigned int v10; // r13d
  __int64 v11; // rbp
  size_t v12; // rbp
  int v13; // eax
  _DWORD *v14; // rcx
  _DWORD *v15; // rbx
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  char v24[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = (_DWORD *)*v5;
  v7 = v5[1];
  v8 = *(_DWORD *)*v5;
  if ( *(_BYTE *)(*v5 + 3) )
  {
    v9 = (const void *)(v7 + 8);
    v10 = 255;
    v11 = 8LL * (unsigned __int16)v8 + 8;
  }
  else
  {
    v9 = (const void *)(v7 + 16);
    v11 = 16LL * (unsigned __int16)v8;
    v10 = 127;
  }
  v12 = (size_t)v6 + v11 - v7;
  if ( v12 )
    memmove((void *)v5[1], v9, v12);
  --*(_WORD *)v6;
  if ( *((_BYTE *)v6 + 3) )
    --a1[1];
  v13 = *v6;
  if ( (_DWORD *)*a1 == v6 )
  {
    if ( !(_WORD)v13 && !*((_BYTE *)v6 + 3) )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      *a1 = *((_QWORD *)v6 + 1);
      ExFreePoolWithTag(v6, 0);
    }
  }
  else
  {
    if ( (unsigned __int16)v13 < v10 )
    {
      v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeRedistribute(
              (unsigned __int16)v13,
              a2);
      if ( !v17 )
        return (unsigned int)-1073741818;
      v18 = (unsigned __int16)*v6;
      if ( v18 < v10 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeMergeNodes(
          (__int64)a1,
          a2,
          v17);
        v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v21 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v5 = v21;
          v22 = *(_DWORD *)v21;
          if ( *(_BYTE *)(v21 + 3) )
            v23 = 8LL * (unsigned __int16)v22 + 16;
          else
            v23 = 16 * ((unsigned __int16)v22 + 1LL);
          v5[1] = v21 + v23 - v12;
        }
      }
      else if ( (v17 & 1) != 0 )
      {
        v19 = v18 - v10 + 1;
        if ( *((_BYTE *)v6 + 3) )
          v20 = 8 * v19;
        else
          v20 = 16 * v19;
        v5[1] += v20;
      }
    }
    v14 = (_DWORD *)*v5;
    v15 = (_DWORD *)v5[1];
    if ( v15 == v14 + 4
      && *((_BYTE *)v14 + 3)
      && (unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0,
                         (__int64)v24) )
    {
      *v25 = *v15;
    }
  }
  return v2;
}
