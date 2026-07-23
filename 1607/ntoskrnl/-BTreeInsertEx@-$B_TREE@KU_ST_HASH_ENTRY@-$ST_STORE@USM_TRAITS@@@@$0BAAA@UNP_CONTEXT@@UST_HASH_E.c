/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14011C460
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14011AAF4 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011FFD8 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011F748 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011FFD8 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14012020C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14021C2B0 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
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
  __int64 v23; // rdx
  void **v24; // rdx
  __int64 v25; // rdx
  void **v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  _DWORD *v29; // rdx
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
      v18 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(a1);
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
        {
LABEL_19:
          v19 = v21;
          goto LABEL_20;
        }
        LODWORD(v17) = v17 - v22;
        if ( !*((_BYTE *)v11 + 3) )
          LODWORD(v17) = v17 - 1;
        v11 = (_DWORD *)v20;
LABEL_45:
        *(v10 - 1) = v21;
LABEL_20:
        *v10 = (__int64)v11;
        if ( *((_BYTE *)v11 + 3) )
        {
          v10[1] = (__int64)&v11[(int)v17 + 4];
          v23 = *(v10 - 2);
          if ( v19 <= v23 + 16 )
            v24 = (void **)(v23 + 8);
          else
            v24 = (void **)(v19 - 8);
          if ( **((_DWORD **)a1 + 2) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v24);
        }
        else
        {
          v10[1] = (__int64)&v11[4 * (int)v17 + 4];
        }
        goto LABEL_7;
      }
      v29 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
      LODWORD(v17) = v22 - v12 + v17;
      if ( *((_BYTE *)v11 + 3) )
      {
        if ( (int)v17 > 0 )
          goto LABEL_40;
      }
      else
      {
        if ( (int)v17 >= 0 )
          goto LABEL_40;
        LODWORD(v17) = v17 + 1;
      }
      v11 = v29;
      LODWORD(v17) = (unsigned __int16)*v29 + (_DWORD)v17;
LABEL_40:
      if ( v11 != v29 )
        goto LABEL_19;
      goto LABEL_45;
    }
    if ( v20 && *((_BYTE *)v11 + 3) )
    {
      v25 = *(v10 - 2);
      v26 = (void **)(v21 <= v25 + 16 ? v25 + 8 : v21 - 8);
      if ( **((_DWORD **)a1 + 2) != -1 )
        NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v26);
    }
    v27 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(a1);
    if ( v27 )
    {
      v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v28 = (unsigned __int16)*v11;
      v19 = *(v10 - 1);
      if ( (int)v17 <= v28 )
      {
        v19 += 16LL;
      }
      else
      {
        LODWORD(v17) = v17 - v28;
        if ( !*((_BYTE *)v11 + 3) )
          LODWORD(v17) = v17 - 1;
        v11 = (_DWORD *)v27;
        *(v10 - 1) = v19 + 16;
      }
      goto LABEL_20;
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
