/*
 * XREFs of sub_1406BDC4C @ 0x1406BDC4C
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     StringCbLengthW @ 0x14010D2B8 (StringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BDC4C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v7; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  size_t *v14; // rdx
  unsigned int j; // edx
  __int64 v16; // rax
  unsigned int *v17; // r8
  size_t v18; // rdx
  size_t v19; // r14
  unsigned int *v20; // rcx
  __int64 v21; // r15
  unsigned int v22; // eax
  size_t v23; // r14
  PVOID PoolWithTag; // rax
  PVOID v25; // rbx
  void *v26; // r15
  unsigned int *v27; // rax
  unsigned int k; // edx
  __int64 v29; // r10
  unsigned int *v30; // r8
  unsigned int v31; // ebx
  unsigned int *v32; // r10
  unsigned int m; // edx
  __int64 v34; // rax
  unsigned int *v35; // r8
  int v36; // r14d
  int v37; // edx
  unsigned int v38; // ecx
  _DWORD *v39; // rax
  int v40; // r14d
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned __int64 v44; // rdx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  size_t v47; // xmm0_8
  size_t v48; // [rsp+38h] [rbp-8h]
  size_t pcbLength; // [rsp+88h] [rbp+48h] BYREF
  int v50; // [rsp+90h] [rbp+50h] BYREF

  v50 = a3;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(const wchar_t **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = (unsigned int *)v8;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_17;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_17;
    }
    v13 = *v9;
    v14 = (size_t *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_17:
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      if ( !v13 )
        v14 = 0LL;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v48 = *v14;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v16 = *(unsigned int *)v8;
      v17 = (unsigned int *)(v8 + 2);
      if ( v8 + 2 < v8 )
        goto LABEL_36;
      v8 = (const wchar_t *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        goto LABEL_36;
    }
    v18 = *(unsigned int *)v8;
    v19 = (size_t)(v8 + 2);
    if ( v8 + 2 < v8 )
    {
LABEL_36:
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      if ( !(_DWORD)v18 )
        return (unsigned int)-1073741762;
      if ( (v18 & 1) != 0 )
        return (unsigned int)-1073741762;
      v21 = *(unsigned int *)v8;
      if ( *(_WORD *)(v19 + 2 * (v18 >> 1) - 2) || StringCbLengthW(v8 + 2, v18, &pcbLength) < 0 || pcbLength + 2 != v21 )
        return (unsigned int)-1073741762;
      v50 = pcbLength >> 1;
      pcbLength = v19;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  v22 = 2 * v50 + 2;
  if ( 2 * v50 == -2 )
    return (unsigned int)-1073741762;
  v23 = v22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x20534C53u);
  v25 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, (const void *)pcbLength, v23);
  v26 = v25;
  v20 = *(unsigned int **)(a1 + 8);
  if ( !v20 || *(_DWORD *)a1 <= 5u )
    goto LABEL_30;
  v27 = *(unsigned int **)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v29 = *v27;
    v30 = v27 + 1;
    if ( v27 + 1 < v27 )
      goto LABEL_77;
    v27 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      goto LABEL_77;
  }
  v31 = *v27;
  v32 = v27 + 1;
  if ( v27 + 1 < v27 )
    goto LABEL_77;
  if ( !v31 )
    v32 = 0LL;
  if ( *(_DWORD *)a1 <= 6u )
    goto LABEL_30;
  for ( m = 0; m < 6; ++m )
  {
    v34 = *v20;
    v35 = v20 + 1;
    if ( v20 + 1 < v20 )
      goto LABEL_77;
    v20 = (unsigned int *)((char *)v35 + v34);
    if ( (unsigned int *)((char *)v35 + v34) < v35 )
      goto LABEL_77;
  }
  if ( v20 + 1 < v20 )
    goto LABEL_77;
  if ( qword_1407473D0 )
    v36 = qword_1407473D0(v26, v32, v31);
  else
    v36 = -1073741637;
  v7 = v36;
  if ( v36 < 0 )
    goto LABEL_78;
  v37 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    goto LABEL_77;
  v38 = *(_DWORD *)(a2 + 16) + 52;
  if ( v38 < *(_DWORD *)(a2 + 16) + 48 )
    goto LABEL_77;
  v7 = v38 + v37 < v38 ? 0xC0000095 : 0;
  if ( v38 + v37 < v38 )
    goto LABEL_78;
  *(_DWORD *)(a4 + 4) = 20;
  v39 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( !v39 )
  {
    v7 = -1073741801;
    goto LABEL_78;
  }
  *(_QWORD *)(a4 + 8) = v39;
  *(_DWORD *)a4 = 0;
  v40 = v36 | 0x10000000;
  if ( &v50 )
  {
    if ( v39 + 1 < v39 )
      goto LABEL_77;
    v7 = 0;
    if ( v39 + 2 > (_DWORD *)((char *)v39 + *(unsigned int *)(a4 + 4)) )
      goto LABEL_68;
    *v39 = 4;
    v39[1] = v40;
    ++*(_DWORD *)a4;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    goto LABEL_78;
  pcbLength = v48;
  if ( !&pcbLength )
  {
LABEL_30:
    v7 = -1073741811;
    goto LABEL_78;
  }
  v41 = *(_QWORD *)(a4 + 8);
  if ( v41 )
  {
    v44 = *(_QWORD *)(a4 + 8);
    v45 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v46 = *(_DWORD *)v44 + 4;
        if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v46 < v44 )
          break;
        ++v45;
        v44 += v46;
        if ( v45 >= *(_DWORD *)a4 )
          goto LABEL_85;
      }
    }
    else
    {
LABEL_85:
      if ( v44 + 4 >= v44 )
      {
        v7 = 0;
        if ( v44 + 12 > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
LABEL_68:
          v7 = -1073741789;
          goto LABEL_78;
        }
        v47 = pcbLength;
        *(_DWORD *)v44 = 8;
        *(_QWORD *)(v44 + 4) = v47;
        ++*(_DWORD *)a4;
        goto LABEL_78;
      }
    }
  }
  else
  {
    v42 = *(_DWORD *)(a4 + 4);
    if ( v42 + 12 >= v42 )
    {
      *(_DWORD *)(a4 + 4) = v42 + 12;
      v7 = 0;
      ++*(_DWORD *)a4;
      goto LABEL_78;
    }
    *(_DWORD *)(a4 + 4) = -1;
  }
LABEL_77:
  v7 = -1073741675;
LABEL_78:
  if ( v26 )
    ExFreePoolWithTag(v26, 0x20534C53u);
  return (unsigned int)v7;
}
