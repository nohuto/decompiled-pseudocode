/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011BAA0
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140003640 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140117DCC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140117F38 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14011A480 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14011B544 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14011CE70 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14011E768 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14021C6F8 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140221454 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rcx
  _DWORD *v9; // r8
  _QWORD *v10; // r8
  __int64 v11; // r9
  char v12; // si
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  _DWORD *v15; // rdx
  __int64 *v17; // r9
  int v18; // [rsp+48h] [rbp+10h]

  v18 = a2;
  v3 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
    *(_QWORD *)(a3 + 8) = 0LL;
  else
    *(_DWORD *)(a3 + 24) = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v7 = 0;
    v10 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v6 = *a1;
    v7 = 1;
    v8 = 0LL;
    if ( v6 )
      v8 = *(unsigned __int8 *)(v6 + 2);
    v9 = (_DWORD *)(a3 + 28);
    if ( *v9 < (unsigned int)v8 )
    {
      if ( !(unsigned int)SmArrayGrow(v8, a2, v9, a3) )
        return (unsigned int)-1073741670;
      LODWORD(a2) = v18;
    }
    v10 = *(_QWORD **)a3;
  }
  v11 = *a1;
  if ( !*a1 )
  {
    if ( !v7 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v12 = *(_BYTE *)(v11 + 3);
    v13 = -1;
    v14 = (unsigned __int16)*(_DWORD *)v11;
    if ( v12 )
    {
      if ( (unsigned __int16)*(_DWORD *)v11 )
      {
        do
        {
          if ( *(_DWORD *)(v11 + 8LL * ((v14 + v13) >> 1) + 16) >= (unsigned int)a2 )
            v14 = (v14 + v13) >> 1;
          else
            v13 = (v14 + v13) >> 1;
        }
        while ( v13 + 1 != v14 );
      }
    }
    else if ( (unsigned __int16)*(_DWORD *)v11 )
    {
      do
      {
        if ( *(_DWORD *)(v11 + 16LL * ((v14 + v13) >> 1) + 16) > (unsigned int)a2 )
          v14 = (v14 + v13) >> 1;
        else
          v13 = (v14 + v13) >> 1;
      }
      while ( v13 + 1 != v14 );
    }
    if ( v12 )
      break;
    if ( v7 )
    {
      *v10 = v11;
      v10[1] = v11 + 16 * (v14 + 1LL);
      v10 += 2;
      LODWORD(a2) = v18;
    }
    if ( v14 )
      v17 = (__int64 *)(16LL * (v14 - 1) + v11 + 24);
    else
      v17 = (__int64 *)(v11 + 8);
    v11 = *v17;
  }
  *v10 = v11;
  v15 = (_DWORD *)(v11 + 8 * (v14 + 2LL));
  v10[1] = v15;
  if ( v7 )
    *(_DWORD *)(a3 + 24) = (((__int64)v10 - *(_QWORD *)a3) >> 4) + 1;
  if ( v14 >= (unsigned __int16)*(_DWORD *)v11 || *v15 != v18 )
    return (unsigned int)-1073741275;
  return v3;
}
