/*
 * XREFs of sub_1406C0F88 @ 0x1406C0F88
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C0F88(__int64 a1, __int64 a2, int a3, __int64 a4)
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
  unsigned int *v31; // r11
  unsigned int *v32; // rax
  unsigned int n; // edx
  unsigned int *v34; // r8
  _DWORD *v35; // r8
  unsigned int ii; // edx
  __int64 v37; // rax
  unsigned int *v38; // r8
  unsigned int v39; // r8d
  int *v40; // rax
  __int64 v41; // r9
  unsigned int v42; // eax
  _DWORD *v43; // r8
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // eax
  _DWORD *v47; // rax
  unsigned int j; // ecx
  unsigned int v49; // eax
  _DWORD *PoolWithTag; // rax
  unsigned int v52; // [rsp+70h] [rbp+40h]
  int v54; // [rsp+80h] [rbp+50h] BYREF

  v54 = a3;
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
    if ( !a2 || !qword_140747160 )
    {
      if ( &v54 )
      {
        v14 = *(_QWORD *)(a4 + 8);
        if ( !v14 )
          goto LABEL_23;
        v16 = *(_DWORD **)(a4 + 8);
        for ( j = 0; j < *(_DWORD *)a4; v16 = (_DWORD *)((char *)v16 + v49) )
        {
          v49 = *v16 + 4;
          if ( v49 < 4 )
            goto LABEL_111;
          if ( (_DWORD *)((char *)v16 + v49) < v16 )
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
    if ( a2 != qword_140747160 )
    {
      if ( &v54 )
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
          if ( &v54 )
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
        v52 = *v24;
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
        v28 = *v32;
        v34 = v32 + 1;
        if ( v32 + 1 < v32 )
          goto LABEL_67;
        v32 = (unsigned int *)((char *)v34 + v28);
        if ( (unsigned int *)((char *)v34 + v28) < v34 )
          goto LABEL_67;
      }
      v28 = *v32;
      v35 = v32 + 1;
      if ( v32 + 1 < v32 )
      {
LABEL_67:
        v6 = -1073741675;
        goto LABEL_68;
      }
      v6 = 0;
      if ( !(_DWORD)v28 )
        v35 = 0LL;
      if ( (_DWORD)v28 == 4 )
      {
        LODWORD(a2) = *v35;
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
        v37 = *v7;
        v38 = v7 + 1;
        if ( v7 + 1 < v7 )
          goto LABEL_80;
        v7 = (unsigned int *)((char *)v38 + v37);
        if ( (unsigned int *)((char *)v38 + v37) < v38 )
          goto LABEL_80;
      }
      v39 = *v7;
      v40 = (int *)(v7 + 1);
      if ( v7 + 1 < v7 )
      {
LABEL_80:
        v6 = -1073741675;
        goto LABEL_81;
      }
      v6 = 0;
      if ( !v39 )
        v40 = 0LL;
      if ( v39 == 4 )
      {
        v54 = *v40;
        goto LABEL_81;
      }
      return (unsigned int)-1073741789;
    }
    v6 = -1073741811;
LABEL_81:
    if ( v6 < 0 )
      return (unsigned int)v6;
    LOBYTE(v28) = (_DWORD)a2 != 0;
    v6 = qword_140747448(v52, v30, v31, v28, v54 != 0);
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( &v54 )
    {
      v41 = *(_QWORD *)(a4 + 8);
      if ( !v41 )
      {
        v42 = *(_DWORD *)(a4 + 4);
        if ( v42 + 8 < v42 )
          goto LABEL_24;
        *(_DWORD *)(a4 + 4) = v42 + 8;
        ++*(_DWORD *)a4;
        goto LABEL_97;
      }
      v43 = *(_DWORD **)(a4 + 8);
      v44 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v45 = *v43 + 4;
          if ( v45 < 4 )
            break;
          if ( (_DWORD *)((char *)v43 + v45) < v43 )
            return (unsigned int)-1073741675;
          ++v44;
          v43 = (_DWORD *)((char *)v43 + v45);
          if ( v44 >= *(_DWORD *)a4 )
            goto LABEL_91;
        }
        v6 = -1073741675;
      }
      else
      {
LABEL_91:
        if ( v43 + 1 < v43 )
          return (unsigned int)-1073741675;
        v6 = 0;
        if ( (unsigned __int64)(v43 + 2) > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v43 = 4;
        v43[1] = 0;
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
    v46 = *(_DWORD *)(a4 + 4);
    if ( !v46 )
      return (unsigned int)-1073741762;
    v47 = ExAllocatePoolWithTag(PagedPool, v46, 0x20534C53u);
    if ( !v47 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v47;
    *(_DWORD *)a4 = 0;
    if ( !&v54 )
      return (unsigned int)-1073741811;
    if ( v47 + 1 >= v47 )
    {
      v6 = 0;
      if ( v47 + 2 > (_DWORD *)((char *)v47 + *(unsigned int *)(a4 + 4)) )
        return (unsigned int)-1073741789;
      *v47 = 4;
      v47[1] = 0;
      goto LABEL_123;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v6;
}
