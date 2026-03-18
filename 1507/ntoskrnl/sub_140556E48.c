/*
 * XREFs of sub_140556E48 @ 0x140556E48
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140556E48(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  _DWORD *v17; // r8
  _DWORD *v18; // rax
  int v19; // esi
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  _DWORD *PoolWithTag; // rax
  int v24; // esi
  __int64 v25; // r10
  unsigned __int64 v26; // r8
  unsigned int k; // ecx
  unsigned int v28; // eax
  unsigned int v30; // eax
  _BYTE v31[56]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v32; // [rsp+48h] [rbp+10h]

  if ( !a2 || !a4 )
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
        goto LABEL_49;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_49;
    }
    v12 = *v8;
    v13 = (__int64 *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_49:
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
      if ( !v12 )
        v13 = 0LL;
      if ( v12 != 8 )
        return (unsigned int)-1073741789;
      v32 = *v13;
    }
  }
  else
  {
    v14 = -1073741811;
  }
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v16 = *v7;
        v17 = v7 + 1;
        if ( v7 + 1 < v7 )
          return (unsigned int)-1073741675;
        v7 = (_DWORD *)((char *)v17 + v16);
        if ( (_DWORD *)((char *)v17 + v16) < v17 )
          return (unsigned int)-1073741675;
      }
      v18 = v7 + 1;
      if ( v7 + 1 < v7 )
        return (unsigned int)-1073741675;
      if ( !*v7 )
        v18 = 0LL;
      v19 = qword_14077E368 ? qword_14077E368(v18) : -1073741637;
      v20 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
        return (unsigned int)-1073741675;
      v21 = *(_DWORD *)(a2 + 16) + 52;
      if ( v21 < *(_DWORD *)(a2 + 16) + 48 )
        return (unsigned int)-1073741675;
      v22 = v21 + v20;
      v14 = v21 + v20 < v21 ? 0xC0000095 : 0;
      if ( v22 < v21 )
        return v14;
      *(_DWORD *)(a4 + 4) = 20;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      v24 = v19 | 0x10000000;
      if ( v31 == (_BYTE *)-80LL )
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
        PoolWithTag[1] = v24;
        ++*(_DWORD *)a4;
      }
      if ( (v14 & 0x80000000) != 0 )
        return v14;
      if ( v31 != (_BYTE *)-72LL )
      {
        v25 = *(_QWORD *)(a4 + 8);
        if ( v25 )
        {
          v26 = *(_QWORD *)(a4 + 8);
          for ( k = 0; k < *(_DWORD *)a4; v26 += v28 )
          {
            v28 = *(_DWORD *)v26 + 4;
            if ( *(_DWORD *)v26 >= 0xFFFFFFFC || v26 + v28 < v26 )
              return (unsigned int)-1073741675;
            ++k;
          }
          if ( v26 + 4 >= v26 )
          {
            v14 = 0;
            if ( v26 + 12 > v25 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *(_DWORD *)v26 = 8;
            *(_QWORD *)(v26 + 4) = v32;
            ++*(_DWORD *)a4;
            return v14;
          }
        }
        else
        {
          v30 = *(_DWORD *)(a4 + 4);
          if ( v30 + 12 >= v30 )
          {
            *(_DWORD *)(a4 + 4) = v30 + 12;
            v14 = 0;
            ++*(_DWORD *)a4;
            return v14;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
        return (unsigned int)-1073741675;
      }
    }
    return (unsigned int)-1073741811;
  }
  return v14;
}
