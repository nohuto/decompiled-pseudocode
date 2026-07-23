/*
 * XREFs of SPCallServerHandleClepKdf @ 0x1404C4E60
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleClepKdf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r8
  unsigned int v12; // r10d
  __int64 *v13; // r8
  unsigned int v14; // edx
  unsigned int v15; // r11d
  unsigned int *v16; // rax
  unsigned int j; // edx
  __int64 v18; // r9
  unsigned int *v19; // r8
  unsigned int v20; // ebp
  unsigned int *v21; // rsi
  unsigned int *v22; // rax
  unsigned int k; // edx
  __int64 v24; // r9
  _DWORD *v25; // r8
  _DWORD *v26; // r10
  unsigned int m; // edx
  __int64 v28; // rax
  unsigned int *v29; // r8
  unsigned int v30; // r8d
  unsigned int *v31; // rax
  int v32; // esi
  int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  _DWORD *PoolWithTag; // rax
  int v37; // esi
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int64 v42; // xmm0_8
  __int64 v43; // r10
  unsigned __int64 v44; // r8
  unsigned int n; // ecx
  unsigned int v46; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  _QWORD v50[5]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+28h] [rbp-80h]
  _OWORD *v52; // [rsp+30h] [rbp-78h]
  int v53; // [rsp+38h] [rbp-70h]
  __int64 v54; // [rsp+40h] [rbp-68h]
  __int64 v55; // [rsp+48h] [rbp-60h]
  _OWORD v56[2]; // [rsp+50h] [rbp-58h] BYREF

  if ( !a1 || !a2 || !a4 )
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
        goto LABEL_78;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_78;
    }
    v12 = *v8;
    v13 = (__int64 *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_78:
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
      if ( !v12 )
        v13 = 0LL;
      if ( v12 != 8 )
        return (unsigned int)-1073741789;
      v55 = *v13;
    }
  }
  else
  {
    v14 = -1073741811;
  }
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( !v7 )
      return (unsigned int)-1073741811;
    v15 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v16 = v7;
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
    v22 = v7;
    for ( k = 0; k < 5; ++k )
    {
      v24 = *v22;
      v25 = v22 + 1;
      if ( v22 + 1 < v22 )
        return (unsigned int)-1073741675;
      v22 = (_DWORD *)((char *)v25 + v24);
      if ( (_DWORD *)((char *)v25 + v24) < v25 )
        return (unsigned int)-1073741675;
    }
    v26 = v22 + 1;
    if ( v22 + 1 < v22 )
      return (unsigned int)-1073741675;
    if ( !*v22 )
      v26 = 0LL;
    if ( v15 <= 6 )
      return (unsigned int)-1073741811;
    for ( m = 0; m < 6; ++m )
    {
      v28 = *v7;
      v29 = v7 + 1;
      if ( v7 + 1 < v7 )
        return (unsigned int)-1073741675;
      v7 = (unsigned int *)((char *)v29 + v28);
      if ( (unsigned int *)((char *)v29 + v28) < v29 )
        return (unsigned int)-1073741675;
    }
    v30 = *v7;
    v31 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    if ( !v30 )
      v31 = 0LL;
    if ( qword_1407473E0 )
    {
      v53 = 32;
      v52 = v56;
      v51 = v30;
      v50[4] = v31;
      v32 = qword_1407473E0(v21, v20, v26);
    }
    else
    {
      v32 = -1073741637;
    }
    v14 = v32;
    if ( v32 >= 0 )
    {
      v33 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 )
        return (unsigned int)-1073741675;
      v34 = *(_DWORD *)(a2 + 16) + 84;
      if ( v34 < *(_DWORD *)(a2 + 16) + 80 )
        return (unsigned int)-1073741675;
      v35 = v34 + v33;
      v14 = v34 + v33 < v34 ? 0xC0000095 : 0;
      if ( v35 < v34 )
        return v14;
      *(_DWORD *)(a4 + 4) = 56;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      v37 = v32 | 0x10000000;
      if ( v50 == (_QWORD *)-64LL )
      {
        v14 = -1073741811;
      }
      else
      {
        if ( PoolWithTag + 1 < PoolWithTag )
          return (unsigned int)-1073741675;
        v14 = 0;
        if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
          return (unsigned int)-1073741789;
        *PoolWithTag = 4;
        PoolWithTag[1] = v37;
        ++*(_DWORD *)a4;
      }
      if ( (v14 & 0x80000000) != 0 )
        return v14;
      v54 = v55;
      if ( v50 == (_QWORD *)-64LL )
      {
        v14 = -1073741811;
        goto LABEL_62;
      }
      v38 = *(_QWORD *)(a4 + 8);
      if ( !v38 )
      {
        v48 = *(_DWORD *)(a4 + 4);
        if ( v48 + 12 < v48 )
          goto LABEL_84;
        *(_DWORD *)(a4 + 4) = v48 + 12;
        ++*(_DWORD *)a4;
LABEL_63:
        if ( v50 == (_QWORD *)-80LL )
          return (unsigned int)-1073741811;
        v43 = *(_QWORD *)(a4 + 8);
        if ( v43 )
        {
          v44 = *(_QWORD *)(a4 + 8);
          for ( n = 0; n < *(_DWORD *)a4; v44 += v46 )
          {
            v46 = *(_DWORD *)v44 + 4;
            if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v46 < v44 )
              return (unsigned int)-1073741675;
            ++n;
          }
          if ( v44 + 4 < v44 )
            return (unsigned int)-1073741675;
          v14 = 0;
          if ( v44 + 36 <= v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v44 = 32;
            *(_OWORD *)(v44 + 4) = v56[0];
            *(_OWORD *)(v44 + 20) = v56[1];
            ++*(_DWORD *)a4;
            return v14;
          }
          return (unsigned int)-1073741789;
        }
        v49 = *(_DWORD *)(a4 + 4);
        if ( v49 + 36 >= v49 )
        {
          *(_DWORD *)(a4 + 4) = v49 + 36;
          v14 = 0;
          ++*(_DWORD *)a4;
          return v14;
        }
LABEL_84:
        *(_DWORD *)(a4 + 4) = -1;
        return (unsigned int)-1073741675;
      }
      v39 = *(_QWORD *)(a4 + 8);
      v40 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v41 = *(_DWORD *)v39 + 4;
          if ( *(_DWORD *)v39 >= 0xFFFFFFFC )
            break;
          if ( v39 + v41 < v39 )
            return (unsigned int)-1073741675;
          ++v40;
          v39 += v41;
          if ( v40 >= *(_DWORD *)a4 )
            goto LABEL_59;
        }
        v14 = -1073741675;
LABEL_62:
        if ( (v14 & 0x80000000) != 0 )
          return v14;
        goto LABEL_63;
      }
LABEL_59:
      if ( v39 + 4 < v39 )
        return (unsigned int)-1073741675;
      v14 = 0;
      if ( v39 + 12 <= v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        v42 = v54;
        *(_DWORD *)v39 = 8;
        *(_QWORD *)(v39 + 4) = v42;
        ++*(_DWORD *)a4;
        goto LABEL_62;
      }
      return (unsigned int)-1073741789;
    }
  }
  return v14;
}
