/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142D78
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140142038 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140144518 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140143064 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140143B88 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140144518 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140144674 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402513F4 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402514A8 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140251524 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  unsigned int v3; // edi
  unsigned __int8 **v5; // rbx
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // rcx
  int v8; // eax
  __int64 v9; // rbp
  int v10; // eax
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // rbx
  __int64 v14; // r14
  unsigned int v15; // eax
  int v16; // r14d
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  void **v19; // rdx
  unsigned __int8 *v20; // r14
  _DWORD **v21; // rbx
  char v22[8]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v23; // [rsp+28h] [rbp-20h]

  v3 = 0;
  v5 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = *v5;
  v7 = v5[1];
  v8 = *(_DWORD *)*v5;
  v9 = (__int64)&(*v5)[16LL * (unsigned __int16)v8 - (_QWORD)v7];
  if ( v9 )
    memmove(v7, v7 + 16, (size_t)&(*v5)[16LL * (unsigned __int16)v8 - (_QWORD)v7]);
  --*(_WORD *)v6;
  if ( v6[3] )
    --*((_QWORD *)a1 + 1);
  v10 = *(_DWORD *)v6;
  if ( *(unsigned __int8 **)a1 == v6 )
  {
    if ( !(_WORD)v10 && !v6[3] )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v21 = (_DWORD **)((char *)a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **((_DWORD **)a1 + 2) == -1 || v6[2] != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v6 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal(
                          (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16),
                          (void **)v6 + 1,
                          1u);
        if ( **v21 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
        if ( **v21 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
        if ( **v21 != -1 )
          NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
      }
      NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v6, v6[3]);
    }
  }
  else
  {
    if ( (unsigned __int16)v10 < 0x7Fu )
    {
      v14 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeRedistribute(a1);
      if ( !v14 )
        return (unsigned int)-1073741818;
      v15 = (unsigned __int16)*(_DWORD *)v6;
      if ( v15 < 0x7F )
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeMergeNodes(a1);
        v5 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v14 & 1) != 0 )
        {
          v20 = (unsigned __int8 *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
          *v5 = v20;
          v5[1] = &v20[16 * ((unsigned __int16)*(_DWORD *)v20 + 1LL) - v9];
        }
      }
      else
      {
        v16 = v14 & 1;
        if ( v16 )
          v5[1] += 16 * v15 - 2016;
        if ( v6[3] )
        {
          v17 = (unsigned __int64)(*(v5 - 1) + 16);
          if ( v16 )
            v17 = (unsigned __int64)(*(v5 - 1) - 16);
          v18 = (__int64)*(v5 - 2);
          if ( v17 <= v18 + 16 )
            v19 = (void **)(v18 + 8);
          else
            v19 = (void **)(v17 - 8);
          if ( **((_DWORD **)a1 + 2) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v19);
        }
      }
    }
    v11 = *v5;
    v12 = v5[1];
    if ( v12 == v11 + 16
      && v11[3]
      && (unsigned int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         v22) )
    {
      *v23 = *(_DWORD *)v12;
    }
  }
  return v3;
}
