/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142BCC
 * Callers:
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140140290 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140142038 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140144C14 (-BTreeMergeNodes@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXP.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14013A9AC (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014343C (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SA.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140144674 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140144C14 (-BTreeMergeNodes@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXP.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402513F4 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402514A8 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140251524 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 **v5; // rbx
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r9
  int v8; // eax
  const void *v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // rbp
  size_t v12; // rbp
  int v13; // eax
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // rbx
  __int64 v17; // r14
  unsigned int v18; // eax
  int v19; // r14d
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  void **v22; // rdx
  _DWORD **v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  int v27; // eax
  __int64 v28; // rcx
  char v29[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v30; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v5 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = *v5;
  v7 = v5[1];
  v8 = *(_DWORD *)*v5;
  if ( (*v5)[3] )
  {
    v9 = v7 + 8;
    v10 = 255;
    v11 = 8LL * (unsigned __int16)v8 + 8;
  }
  else
  {
    v9 = v7 + 16;
    v11 = 16LL * (unsigned __int16)v8;
    v10 = 127;
  }
  v12 = (size_t)&v6[v11 - (_QWORD)v7];
  if ( v12 )
    memmove(v5[1], v9, v12);
  --*(_WORD *)v6;
  if ( v6[3] )
    --*((_QWORD *)a1 + 1);
  v13 = *(_DWORD *)v6;
  if ( *(unsigned __int8 **)a1 == v6 )
  {
    if ( !(_WORD)v13 && !v6[3] )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v23 = (_DWORD **)((char *)a1 + 16);
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
        if ( **v23 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
        if ( **v23 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
        if ( **v23 != -1 )
          NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
      }
      NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v6, v6[3]);
    }
  }
  else
  {
    if ( (unsigned __int16)v13 < v10 )
    {
      v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeRedistribute(a1);
      if ( !v17 )
        return (unsigned int)-1073741818;
      v18 = (unsigned __int16)*(_DWORD *)v6;
      if ( v18 < v10 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeMergeNodes(a1);
        v5 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v26 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v5 = (unsigned __int8 *)v26;
          v27 = *(_DWORD *)v26;
          if ( *(_BYTE *)(v26 + 3) )
            v28 = 8LL * (unsigned __int16)v27 + 16;
          else
            v28 = 16 * ((unsigned __int16)v27 + 1LL);
          v5[1] = (unsigned __int8 *)(v26 + v28 - v12);
        }
      }
      else
      {
        v19 = v17 & 1;
        if ( v19 )
        {
          v24 = v18 - v10 + 1;
          if ( v6[3] )
            v25 = 8 * v24;
          else
            v25 = 16 * v24;
          v5[1] += v25;
        }
        if ( v6[3] )
        {
          v20 = (unsigned __int64)(*(v5 - 1) + 16);
          if ( v19 )
            v20 = (unsigned __int64)(*(v5 - 1) - 16);
          v21 = (__int64)*(v5 - 2);
          if ( v20 <= v21 + 16 )
            v22 = (void **)(v21 + 8);
          else
            v22 = (void **)(v20 - 8);
          if ( **((_DWORD **)a1 + 2) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v22);
        }
      }
    }
    v14 = *v5;
    v15 = v5[1];
    if ( v15 == v14 + 16
      && v14[3]
      && (unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0,
                         (__int64)v29) )
    {
      *v30 = *(_DWORD *)v15;
    }
  }
  return v2;
}
