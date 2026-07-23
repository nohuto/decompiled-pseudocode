/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14011C868
 * Callers:
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14011C820 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011FDA4 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011F528 (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011FDA4 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14012020C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14021C2B0 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 *v10; // r14
  _DWORD *v11; // rsi
  unsigned int v12; // r12d
  _DWORD *v13; // rbx
  int v14; // eax
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  int v22; // eax
  _DWORD *v23; // rdx
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
    v30 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *(_QWORD *)a1 = v30;
    if ( !v30 )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a2;
    *v10 = v30;
    v10[1] = *(_QWORD *)a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_DWORD *)*v10;
  v12 = *(_BYTE *)(*v10 + 3) != 0 ? 1020 : 255;
  if ( (unsigned __int16)*(_DWORD *)*v10 >= v12 )
  {
    v16 = v10[1] - (_QWORD)v11 - 16;
    if ( *(_BYTE *)(*v10 + 3) )
      v17 = v16 >> 2;
    else
      v17 = v16 >> 4;
    if ( v11 == *(_DWORD **)a1 )
    {
      v21 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v18 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(a1);
      v19 = *(v10 - 1);
      v20 = v18;
      if ( (v18 & 1) != 0 )
        v21 = v19 - 16;
      else
        v21 = v19 + 16;
    }
    v22 = (unsigned __int16)*v11;
    if ( v22 < v12 )
    {
      if ( (v20 & 1) == 0 )
      {
        if ( (int)v17 <= v22 )
          goto LABEL_21;
        LODWORD(v17) = v17 - v22;
        if ( !*((_BYTE *)v11 + 3) )
          LODWORD(v17) = v17 - 1;
        v11 = (_DWORD *)v20;
        goto LABEL_56;
      }
      v23 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
      LODWORD(v17) = v22 - v12 + v17;
      if ( *((_BYTE *)v11 + 3) )
      {
        if ( (int)v17 > 0 )
          goto LABEL_20;
      }
      else
      {
        if ( (int)v17 >= 0 )
          goto LABEL_20;
        LODWORD(v17) = v17 + 1;
      }
      v11 = v23;
      LODWORD(v17) = (unsigned __int16)*v23 + (_DWORD)v17;
LABEL_20:
      if ( v11 != v23 )
      {
LABEL_21:
        v19 = v21;
        goto LABEL_22;
      }
LABEL_56:
      *(v10 - 1) = v21;
LABEL_22:
      *v10 = (__int64)v11;
      if ( *((_BYTE *)v11 + 3) )
      {
        v10[1] = (__int64)&v11[(int)v17 + 4];
        v24 = *(v10 - 2);
        if ( v19 <= v24 + 16 )
          v25 = (void **)(v24 + 8);
        else
          v25 = (void **)(v19 - 8);
        if ( **((_DWORD **)a1 + 2) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v25);
      }
      else
      {
        v10[1] = (__int64)&v11[4 * (int)v17 + 4];
      }
      goto LABEL_7;
    }
    if ( v20 && *((_BYTE *)v11 + 3) )
    {
      v26 = *(v10 - 2);
      v27 = (void **)(v21 <= v26 + 16 ? v26 + 8 : v21 - 8);
      if ( **((_DWORD **)a1 + 2) != -1 )
        NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v27);
    }
    v28 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(a1);
    if ( v28 )
    {
      v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v29 = (unsigned __int16)*v11;
      v19 = *(v10 - 1);
      if ( (int)v17 <= v29 )
      {
        v19 += 16LL;
      }
      else
      {
        LODWORD(v17) = v17 - v29;
        if ( !*((_BYTE *)v11 + 3) )
          LODWORD(v17) = v17 - 1;
        v11 = (_DWORD *)v28;
        *(v10 - 1) = v19 + 16;
      }
      goto LABEL_22;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v13 = (_DWORD *)v10[1];
  v14 = *v11;
  if ( *((_BYTE *)v11 + 3) )
  {
    memmove(v13 + 1, v13, (size_t)v11 + 4LL * (unsigned __int16)v14 + 16 - (_QWORD)v13);
    *v13 = *a3;
    ++*((_QWORD *)a1 + 1);
  }
  else
  {
    memmove(v13 + 4, v13, (size_t)v11 + 16 * ((unsigned __int16)v14 + 1LL) - (_QWORD)v13);
    *(_OWORD *)v13 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
