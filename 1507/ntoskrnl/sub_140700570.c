/*
 * XREFs of sub_140700570 @ 0x140700570
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     StringCbLengthW @ 0x1401196B4 (StringCbLengthW.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140700570(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  __int64 *v14; // rdx
  unsigned int *v15; // rax
  unsigned int j; // edx
  __int64 v17; // r9
  unsigned int *v18; // r8
  unsigned int v19; // r8d
  _DWORD *v20; // rdx
  unsigned int k; // edx
  __int64 v22; // rax
  unsigned int *v23; // r8
  size_t v24; // rdx
  const wchar_t *v25; // r14
  unsigned int *v26; // rcx
  __int64 v27; // r15
  unsigned int v28; // eax
  size_t v29; // r14
  PVOID PoolWithTag; // rax
  PVOID v31; // rbx
  void *v32; // r15
  unsigned int v33; // r10d
  unsigned int *v34; // rax
  unsigned int m; // edx
  __int64 v36; // r9
  unsigned int *v37; // r8
  unsigned int v38; // r14d
  unsigned int *v39; // r11
  unsigned int *v40; // rax
  unsigned int n; // edx
  __int64 v42; // r9
  unsigned int *v43; // r8
  unsigned int v44; // ebx
  unsigned int *v45; // r9
  unsigned int ii; // edx
  __int64 v47; // rax
  unsigned int *v48; // r8
  unsigned int v49; // edx
  unsigned int *v50; // rax
  int v51; // r14d
  int v52; // edx
  unsigned int v53; // ecx
  _DWORD *v54; // rax
  int v55; // r14d
  __int64 v56; // r8
  unsigned int v57; // eax
  unsigned __int64 v59; // rdx
  unsigned int v60; // ecx
  unsigned int v61; // eax
  __int64 v62; // xmm0_8
  size_t pcbLength[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v64; // [rsp+50h] [rbp-10h]
  __int64 v65; // [rsp+A8h] [rbp+48h] BYREF
  int v66; // [rsp+B0h] [rbp+50h] BYREF

  v66 = a3;
  pcbLength[1] = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = v8;
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
    v14 = (__int64 *)(v9 + 1);
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
      v64 = *v14;
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
    v15 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v17 = *v15;
      v18 = v15 + 1;
      if ( v15 + 1 < v15 )
        goto LABEL_31;
      v15 = (unsigned int *)((char *)v18 + v17);
      if ( (unsigned int *)((char *)v18 + v17) < v18 )
        goto LABEL_31;
    }
    v19 = *v15;
    v20 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
LABEL_31:
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      if ( !v19 )
        v20 = 0LL;
      if ( v19 != 4 )
        return (unsigned int)-1073741789;
      LODWORD(v65) = *v20;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v8 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v22 = *v8;
      v23 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_50;
      v8 = (unsigned int *)((char *)v23 + v22);
      if ( (unsigned int *)((char *)v23 + v22) < v23 )
        goto LABEL_50;
    }
    v24 = *v8;
    v25 = (const wchar_t *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_50:
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      if ( !(_DWORD)v24 )
        return (unsigned int)-1073741762;
      if ( (v24 & 1) != 0 )
        return (unsigned int)-1073741762;
      v27 = *v8;
      if ( v25[(v24 >> 1) - 1] || StringCbLengthW(v25, v24, pcbLength) < 0 || pcbLength[0] + 2 != v27 )
        return (unsigned int)-1073741762;
      v66 = pcbLength[0] >> 1;
      pcbLength[0] = (size_t)v25;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  v28 = 2 * v66 + 2;
  if ( 2 * v66 == -2 )
    return (unsigned int)-1073741762;
  v29 = v28;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x20534C53u);
  v31 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, (const void *)pcbLength[0], v29);
  v32 = v31;
  v26 = *(unsigned int **)(a1 + 8);
  if ( !v26 )
    goto LABEL_44;
  v33 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 6u )
    goto LABEL_44;
  v34 = *(unsigned int **)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v36 = *v34;
    v37 = v34 + 1;
    if ( v34 + 1 < v34 )
      goto LABEL_101;
    v34 = (unsigned int *)((char *)v37 + v36);
    if ( (unsigned int *)((char *)v37 + v36) < v37 )
      goto LABEL_101;
  }
  v38 = *v34;
  v39 = v34 + 1;
  if ( v34 + 1 < v34 )
    goto LABEL_101;
  if ( !v38 )
    v39 = 0LL;
  if ( v33 <= 7 )
    goto LABEL_44;
  v40 = *(unsigned int **)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v42 = *v40;
    v43 = v40 + 1;
    if ( v40 + 1 < v40 )
      goto LABEL_101;
    v40 = (unsigned int *)((char *)v43 + v42);
    if ( (unsigned int *)((char *)v43 + v42) < v43 )
      goto LABEL_101;
  }
  v44 = *v40;
  v45 = v40 + 1;
  if ( v40 + 1 < v40 )
    goto LABEL_101;
  if ( !v44 )
    v45 = 0LL;
  if ( v33 <= 8 )
    goto LABEL_44;
  for ( ii = 0; ii < 8; ++ii )
  {
    v47 = *v26;
    v48 = v26 + 1;
    if ( v26 + 1 < v26 )
      goto LABEL_101;
    v26 = (unsigned int *)((char *)v48 + v47);
    if ( (unsigned int *)((char *)v48 + v47) < v48 )
      goto LABEL_101;
  }
  v49 = *v26;
  v50 = v26 + 1;
  if ( v26 + 1 < v26 )
    goto LABEL_101;
  if ( !v49 )
    v50 = 0LL;
  if ( qword_14077E3E8 )
    v51 = qword_14077E3E8((unsigned int)v65, v32, v39, v38, v45, v44, v50, v49);
  else
    v51 = -1073741637;
  v7 = v51;
  if ( v51 < 0 )
    goto LABEL_102;
  v52 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    goto LABEL_101;
  v53 = *(_DWORD *)(a2 + 16) + 52;
  if ( v53 < *(_DWORD *)(a2 + 16) + 48 )
    goto LABEL_101;
  v7 = v53 + v52 < v53 ? 0xC0000095 : 0;
  if ( v53 + v52 < v53 )
    goto LABEL_102;
  *(_DWORD *)(a4 + 4) = 20;
  v54 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( !v54 )
  {
    v7 = -1073741801;
    goto LABEL_102;
  }
  *(_QWORD *)(a4 + 8) = v54;
  *(_DWORD *)a4 = 0;
  v55 = v51 | 0x10000000;
  if ( &v66 )
  {
    if ( v54 + 1 < v54 )
      goto LABEL_101;
    v7 = 0;
    if ( v54 + 2 > (_DWORD *)((char *)v54 + *(unsigned int *)(a4 + 4)) )
      goto LABEL_92;
    *v54 = 4;
    v54[1] = v55;
    ++*(_DWORD *)a4;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    goto LABEL_102;
  v65 = v64;
  if ( !&v65 )
  {
LABEL_44:
    v7 = -1073741811;
    goto LABEL_102;
  }
  v56 = *(_QWORD *)(a4 + 8);
  if ( v56 )
  {
    v59 = *(_QWORD *)(a4 + 8);
    v60 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v61 = *(_DWORD *)v59 + 4;
        if ( *(_DWORD *)v59 >= 0xFFFFFFFC || v59 + v61 < v59 )
          break;
        ++v60;
        v59 += v61;
        if ( v60 >= *(_DWORD *)a4 )
          goto LABEL_109;
      }
    }
    else
    {
LABEL_109:
      if ( v59 + 4 >= v59 )
      {
        v7 = 0;
        if ( v59 + 12 > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
LABEL_92:
          v7 = -1073741789;
          goto LABEL_102;
        }
        v62 = v65;
        *(_DWORD *)v59 = 8;
        *(_QWORD *)(v59 + 4) = v62;
        ++*(_DWORD *)a4;
        goto LABEL_102;
      }
    }
  }
  else
  {
    v57 = *(_DWORD *)(a4 + 4);
    if ( v57 + 12 >= v57 )
    {
      *(_DWORD *)(a4 + 4) = v57 + 12;
      v7 = 0;
      ++*(_DWORD *)a4;
      goto LABEL_102;
    }
    *(_DWORD *)(a4 + 4) = -1;
  }
LABEL_101:
  v7 = -1073741675;
LABEL_102:
  if ( v32 )
    ExFreePoolWithTag(v32, 0x20534C53u);
  return (unsigned int)v7;
}
