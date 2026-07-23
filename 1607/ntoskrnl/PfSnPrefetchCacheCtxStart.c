/*
 * XREFs of PfSnPrefetchCacheCtxStart @ 0x1405792E4
 * Callers:
 *     PfSnPrefetchCacheEntryGet @ 0x1403EA154 (PfSnPrefetchCacheEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnPrefetchCacheCtxStart(__int64 a1)
{
  __int64 *PoolWithTag; // rax
  unsigned int v3; // r10d
  char *v4; // r9
  __int64 *v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // r11
  int v10; // eax
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  __int64 v14; // r14
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // [rsp+38h] [rbp+10h]

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x66506343u);
  v3 = 0;
  v4 = (char *)PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = PoolWithTag;
    v6 = 0LL;
    v7 = 32LL;
    if ( PoolWithTag >= PoolWithTag + 32 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        ++v6;
        *v5++ = a1 | 1;
      }
      while ( v6 < v7 );
    }
    v8 = 0;
    v9 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v14 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v15 = *(_QWORD **)(v14 + 8LL * v8);
          if ( ((unsigned __int8)v15 & 1) != 0 )
            break;
          *(_QWORD *)(v14 + 8LL * v8) = *v15;
          v17 = v9 & v15[1];
          v16 = (HIBYTE(v17)
               + 37
               * (BYTE6(v17)
                + 37
                * (BYTE5(v17)
                 + 37
                 * (BYTE4(v17) + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((_BYTE)v17 - 53)))))))) & 0x1F;
          *v15 = PoolWithTag[v16];
          PoolWithTag[v16] = (__int64)v15;
        }
        ++v8;
      }
      while ( v8 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v10 = *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v4;
    v11 = (_QWORD *)((unsigned __int64)(v4 + 263) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_DWORD *)(a1 + 4) = v10 | 0x400;
    v12 = &v11[15 * ((unsigned int)((_DWORD)v4 - (_DWORD)v11 + 4096) / 0x78uLL)];
    while ( v11 < v12 )
    {
      *v11 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v11;
      v11 += 15;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
