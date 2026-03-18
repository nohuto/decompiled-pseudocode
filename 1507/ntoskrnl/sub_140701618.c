/*
 * XREFs of sub_140701618 @ 0x140701618
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     sub_140261FA8 @ 0x140261FA8 (sub_140261FA8.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140701618(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // edx
  unsigned int *v7; // rcx
  unsigned int v8; // r9d
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // r8
  unsigned int v13; // edx
  __int128 *v14; // r8
  unsigned int j; // edx
  __int64 v16; // rax
  unsigned int *v17; // r9
  unsigned int v18; // r9d
  unsigned int *v19; // rax
  __int64 v20; // r9
  unsigned int v21; // eax
  _DWORD *v22; // r8
  unsigned int v23; // ecx
  unsigned int v24; // eax
  _DWORD *PoolWithTag; // rax
  _BYTE v27[40]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v7;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  v13 = *v9;
  v14 = (__int128 *)(v9 + 1);
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  if ( !v13 )
    v14 = 0LL;
  if ( v13 != 32 )
    return (unsigned int)-1073741811;
  if ( v8 > 4 )
  {
    for ( j = 0; j < 4; ++j )
    {
      v16 = *v7;
      v17 = v7 + 1;
      if ( v7 + 1 < v7 )
        goto LABEL_26;
      v7 = (unsigned int *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        goto LABEL_26;
    }
    v18 = *v7;
    v19 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
LABEL_26:
      v6 = -1073741675;
      goto LABEL_27;
    }
    v6 = 0;
    if ( !v18 )
      v19 = 0LL;
    if ( v18 == 4 )
    {
      a3 = *v19;
      goto LABEL_27;
    }
    return (unsigned int)-1073741789;
  }
  v6 = -1073741811;
LABEL_27:
  if ( v6 >= 0 )
  {
    v6 = sub_140261FA8(v14, a3);
    if ( v6 >= 0 )
    {
      if ( v27 == (_BYTE *)-64LL )
      {
        v6 = -1073741811;
      }
      else
      {
        v20 = *(_QWORD *)(a4 + 8);
        if ( !v20 )
        {
          v21 = *(_DWORD *)(a4 + 4);
          if ( v21 + 8 >= v21 )
          {
            *(_DWORD *)(a4 + 4) = v21 + 8;
            ++*(_DWORD *)a4;
            goto LABEL_45;
          }
          *(_DWORD *)(a4 + 4) = -1;
          return (unsigned int)-1073741675;
        }
        v22 = *(_DWORD **)(a4 + 8);
        v23 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v24 = *v22 + 4;
            if ( *v22 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v22 + v24) < v22 )
              return (unsigned int)-1073741675;
            ++v23;
            v22 = (_DWORD *)((char *)v22 + v24);
            if ( v23 >= *(_DWORD *)a4 )
              goto LABEL_39;
          }
          v6 = -1073741675;
        }
        else
        {
LABEL_39:
          if ( v22 + 1 < v22 )
            return (unsigned int)-1073741675;
          v6 = 0;
          if ( (unsigned __int64)(v22 + 2) > v20 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *v22 = 4;
          v22[1] = 0;
          ++*(_DWORD *)a4;
        }
      }
      if ( v6 < 0 )
        return (unsigned int)v6;
LABEL_45:
      if ( !*(_DWORD *)(a4 + 4) )
        return (unsigned int)-1073741762;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      if ( v27 != (_BYTE *)-64LL )
      {
        if ( PoolWithTag + 1 >= PoolWithTag )
        {
          v6 = 0;
          if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
          {
            *PoolWithTag = 4;
            PoolWithTag[1] = 0;
            ++*(_DWORD *)a4;
            return (unsigned int)v6;
          }
          return (unsigned int)-1073741789;
        }
        return (unsigned int)-1073741675;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v6;
}
