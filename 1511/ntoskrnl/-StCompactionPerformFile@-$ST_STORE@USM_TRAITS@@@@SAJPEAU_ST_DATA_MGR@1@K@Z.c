/*
 * XREFs of ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140203E18
 * Callers:
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140111678 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010CD88 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPE.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14010E2F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010E53C (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010EF44 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140111B00 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201C6C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140205DC0 (-StDmPageMove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x1402067FC (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPE.c)
 *     SmEtwLogRegionOp @ 0x14020800C (SmEtwLogRegionOp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformFile(__int64 a1)
{
  ULONGLONG *v1; // rbx
  unsigned __int64 PoolWithTag; // r15
  int Sync; // esi
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // r12d
  ULONGLONG *v8; // rax
  _WORD *v9; // r9
  unsigned int v10; // r10d
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _DWORD **v14; // rax
  _DWORD **v15; // rax
  __int64 LeafSibling; // rax
  unsigned int v17; // ebx
  int v18; // r8d
  unsigned int v19; // r12d
  __int64 v20; // r9
  __int64 v21; // r12
  unsigned __int8 v22; // cl
  unsigned int v23; // edx
  _DWORD *i; // rax
  int v25; // ecx
  int v27; // [rsp+48h] [rbp-29h]
  unsigned int v28; // [rsp+48h] [rbp-29h]
  ULONGLONG *v29; // [rsp+50h] [rbp-21h]
  char *v30; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-11h]
  int v32; // [rsp+68h] [rbp-9h]
  unsigned int v33; // [rsp+6Ch] [rbp-5h]
  int v34; // [rsp+70h] [rbp-1h]
  unsigned int v35; // [rsp+74h] [rbp+3h] BYREF
  unsigned __int16 *v36; // [rsp+78h] [rbp+7h] BYREF
  void *v37; // [rsp+80h] [rbp+Fh] BYREF
  char v38[8]; // [rsp+88h] [rbp+17h] BYREF
  int v39; // [rsp+90h] [rbp+1Fh]

  v1 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
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
      goto LABEL_5;
    }
  }
  if ( !(unsigned int)ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
                        a1,
                        &v36,
                        1u,
                        *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 172) + 1) )
  {
    Sync = 0;
LABEL_5:
    LODWORD(v5) = v27;
    goto LABEL_62;
  }
  v6 = *(_QWORD *)(a1 + 472);
  v5 = ((__int64)v36 - v6) >> 1;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    v7 = 0;
  else
    v7 = *(unsigned __int16 *)(v6 + 2LL * (unsigned int)v5) >> 13;
  v28 = (_DWORD)v5 << *(_DWORD *)(a1 + 164);
  v33 = v7;
  v8 = SmEtwEnabled(0);
  v29 = v8;
  if ( v8 )
  {
    SmEtwLogRegionOp((_DWORD)v8, 6, a1, v5, 0, *v9, *(_BYTE *)(*(_QWORD *)(a1 + 488) + (unsigned int)v5));
    v10 = v28;
  }
  v11 = (1 << (*(_BYTE *)(a1 + 164) - 8)) - 1;
  v32 = -1;
  v34 = v11;
  while ( 1 )
  {
    Sync = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
             (char **)(a1 + 64),
             v10,
             a1 + 88);
    if ( Sync == -1073741818 )
      break;
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
      (char **)(a1 + 64),
      &v30,
      a1 + 88);
    if ( !v30 )
    {
      v12 = 0LL;
      goto LABEL_34;
    }
    v12 = v31 + 8;
    v13 = (unsigned __int16)*(_DWORD *)v30 + 2LL;
    v31 = v12;
    if ( v12 >= (unsigned __int64)&v30[8 * v13] )
    {
      if ( a1 == -64 )
        v14 = 0LL;
      else
        v14 = (_DWORD **)(a1 + 80);
      if ( **v14 == -1 )
      {
        if ( a1 == -64 )
          v15 = 0LL;
        else
          v15 = (_DWORD **)(a1 + 80);
        if ( **v15 == -1 )
          LeafSibling = *((_QWORD *)v30 + 1);
        else
          LeafSibling = 3358LL;
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                        a1 + 64,
                        (__int64)v30);
        if ( LeafSibling == -1 )
        {
          v12 = -1LL;
          goto LABEL_33;
        }
      }
      if ( LeafSibling )
      {
        v12 = LeafSibling + 16;
        v30 = (char *)LeafSibling;
        v31 = LeafSibling + 16;
      }
      else
      {
        v12 = 0LL;
      }
    }
LABEL_33:
    if ( v12 == -1LL )
    {
      Sync = -1073741818;
      break;
    }
LABEL_34:
    v17 = *(_DWORD *)(v12 + 4);
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(
      (__int64 *)&v30,
      a1 + 64);
    v30 = 0LL;
    v31 = 0LL;
    Sync = ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(a1, v17, PoolWithTag, v38);
    if ( Sync < 0 )
      break;
    Sync = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v7, *(_DWORD *)(a1 + 172), &v37, (int *)&v35);
    if ( Sync < 0 )
      break;
    if ( (_DWORD)v5 == *(_DWORD *)(a1 + 16LL * v7 + 648) )
      goto LABEL_59;
    v18 = 4096;
    if ( (v39 & 0xFFF) != 0 )
      v18 = v39 & 0xFFF;
    memmove(v37, (const void *)PoolWithTag, (*(_DWORD *)(a1 + 176) + 15 + v18) & 0xFFFFFFF0);
    v19 = v35;
    Sync = ST_STORE<SM_TRAITS>::StDmPageMove(a1, v17, v35);
    if ( Sync < 0 )
      break;
    v20 = *(_QWORD *)(a1 + 488);
    v21 = v19 >> *(_DWORD *)(a1 + 164);
    v22 = *(_BYTE *)((unsigned int)v5 + v20);
    if ( *(_BYTE *)(v21 + v20) > v22 )
      v22 = *(_BYTE *)(v21 + v20);
    *(_BYTE *)(v21 + v20) = v22;
    if ( (*v36 & 0x1FFF) == 0 )
    {
LABEL_59:
      Sync = 0;
      break;
    }
    if ( (++v32 & v34) == 0 )
    {
      if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
      {
        v23 = *(_DWORD *)(a1 + 648) == -1 ? 0 : *(_DWORD *)(a1 + 136) - 16 * *(_DWORD *)(a1 + 652);
        for ( i = (_DWORD *)(a1 + 504); (unsigned __int64)i < a1 + 648; i += 6 )
        {
          if ( *i == -1 )
            v23 += *(_DWORD *)(a1 + 136);
        }
      }
      else
      {
        v23 = -1;
      }
      if ( v23 <= 3 * *(_DWORD *)(a1 + 136) )
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
    v7 = v33;
    v10 = v28;
  }
  v1 = v29;
LABEL_62:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(
    (__int64 *)&v30,
    a1 + 64);
  if ( PoolWithTag )
  {
    v25 = *(_DWORD *)(a1 + 1056);
    if ( (v25 & 1) != 0 && (PoolWithTag | 1) == *(_QWORD *)(a1 + 1056) )
      *(_DWORD *)(a1 + 1056) = v25 & 0xFFFFFFFE;
    else
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
  }
  if ( v1 )
    SmEtwLogRegionOp((_DWORD)v1, 7, a1, v5, Sync, *(_BYTE *)v36, *(_BYTE *)(*(_QWORD *)(a1 + 488) + (unsigned int)v5));
  return (unsigned int)Sync;
}
