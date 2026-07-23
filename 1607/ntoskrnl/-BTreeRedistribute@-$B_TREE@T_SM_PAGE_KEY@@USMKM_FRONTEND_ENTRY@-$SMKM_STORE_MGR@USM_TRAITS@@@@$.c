/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011ED0C
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117FAC (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011B6EC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned int v4; // ebp
  _DWORD *v5; // r8
  _DWORD *v6; // rdx
  _DWORD *v7; // rsi
  unsigned int v8; // r9d
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // r12
  _DWORD *v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  _DWORD *v19; // rbx
  unsigned int v20; // edi
  _DWORD *v21; // r14
  char *v22; // r15
  char *v23; // r13
  size_t v24; // r8
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+10h]
  _DWORD *v31; // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v29 = a1;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = 16;
  v5 = *(_DWORD **)v3;
  v6 = *(_DWORD **)(v3 - 16);
  v7 = *(_DWORD **)(v3 - 8);
  v8 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v7 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v7 -= 4;
    v9 = (__int64 *)(v7 - 2);
    if ( v7 <= v6 + 4 )
      v9 = (__int64 *)(v6 + 2);
    v10 = &v31;
    v29 = v5;
  }
  else
  {
    v31 = *(_DWORD **)v3;
    v9 = (__int64 *)(v7 + 2);
    v10 = &v29;
    v2 = 0LL;
  }
  v11 = *v9;
  *v10 = v11;
  v12 = v29;
  v13 = v31;
  v32 = v11 | v2;
  v14 = (unsigned __int16)*v29;
  v15 = (unsigned __int16)*v31;
  v16 = v15 + v14;
  if ( v15 + v14 >= v8 && v16 < 2 * v8 - 1 )
  {
    if ( v15 > v14 )
    {
      v17 = 0;
      v18 = v16 >> 1;
      LODWORD(v29) = v16 >> 1;
      v30 = 0;
      v20 = v15 - (v16 >> 1);
      v19 = v31;
      v21 = v12;
    }
    else
    {
      v17 = (unsigned __int16)*v31;
      v30 = v17;
      v18 = 0;
      v19 = v29;
      v20 = (v16 >> 1) - v15;
      LODWORD(v29) = 0;
      v21 = v31;
    }
    if ( *((_BYTE *)v19 + 3) )
    {
      v4 = 8;
      v22 = (char *)&v19[2 * v18 + 4];
      v23 = (char *)&v21[2 * v17 + 4];
    }
    else
    {
      v22 = (char *)&v19[4 * v18 + 4];
      v23 = (char *)&v21[4 * v17 + 4];
    }
    if ( v19 == v31 )
    {
      memmove(&v23[v20 * v4], v23, v4 * (unsigned __int16)*v21);
      v13 = v31;
      v18 = (unsigned int)v29;
      v17 = v30;
    }
    if ( *((_BYTE *)v19 + 3) )
    {
      v24 = v20 * v4;
    }
    else
    {
      v26 = *v7;
      if ( v19 == v13 )
      {
        v27 = 2LL * (v20 - 1);
        v21[2 * v27 + 4] = v26;
        *(_QWORD *)&v21[2 * v27 + 6] = *((_QWORD *)v21 + 1);
      }
      else
      {
        v28 = 2LL * v17;
        v21[2 * v28 + 4] = v26;
        *(_QWORD *)&v21[2 * v28 + 6] = *((_QWORD *)v19 + 1);
        v23 += v4;
      }
      if ( v19 == v13 )
      {
        *v7 = v19[4 * v18 + 4];
        *((_QWORD *)v21 + 1) = *(_QWORD *)&v19[4 * v18 + 6];
        v22 += v4;
      }
      else
      {
        *v7 = v19[4 * v20];
        *((_QWORD *)v19 + 1) = *(_QWORD *)&v19[4 * v20 + 2];
      }
      v24 = v4 * (v20 - 1);
    }
    memmove(v23, v22, v24);
    *(_WORD *)v21 += v20;
    *(_WORD *)v19 -= v20;
    if ( v19 == v12 )
      memmove(v22, &v22[v20 * v4], v4 * (unsigned __int16)*v19);
    if ( *((_BYTE *)v12 + 3) )
      *v7 = v12[4];
  }
  return v32;
}
