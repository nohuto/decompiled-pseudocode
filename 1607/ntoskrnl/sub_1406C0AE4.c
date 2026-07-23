/*
 * XREFs of sub_1406C0AE4 @ 0x1406C0AE4
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     StringCbLengthW @ 0x14010D2B8 (StringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C0AE4(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // ebx
  const wchar_t *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // r8
  unsigned int v12; // r8d
  size_t *v13; // rdx
  unsigned int j; // edx
  __int64 v15; // rax
  unsigned int *v16; // r8
  size_t v17; // rdx
  size_t v18; // rdi
  unsigned int *v19; // rax
  int v20; // r12d
  __int64 v21; // r14
  unsigned int v22; // eax
  size_t v23; // rdi
  PVOID PoolWithTag; // rax
  PVOID v25; // rbx
  unsigned int k; // ecx
  __int64 v27; // r8
  unsigned int *v28; // rdx
  size_t v29; // rcx
  const wchar_t *v30; // rdi
  int v31; // edi
  __int64 v32; // r14
  unsigned int v33; // eax
  size_t v34; // rdi
  PVOID v35; // rax
  PVOID v36; // rbx
  _DWORD *v37; // rax
  int v38; // edi
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned int m; // ecx
  unsigned int v43; // eax
  size_t v44; // xmm0_8
  PVOID P; // [rsp+20h] [rbp-20h]
  PVOID v47; // [rsp+28h] [rbp-18h]
  size_t v48; // [rsp+30h] [rbp-10h]
  size_t pcbLength; // [rsp+80h] [rbp+40h] BYREF
  int v50; // [rsp+90h] [rbp+50h] BYREF

  v50 = a3;
  if ( !a1 || !a2 || !a4 )
  {
    v6 = -1073741811;
    goto LABEL_91;
  }
  v7 = *(const wchar_t **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = (unsigned int *)v7;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_18;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_18;
    }
    v12 = *v8;
    v13 = (size_t *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_18:
      v6 = -1073741675;
      goto LABEL_19;
    }
    v6 = 0;
    if ( !v12 )
      v13 = 0LL;
    if ( v12 == 8 )
    {
      v48 = *v13;
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  v6 = -1073741811;
LABEL_19:
  if ( v6 < 0 )
    goto LABEL_91;
  if ( v7 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v15 = *(unsigned int *)v7;
      v16 = (unsigned int *)(v7 + 2);
      if ( v7 + 2 < v7 )
        goto LABEL_38;
      v7 = (const wchar_t *)((char *)v16 + v15);
      if ( (unsigned int *)((char *)v16 + v15) < v16 )
        goto LABEL_38;
    }
    v17 = *(unsigned int *)v7;
    v18 = (size_t)(v7 + 2);
    if ( v7 + 2 < v7 )
    {
LABEL_38:
      v6 = -1073741675;
      goto LABEL_39;
    }
    v6 = 0;
    if ( !(_DWORD)v17 )
      goto LABEL_29;
    if ( (v17 & 1) != 0 )
      goto LABEL_29;
    v21 = *(unsigned int *)v7;
    if ( *(_WORD *)(v18 + 2 * (v17 >> 1) - 2) )
      goto LABEL_29;
    if ( StringCbLengthW(v7 + 2, v17, &pcbLength) < 0 || pcbLength + 2 != v21 )
    {
      v6 = -1073741762;
      goto LABEL_91;
    }
    v50 = pcbLength >> 1;
    pcbLength = v18;
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_39:
  if ( v6 < 0 )
    goto LABEL_91;
  v22 = 2 * v50 + 2;
  if ( 2 * v50 == -2 )
  {
LABEL_29:
    v6 = -1073741762;
    goto LABEL_91;
  }
  v23 = v22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x20534C53u);
  v25 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v6 = -1073741801;
    goto LABEL_91;
  }
  memmove(PoolWithTag, (const void *)pcbLength, v23);
  P = v25;
  v19 = *(unsigned int **)(a1 + 8);
  v20 = v50;
  if ( v19 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v27 = *v19;
      v28 = v19 + 1;
      if ( v19 + 1 < v19 )
        goto LABEL_60;
      v19 = (unsigned int *)((char *)v28 + v27);
      if ( (unsigned int *)((char *)v28 + v27) < v28 )
        goto LABEL_60;
    }
    v29 = *v19;
    v30 = (const wchar_t *)(v19 + 1);
    if ( v19 + 1 < v19 )
    {
LABEL_60:
      v6 = -1073741675;
      goto LABEL_61;
    }
    v6 = 0;
    if ( (_DWORD)v29 )
    {
      if ( (v29 & 1) == 0 )
      {
        v32 = *v19;
        if ( !v30[(v29 >> 1) - 1] && StringCbLengthW(v30, v29, &pcbLength) >= 0 && pcbLength + 2 == v32 )
        {
          v50 = pcbLength >> 1;
          pcbLength = (size_t)v30;
          goto LABEL_61;
        }
      }
    }
    goto LABEL_51;
  }
  v6 = -1073741811;
LABEL_61:
  if ( v6 >= 0 )
  {
    v33 = 2 * v50 + 2;
    if ( 2 * v50 == -2 )
    {
LABEL_51:
      v6 = -1073741762;
      goto LABEL_91;
    }
    v34 = v33;
    v35 = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
    v36 = v35;
    if ( !v35 )
    {
      v6 = -1073741801;
      goto LABEL_91;
    }
    memmove(v35, (const void *)pcbLength, v34);
    v47 = v36;
    v31 = qword_140747458((unsigned int)(2 * v20 + 2), P, (unsigned int)(2 * v50 + 2), v36);
    if ( v31 >= 0 )
    {
      v31 = qword_140747410 ? qword_140747410(P) : -1073741637;
      if ( v31 == -1073741198 )
        v31 = 0;
    }
    *(_DWORD *)(a4 + 4) = 20;
    v37 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
    if ( !v37 )
    {
      v6 = -1073741801;
      goto LABEL_91;
    }
    *(_QWORD *)(a4 + 8) = v37;
    *(_DWORD *)a4 = 0;
    v38 = v31 | 0x10000000;
    if ( &v50 )
    {
      if ( v37 + 1 < v37 )
        goto LABEL_82;
      v6 = 0;
      if ( v37 + 2 > (_DWORD *)((char *)v37 + *(unsigned int *)(a4 + 4)) )
        goto LABEL_16;
      *v37 = 4;
      v37[1] = v38;
      ++*(_DWORD *)a4;
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      goto LABEL_91;
    pcbLength = v48;
    if ( &pcbLength )
    {
      v39 = *(_QWORD *)(a4 + 8);
      if ( !v39 )
      {
        v40 = *(_DWORD *)(a4 + 4);
        if ( v40 + 12 >= v40 )
        {
          *(_DWORD *)(a4 + 4) = v40 + 12;
          v6 = 0;
          ++*(_DWORD *)a4;
          goto LABEL_91;
        }
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_82;
      }
      v41 = *(_QWORD *)(a4 + 8);
      for ( m = 0; m < *(_DWORD *)a4; v41 += v43 )
      {
        v43 = *(_DWORD *)v41 + 4;
        if ( *(_DWORD *)v41 >= 0xFFFFFFFC || v41 + v43 < v41 )
          goto LABEL_82;
        ++m;
      }
      if ( v41 + 4 >= v41 )
      {
        v6 = 0;
        if ( v41 + 12 <= v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v44 = pcbLength;
          *(_DWORD *)v41 = 8;
          *(_QWORD *)(v41 + 4) = v44;
          ++*(_DWORD *)a4;
          goto LABEL_91;
        }
LABEL_16:
        v6 = -1073741789;
        goto LABEL_91;
      }
LABEL_82:
      v6 = -1073741675;
      goto LABEL_91;
    }
    v6 = -1073741811;
  }
LABEL_91:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v47 )
    ExFreePoolWithTag(v47, 0x20534C53u);
  return (unsigned int)v6;
}
