/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14010CF00
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14010C8A0 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140114CA8 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401107C4 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140114C4C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140114CA8 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     SmArrayGrow @ 0x1401173D4 (SmArrayGrow.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202360 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeInsertEx(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 *v10; // r14
  _DWORD *v11; // rsi
  _OWORD *v12; // rbx
  void *v13; // rcx
  size_t v14; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  int v21; // eax
  _DWORD *v22; // rdx
  bool v23; // zf
  __int64 v24; // rdx
  void **v25; // rdx
  __int64 v26; // rdx
  void **v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax

  v3 = *(_QWORD *)a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v30 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNewNode(a1, 1LL, 1LL);
    *(_QWORD *)a1 = v30;
    if ( !v30 )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a2;
    *v10 = v30;
    v10[1] = *(_QWORD *)a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_DWORD *)*v10;
  if ( (unsigned __int16)*(_DWORD *)*v10 >= 0xFFu )
  {
    v16 = (v10[1] - (__int64)v11 - 16) >> 4;
    if ( v11 == *(_DWORD **)a1 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v17 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeRedistribute(a1);
      v18 = *(v10 - 1);
      v19 = v17;
      if ( (v17 & 1) != 0 )
        v20 = v18 - 16;
      else
        v20 = v18 + 16;
    }
    v21 = (unsigned __int16)*v11;
    if ( (unsigned int)v21 < 0xFF )
    {
      if ( (v19 & 1) == 0 )
      {
        if ( (int)v16 <= v21 )
          goto LABEL_19;
        LODWORD(v16) = v16 - v21;
        if ( !*((_BYTE *)v11 + 3) )
          LODWORD(v16) = v16 - 1;
        v11 = (_DWORD *)v19;
        goto LABEL_52;
      }
      v22 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
      LODWORD(v16) = v21 + v16 - 255;
      if ( *((_BYTE *)v11 + 3) )
      {
        if ( (int)v16 > 0 )
          goto LABEL_18;
      }
      else
      {
        if ( (int)v16 >= 0 )
          goto LABEL_18;
        LODWORD(v16) = v16 + 1;
      }
      v11 = v22;
      LODWORD(v16) = (unsigned __int16)*v22 + (_DWORD)v16;
LABEL_18:
      if ( v11 != v22 )
      {
LABEL_19:
        v18 = v20;
LABEL_20:
        *v10 = (__int64)v11;
        v23 = *((_BYTE *)v11 + 3) == 0;
        v10[1] = (__int64)&v11[4 * (int)v16 + 4];
        if ( !v23 )
        {
          v24 = *(v10 - 2);
          v25 = (void **)(v18 <= v24 + 16 ? v24 + 8 : v18 - 8);
          if ( **((_DWORD **)a1 + 2) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v25);
        }
        goto LABEL_7;
      }
LABEL_52:
      *(v10 - 1) = v20;
      goto LABEL_20;
    }
    if ( v19 && *((_BYTE *)v11 + 3) )
    {
      v26 = *(v10 - 2);
      v27 = (void **)(v20 <= v26 + 16 ? v26 + 8 : v20 - 8);
      if ( **((_DWORD **)a1 + 2) != -1 )
        NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v27);
    }
    v28 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSplitChild(a1);
    if ( v28 )
    {
      v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v29 = (unsigned __int16)*v11;
      v18 = *(v10 - 1);
      if ( (int)v16 <= v29 )
      {
        v18 += 16LL;
      }
      else
      {
        LODWORD(v16) = v16 - v29;
        if ( !*((_BYTE *)v11 + 3) )
          LODWORD(v16) = v16 - 1;
        v11 = (_DWORD *)v28;
        *(v10 - 1) = v18 + 16;
      }
      goto LABEL_20;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v12 = (_OWORD *)v10[1];
  v13 = v12 + 1;
  v14 = (size_t)v11 + 16 * ((unsigned __int16)*v11 + 1LL) - (_QWORD)v12;
  if ( *((_BYTE *)v11 + 3) )
  {
    memmove(v13, v12, v14);
    *v12 = *a3;
    ++*((_QWORD *)a1 + 1);
  }
  else
  {
    memmove(v13, v12, v14);
    *v12 = *a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
