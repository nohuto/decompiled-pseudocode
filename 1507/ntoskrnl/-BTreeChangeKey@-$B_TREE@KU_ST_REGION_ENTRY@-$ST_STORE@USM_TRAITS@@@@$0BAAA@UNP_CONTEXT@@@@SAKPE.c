/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14014339C
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140140460 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14013A9AC (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140250C80 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402513F4 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402514A8 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeChangeKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 *v5; // r9
  unsigned int *v6; // r15
  __int64 v7; // r12
  unsigned int v8; // ebp
  bool v9; // cf
  _DWORD **v11; // rdi
  unsigned int *v12; // r14
  _DWORD **v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  void **v16; // rax
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  void **v18; // r13
  _DWORD *v19; // rdx
  int v20; // r12d
  unsigned int v21; // eax
  struct NP_CONTEXT::NP_CTX *v22; // rcx
  _BYTE v23[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v24; // [rsp+28h] [rbp-30h]

  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = (unsigned int *)v5[1];
  v7 = *v5;
  v8 = *v6;
  if ( *v6 < a3 )
  {
    if ( (unsigned __int64)v6 < v7 + 8 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v7 - 1) + 2) )
    {
      v9 = a3 < v6[2];
LABEL_4:
      if ( v9 )
      {
LABEL_5:
        *v6 = a3;
        return 1LL;
      }
      return 0LL;
    }
  }
  else if ( (unsigned __int64)v6 > v7 + 16 )
  {
    v9 = *(v6 - 2) < a3;
    goto LABEL_4;
  }
  v11 = 0LL;
  if ( !(unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v8 < a3,
                        (__int64)v23) )
    goto LABEL_5;
  v12 = v24;
  if ( v8 >= a3 )
  {
    if ( v8 == a3 )
    {
      *v24 = a3;
      goto LABEL_5;
    }
  }
  else if ( a3 < *v24 )
  {
    goto LABEL_5;
  }
  if ( a3 >= v8 )
  {
    v13 = (_DWORD **)(a1 + 16);
    if ( !a1 )
      v13 = 0LL;
    if ( **v13 == -1 )
    {
      if ( a1 )
        v11 = (_DWORD **)(a1 + 16);
      if ( **v11 == -1 )
        v14 = *(_QWORD *)(v7 + 8);
      else
        v14 = 3358LL;
      v15 = *(_DWORD *)(v14 + 16);
      if ( a3 < v15 )
      {
        *v24 = v15;
        goto LABEL_5;
      }
      return 0LL;
    }
  }
  v16 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDescendToSibling(
                   v23,
                   v8 < a3,
                   0LL);
  v17 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
  v18 = v16;
  if ( !a1 )
    v17 = 0LL;
  if ( **(_DWORD **)v17 == -1 )
    v19 = *v16;
  else
    v19 = NP_CONTEXT::NpLeafRefInternal(v17, v16, 0);
  if ( v19 )
  {
    v20 = 0;
    if ( a3 >= v8 )
    {
      v21 = v19[4];
      if ( a3 >= v21 )
        goto LABEL_38;
      *v12 = v21;
    }
    else
    {
      if ( v19[2 * (unsigned __int16)*v19 + 2] >= a3 )
        goto LABEL_38;
      *v12 = a3;
    }
    v20 = 1;
LABEL_38:
    v22 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
    if ( !a1 )
      v22 = 0LL;
    if ( **(_DWORD **)v22 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v22, v18);
    if ( v20 )
      goto LABEL_5;
    return 0LL;
  }
  return 0xFFFFFFFFLL;
}
