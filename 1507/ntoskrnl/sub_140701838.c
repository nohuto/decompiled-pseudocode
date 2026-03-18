/*
 * XREFs of sub_140701838 @ 0x140701838
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 */

__int64 __fastcall sub_140701838(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // edx
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r8
  unsigned int v12; // r10d
  __int64 *v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  _DWORD *v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int *v19; // rax
  unsigned int k; // edx
  __int64 v21; // r10
  unsigned int *v22; // r8
  unsigned int v23; // r10d
  unsigned int *v24; // r8
  unsigned int v25; // r10d
  unsigned int *v26; // rax
  unsigned int m; // edx
  __int64 v28; // r9
  unsigned int *v29; // r8
  unsigned int v30; // r14d
  _DWORD *v31; // r11
  unsigned int *v32; // rax
  unsigned int n; // edx
  __int64 v34; // r9
  unsigned int *v35; // r8
  unsigned int v36; // r9d
  _DWORD *v37; // r8
  unsigned int ii; // edx
  __int64 v39; // rax
  unsigned int *v40; // r8
  unsigned int v41; // r8d
  int *v42; // rax
  __int64 v43; // r9
  unsigned int v44; // eax
  _DWORD *v45; // r8
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // eax
  _DWORD *v49; // rax
  unsigned int j; // ecx
  unsigned int v51; // eax
  _DWORD *PoolWithTag; // rax
  unsigned int v54; // [rsp+70h] [rbp+40h]
  int v56; // [rsp+80h] [rbp+50h] BYREF

  v56 = a3;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = v7;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_16;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_16;
    }
    v12 = *v8;
    v13 = (__int64 *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_16:
      v6 = -1073741675;
    }
    else
    {
      v6 = 0;
      if ( !v12 )
        v13 = 0LL;
      if ( v12 != 8 )
        return (unsigned int)-1073741789;
      a2 = *v13;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    if ( !a2 || !qword_14077E158 )
    {
      if ( &v56 )
      {
        v14 = *(_QWORD *)(a4 + 8);
        if ( !v14 )
          goto LABEL_23;
        v16 = *(_DWORD **)(a4 + 8);
        for ( j = 0; j < *(_DWORD *)a4; v16 = (_DWORD *)((char *)v16 + v51) )
        {
          v51 = *v16 + 4;
          if ( v51 < 4 )
            goto LABEL_111;
          if ( (_DWORD *)((char *)v16 + v51) < v16 )
            return (unsigned int)-1073741675;
          ++j;
        }
LABEL_30:
        if ( v16 + 1 < v16 )
          return (unsigned int)-1073741675;
        v6 = 0;
        if ( (unsigned __int64)(v16 + 2) > v14 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v16 = 4;
        v16[1] = -2147467259;
        ++*(_DWORD *)a4;
        goto LABEL_113;
      }
LABEL_112:
      v6 = -1073741811;
LABEL_113:
      if ( v6 < 0 )
        return (unsigned int)v6;
      goto LABEL_114;
    }
    if ( a2 != qword_14077E158 )
    {
      if ( &v56 )
      {
        v14 = *(_QWORD *)(a4 + 8);
        if ( !v14 )
        {
LABEL_23:
          v15 = *(_DWORD *)(a4 + 4);
          if ( v15 + 8 < v15 )
          {
LABEL_24:
            *(_DWORD *)(a4 + 4) = -1;
            return (unsigned int)-1073741675;
          }
          *(_DWORD *)(a4 + 4) = v15 + 8;
          ++*(_DWORD *)a4;
LABEL_114:
          if ( !*(_DWORD *)(a4 + 4) )
            return (unsigned int)-1073741762;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
          if ( &v56 )
          {
            if ( PoolWithTag + 1 < PoolWithTag )
              return (unsigned int)-1073741675;
            v6 = 0;
            if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
              return (unsigned int)-1073741789;
            *PoolWithTag = 4;
            PoolWithTag[1] = -2147467259;
LABEL_123:
            ++*(_DWORD *)a4;
            return (unsigned int)v6;
          }
          return (unsigned int)-1073741811;
        }
        v16 = *(_DWORD **)(a4 + 8);
        v17 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v18 = *v16 + 4;
            if ( v18 < 4 )
              break;
            if ( (_DWORD *)((char *)v16 + v18) < v16 )
              return (unsigned int)-1073741675;
            ++v17;
            v16 = (_DWORD *)((char *)v16 + v18);
            if ( v17 >= *(_DWORD *)a4 )
              goto LABEL_30;
          }
LABEL_111:
          v6 = -1073741675;
          goto LABEL_113;
        }
        goto LABEL_30;
      }
      goto LABEL_112;
    }
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      v19 = v7;
      for ( k = 0; k < 4; ++k )
      {
        v21 = *v19;
        v22 = v19 + 1;
        if ( v19 + 1 < v19 )
          goto LABEL_45;
        v19 = (unsigned int *)((char *)v22 + v21);
        if ( (unsigned int *)((char *)v22 + v21) < v22 )
          goto LABEL_45;
      }
      v23 = *v19;
      v24 = v19 + 1;
      if ( v19 + 1 < v19 )
      {
LABEL_45:
        v6 = -1073741675;
      }
      else
      {
        v6 = 0;
        if ( !v23 )
          v24 = 0LL;
        if ( v23 != 4 )
          return (unsigned int)-1073741789;
        v54 = *v24;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( !v7 )
      return (unsigned int)-1073741811;
    v25 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 5u )
      return (unsigned int)-1073741811;
    v26 = v7;
    for ( m = 0; m < 5; ++m )
    {
      v28 = *v26;
      v29 = v26 + 1;
      if ( v26 + 1 < v26 )
        return (unsigned int)-1073741675;
      v26 = (unsigned int *)((char *)v29 + v28);
      if ( (unsigned int *)((char *)v29 + v28) < v29 )
        return (unsigned int)-1073741675;
    }
    v30 = *v26;
    v31 = v26 + 1;
    if ( v26 + 1 < v26 )
      return (unsigned int)-1073741675;
    if ( !v30 )
      v31 = 0LL;
    if ( v25 > 6 )
    {
      v32 = v7;
      for ( n = 0; n < 6; ++n )
      {
        v34 = *v32;
        v35 = v32 + 1;
        if ( v32 + 1 < v32 )
          goto LABEL_67;
        v32 = (unsigned int *)((char *)v35 + v34);
        if ( (unsigned int *)((char *)v35 + v34) < v35 )
          goto LABEL_67;
      }
      v36 = *v32;
      v37 = v32 + 1;
      if ( v32 + 1 < v32 )
      {
LABEL_67:
        v6 = -1073741675;
        goto LABEL_68;
      }
      v6 = 0;
      if ( !v36 )
        v37 = 0LL;
      if ( v36 == 4 )
      {
        LODWORD(a2) = *v37;
        goto LABEL_68;
      }
      return (unsigned int)-1073741789;
    }
    v6 = -1073741811;
LABEL_68:
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( v25 > 7 )
    {
      for ( ii = 0; ii < 7; ++ii )
      {
        v39 = *v7;
        v40 = v7 + 1;
        if ( v7 + 1 < v7 )
          goto LABEL_80;
        v7 = (unsigned int *)((char *)v40 + v39);
        if ( (unsigned int *)((char *)v40 + v39) < v40 )
          goto LABEL_80;
      }
      v41 = *v7;
      v42 = (int *)(v7 + 1);
      if ( v7 + 1 < v7 )
      {
LABEL_80:
        v6 = -1073741675;
        goto LABEL_81;
      }
      v6 = 0;
      if ( !v41 )
        v42 = 0LL;
      if ( v41 == 4 )
      {
        v56 = *v42;
        goto LABEL_81;
      }
      return (unsigned int)-1073741789;
    }
    v6 = -1073741811;
LABEL_81:
    if ( v6 < 0 )
      return (unsigned int)v6;
    v6 = sub_1406EC140(v54, v30, v31, (_DWORD)a2 != 0, v56 != 0);
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( &v56 )
    {
      v43 = *(_QWORD *)(a4 + 8);
      if ( !v43 )
      {
        v44 = *(_DWORD *)(a4 + 4);
        if ( v44 + 8 < v44 )
          goto LABEL_24;
        *(_DWORD *)(a4 + 4) = v44 + 8;
        ++*(_DWORD *)a4;
        goto LABEL_97;
      }
      v45 = *(_DWORD **)(a4 + 8);
      v46 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v47 = *v45 + 4;
          if ( v47 < 4 )
            break;
          if ( (_DWORD *)((char *)v45 + v47) < v45 )
            return (unsigned int)-1073741675;
          ++v46;
          v45 = (_DWORD *)((char *)v45 + v47);
          if ( v46 >= *(_DWORD *)a4 )
            goto LABEL_91;
        }
        v6 = -1073741675;
      }
      else
      {
LABEL_91:
        if ( v45 + 1 < v45 )
          return (unsigned int)-1073741675;
        v6 = 0;
        if ( (unsigned __int64)(v45 + 2) > v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v45 = 4;
        v45[1] = 0;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
LABEL_97:
    v48 = *(_DWORD *)(a4 + 4);
    if ( !v48 )
      return (unsigned int)-1073741762;
    v49 = ExAllocatePoolWithTag(PagedPool, v48, 0x20534C53u);
    if ( !v49 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v49;
    *(_DWORD *)a4 = 0;
    if ( !&v56 )
      return (unsigned int)-1073741811;
    if ( v49 + 1 >= v49 )
    {
      v6 = 0;
      if ( v49 + 2 > (_DWORD *)((char *)v49 + *(unsigned int *)(a4 + 4)) )
        return (unsigned int)-1073741789;
      *v49 = 4;
      v49[1] = 0;
      goto LABEL_123;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v6;
}
