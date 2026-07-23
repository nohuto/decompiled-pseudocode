/*
 * XREFs of sub_1406BF57C @ 0x1406BF57C
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     StringCbLengthW @ 0x14010D2B8 (StringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BF57C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v7; // ebx
  const wchar_t *v8; // rcx
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
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // r14
  unsigned int v28; // eax
  size_t v29; // rsi
  PVOID PoolWithTag; // rax
  PVOID v31; // rbx
  unsigned int m; // ecx
  __int64 v33; // r8
  unsigned int *v34; // rdx
  size_t v35; // rcx
  const wchar_t *v36; // rsi
  unsigned int *v37; // rcx
  __int64 v38; // r14
  unsigned int v39; // eax
  size_t v40; // rsi
  PVOID v41; // rax
  PVOID v42; // rbx
  PVOID v43; // r14
  unsigned int v44; // r10d
  unsigned int *v45; // rax
  unsigned int n; // edx
  __int64 v47; // r9
  unsigned int *v48; // r8
  unsigned int v49; // esi
  unsigned int *v50; // r11
  unsigned int *v51; // rax
  unsigned int ii; // edx
  __int64 v53; // r9
  unsigned int *v54; // r8
  unsigned int v55; // ebx
  unsigned int *v56; // r9
  unsigned int jj; // edx
  __int64 v58; // rax
  unsigned int *v59; // r8
  unsigned int v60; // edx
  unsigned int *v61; // rax
  int v62; // esi
  int v63; // edx
  unsigned int v64; // ecx
  _DWORD *v65; // rax
  int v66; // esi
  __int64 v67; // r8
  unsigned int v68; // eax
  unsigned __int64 v69; // rdx
  unsigned int v70; // ecx
  unsigned int v71; // eax
  __int64 v72; // xmm0_8
  PVOID P; // [rsp+50h] [rbp-20h]
  PVOID v75; // [rsp+58h] [rbp-18h]
  size_t pcbLength; // [rsp+60h] [rbp-10h] BYREF
  __int64 v77; // [rsp+68h] [rbp-8h]
  __int64 v78; // [rsp+B8h] [rbp+48h] BYREF
  int v79; // [rsp+C0h] [rbp+50h] BYREF

  v79 = a3;
  v75 = 0LL;
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
      v77 = *v14;
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
    v15 = (unsigned int *)v8;
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
      LODWORD(v78) = *v20;
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
      v22 = *(unsigned int *)v8;
      v23 = (unsigned int *)(v8 + 2);
      if ( v8 + 2 < v8 )
        goto LABEL_51;
      v8 = (const wchar_t *)((char *)v23 + v22);
      if ( (unsigned int *)((char *)v23 + v22) < v23 )
        goto LABEL_51;
    }
    v24 = *(unsigned int *)v8;
    v25 = (size_t)(v8 + 2);
    if ( v8 + 2 < v8 )
    {
LABEL_51:
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      if ( !(_DWORD)v24 )
        return (unsigned int)-1073741762;
      if ( (v24 & 1) != 0 )
        return (unsigned int)-1073741762;
      v27 = *(unsigned int *)v8;
      if ( *(_WORD *)(v25 + 2 * (v24 >> 1) - 2) )
        return (unsigned int)-1073741762;
      if ( StringCbLengthW(v8 + 2, v24, &pcbLength) < 0 || pcbLength + 2 != v27 )
        return (unsigned int)-1073741762;
      v79 = pcbLength >> 1;
      pcbLength = v25;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  v28 = 2 * v79 + 2;
  if ( 2 * v79 == -2 )
    return (unsigned int)-1073741762;
  v29 = v28;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x20534C53u);
  v31 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, (const void *)pcbLength, v29);
  P = v31;
  v26 = *(unsigned int **)(a1 + 8);
  if ( v26 && *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v33 = *v26;
      v34 = v26 + 1;
      if ( v26 + 1 < v26 )
        goto LABEL_72;
      v26 = (unsigned int *)((char *)v34 + v33);
      if ( (unsigned int *)((char *)v34 + v33) < v34 )
        goto LABEL_72;
    }
    v35 = *v26;
    v36 = (const wchar_t *)(v26 + 1);
    if ( v26 + 1 < v26 )
    {
LABEL_72:
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      if ( !(_DWORD)v35 )
        goto LABEL_64;
      if ( (v35 & 1) != 0 )
        goto LABEL_64;
      v38 = *v26;
      if ( v36[(v35 >> 1) - 1] || StringCbLengthW(v36, v35, &pcbLength) < 0 || pcbLength + 2 != v38 )
        goto LABEL_64;
      v79 = pcbLength >> 1;
      pcbLength = (size_t)v36;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    goto LABEL_132;
  v39 = 2 * v79 + 2;
  if ( 2 * v79 != -2 )
  {
    v40 = v39;
    v41 = ExAllocatePoolWithTag(PagedPool, v39, 0x20534C53u);
    v42 = v41;
    if ( !v41 )
    {
      v7 = -1073741801;
      goto LABEL_132;
    }
    memmove(v41, (const void *)pcbLength, v40);
    v43 = v42;
    v75 = v42;
    v37 = *(unsigned int **)(a1 + 8);
    if ( v37 )
    {
      v44 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 > 7u )
      {
        v45 = *(unsigned int **)(a1 + 8);
        for ( n = 0; n < 7; ++n )
        {
          v47 = *v45;
          v48 = v45 + 1;
          if ( v45 + 1 < v45 )
            goto LABEL_131;
          v45 = (unsigned int *)((char *)v48 + v47);
          if ( (unsigned int *)((char *)v48 + v47) < v48 )
            goto LABEL_131;
        }
        v49 = *v45;
        v50 = v45 + 1;
        if ( v45 + 1 < v45 )
          goto LABEL_131;
        if ( !v49 )
          v50 = 0LL;
        if ( v44 > 8 )
        {
          v51 = *(unsigned int **)(a1 + 8);
          for ( ii = 0; ii < 8; ++ii )
          {
            v53 = *v51;
            v54 = v51 + 1;
            if ( v51 + 1 < v51 )
              goto LABEL_131;
            v51 = (unsigned int *)((char *)v54 + v53);
            if ( (unsigned int *)((char *)v54 + v53) < v54 )
              goto LABEL_131;
          }
          v55 = *v51;
          v56 = v51 + 1;
          if ( v51 + 1 < v51 )
            goto LABEL_131;
          if ( !v55 )
            v56 = 0LL;
          if ( v44 > 9 )
          {
            for ( jj = 0; jj < 9; ++jj )
            {
              v58 = *v37;
              v59 = v37 + 1;
              if ( v37 + 1 < v37 )
                goto LABEL_131;
              v37 = (unsigned int *)((char *)v59 + v58);
              if ( (unsigned int *)((char *)v59 + v58) < v59 )
                goto LABEL_131;
            }
            v60 = *v37;
            v61 = v37 + 1;
            if ( v37 + 1 < v37 )
              goto LABEL_131;
            if ( !v60 )
              v61 = 0LL;
            if ( qword_140747408 )
              v62 = qword_140747408((unsigned int)v78, P, v43, v50, v49, v56, v55, v61, v60);
            else
              v62 = -1073741637;
            v7 = v62;
            if ( v62 < 0 )
              goto LABEL_132;
            v63 = *(_DWORD *)(a2 + 32);
            if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
            {
              v64 = *(_DWORD *)(a2 + 16) + 52;
              if ( v64 >= *(_DWORD *)(a2 + 16) + 48 )
              {
                v7 = v64 + v63 < v64 ? 0xC0000095 : 0;
                if ( v64 + v63 < v64 )
                  goto LABEL_132;
                *(_DWORD *)(a4 + 4) = 20;
                v65 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
                if ( !v65 )
                {
                  v7 = -1073741801;
                  goto LABEL_132;
                }
                *(_QWORD *)(a4 + 8) = v65;
                *(_DWORD *)a4 = 0;
                v66 = v62 | 0x10000000;
                if ( &v79 )
                {
                  if ( v65 + 1 < v65 )
                    goto LABEL_123;
                  v7 = 0;
                  if ( v65 + 2 > (_DWORD *)((char *)v65 + *(unsigned int *)(a4 + 4)) )
                    goto LABEL_114;
                  *v65 = 4;
                  v65[1] = v66;
                  ++*(_DWORD *)a4;
                }
                else
                {
                  v7 = -1073741811;
                }
                if ( v7 < 0 )
                  goto LABEL_132;
                v78 = v77;
                if ( &v78 )
                {
                  v67 = *(_QWORD *)(a4 + 8);
                  if ( v67 )
                  {
                    v69 = *(_QWORD *)(a4 + 8);
                    v70 = 0;
                    if ( *(_DWORD *)a4 )
                    {
                      while ( 1 )
                      {
                        v71 = *(_DWORD *)v69 + 4;
                        if ( *(_DWORD *)v69 >= 0xFFFFFFFC || v69 + v71 < v69 )
                          break;
                        ++v70;
                        v69 += v71;
                        if ( v70 >= *(_DWORD *)a4 )
                          goto LABEL_128;
                      }
                    }
                    else
                    {
LABEL_128:
                      if ( v69 + 4 >= v69 )
                      {
                        v7 = 0;
                        if ( v69 + 12 <= v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        {
                          v72 = v78;
                          *(_DWORD *)v69 = 8;
                          *(_QWORD *)(v69 + 4) = v72;
                          ++*(_DWORD *)a4;
                          goto LABEL_132;
                        }
LABEL_114:
                        v7 = -1073741789;
                        goto LABEL_132;
                      }
                    }
                  }
                  else
                  {
                    v68 = *(_DWORD *)(a4 + 4);
                    if ( v68 + 12 >= v68 )
                    {
                      *(_DWORD *)(a4 + 4) = v68 + 12;
                      v7 = 0;
                      ++*(_DWORD *)a4;
                      goto LABEL_132;
                    }
                    *(_DWORD *)(a4 + 4) = -1;
                  }
LABEL_123:
                  v7 = -1073741675;
                  goto LABEL_132;
                }
                goto LABEL_66;
              }
            }
LABEL_131:
            v7 = -1073741675;
            goto LABEL_132;
          }
        }
      }
    }
LABEL_66:
    v7 = -1073741811;
    goto LABEL_132;
  }
LABEL_64:
  v7 = -1073741762;
LABEL_132:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v75 )
    ExFreePoolWithTag(v75, 0x20534C53u);
  return (unsigned int)v7;
}
