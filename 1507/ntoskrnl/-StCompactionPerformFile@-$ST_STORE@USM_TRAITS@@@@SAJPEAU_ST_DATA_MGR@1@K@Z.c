/*
 * XREFs of ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402530B8
 * Callers:
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140144474 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140140930 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140140998 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140141F44 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1401424F4 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140142FB8 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140144AA0 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140250D00 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140255040 (-StDmPageMove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x140255A54 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPE.c)
 *     SmEtwLogRegionOp @ 0x1402572A0 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformFile(__int64 a1)
{
  int Sync; // esi
  ULONGLONG *v3; // rbx
  unsigned __int64 PoolWithTag; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // r12d
  unsigned int v8; // r9d
  int v9; // edx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD **v12; // rax
  _DWORD **v13; // rax
  __int64 LeafSibling; // rax
  unsigned int v15; // ebx
  int v16; // r8d
  unsigned int v17; // r12d
  __int64 v18; // r9
  __int64 v19; // r12
  unsigned __int8 v20; // cl
  unsigned int v21; // edx
  _DWORD *i; // rax
  int v23; // ecx
  int v25; // [rsp+48h] [rbp-29h]
  unsigned int v26; // [rsp+48h] [rbp-29h]
  ULONGLONG *v27; // [rsp+50h] [rbp-21h]
  char *v28; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-11h]
  int v30; // [rsp+68h] [rbp-9h]
  unsigned int v31; // [rsp+6Ch] [rbp-5h]
  int v32; // [rsp+70h] [rbp-1h]
  unsigned int v33; // [rsp+74h] [rbp+3h] BYREF
  unsigned __int16 *v34; // [rsp+78h] [rbp+7h] BYREF
  void *v35; // [rsp+80h] [rbp+Fh] BYREF
  _BYTE v36[8]; // [rsp+88h] [rbp+17h] BYREF
  int v37; // [rsp+90h] [rbp+1Fh]

  Sync = 0;
  v3 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( *(_QWORD *)(a1 + 1056) )
  {
    PoolWithTag = *(_QWORD *)(a1 + 1056);
    *(_DWORD *)(a1 + 1056) |= 1u;
  }
  else
  {
    PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(
                                      NonPagedPoolNx,
                                      (*(_DWORD *)(a1 + 176) + 4111) & 0xFFFFFFF0,
                                      0x74536D73u);
    if ( !PoolWithTag )
    {
      Sync = -1073741670;
      goto LABEL_4;
    }
  }
  if ( !(unsigned int)ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
                        a1,
                        &v34,
                        1u,
                        *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 172) + 1) )
  {
LABEL_4:
    LODWORD(v5) = v25;
    goto LABEL_62;
  }
  v6 = *(_QWORD *)(a1 + 472);
  v5 = ((__int64)v34 - v6) >> 1;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    v7 = 0;
  else
    v7 = *(unsigned __int16 *)(v6 + 2LL * (unsigned int)v5) >> 13;
  v8 = (_DWORD)v5 << *(_DWORD *)(a1 + 164);
  v31 = v7;
  v26 = v8;
  if ( (dword_140353094 & 0x10) != 0 )
  {
    v27 = &qword_140353088;
    SmEtwLogRegionOp(
      (unsigned int)&qword_140353088,
      6,
      a1,
      v5,
      0,
      *(_BYTE *)v34,
      *(_BYTE *)(*(_QWORD *)(a1 + 488) + (unsigned int)v5));
    v8 = v26;
  }
  else
  {
    v27 = 0LL;
  }
  v9 = (1 << (*(_BYTE *)(a1 + 164) - 8)) - 1;
  v30 = -1;
  v32 = v9;
  while ( 1 )
  {
    Sync = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
             (char **)(a1 + 64),
             v8,
             a1 + 88);
    if ( Sync == -1073741818 )
      break;
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
      (char **)(a1 + 64),
      &v28,
      a1 + 88);
    if ( !v28 )
    {
      v10 = 0LL;
      goto LABEL_34;
    }
    v10 = v29 + 8;
    v11 = (unsigned __int16)*(_DWORD *)v28 + 2LL;
    v29 = v10;
    if ( v10 >= (unsigned __int64)&v28[8 * v11] )
    {
      if ( a1 == -64 )
        v12 = 0LL;
      else
        v12 = (_DWORD **)(a1 + 80);
      if ( **v12 == -1 )
      {
        if ( a1 == -64 )
          v13 = 0LL;
        else
          v13 = (_DWORD **)(a1 + 80);
        if ( **v13 == -1 )
          LeafSibling = *((_QWORD *)v28 + 1);
        else
          LeafSibling = 3358LL;
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                        a1 + 64,
                        (__int64)v28);
        if ( LeafSibling == -1 )
        {
          v10 = -1LL;
          goto LABEL_33;
        }
      }
      if ( LeafSibling )
      {
        v10 = LeafSibling + 16;
        v28 = (char *)LeafSibling;
        v29 = LeafSibling + 16;
      }
      else
      {
        v10 = 0LL;
      }
    }
LABEL_33:
    if ( v10 == -1LL )
    {
      Sync = -1073741818;
      break;
    }
LABEL_34:
    v15 = *(_DWORD *)(v10 + 4);
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(
      (__int64 *)&v28,
      a1 + 64);
    v28 = 0LL;
    v29 = 0LL;
    Sync = ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(a1, v15, PoolWithTag, v36);
    if ( Sync < 0 )
      break;
    Sync = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v7, *(_DWORD *)(a1 + 172), &v35, (int *)&v33);
    if ( Sync < 0 )
      break;
    if ( (_DWORD)v5 == *(_DWORD *)(a1 + 16LL * v7 + 648) )
      goto LABEL_59;
    v16 = 4096;
    if ( (v37 & 0xFFF) != 0 )
      v16 = v37 & 0xFFF;
    memmove(v35, (const void *)PoolWithTag, (*(_DWORD *)(a1 + 176) + 15 + v16) & 0xFFFFFFF0);
    v17 = v33;
    Sync = ST_STORE<SM_TRAITS>::StDmPageMove(a1, v15, v33);
    if ( Sync < 0 )
      break;
    v18 = *(_QWORD *)(a1 + 488);
    v19 = v17 >> *(_DWORD *)(a1 + 164);
    v20 = *(_BYTE *)((unsigned int)v5 + v18);
    if ( *(_BYTE *)(v19 + v18) > v20 )
      v20 = *(_BYTE *)(v19 + v18);
    *(_BYTE *)(v19 + v18) = v20;
    if ( (*v34 & 0x1FFF) == 0 )
    {
LABEL_59:
      Sync = 0;
      break;
    }
    if ( (++v30 & v32) == 0 )
    {
      if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
      {
        v21 = *(_DWORD *)(a1 + 648) == -1 ? 0 : *(_DWORD *)(a1 + 136) - 16 * *(_DWORD *)(a1 + 652);
        for ( i = (_DWORD *)(a1 + 504); (unsigned __int64)i < a1 + 648; i += 6 )
        {
          if ( *i == -1 )
            v21 += *(_DWORD *)(a1 + 136);
        }
      }
      else
      {
        v21 = -1;
      }
      if ( v21 <= 3 * *(_DWORD *)(a1 + 136) )
      {
        Sync = -1073741110;
        break;
      }
    }
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0) != 2 )
    {
      Sync = -2147483634;
      break;
    }
    v7 = v31;
    v8 = v26;
  }
  v3 = v27;
LABEL_62:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(
    (__int64 *)&v28,
    a1 + 64);
  if ( PoolWithTag )
  {
    v23 = *(_DWORD *)(a1 + 1056);
    if ( (v23 & 1) != 0 && (PoolWithTag | 1) == *(_QWORD *)(a1 + 1056) )
      *(_DWORD *)(a1 + 1056) = v23 & 0xFFFFFFFE;
    else
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
  }
  if ( v3 )
    SmEtwLogRegionOp((_DWORD)v3, 7, a1, v5, Sync, *(_BYTE *)v34, *(_BYTE *)(*(_QWORD *)(a1 + 488) + (unsigned int)v5));
  return (unsigned int)Sync;
}
