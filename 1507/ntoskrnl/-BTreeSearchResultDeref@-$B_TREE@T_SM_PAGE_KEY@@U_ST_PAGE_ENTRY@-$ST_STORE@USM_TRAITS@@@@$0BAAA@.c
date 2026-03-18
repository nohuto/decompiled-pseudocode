/*
 * XREFs of ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB91C
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400DB838 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB91C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140140460 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140140D78 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140142038 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401428FC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140142AB8 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140142B20 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140254894 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140255040 (-StDmPageMove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x1402560C0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400D9B98 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB91C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401428FC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402513F4 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
        __int64 *a1,
        __int64 a2)
{
  _DWORD **v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  __int64 *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  void **v16; // rbx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  void **v19; // rdx
  struct NP_CONTEXT::NP_CTX *v20; // rcx
  _DWORD v21[2]; // [rsp+20h] [rbp+0h] BYREF
  __int64 v22; // [rsp+28h] [rbp+8h]
  _QWORD v23[3]; // [rsp+30h] [rbp+10h] BYREF
  int v24; // [rsp+48h] [rbp+28h]
  int v25; // [rsp+4Ch] [rbp+2Ch]

  if ( a1 )
    v4 = (_DWORD **)(a1 + 2);
  else
    v4 = 0LL;
  if ( **v4 == -1 )
  {
    if ( *(_DWORD *)(a2 + 24) == -1 )
      *(_QWORD *)(a2 + 8) = 0LL;
    else
      *(_DWORD *)(a2 + 24) = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 24);
    if ( v5 == -1 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      v22 = v6;
      if ( v6 )
      {
        v7 = *a1;
        if ( v6 != *a1 )
        {
          if ( v7 )
            v7 = *(unsigned __int8 *)(v7 + 2);
          v21[0] = v7;
          v8 = 16 * v7;
          v9 = v8 + 15;
          if ( v8 + 15 < v8 )
            v9 = 0xFFFFFFFFFFFFFF0LL;
          v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
          v11 = alloca(v10);
          v12 = alloca(v10);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultInit(v23, 2);
          v24 = 0;
          v25 = v21[0];
          v23[0] = v21;
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
            a1,
            *(unsigned int *)(v22 + 16),
            v23);
          v13 = (__int64 *)&v21[4 * (v21[0] - 2)];
          v14 = v13[1];
          v15 = *v13;
          if ( v14 <= v15 + 16 )
            v16 = (void **)(v15 + 8);
          else
            v16 = (void **)(v14 - 8);
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(a1, v23);
          if ( *(_DWORD *)a1[2] != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 2), v16);
        }
      }
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    else
    {
      if ( v5 > 1 )
      {
        v17 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (v5 - 2));
        v18 = v17[1];
        if ( v18 <= *v17 + 16LL )
          v19 = (void **)(*v17 + 8LL);
        else
          v19 = (void **)(v18 - 8);
        if ( a1 )
          v20 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
        else
          v20 = 0LL;
        if ( **(_DWORD **)v20 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v20, v19);
      }
      *(_DWORD *)(a2 + 24) = 0;
    }
  }
}
