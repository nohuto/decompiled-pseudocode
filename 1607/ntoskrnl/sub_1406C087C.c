/*
 * XREFs of sub_1406C087C @ 0x1406C087C
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C087C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  _DWORD *v17; // r8
  _DWORD *v18; // rax
  int v19; // esi
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  _DWORD *PoolWithTag; // rax
  int v24; // esi
  __int64 v25; // r10
  unsigned int v26; // eax
  unsigned __int64 v28; // r8
  unsigned int v29; // ecx
  unsigned int v30; // eax
  _BYTE v31[56]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v32; // [rsp+48h] [rbp+10h]

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
        v32 = *v14;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    if ( v8 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v16 = *v8;
        v17 = v8 + 1;
        if ( v8 + 1 < v8 )
          return (unsigned int)-1073741675;
        v8 = (_DWORD *)((char *)v17 + v16);
        if ( (_DWORD *)((char *)v17 + v16) < v17 )
          return (unsigned int)-1073741675;
      }
      v18 = v8 + 1;
      if ( v8 + 1 < v8 )
        return (unsigned int)-1073741675;
      if ( !*v8 )
        v18 = 0LL;
      v19 = qword_140747368 ? qword_140747368(v18) : -1073741637;
      v20 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
        return (unsigned int)-1073741675;
      v21 = *(_DWORD *)(a2 + 16) + 52;
      if ( v21 < *(_DWORD *)(a2 + 16) + 48 )
        return (unsigned int)-1073741675;
      v22 = v21 + v20;
      v7 = v21 + v20 < v21 ? 0xC0000095 : 0;
      if ( v22 < v21 )
        return v7;
      *(_DWORD *)(a4 + 4) = 20;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      v24 = v19 | 0x10000000;
      if ( v31 == (_BYTE *)-80LL )
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
        PoolWithTag[1] = v24;
        ++*(_DWORD *)a4;
      }
      if ( (v7 & 0x80000000) != 0 )
        return v7;
      if ( v31 != (_BYTE *)-72LL )
      {
        v25 = *(_QWORD *)(a4 + 8);
        if ( v25 )
        {
          v28 = *(_QWORD *)(a4 + 8);
          v29 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v30 = *(_DWORD *)v28 + 4;
              if ( *(_DWORD *)v28 >= 0xFFFFFFFC || v28 + v30 < v28 )
                break;
              ++v29;
              v28 += v30;
              if ( v29 >= *(_DWORD *)a4 )
                goto LABEL_53;
            }
          }
          else
          {
LABEL_53:
            if ( v28 + 4 >= v28 )
            {
              v7 = 0;
              if ( v28 + 12 <= v25 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v28 = 8;
                *(_QWORD *)(v28 + 4) = v32;
                ++*(_DWORD *)a4;
                return v7;
              }
              return (unsigned int)-1073741789;
            }
          }
        }
        else
        {
          v26 = *(_DWORD *)(a4 + 4);
          if ( v26 + 12 >= v26 )
          {
            *(_DWORD *)(a4 + 4) = v26 + 12;
            v7 = 0;
            ++*(_DWORD *)a4;
            return v7;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
        return (unsigned int)-1073741675;
      }
    }
  }
  return (unsigned int)-1073741811;
}
