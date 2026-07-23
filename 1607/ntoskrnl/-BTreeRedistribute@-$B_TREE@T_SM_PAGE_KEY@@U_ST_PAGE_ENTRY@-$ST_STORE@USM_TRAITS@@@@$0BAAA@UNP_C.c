/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140115C1C
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117BD4 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011AD14 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14021C364 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

void *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r8
  unsigned int v5; // r15d
  __int64 v6; // rdx
  _DWORD *v7; // r14
  unsigned int v8; // edi
  void **v9; // rcx
  _QWORD *v10; // rbx
  _DWORD **v11; // rax
  _DWORD *v12; // r13
  _DWORD *v13; // r12
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  _DWORD *v19; // rdi
  unsigned int v20; // ebx
  _DWORD *v21; // rsi
  char *v22; // rbp
  char *v23; // rdx
  void *v24; // rcx
  size_t v25; // r8
  void *result; // rax
  int v27; // eax
  char *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  char *v31; // r9
  _DWORD *v32; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v33; // [rsp+78h] [rbp+10h] BYREF
  void *v34; // [rsp+80h] [rbp+18h]
  void *v35; // [rsp+88h] [rbp+20h]

  v3 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = 16;
  v6 = *(_QWORD *)(v4 - 16);
  v7 = *(_DWORD **)(v4 - 8);
  v8 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0) + 255;
  if ( v7 == (_DWORD *)(v6 + 16 * ((unsigned __int16)*(_DWORD *)v6 + 1LL)) )
  {
    v7 -= 4;
    v9 = (void **)(v7 - 2);
    if ( (unsigned __int64)v7 <= v6 + 16 )
      v9 = (void **)(v6 + 8);
    v10 = &v33;
    v32 = *(_DWORD **)v4;
  }
  else
  {
    v33 = *(_DWORD **)v4;
    v9 = (void **)(v7 + 2);
    v10 = &v32;
    v3 = 0LL;
  }
  if ( a1 )
    v11 = (_DWORD **)((char *)a1 + 16);
  else
    v11 = 0LL;
  if ( **v11 == -1 || *(_BYTE *)(v6 + 2) != 2 )
  {
    *v10 = *v9;
LABEL_9:
    v12 = v33;
    v35 = (void *)(*v10 | v3);
    v13 = v32;
    v14 = (unsigned __int16)*v33;
    v15 = (unsigned __int16)*v32;
    v16 = v14 + v15;
    if ( v14 + v15 < v8 || v16 >= 2 * v8 - 1 )
      return v35;
    if ( v14 > v15 )
    {
      v17 = 0;
      v18 = v16 >> 1;
      LODWORD(v32) = v16 >> 1;
      LODWORD(v33) = 0;
      v20 = v14 - (v16 >> 1);
      v19 = v12;
      v21 = v13;
    }
    else
    {
      v17 = (unsigned __int16)*v33;
      LODWORD(v33) = v17;
      v18 = 0;
      v19 = v32;
      v20 = (v16 >> 1) - v14;
      LODWORD(v32) = 0;
      v21 = v12;
    }
    if ( *((_BYTE *)v19 + 3) )
    {
      v5 = 8;
      v22 = (char *)&v19[2 * v18 + 4];
      v23 = (char *)&v21[2 * v17 + 4];
    }
    else
    {
      v22 = (char *)&v19[4 * v18 + 4];
      v23 = (char *)&v21[4 * v17 + 4];
    }
    v34 = v23;
    if ( v19 == v12 )
    {
      memmove(&v23[v20 * v5], v23, v5 * (unsigned __int16)*v21);
      v18 = (unsigned int)v32;
      v17 = (unsigned int)v33;
    }
    if ( *((_BYTE *)v19 + 3) )
    {
      v24 = v34;
      v25 = v20 * v5;
    }
    else
    {
      v27 = *v7;
      if ( v19 == v12 )
      {
        v28 = (char *)v34;
        v29 = 2LL * (v20 - 1);
        v21[2 * v29 + 4] = v27;
        *(_QWORD *)&v21[2 * v29 + 6] = *((_QWORD *)v21 + 1);
      }
      else
      {
        v30 = v17;
        v31 = (char *)v34;
        v30 *= 2LL;
        v21[2 * v30 + 4] = v27;
        *(_QWORD *)&v21[2 * v30 + 6] = *((_QWORD *)v19 + 1);
        v28 = &v31[v5];
      }
      if ( v19 == v12 )
      {
        *v7 = v19[4 * v18 + 4];
        *((_QWORD *)v21 + 1) = *(_QWORD *)&v19[4 * v18 + 6];
        v22 += v5;
      }
      else
      {
        *v7 = v19[4 * v20];
        *((_QWORD *)v19 + 1) = *(_QWORD *)&v19[4 * v20 + 2];
      }
      v24 = v28;
      v25 = v5 * (v20 - 1);
    }
    memmove(v24, v22, v25);
    *(_WORD *)v21 += v20;
    *(_WORD *)v19 -= v20;
    if ( v19 == v13 )
      memmove(v22, &v22[v20 * v5], v5 * (unsigned __int16)*v19);
    result = v35;
    if ( *((_BYTE *)v13 + 3) )
      *v7 = v13[4];
    return result;
  }
  if ( a1 )
    a1 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
  if ( **(_DWORD **)a1 == -1 )
    result = *v9;
  else
    result = NP_CONTEXT::NpLeafRefInternal(a1, v9, 0);
  *v10 = result;
  if ( result )
    goto LABEL_9;
  return result;
}
