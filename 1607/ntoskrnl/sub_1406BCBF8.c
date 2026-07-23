/*
 * XREFs of sub_1406BCBF8 @ 0x1406BCBF8
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BCBF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // r8
  unsigned int v13; // r10d
  __int64 *v14; // r8
  unsigned int j; // edx
  __int64 v16; // rax
  unsigned int *v17; // r8
  __int64 v18; // rdx
  unsigned int *v19; // rax
  int v20; // esi
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  _DWORD *PoolWithTag; // rax
  int v25; // esi
  __int64 v26; // r9
  unsigned int v27; // eax
  unsigned __int64 v29; // r8
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // xmm0_8
  __int64 v33; // r10
  unsigned int v34; // eax
  _DWORD *v35; // r9
  unsigned int k; // ecx
  unsigned int v37; // eax
  _OWORD *v38; // r8
  __int64 v39; // rcx
  _OWORD *v40; // rax
  __int128 v41; // xmm1
  _BYTE v42[32]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v43; // [rsp+20h] [rbp-138h]
  __int64 v44; // [rsp+28h] [rbp-130h]
  _BYTE v45[256]; // [rsp+30h] [rbp-128h] BYREF

  if ( !a1 || !a2 || !a4 )
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
        goto LABEL_18;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_18;
    }
    v13 = *v9;
    v14 = (__int64 *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_18:
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      if ( !v13 )
        v14 = 0LL;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v44 = *v14;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  if ( !v8 || *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v16 = *v8;
    v17 = v8 + 1;
    if ( v8 + 1 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v8;
  v19 = v8 + 1;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v18 )
    v19 = 0LL;
  if ( qword_1407473D8 )
    v20 = qword_1407473D8(v19, v18, v45, 256LL);
  else
    v20 = -1073741637;
  v7 = v20;
  if ( v20 >= 0 )
  {
    v21 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 )
      return (unsigned int)-1073741675;
    v22 = *(_DWORD *)(a2 + 16) + 308;
    if ( v22 < *(_DWORD *)(a2 + 16) + 304 )
      return (unsigned int)-1073741675;
    v23 = v22 + v21;
    v7 = v22 + v21 < v22 ? 0xC0000095 : 0;
    if ( v23 < v22 )
      return v7;
    *(_DWORD *)(a4 + 4) = 280;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x20534C53u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    v25 = v20 | 0x10000000;
    if ( v42 == (_BYTE *)-32LL )
    {
      v7 = -1073741811;
    }
    else
    {
      if ( PoolWithTag + 1 < PoolWithTag )
        return (unsigned int)-1073741675;
      v7 = 0;
      if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
        return (unsigned int)-1073741789;
      *PoolWithTag = 4;
      PoolWithTag[1] = v25;
      ++*(_DWORD *)a4;
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    v43 = v44;
    if ( v42 == (_BYTE *)-32LL )
    {
      v7 = -1073741811;
    }
    else
    {
      v26 = *(_QWORD *)(a4 + 8);
      if ( !v26 )
      {
        v27 = *(_DWORD *)(a4 + 4);
        if ( v27 + 12 < v27 )
        {
LABEL_49:
          *(_DWORD *)(a4 + 4) = -1;
          return (unsigned int)-1073741675;
        }
        *(_DWORD *)(a4 + 4) = v27 + 12;
        ++*(_DWORD *)a4;
LABEL_62:
        if ( v42 != (_BYTE *)-48LL )
        {
          v33 = *(_QWORD *)(a4 + 8);
          if ( !v33 )
          {
            v34 = *(_DWORD *)(a4 + 4);
            if ( v34 + 260 >= v34 )
            {
              *(_DWORD *)(a4 + 4) = v34 + 260;
              v7 = 0;
              ++*(_DWORD *)a4;
              return v7;
            }
            goto LABEL_49;
          }
          v35 = *(_DWORD **)(a4 + 8);
          for ( k = 0; k < *(_DWORD *)a4; v35 = (_DWORD *)((char *)v35 + v37) )
          {
            v37 = *v35 + 4;
            if ( *v35 >= 0xFFFFFFFC || (_DWORD *)((char *)v35 + v37) < v35 )
              return (unsigned int)-1073741675;
            ++k;
          }
          v38 = v35 + 1;
          if ( v35 + 1 >= v35 )
          {
            v7 = 0;
            if ( (unsigned __int64)(v35 + 65) <= v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v39 = 2LL;
              *v35 = 256;
              v40 = v45;
              do
              {
                *v38 = *v40;
                v38[1] = v40[1];
                v38[2] = v40[2];
                v38[3] = v40[3];
                v38[4] = v40[4];
                v38[5] = v40[5];
                v38[6] = v40[6];
                v38 += 8;
                v41 = v40[7];
                v40 += 8;
                *(v38 - 1) = v41;
                --v39;
              }
              while ( v39 );
              ++*(_DWORD *)a4;
              return v7;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741675;
        }
        return (unsigned int)-1073741811;
      }
      v29 = *(_QWORD *)(a4 + 8);
      v30 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v31 = *(_DWORD *)v29 + 4;
          if ( *(_DWORD *)v29 >= 0xFFFFFFFC )
            break;
          if ( v29 + v31 < v29 )
            return (unsigned int)-1073741675;
          ++v30;
          v29 += v31;
          if ( v30 >= *(_DWORD *)a4 )
            goto LABEL_56;
        }
        v7 = -1073741675;
      }
      else
      {
LABEL_56:
        if ( v29 + 4 < v29 )
          return (unsigned int)-1073741675;
        v7 = 0;
        if ( v29 + 12 > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        v32 = v43;
        *(_DWORD *)v29 = 8;
        *(_QWORD *)(v29 + 4) = v32;
        ++*(_DWORD *)a4;
      }
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    goto LABEL_62;
  }
  return v7;
}
