/*
 * XREFs of sub_1406BCFBC @ 0x1406BCFBC
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BCFBC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID v7; // r11
  signed int v8; // ebx
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  __int64 *v14; // rcx
  unsigned int v15; // r10d
  unsigned int *v16; // rax
  unsigned int j; // ecx
  __int64 v18; // r9
  unsigned int *v19; // rdx
  unsigned int v20; // r13d
  unsigned int *v21; // r15
  unsigned int *v22; // rax
  unsigned int k; // ecx
  __int64 v24; // r9
  unsigned int *v25; // rdx
  unsigned int v26; // r12d
  unsigned int *v27; // r14
  unsigned int m; // ecx
  __int64 v29; // rax
  unsigned int *v30; // rdx
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  unsigned int v33; // esi
  int v34; // ebx
  PVOID v35; // rax
  int v36; // r14d
  unsigned int v37; // r15d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // r8d
  unsigned int v43; // eax
  PVOID PoolWithTag; // rax
  int v45; // r14d
  __int64 v46; // r8
  unsigned int v47; // eax
  PVOID v48; // r14
  _DWORD *v49; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  __int64 v52; // r8
  unsigned int v53; // eax
  unsigned __int64 v54; // rdx
  unsigned int v55; // ecx
  unsigned int v56; // eax
  __int64 v57; // xmm0_8
  unsigned int v58; // r11d
  __int64 v59; // r8
  unsigned int v60; // eax
  __int64 v61; // r8
  unsigned int v62; // eax
  unsigned int *v63; // rdx
  unsigned int v64; // ecx
  unsigned int v65; // eax
  _DWORD *v66; // rdx
  unsigned int n; // ecx
  unsigned int v68; // eax
  __int64 v70; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h]
  __int64 v72; // [rsp+50h] [rbp-10h]
  unsigned int v74; // [rsp+B0h] [rbp+50h] BYREF

  v74 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  P = 0LL;
  v74 = 0;
  v7 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_14;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_14;
    }
    v13 = *v9;
    v14 = (__int64 *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_14:
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
      if ( !v13 )
        v14 = 0LL;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v72 = *v14;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( !v4 )
    return (unsigned int)-1073741811;
  v15 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v16 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v18 = *v16;
    v19 = v16 + 1;
    if ( v16 + 1 < v16 )
      return (unsigned int)-1073741675;
    v16 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  v20 = *v16;
  v21 = v16 + 1;
  if ( v16 + 1 < v16 )
    return (unsigned int)-1073741675;
  if ( !v20 )
    v21 = 0LL;
  if ( v15 <= 5 )
    return (unsigned int)-1073741811;
  v22 = v4;
  for ( k = 0; k < 5; ++k )
  {
    v24 = *v22;
    v25 = v22 + 1;
    if ( v22 + 1 < v22 )
      return (unsigned int)-1073741675;
    v22 = (unsigned int *)((char *)v25 + v24);
    if ( (unsigned int *)((char *)v25 + v24) < v25 )
      return (unsigned int)-1073741675;
  }
  v26 = *v22;
  v27 = v22 + 1;
  if ( v22 + 1 < v22 )
    return (unsigned int)-1073741675;
  if ( !v26 )
    v27 = 0LL;
  if ( v15 > 6 )
  {
    for ( m = 0; m < 6; ++m )
    {
      v29 = *v4;
      v30 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_45;
      v4 = (unsigned int *)((char *)v30 + v29);
      if ( (unsigned int *)((char *)v30 + v29) < v30 )
        goto LABEL_45;
    }
    v31 = *v4;
    v32 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
LABEL_45:
      v8 = -1073741675;
      goto LABEL_46;
    }
    v8 = 0;
    if ( !v31 )
      v32 = 0LL;
    if ( v31 == 4 )
    {
      v33 = *v32;
      goto LABEL_47;
    }
    return (unsigned int)-1073741789;
  }
  v8 = -1073741811;
LABEL_46:
  v33 = v74;
LABEL_47:
  if ( v8 >= 0 )
  {
    if ( v33 )
    {
      v34 = 0;
      P = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
      v7 = P;
      if ( !P )
        return (unsigned int)-1073741801;
    }
    else
    {
      v34 = 1;
    }
    if ( qword_1407473F8 )
    {
      v35 = v7;
      if ( v34 )
        v35 = 0LL;
      v36 = qword_1407473F8(v21, v20, v27, v26, v35, v33, &v74);
    }
    else
    {
      v36 = -1073741637;
    }
    v37 = v33 + 4;
    if ( v33 >= 0xFFFFFFFC )
    {
      v38 = v74;
      v8 = -1073741675;
    }
    else
    {
      if ( v37 >= 0xFFFFFFEC || (v38 = v33 + 32, v33 + 32 < v33 + 24) )
      {
        v8 = -1073741675;
        goto LABEL_91;
      }
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_91;
    if ( v38 >= 0xFFFFFFF8 )
    {
LABEL_90:
      v8 = -1073741675;
      goto LABEL_91;
    }
    v39 = (v38 + 15) & 0xFFFFFFF8;
    if ( v39 >= v38 + 8 )
    {
      v40 = v39 + 8;
      if ( v39 + 8 < v39 )
        goto LABEL_75;
      v8 = 0;
    }
    else
    {
      v40 = v74;
      v8 = -1073741675;
    }
    if ( v8 < 0 )
      goto LABEL_91;
    v41 = v40 + 4;
    if ( v41 >= 4 )
    {
      v42 = v41 + 4;
      if ( v41 + 4 >= v41 )
      {
        v43 = v42 + *(_DWORD *)(a2 + 16);
        if ( v43 >= v42 && v43 + 4 >= v43 )
        {
          v8 = v43 + 4 + *(_DWORD *)(a2 + 32) < v43 + 4 ? 0xC0000095 : 0;
          goto LABEL_76;
        }
      }
    }
LABEL_75:
    v8 = -1073741675;
LABEL_76:
    if ( v8 >= 0 )
    {
      if ( !a4 )
      {
        v8 = -1073741811;
        goto LABEL_91;
      }
      *(_DWORD *)(a4 + 4) = v38;
      v8 = 0;
      if ( v38 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v38, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = -1073741762;
      }
      if ( v8 < 0 )
        goto LABEL_91;
      v45 = v36 | 0x10000000;
      if ( &v70 )
      {
        v46 = *(_QWORD *)(a4 + 8);
        if ( !v46 )
        {
          v47 = *(_DWORD *)(a4 + 4);
          if ( v47 + 8 < v47 )
          {
LABEL_89:
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_90;
          }
          *(_DWORD *)(a4 + 4) = v47 + 8;
          ++*(_DWORD *)a4;
          goto LABEL_105;
        }
        v49 = *(_DWORD **)(a4 + 8);
        v50 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v51 = *v49 + 4;
            if ( *v49 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v49 + v51) < v49 )
              goto LABEL_90;
            ++v50;
            v49 = (_DWORD *)((char *)v49 + v51);
            if ( v50 >= *(_DWORD *)a4 )
              goto LABEL_98;
          }
          v8 = -1073741675;
        }
        else
        {
LABEL_98:
          if ( v49 + 1 < v49 )
            goto LABEL_90;
          v8 = 0;
          if ( (unsigned __int64)(v49 + 2) > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_100;
          *v49 = 4;
          v49[1] = v45;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 < 0 )
        goto LABEL_91;
LABEL_105:
      v70 = v72;
      if ( !&v70 )
      {
        v8 = -1073741811;
        goto LABEL_118;
      }
      v52 = *(_QWORD *)(a4 + 8);
      if ( !v52 )
      {
        v53 = *(_DWORD *)(a4 + 4);
        if ( v53 + 12 >= v53 )
        {
          *(_DWORD *)(a4 + 4) = v53 + 12;
          ++*(_DWORD *)a4;
          goto LABEL_119;
        }
        goto LABEL_89;
      }
      v54 = *(_QWORD *)(a4 + 8);
      v55 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v56 = *(_DWORD *)v54 + 4;
          if ( *(_DWORD *)v54 >= 0xFFFFFFFC )
            break;
          if ( v54 + v56 < v54 )
            goto LABEL_90;
          ++v55;
          v54 += v56;
          if ( v55 >= *(_DWORD *)a4 )
            goto LABEL_113;
        }
        v8 = -1073741675;
LABEL_118:
        if ( v8 < 0 )
          goto LABEL_91;
LABEL_119:
        v48 = P;
        if ( P )
        {
          if ( !v33 )
            goto LABEL_121;
        }
        else if ( v33 )
        {
LABEL_121:
          v8 = -1073741811;
          goto LABEL_122;
        }
        v61 = *(_QWORD *)(a4 + 8);
        if ( v61 )
        {
          v63 = *(unsigned int **)(a4 + 8);
          v64 = 0;
          if ( !*(_DWORD *)a4 )
          {
LABEL_139:
            if ( v63 + 1 < v63 )
              goto LABEL_133;
            v8 = 0;
            if ( (unsigned __int64)v63 + v33 + 4 > v61 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_141;
            *v63 = v33;
            if ( v48 )
              memmove(v63 + 1, v48, v33);
            ++*(_DWORD *)a4;
            goto LABEL_122;
          }
          while ( 1 )
          {
            v65 = *v63 + 4;
            if ( *v63 >= 0xFFFFFFFC )
              break;
            if ( (unsigned int *)((char *)v63 + v65) < v63 )
              goto LABEL_133;
            ++v64;
            v63 = (unsigned int *)((char *)v63 + v65);
            if ( v64 >= *(_DWORD *)a4 )
              goto LABEL_139;
          }
        }
        else if ( v37 >= 4 )
        {
          v62 = *(_DWORD *)(a4 + 4);
          if ( v62 + v37 < v62 )
          {
LABEL_132:
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_133;
          }
          *(_DWORD *)(a4 + 4) = v62 + v37;
          ++*(_DWORD *)a4;
          goto LABEL_123;
        }
        v8 = -1073741675;
LABEL_122:
        if ( v8 < 0 )
          goto LABEL_92;
LABEL_123:
        v58 = v74;
        if ( !&v70 )
        {
          v8 = -1073741811;
LABEL_92:
          if ( v48 )
            ExFreePoolWithTag(v48, 0x20534C53u);
          return (unsigned int)v8;
        }
        v59 = *(_QWORD *)(a4 + 8);
        if ( !v59 )
        {
          v60 = *(_DWORD *)(a4 + 4);
          if ( v60 + 8 >= v60 )
          {
            *(_DWORD *)(a4 + 4) = v60 + 8;
            v8 = 0;
            ++*(_DWORD *)a4;
            goto LABEL_92;
          }
          goto LABEL_132;
        }
        v66 = *(_DWORD **)(a4 + 8);
        for ( n = 0; n < *(_DWORD *)a4; v66 = (_DWORD *)((char *)v66 + v68) )
        {
          v68 = *v66 + 4;
          if ( *v66 >= 0xFFFFFFFC || (_DWORD *)((char *)v66 + v68) < v66 )
            goto LABEL_133;
          ++n;
        }
        if ( v66 + 1 < v66 )
        {
LABEL_133:
          v8 = -1073741675;
          goto LABEL_92;
        }
        v8 = 0;
        if ( (unsigned __int64)(v66 + 2) <= v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v66 = 4;
          v66[1] = v58;
          ++*(_DWORD *)a4;
          goto LABEL_92;
        }
LABEL_141:
        v8 = -1073741789;
        goto LABEL_92;
      }
LABEL_113:
      if ( v54 + 4 < v54 )
        goto LABEL_90;
      v8 = 0;
      if ( v54 + 12 <= v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        v57 = v70;
        *(_DWORD *)v54 = 8;
        *(_QWORD *)(v54 + 4) = v57;
        ++*(_DWORD *)a4;
        goto LABEL_118;
      }
LABEL_100:
      v8 = -1073741789;
    }
LABEL_91:
    v48 = P;
    goto LABEL_92;
  }
  return (unsigned int)v8;
}
