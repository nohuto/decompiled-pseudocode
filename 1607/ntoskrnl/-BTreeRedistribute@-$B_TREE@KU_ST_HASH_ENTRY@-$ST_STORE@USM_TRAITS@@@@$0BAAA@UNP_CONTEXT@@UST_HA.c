/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011F748
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117A14 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14011C460 (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14021C364 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

void *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
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
  unsigned int v19; // ebx
  _DWORD *v20; // rdi
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
  v8 = *(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0 ? 1020 : 255;
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
LABEL_7:
    v12 = v33;
    v35 = (void *)(*v10 | v3);
    v13 = v32;
    v14 = (unsigned __int16)*v33;
    v15 = (unsigned __int16)*v32;
    v16 = v14 + v15;
    if ( v14 + v15 < v8 || v16 >= 2 * v8 - 1 )
      return v35;
    if ( v14 <= v15 )
    {
      v17 = (unsigned __int16)*v33;
      LODWORD(v33) = v17;
      v18 = 0;
      v20 = v32;
      v19 = (v16 >> 1) - v14;
      LODWORD(v32) = 0;
      v21 = v12;
    }
    else
    {
      v17 = 0;
      v18 = v16 >> 1;
      LODWORD(v32) = v16 >> 1;
      LODWORD(v33) = 0;
      v19 = v14 - (v16 >> 1);
      v20 = v12;
      v21 = v13;
    }
    if ( *((_BYTE *)v20 + 3) )
    {
      v5 = 4;
      v22 = (char *)&v20[v18 + 4];
      v23 = (char *)&v21[v17 + 4];
    }
    else
    {
      v22 = (char *)&v20[4 * v18 + 4];
      v23 = (char *)&v21[4 * v17 + 4];
    }
    v34 = v23;
    if ( v20 == v12 )
    {
      memmove(&v23[v19 * v5], v23, v5 * (unsigned __int16)*v21);
      v18 = (unsigned int)v32;
      v17 = (unsigned int)v33;
    }
    if ( *((_BYTE *)v20 + 3) )
    {
      v24 = v34;
      v25 = v19 * v5;
    }
    else
    {
      v27 = *v7;
      if ( v20 == v12 )
      {
        v28 = (char *)v34;
        v29 = 2LL * (v19 - 1);
        v21[2 * v29 + 4] = v27;
        *(_QWORD *)&v21[2 * v29 + 6] = *((_QWORD *)v21 + 1);
      }
      else
      {
        v30 = v17;
        v31 = (char *)v34;
        v30 *= 2LL;
        v21[2 * v30 + 4] = v27;
        *(_QWORD *)&v21[2 * v30 + 6] = *((_QWORD *)v20 + 1);
        v28 = &v31[v5];
      }
      if ( v20 == v12 )
      {
        *v7 = v20[4 * v18 + 4];
        *((_QWORD *)v21 + 1) = *(_QWORD *)&v20[4 * v18 + 6];
        v22 += v5;
      }
      else
      {
        *v7 = v20[4 * v19];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[4 * v19 + 2];
      }
      v24 = v28;
      v25 = v5 * (v19 - 1);
    }
    memmove(v24, v22, v25);
    *(_WORD *)v21 += v19;
    *(_WORD *)v20 -= v19;
    if ( v20 == v13 )
      memmove(v22, &v22[v19 * v5], v5 * (unsigned __int16)*v20);
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
    goto LABEL_7;
  return result;
}
