/*
 * XREFs of ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14011CE70
 * Callers:
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14011E398 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 * Callees:
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011B6B8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011BAA0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r12d
  unsigned int v8; // esi
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  int v15; // r9d
  __int64 v17; // rax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  _QWORD v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[5]; // [rsp+40h] [rbp-C0h] BYREF
  char v22; // [rsp+68h] [rbp-98h] BYREF

  v4 = *a2;
  memset(v21, 0, sizeof(v21));
  LODWORD(v21[4]) |= 1u;
  v21[3] = 0x800000000LL;
  v21[0] = &v22;
  v7 = 1024;
  v18 = *a3;
  v8 = 0;
  v9 = 1024;
  v10 = 0;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 448),
    v4,
    (__int64)v21);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v11,
    v20,
    (__int64)v21);
  v12 = v20[1];
  v13 = v20[0];
  while ( v13 )
  {
    v12 += 8LL;
    if ( v12 < v13 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v13 + 2) )
      goto LABEL_4;
    v17 = *(_QWORD *)(v13 + 8);
    if ( v17 )
    {
      v13 = *(_QWORD *)(v13 + 8);
      v12 = v17 + 16;
LABEL_4:
      v14 = v12;
      goto LABEL_5;
    }
    v14 = 0LL;
LABEL_5:
    if ( !v14 )
      break;
    if ( v4 < *(_DWORD *)v14 )
      break;
    if ( (*(_BYTE *)(v14 + 7) & 1) != 0 )
      break;
    v15 = *(unsigned __int8 *)(v14 + 6);
    if ( ((v15 - 1) & 0xFFFFFFFD) != 0 )
      break;
    if ( v15 == 1 )
      v10 = 1;
    if ( v8 )
    {
      if ( v9 != *(unsigned __int16 *)(v14 + 4) )
        break;
    }
    else
    {
      v9 = *(unsigned __int16 *)(v14 + 4);
    }
    if ( ++v8 >= v18 )
      break;
    ++v4;
  }
  if ( v8 )
  {
    v7 = v9;
    *a3 = v8;
    *a4 = v10;
  }
  return v7;
}
