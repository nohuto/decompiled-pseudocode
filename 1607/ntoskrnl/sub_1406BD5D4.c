/*
 * XREFs of sub_1406BD5D4 @ 0x1406BD5D4
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BD5D4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // r10
  unsigned int *v18; // rdx
  unsigned int v19; // edx
  unsigned int *v20; // rcx
  unsigned int v21; // r10d
  unsigned int *v22; // rax
  unsigned int k; // ecx
  __int64 v24; // r9
  unsigned int *v25; // rdx
  unsigned int v26; // r13d
  unsigned int *v27; // r15
  unsigned int *v28; // rax
  unsigned int m; // ecx
  __int64 v30; // r9
  unsigned int *v31; // rdx
  unsigned int v32; // r12d
  unsigned int *v33; // r14
  unsigned int n; // ecx
  __int64 v35; // rax
  unsigned int *v36; // rdx
  unsigned int v37; // ecx
  unsigned int *v38; // rax
  unsigned int v39; // esi
  int v40; // ebx
  PVOID v41; // rax
  int v42; // r14d
  unsigned int v43; // r15d
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // r8d
  unsigned int v49; // eax
  PVOID PoolWithTag; // rax
  int v51; // r14d
  __int64 v52; // r8
  unsigned int v53; // eax
  PVOID v54; // r14
  _DWORD *v55; // rdx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // r8
  unsigned int v59; // eax
  unsigned __int64 v60; // rdx
  unsigned int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // xmm0_8
  int v64; // r11d
  __int64 v65; // r8
  unsigned int v66; // eax
  __int64 v67; // r8
  unsigned int v68; // eax
  unsigned int *v69; // rdx
  unsigned int v70; // ecx
  unsigned int v71; // eax
  _DWORD *v72; // rdx
  unsigned int ii; // ecx
  unsigned int v74; // eax
  int v76; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h]
  __int64 v78; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v80; // [rsp+B0h] [rbp+50h] BYREF

  v80 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v80 = 0;
  P = 0LL;
  v76 = 0;
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
      v78 = *v14;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v15 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v17 = *v15;
      v18 = v15 + 1;
      if ( v15 + 1 < v15 )
        goto LABEL_28;
      v15 = (unsigned int *)((char *)v18 + v17);
      if ( (unsigned int *)((char *)v18 + v17) < v18 )
        goto LABEL_28;
    }
    v19 = *v15;
    v20 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
LABEL_28:
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
      if ( !v19 )
        v20 = 0LL;
      if ( v19 != 4 )
        return (unsigned int)-1073741789;
      v80 = *v20;
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
  v21 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 5u )
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
  if ( v21 <= 6 )
    return (unsigned int)-1073741811;
  v28 = v4;
  for ( m = 0; m < 6; ++m )
  {
    v30 = *v28;
    v31 = v28 + 1;
    if ( v28 + 1 < v28 )
      return (unsigned int)-1073741675;
    v28 = (unsigned int *)((char *)v31 + v30);
    if ( (unsigned int *)((char *)v31 + v30) < v31 )
      return (unsigned int)-1073741675;
  }
  v32 = *v28;
  v33 = v28 + 1;
  if ( v28 + 1 < v28 )
    return (unsigned int)-1073741675;
  if ( !v32 )
    v33 = 0LL;
  if ( v21 > 7 )
  {
    for ( n = 0; n < 7; ++n )
    {
      v35 = *v4;
      v36 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_59;
      v4 = (unsigned int *)((char *)v36 + v35);
      if ( (unsigned int *)((char *)v36 + v35) < v36 )
        goto LABEL_59;
    }
    v37 = *v4;
    v38 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
LABEL_59:
      v8 = -1073741675;
      goto LABEL_60;
    }
    v8 = 0;
    if ( !v37 )
      v38 = 0LL;
    if ( v37 == 4 )
    {
      v39 = *v38;
      goto LABEL_61;
    }
    return (unsigned int)-1073741789;
  }
  v8 = -1073741811;
LABEL_60:
  v39 = v80;
LABEL_61:
  if ( v8 >= 0 )
  {
    if ( v39 )
    {
      v40 = 0;
      P = ExAllocatePoolWithTag(PagedPool, v39, 0x20534C53u);
      v7 = P;
      if ( !P )
        return (unsigned int)-1073741801;
    }
    else
    {
      v40 = 1;
    }
    if ( qword_140747400 )
    {
      v41 = v7;
      if ( v40 )
        v41 = 0LL;
      v42 = qword_140747400(v80, v27, v26, v33, v32, v41, v39, &v76);
    }
    else
    {
      v42 = -1073741637;
    }
    v43 = v39 + 4;
    if ( v39 >= 0xFFFFFFFC )
    {
      v44 = v80;
      v8 = -1073741675;
    }
    else
    {
      if ( v43 >= 0xFFFFFFEC || (v44 = v39 + 32, v39 + 32 < v39 + 24) )
      {
        v8 = -1073741675;
        goto LABEL_105;
      }
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_105;
    if ( v44 >= 0xFFFFFFF8 )
    {
LABEL_104:
      v8 = -1073741675;
      goto LABEL_105;
    }
    v45 = (v44 + 15) & 0xFFFFFFF8;
    if ( v45 >= v44 + 8 )
    {
      v46 = v45 + 8;
      if ( v45 + 8 < v45 )
        goto LABEL_89;
      v8 = 0;
    }
    else
    {
      v46 = v80;
      v8 = -1073741675;
    }
    if ( v8 < 0 )
      goto LABEL_105;
    v47 = v46 + 4;
    if ( v47 >= 4 )
    {
      v48 = v47 + 4;
      if ( v47 + 4 >= v47 )
      {
        v49 = v48 + *(_DWORD *)(a2 + 16);
        if ( v49 >= v48 && v49 + 4 >= v49 )
        {
          v8 = v49 + 4 + *(_DWORD *)(a2 + 32) < v49 + 4 ? 0xC0000095 : 0;
          goto LABEL_90;
        }
      }
    }
LABEL_89:
    v8 = -1073741675;
LABEL_90:
    if ( v8 >= 0 )
    {
      if ( !a4 )
      {
        v8 = -1073741811;
        goto LABEL_105;
      }
      *(_DWORD *)(a4 + 4) = v44;
      v8 = 0;
      if ( v44 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v44, 0x20534C53u);
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
        goto LABEL_105;
      v51 = v42 | 0x10000000;
      if ( &v80 )
      {
        v52 = *(_QWORD *)(a4 + 8);
        if ( !v52 )
        {
          v53 = *(_DWORD *)(a4 + 4);
          if ( v53 + 8 < v53 )
          {
LABEL_103:
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_104;
          }
          *(_DWORD *)(a4 + 4) = v53 + 8;
          ++*(_DWORD *)a4;
          goto LABEL_119;
        }
        v55 = *(_DWORD **)(a4 + 8);
        v56 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v57 = *v55 + 4;
            if ( *v55 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v55 + v57) < v55 )
              goto LABEL_104;
            ++v56;
            v55 = (_DWORD *)((char *)v55 + v57);
            if ( v56 >= *(_DWORD *)a4 )
              goto LABEL_112;
          }
          v8 = -1073741675;
        }
        else
        {
LABEL_112:
          if ( v55 + 1 < v55 )
            goto LABEL_104;
          v8 = 0;
          if ( (unsigned __int64)(v55 + 2) > v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_114;
          *v55 = 4;
          v55[1] = v51;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 < 0 )
        goto LABEL_105;
LABEL_119:
      if ( !&v78 )
      {
        v8 = -1073741811;
        goto LABEL_132;
      }
      v58 = *(_QWORD *)(a4 + 8);
      if ( !v58 )
      {
        v59 = *(_DWORD *)(a4 + 4);
        if ( v59 + 12 >= v59 )
        {
          *(_DWORD *)(a4 + 4) = v59 + 12;
          ++*(_DWORD *)a4;
          goto LABEL_133;
        }
        goto LABEL_103;
      }
      v60 = *(_QWORD *)(a4 + 8);
      v61 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v62 = *(_DWORD *)v60 + 4;
          if ( *(_DWORD *)v60 >= 0xFFFFFFFC )
            break;
          if ( v60 + v62 < v60 )
            goto LABEL_104;
          ++v61;
          v60 += v62;
          if ( v61 >= *(_DWORD *)a4 )
            goto LABEL_127;
        }
        v8 = -1073741675;
LABEL_132:
        if ( v8 < 0 )
          goto LABEL_105;
LABEL_133:
        v54 = P;
        if ( P )
        {
          if ( !v39 )
            goto LABEL_135;
        }
        else if ( v39 )
        {
LABEL_135:
          v8 = -1073741811;
          goto LABEL_136;
        }
        v67 = *(_QWORD *)(a4 + 8);
        if ( v67 )
        {
          v69 = *(unsigned int **)(a4 + 8);
          v70 = 0;
          if ( !*(_DWORD *)a4 )
          {
LABEL_153:
            if ( v69 + 1 < v69 )
              goto LABEL_147;
            v8 = 0;
            if ( (unsigned __int64)v69 + v39 + 4 > v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_155;
            *v69 = v39;
            if ( v54 )
              memmove(v69 + 1, v54, v39);
            ++*(_DWORD *)a4;
            goto LABEL_136;
          }
          while ( 1 )
          {
            v71 = *v69 + 4;
            if ( *v69 >= 0xFFFFFFFC )
              break;
            if ( (unsigned int *)((char *)v69 + v71) < v69 )
              goto LABEL_147;
            ++v70;
            v69 = (unsigned int *)((char *)v69 + v71);
            if ( v70 >= *(_DWORD *)a4 )
              goto LABEL_153;
          }
        }
        else if ( v43 >= 4 )
        {
          v68 = *(_DWORD *)(a4 + 4);
          if ( v68 + v43 < v68 )
          {
LABEL_146:
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_147;
          }
          *(_DWORD *)(a4 + 4) = v68 + v43;
          ++*(_DWORD *)a4;
          goto LABEL_137;
        }
        v8 = -1073741675;
LABEL_136:
        if ( v8 < 0 )
          goto LABEL_106;
LABEL_137:
        v64 = v76;
        if ( !&v80 )
        {
          v8 = -1073741811;
LABEL_106:
          if ( v54 )
            ExFreePoolWithTag(v54, 0x20534C53u);
          return (unsigned int)v8;
        }
        v65 = *(_QWORD *)(a4 + 8);
        if ( !v65 )
        {
          v66 = *(_DWORD *)(a4 + 4);
          if ( v66 + 8 >= v66 )
          {
            *(_DWORD *)(a4 + 4) = v66 + 8;
            v8 = 0;
            ++*(_DWORD *)a4;
            goto LABEL_106;
          }
          goto LABEL_146;
        }
        v72 = *(_DWORD **)(a4 + 8);
        for ( ii = 0; ii < *(_DWORD *)a4; v72 = (_DWORD *)((char *)v72 + v74) )
        {
          v74 = *v72 + 4;
          if ( *v72 >= 0xFFFFFFFC || (_DWORD *)((char *)v72 + v74) < v72 )
            goto LABEL_147;
          ++ii;
        }
        if ( v72 + 1 < v72 )
        {
LABEL_147:
          v8 = -1073741675;
          goto LABEL_106;
        }
        v8 = 0;
        if ( (unsigned __int64)(v72 + 2) <= v65 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v72 = 4;
          v72[1] = v64;
          ++*(_DWORD *)a4;
          goto LABEL_106;
        }
LABEL_155:
        v8 = -1073741789;
        goto LABEL_106;
      }
LABEL_127:
      if ( v60 + 4 < v60 )
        goto LABEL_104;
      v8 = 0;
      if ( v60 + 12 <= v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        v63 = v78;
        *(_DWORD *)v60 = 8;
        *(_QWORD *)(v60 + 4) = v63;
        ++*(_DWORD *)a4;
        goto LABEL_132;
      }
LABEL_114:
      v8 = -1073741789;
    }
LABEL_105:
    v54 = P;
    goto LABEL_106;
  }
  return (unsigned int)v8;
}
