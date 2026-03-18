/*
 * XREFs of sub_140409274 @ 0x140409274
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140409274(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r8
  unsigned int v12; // r10d
  __int64 *v13; // r8
  unsigned int v14; // edx
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
  unsigned __int64 v27; // r8
  unsigned int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // xmm0_8
  __int64 v31; // r10
  _DWORD *v32; // r9
  unsigned int k; // ecx
  unsigned int v34; // eax
  _OWORD *v35; // r8
  __int64 v36; // rcx
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  unsigned int v40; // eax
  unsigned int v41; // eax
  _BYTE v42[32]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v43; // [rsp+20h] [rbp-138h]
  __int64 v44; // [rsp+28h] [rbp-130h]
  _BYTE v45[256]; // [rsp+30h] [rbp-128h] BYREF

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
        goto LABEL_64;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_64;
    }
    v12 = *v8;
    v13 = (__int64 *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_64:
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
      if ( !v12 )
        v13 = 0LL;
      if ( v12 != 8 )
        return (unsigned int)-1073741789;
      v44 = *v13;
    }
  }
  else
  {
    v14 = -1073741811;
  }
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( !v7 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v16 = *v7;
      v17 = v7 + 1;
      if ( v7 + 1 < v7 )
        return (unsigned int)-1073741675;
      v7 = (unsigned int *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        return (unsigned int)-1073741675;
    }
    v18 = *v7;
    v19 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    if ( !(_DWORD)v18 )
      v19 = 0LL;
    if ( qword_14077E3C0 )
      v20 = qword_14077E3C0(v19, v18, v45, 256LL);
    else
      v20 = -1073741637;
    v14 = v20;
    if ( v20 < 0 )
      return v14;
    v21 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 )
      return (unsigned int)-1073741675;
    v22 = *(_DWORD *)(a2 + 16) + 308;
    if ( v22 < *(_DWORD *)(a2 + 16) + 304 )
      return (unsigned int)-1073741675;
    v23 = v22 + v21;
    v14 = v22 + v21 < v22 ? 0xC0000095 : 0;
    if ( v23 < v22 )
      return v14;
    *(_DWORD *)(a4 + 4) = 280;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x20534C53u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    v25 = v20 | 0x10000000;
    if ( v42 == (_BYTE *)-32LL )
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
      PoolWithTag[1] = v25;
      ++*(_DWORD *)a4;
    }
    if ( (v14 & 0x80000000) != 0 )
      return v14;
    v43 = v44;
    if ( v42 == (_BYTE *)-32LL )
    {
      v14 = -1073741811;
    }
    else
    {
      v26 = *(_QWORD *)(a4 + 8);
      if ( !v26 )
      {
        v40 = *(_DWORD *)(a4 + 4);
        if ( v40 + 12 < v40 )
          goto LABEL_70;
        *(_DWORD *)(a4 + 4) = v40 + 12;
        ++*(_DWORD *)a4;
LABEL_47:
        if ( v42 == (_BYTE *)-48LL )
          return (unsigned int)-1073741811;
        v31 = *(_QWORD *)(a4 + 8);
        if ( v31 )
        {
          v32 = *(_DWORD **)(a4 + 8);
          for ( k = 0; k < *(_DWORD *)a4; v32 = (_DWORD *)((char *)v32 + v34) )
          {
            v34 = *v32 + 4;
            if ( *v32 >= 0xFFFFFFFC || (_DWORD *)((char *)v32 + v34) < v32 )
              return (unsigned int)-1073741675;
            ++k;
          }
          v35 = v32 + 1;
          if ( v32 + 1 >= v32 )
          {
            v14 = 0;
            if ( (unsigned __int64)(v32 + 65) > v31 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            v36 = 2LL;
            *v32 = 256;
            v37 = v45;
            do
            {
              *v35 = *v37;
              v35[1] = v37[1];
              v35[2] = v37[2];
              v35[3] = v37[3];
              v35[4] = v37[4];
              v35[5] = v37[5];
              v35[6] = v37[6];
              v35 += 8;
              v38 = v37[7];
              v37 += 8;
              *(v35 - 1) = v38;
              --v36;
            }
            while ( v36 );
            ++*(_DWORD *)a4;
            return v14;
          }
          return (unsigned int)-1073741675;
        }
        v41 = *(_DWORD *)(a4 + 4);
        if ( v41 + 260 >= v41 )
        {
          *(_DWORD *)(a4 + 4) = v41 + 260;
          v14 = 0;
          ++*(_DWORD *)a4;
          return v14;
        }
LABEL_70:
        *(_DWORD *)(a4 + 4) = -1;
        return (unsigned int)-1073741675;
      }
      v27 = *(_QWORD *)(a4 + 8);
      v28 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v29 = *(_DWORD *)v27 + 4;
          if ( *(_DWORD *)v27 >= 0xFFFFFFFC )
            break;
          if ( v27 + v29 < v27 )
            return (unsigned int)-1073741675;
          ++v28;
          v27 += v29;
          if ( v28 >= *(_DWORD *)a4 )
            goto LABEL_43;
        }
        v14 = -1073741675;
      }
      else
      {
LABEL_43:
        if ( v27 + 4 < v27 )
          return (unsigned int)-1073741675;
        v14 = 0;
        if ( v27 + 12 > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        v30 = v43;
        *(_DWORD *)v27 = 8;
        *(_QWORD *)(v27 + 4) = v30;
        ++*(_DWORD *)a4;
      }
    }
    if ( (v14 & 0x80000000) != 0 )
      return v14;
    goto LABEL_47;
  }
  return v14;
}
