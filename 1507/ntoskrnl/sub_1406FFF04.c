/*
 * XREFs of sub_1406FFF04 @ 0x1406FFF04
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406FFF04(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // r8
  unsigned int v13; // r10d
  __int64 *v14; // r8
  unsigned int v15; // r10d
  unsigned int *v16; // rax
  unsigned int j; // edx
  __int64 v18; // r9
  unsigned int *v19; // r8
  unsigned int v20; // r11d
  unsigned int *v21; // r9
  unsigned int k; // edx
  __int64 v23; // rax
  unsigned int *v24; // r8
  unsigned int v25; // r8d
  unsigned int *v26; // rax
  int v27; // esi
  int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  _DWORD *PoolWithTag; // rax
  int v32; // esi
  __int64 v33; // r10
  unsigned int v34; // eax
  unsigned __int64 v36; // r8
  unsigned int v37; // ecx
  unsigned int v38; // eax
  _BYTE v39[72]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+58h] [rbp+10h]

  if ( a2 && a4 )
  {
    v8 = *(unsigned int **)(a1 + 8);
    if ( v8 && *(_DWORD *)a1 > 3u )
    {
      v9 = v8;
      for ( i = 0; i < 3; ++i )
      {
        v11 = *v9;
        v12 = v9 + 1;
        if ( v9 + 1 < v9 )
          goto LABEL_17;
        v9 = (unsigned int *)((char *)v12 + v11);
        if ( (unsigned int *)((char *)v12 + v11) < v12 )
          goto LABEL_17;
      }
      v13 = *v9;
      v14 = (__int64 *)(v9 + 1);
      if ( v9 + 1 < v9 )
      {
LABEL_17:
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
        if ( !v13 )
          v14 = 0LL;
        if ( v13 != 8 )
          return (unsigned int)-1073741789;
        v40 = *v14;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    if ( !v8 )
      return (unsigned int)-1073741811;
    v15 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v16 = v8;
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
    if ( v15 > 5 )
    {
      for ( k = 0; k < 5; ++k )
      {
        v23 = *v8;
        v24 = v8 + 1;
        if ( v8 + 1 < v8 )
          goto LABEL_40;
        v8 = (unsigned int *)((char *)v24 + v23);
        if ( (unsigned int *)((char *)v24 + v23) < v24 )
          goto LABEL_40;
      }
      v25 = *v8;
      v26 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
LABEL_40:
        v7 = -1073741675;
        goto LABEL_41;
      }
      v7 = 0;
      if ( !v25 )
        v26 = 0LL;
      if ( v25 == 4 )
      {
        a3 = *v26;
        goto LABEL_41;
      }
      return (unsigned int)-1073741789;
    }
    v7 = -1073741811;
LABEL_41:
    if ( (v7 & 0x80000000) == 0 )
    {
      if ( qword_14077E3F8 )
        v27 = qword_14077E3F8(v21, v20, a3);
      else
        v27 = -1073700223;
      v28 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
        return (unsigned int)-1073741675;
      v29 = *(_DWORD *)(a2 + 16) + 52;
      if ( v29 < *(_DWORD *)(a2 + 16) + 48 )
        return (unsigned int)-1073741675;
      v30 = v29 + v28;
      v7 = v29 + v28 < v29 ? 0xC0000095 : 0;
      if ( v30 < v29 )
        return v7;
      *(_DWORD *)(a4 + 4) = 20;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      v32 = v27 | 0x10000000;
      if ( v39 == (_BYTE *)-96LL )
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
        PoolWithTag[1] = v32;
        ++*(_DWORD *)a4;
      }
      if ( (v7 & 0x80000000) != 0 )
        return v7;
      if ( v39 != (_BYTE *)-88LL )
      {
        v33 = *(_QWORD *)(a4 + 8);
        if ( v33 )
        {
          v36 = *(_QWORD *)(a4 + 8);
          v37 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v38 = *(_DWORD *)v36 + 4;
              if ( *(_DWORD *)v36 >= 0xFFFFFFFC || v36 + v38 < v36 )
                break;
              ++v37;
              v36 += v38;
              if ( v37 >= *(_DWORD *)a4 )
                goto LABEL_67;
            }
          }
          else
          {
LABEL_67:
            if ( v36 + 4 >= v36 )
            {
              v7 = 0;
              if ( v36 + 12 <= v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v36 = 8;
                *(_QWORD *)(v36 + 4) = v40;
                ++*(_DWORD *)a4;
                return v7;
              }
              return (unsigned int)-1073741789;
            }
          }
        }
        else
        {
          v34 = *(_DWORD *)(a4 + 4);
          if ( v34 + 12 >= v34 )
          {
            *(_DWORD *)(a4 + 4) = v34 + 12;
            v7 = 0;
            ++*(_DWORD *)a4;
            return v7;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
        return (unsigned int)-1073741675;
      }
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
