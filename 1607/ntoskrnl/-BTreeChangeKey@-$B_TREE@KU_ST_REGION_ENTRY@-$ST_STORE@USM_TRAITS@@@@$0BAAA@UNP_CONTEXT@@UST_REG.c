/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DEF8
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14011D884 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140116140 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140120A9C (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14021C2B0 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14021C364 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  _DWORD *v3; // rdi
  __int64 *v5; // r9
  unsigned int *v7; // r12
  __int64 v8; // r13
  unsigned int v9; // esi
  _DWORD *Chunk; // rbx
  _DWORD *v11; // rax
  _DWORD **v12; // rsi
  int v13; // r14d
  _DWORD *v15; // rdi
  _DWORD *v16; // rax
  unsigned int v17; // edx
  int v18; // edx
  unsigned int *v19; // r12
  unsigned int v20; // esi
  unsigned int v21; // r8d
  struct NP_CONTEXT::NP_CTX *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // r13d
  _DWORD *v25; // rbx
  struct NP_CONTEXT::NP_CTX *v26; // rcx
  _DWORD *v27; // rbx
  _DWORD **v28; // rax
  __int64 v29; // rax
  unsigned int v30; // esi
  _DWORD *v31; // rbx
  unsigned int v32; // r14d
  _DWORD *v33; // rbx
  _BYTE v34[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v35; // [rsp+28h] [rbp-40h]
  unsigned int *v36; // [rsp+70h] [rbp+8h]
  void **v38; // [rsp+78h] [rbp+10h]
  unsigned int v39; // [rsp+80h] [rbp+18h]

  v3 = (_DWORD *)(a1 + 128);
  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = (unsigned int *)v5[1];
  v8 = *v5;
  v36 = v7;
  v9 = *v7;
  Chunk = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), a3);
  v11 = (_DWORD *)SmHpIdGetChunk(v3, v9);
  v12 = 0LL;
  if ( *Chunk < *v11 )
  {
    v13 = -1;
LABEL_3:
    if ( (unsigned __int64)v7 > v8 + 16 )
    {
      if ( !v13 )
      {
LABEL_5:
        *v7 = a3;
        return 1LL;
      }
      v15 = (_DWORD *)(a1 + 128);
      v16 = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), *(v7 - 1));
      v17 = a3;
      goto LABEL_7;
    }
    v18 = 0;
    goto LABEL_12;
  }
  if ( *Chunk <= *v11 )
  {
    v13 = 0;
    goto LABEL_3;
  }
  v13 = 1;
  if ( (unsigned __int64)v7 < v8 + 16 + 4 * (unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v8 - 1) )
  {
    _mm_lfence();
    v20 = v7[1];
    v15 = (_DWORD *)(a1 + 128);
    v16 = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), a3);
    v17 = v20;
LABEL_7:
    if ( *v16 < *(_DWORD *)SmHpIdGetChunk(v15, v17) )
      goto LABEL_5;
    return 0LL;
  }
  v18 = 1;
LABEL_12:
  if ( !(unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v18,
                        (__int64)v34) )
    goto LABEL_5;
  v19 = v35;
  v39 = *v35;
  if ( v13 > 0 )
  {
    v27 = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), a3);
    if ( *v27 < *(_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), v39) )
      goto LABEL_16;
  }
  else if ( !v13 )
  {
    *v35 = a3;
LABEL_16:
    v7 = v36;
    goto LABEL_5;
  }
  if ( v13 >= 0 )
  {
    v28 = (_DWORD **)(a1 + 16);
    if ( !a1 )
      v28 = 0LL;
    if ( **v28 == -1 )
    {
      if ( a1 )
        v12 = (_DWORD **)(a1 + 16);
      if ( **v12 == -1 )
        v29 = *(_QWORD *)(v8 + 8);
      else
        v29 = 3358LL;
      v30 = *(_DWORD *)(v29 + 16);
      v31 = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), a3);
      if ( *v31 < *(_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), v30) )
      {
        *v19 = v30;
        goto LABEL_16;
      }
      return 0LL;
    }
  }
  v38 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                   v34,
                   v13 > 0,
                   0LL);
  v22 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
  if ( !a1 )
    v22 = 0LL;
  if ( **(_DWORD **)v22 == -1 )
    v23 = *v38;
  else
    v23 = NP_CONTEXT::NpLeafRefInternal(v22, v38, v21);
  if ( v23 )
  {
    v24 = 0;
    if ( v13 >= 0 )
    {
      v32 = v23[4];
      v33 = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), a3);
      if ( *v33 >= *(_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), v32) )
      {
LABEL_29:
        v26 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
        if ( !a1 )
          v26 = 0LL;
        if ( **(_DWORD **)v26 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v26, v38);
        if ( v24 )
          goto LABEL_16;
        return 0LL;
      }
      *v19 = v32;
    }
    else
    {
      v25 = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), v23[(unsigned __int16)*v23 + 3]);
      if ( *v25 >= *(_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 128), a3) )
        goto LABEL_29;
      *v19 = a3;
    }
    v24 = 1;
    goto LABEL_29;
  }
  return 0xFFFFFFFFLL;
}
