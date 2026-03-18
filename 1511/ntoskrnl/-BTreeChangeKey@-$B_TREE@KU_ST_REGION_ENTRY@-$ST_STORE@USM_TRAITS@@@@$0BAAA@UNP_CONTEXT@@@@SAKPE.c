/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14010EA10
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14010DAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140109C98 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140111C88 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202360 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140202414 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
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
  void **v13; // rax
  struct NP_CONTEXT::NP_CTX *v14; // rcx
  void **v15; // r13
  _DWORD *v16; // rdx
  int v17; // r12d
  struct NP_CONTEXT::NP_CTX *v18; // rcx
  _DWORD **v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
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
  if ( v8 < a3 )
  {
    if ( a3 < *v24 )
      goto LABEL_5;
  }
  else if ( v8 == a3 )
  {
    *v24 = a3;
    goto LABEL_5;
  }
  if ( a3 >= v8 )
  {
    v19 = (_DWORD **)(a1 + 16);
    if ( !a1 )
      v19 = 0LL;
    if ( **v19 == -1 )
    {
      if ( a1 )
        v11 = (_DWORD **)(a1 + 16);
      if ( **v11 == -1 )
        v20 = *(_QWORD *)(v7 + 8);
      else
        v20 = 3358LL;
      v21 = *(_DWORD *)(v20 + 16);
      if ( a3 < v21 )
      {
        *v24 = v21;
        goto LABEL_5;
      }
      return 0LL;
    }
  }
  v13 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDescendToSibling(
                   v23,
                   v8 < a3,
                   0LL);
  v14 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
  v15 = v13;
  if ( !a1 )
    v14 = 0LL;
  if ( **(_DWORD **)v14 == -1 )
    v16 = *v13;
  else
    v16 = NP_CONTEXT::NpLeafRefInternal(v14, v13, 0);
  if ( v16 )
  {
    v17 = 0;
    if ( a3 >= v8 )
    {
      v22 = v16[4];
      if ( a3 >= v22 )
      {
LABEL_22:
        v18 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
        if ( !a1 )
          v18 = 0LL;
        if ( **(_DWORD **)v18 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v18, v15);
        if ( v17 )
          goto LABEL_5;
        return 0LL;
      }
      *v12 = v22;
    }
    else
    {
      if ( v16[2 * (unsigned __int16)*v16 + 2] >= a3 )
        goto LABEL_22;
      *v12 = a3;
    }
    v17 = 1;
    goto LABEL_22;
  }
  return 0xFFFFFFFFLL;
}
