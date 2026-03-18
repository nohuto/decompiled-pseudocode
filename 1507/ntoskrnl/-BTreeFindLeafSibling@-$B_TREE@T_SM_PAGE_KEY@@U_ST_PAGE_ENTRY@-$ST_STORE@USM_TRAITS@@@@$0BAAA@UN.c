/*
 * XREFs of ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140250E1C
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14025458C (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400D9B98 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401428FC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140144338 (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402513F4 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
        __int64 a1,
        __int64 a2)
{
  __int64 LeafSibling; // r14
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  unsigned int v11; // edx
  __int64 *v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  void **v15; // rbx
  _QWORD v17[3]; // [rsp+20h] [rbp+0h] BYREF
  int v18; // [rsp+38h] [rbp+18h]
  unsigned int v19; // [rsp+3Ch] [rbp+1Ch]

  LeafSibling = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2LL);
    if ( v5 == 1 )
      return LeafSibling;
  }
  else
  {
    v5 = 0;
  }
  v6 = 16LL * v5;
  v7 = v6 + 15;
  if ( v6 + 15 < v6 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultInit(v17, 2);
  v11 = *(_DWORD *)(a2 + 16);
  v18 = 0;
  v17[0] = v17;
  v19 = v5;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
    (char **)a1,
    v11,
    (__int64)v17);
  v12 = &v17[2 * v5 - 4];
  v13 = v12[1];
  v14 = *v12;
  if ( v13 <= v14 + 16 )
    v15 = (void **)(v14 + 8);
  else
    v15 = (void **)(v13 - 8);
  LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSiblingEx(
                  a1,
                  (__int64)v17);
  if ( v15 && **(_DWORD **)(a1 + 16) != -1 )
    NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v15);
  return LeafSibling;
}
