/*
 * XREFs of sub_1406FFC40 @ 0x1406FFC40
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     sub_140261F50 @ 0x140261F50 (sub_140261F50.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406FFC40(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // edx
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r9
  unsigned int v12; // r10d
  __int64 *v13; // r9
  unsigned int j; // edx
  __int64 v15; // rax
  unsigned int *v16; // r8
  unsigned int v17; // edx
  int v18; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned __int64 v23; // r8
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // r11d
  __int64 v27; // r9
  unsigned int v28; // eax
  _DWORD *v29; // r8
  unsigned int v30; // ecx
  unsigned int v31; // eax
  _BYTE v32[56]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+40h] [rbp+8h]
  int v34; // [rsp+50h] [rbp+18h] BYREF

  v34 = a3;
  if ( a1 && a4 )
  {
    v7 = *(unsigned int **)(a1 + 8);
    if ( v7 && *(_DWORD *)a1 > 3u )
    {
      v8 = v7;
      for ( i = 0; i < 3; ++i )
      {
        v10 = *v8;
        v11 = v8 + 1;
        if ( v8 + 1 < v8 )
          goto LABEL_17;
        v8 = (unsigned int *)((char *)v11 + v10);
        if ( (unsigned int *)((char *)v11 + v10) < v11 )
          goto LABEL_17;
      }
      v12 = *v8;
      v13 = (__int64 *)(v8 + 1);
      if ( v8 + 1 < v8 )
      {
LABEL_17:
        v6 = -1073741675;
      }
      else
      {
        v6 = 0;
        if ( !v12 )
          v13 = 0LL;
        if ( v12 != 8 )
          return (unsigned int)-1073741789;
        v33 = *v13;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( !v7 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v15 = *v7;
      v16 = v7 + 1;
      if ( v7 + 1 < v7 )
        return (unsigned int)-1073741675;
      v7 = (unsigned int *)((char *)v16 + v15);
      if ( (unsigned int *)((char *)v16 + v15) < v16 )
        return (unsigned int)-1073741675;
    }
    v17 = *v7;
    v18 = (_DWORD)v7 + 4;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    if ( !v17 )
      v18 = 0;
    if ( v17 != 32 )
      return (unsigned int)-1073741811;
    v6 = sub_140261F50(v18, &v34);
    if ( v6 < 0 )
      return (unsigned int)v6;
    *(_DWORD *)(a4 + 4) = 28;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    if ( v32 == (_BYTE *)-72LL )
    {
      v6 = -1073741811;
    }
    else
    {
      if ( PoolWithTag + 1 < PoolWithTag )
        return (unsigned int)-1073741675;
      v6 = 0;
      if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
        return (unsigned int)-1073741789;
      *PoolWithTag = 4;
      PoolWithTag[1] = 0;
      ++*(_DWORD *)a4;
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( v32 == (_BYTE *)-72LL )
    {
      v6 = -1073741811;
    }
    else
    {
      v20 = *(_QWORD *)(a4 + 8);
      if ( !v20 )
      {
        v21 = *(_DWORD *)(a4 + 4);
        if ( v21 + 12 < v21 )
        {
LABEL_43:
          *(_DWORD *)(a4 + 4) = -1;
          return (unsigned int)-1073741675;
        }
        *(_DWORD *)(a4 + 4) = v21 + 12;
        ++*(_DWORD *)a4;
LABEL_56:
        v26 = v34;
        if ( v32 != (_BYTE *)-80LL )
        {
          v27 = *(_QWORD *)(a4 + 8);
          if ( !v27 )
          {
            v28 = *(_DWORD *)(a4 + 4);
            if ( v28 + 8 >= v28 )
            {
              *(_DWORD *)(a4 + 4) = v28 + 8;
              v6 = 0;
              ++*(_DWORD *)a4;
              return (unsigned int)v6;
            }
            goto LABEL_43;
          }
          v29 = *(_DWORD **)(a4 + 8);
          v30 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v31 = *v29 + 4;
              if ( *v29 >= 0xFFFFFFFC || (_DWORD *)((char *)v29 + v31) < v29 )
                break;
              ++v30;
              v29 = (_DWORD *)((char *)v29 + v31);
              if ( v30 >= *(_DWORD *)a4 )
                goto LABEL_64;
            }
          }
          else
          {
LABEL_64:
            if ( v29 + 1 >= v29 )
            {
              v6 = 0;
              if ( (unsigned __int64)(v29 + 2) <= v27 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v29 = 4;
                v29[1] = v26;
                ++*(_DWORD *)a4;
                return (unsigned int)v6;
              }
              return (unsigned int)-1073741789;
            }
          }
          return (unsigned int)-1073741675;
        }
        return (unsigned int)-1073741811;
      }
      v23 = *(_QWORD *)(a4 + 8);
      v24 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v25 = *(_DWORD *)v23 + 4;
          if ( *(_DWORD *)v23 >= 0xFFFFFFFC )
            break;
          if ( v23 + v25 < v23 )
            return (unsigned int)-1073741675;
          ++v24;
          v23 += v25;
          if ( v24 >= *(_DWORD *)a4 )
            goto LABEL_50;
        }
        v6 = -1073741675;
      }
      else
      {
LABEL_50:
        if ( v23 + 4 < v23 )
          return (unsigned int)-1073741675;
        v6 = 0;
        if ( v23 + 12 > v20 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *(_DWORD *)v23 = 8;
        *(_QWORD *)(v23 + 4) = v33;
        ++*(_DWORD *)a4;
      }
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_56;
  }
  return (unsigned int)-1073741811;
}
