/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401107C4
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14010CF00 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010FD10 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140202414 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeRedistribute(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  __int64 v3; // r13
  void **v4; // r8
  __int64 v5; // rdx
  _DWORD *v6; // rsi
  void **v7; // rcx
  void **v8; // rbx
  _DWORD **v9; // rax
  unsigned __int64 v10; // r13
  _DWORD *v11; // r15
  _DWORD *v12; // r12
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  int v16; // edx
  __int64 v17; // rax
  _BYTE *v18; // rdi
  _DWORD *v19; // r14
  unsigned int v20; // ebx
  char *v21; // rbp
  void *v22; // rcx
  unsigned int v23; // r8d
  void *v25; // rax
  unsigned int v26; // ecx
  int v27; // eax
  char *v28; // r9
  __int64 v29; // rcx
  char *v30; // [rsp+20h] [rbp-58h]
  void *v31; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v32; // [rsp+88h] [rbp+10h] BYREF
  char *v33; // [rsp+90h] [rbp+18h]
  _DWORD *v34; // [rsp+98h] [rbp+20h]

  v3 = 1LL;
  v4 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = (__int64)*(v4 - 2);
  v6 = *(v4 - 1);
  if ( v6 == (_DWORD *)(v5 + 16 * ((unsigned __int16)*(_DWORD *)v5 + 1LL)) )
  {
    v6 -= 4;
    v7 = (void **)(v6 - 2);
    if ( (unsigned __int64)v6 <= v5 + 16 )
      v7 = (void **)(v5 + 8);
    v8 = (void **)&v32;
    v31 = *v4;
  }
  else
  {
    v32 = *v4;
    v7 = (void **)(v6 + 2);
    v8 = &v31;
    v3 = 0LL;
  }
  if ( a1 )
    v9 = (_DWORD **)((char *)a1 + 16);
  else
    v9 = 0LL;
  if ( **v9 == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    *v8 = *v7;
  }
  else
  {
    if ( a1 )
      a1 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( **(_DWORD **)a1 == -1 )
      v25 = *v7;
    else
      v25 = NP_CONTEXT::NpLeafRefInternal(a1, v7, 0);
    *v8 = v25;
    if ( !v25 )
      return 0LL;
  }
  v10 = (unsigned __int64)*v8 | v3;
  v11 = v31;
  v12 = v32;
  v13 = (unsigned __int16)*(_DWORD *)v31;
  v14 = (unsigned __int16)*v32;
  v15 = v14 + v13;
  if ( v14 + v13 - 255 <= 0xFD )
  {
    if ( v14 > v13 )
    {
      v26 = v15 >> 1;
      v16 = 0;
      v17 = v26;
      v20 = v14 - v26;
      v18 = v32;
      v19 = v31;
    }
    else
    {
      v16 = (unsigned __int16)*v32;
      v17 = 0LL;
      v18 = v31;
      v19 = v32;
      v20 = (v15 >> 1) - v14;
    }
    if ( v18[3] )
      v30 = &v18[16 * (unsigned int)v17];
    else
      v30 = &v18[16 * v17];
    v34 = v30 + 16;
    v21 = v30 + 16;
    v33 = (char *)&v19[4 * v16];
    v31 = v33 + 16;
    v32 = v33 + 16;
    if ( v18 == (_BYTE *)v12 )
      memmove(&v33[16 * v20 + 16], v33 + 16, 16 * (unsigned int)(unsigned __int16)*v19);
    if ( v18[3] )
    {
      v22 = v31;
      v23 = v20;
    }
    else
    {
      v27 = *v6;
      v28 = (char *)v31;
      if ( v18 == (_BYTE *)v12 )
      {
        v29 = 2LL * (v20 - 1);
        v19[2 * v29 + 4] = v27;
        *(_QWORD *)&v19[2 * v29 + 6] = *((_QWORD *)v19 + 1);
      }
      else
      {
        v28 = (char *)v31 + 16;
        *v32 = v27;
        *((_QWORD *)v33 + 3) = *((_QWORD *)v18 + 1);
      }
      if ( v18 == (_BYTE *)v12 )
      {
        v21 = v30 + 32;
        *v6 = *v34;
        *((_QWORD *)v19 + 1) = *((_QWORD *)v30 + 3);
      }
      else
      {
        *v6 = *(_DWORD *)&v18[16 * v20];
        *((_QWORD *)v18 + 1) = *(_QWORD *)&v18[16 * v20 + 8];
      }
      v23 = v20 - 1;
      v22 = v28;
    }
    memmove(v22, v21, 16 * v23);
    *(_WORD *)v19 += v20;
    *(_WORD *)v18 -= v20;
    if ( v18 == (_BYTE *)v11 )
      memmove(v21, &v21[16 * v20], 16 * (unsigned int)(unsigned __int16)*(_DWORD *)v18);
    if ( *((_BYTE *)v11 + 3) )
      *v6 = v11[4];
  }
  return v10;
}
