/*
 * XREFs of ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010EFF0
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402052F8 (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400F8A70 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202360 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(
        __int64 *a1,
        __int64 a2)
{
  _DWORD **v3; // rax
  __int64 v4; // r14
  char *v5; // rax
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  unsigned int v12; // edx
  __int64 *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  void **v16; // rbx
  _QWORD v17[3]; // [rsp+20h] [rbp+0h] BYREF
  int v18; // [rsp+38h] [rbp+18h]
  unsigned int v19; // [rsp+3Ch] [rbp+1Ch]

  if ( a2 )
    v3 = (_DWORD **)(a2 + 16);
  else
    v3 = 0LL;
  if ( **v3 != -1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = *(char **)a2;
      if ( v4 != *(_QWORD *)a2 )
      {
        if ( v5 )
          v6 = (unsigned __int8)v5[2];
        else
          v6 = 0;
        v7 = 16LL * v6;
        v8 = v7 + 15;
        if ( v7 + 15 < v7 )
          v8 = 0xFFFFFFFFFFFFFF0LL;
        v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
        v10 = alloca(v9);
        v11 = alloca(v9);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultInit(v17, 2);
        v12 = *(_DWORD *)(v4 + 16);
        v18 = 0;
        v17[0] = v17;
        v19 = v6;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
          (char **)a2,
          v12,
          (__int64)v17);
        v13 = &v17[2 * v6 - 4];
        v14 = v13[1];
        v15 = *v13;
        if ( v14 <= v15 + 16 )
          v16 = (void **)(v15 + 8);
        else
          v16 = (void **)(v14 - 8);
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
          (__int64 *)a2,
          (__int64)v17);
        if ( **(_DWORD **)(a2 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a2 + 16), v16);
      }
    }
  }
}
