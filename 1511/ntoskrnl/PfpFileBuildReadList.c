/*
 * XREFs of PfpFileBuildReadList @ 0x1404DA2D0
 * Callers:
 *     PfpFileBuildReadSupport @ 0x1404D9100 (PfpFileBuildReadSupport.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpFileBuildReadList(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // r9
  unsigned int *v11; // rdx
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 i; // rdx
  _QWORD *PoolWithTag; // rax

  if ( (*(_DWORD *)a2 & 1) != 0 && !a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4C526650u);
    if ( PoolWithTag )
    {
      *a4 = PoolWithTag;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 1LL;
      PoolWithTag[2] = 0LL;
      return 0LL;
    }
    return 3221225626LL;
  }
  v7 = *(_DWORD *)(a2 + 16);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = v7;
    v11 = (unsigned int *)(*(_QWORD *)(a2 + 24) + 8LL);
    do
    {
      v12 = *v11;
      v11 += 4;
      v9 += (v12 >> 12) + 2;
      --v10;
    }
    while ( v10 );
  }
  v13 = 8LL * v9 + 16;
  if ( v13 <= 0xFFFFFFFF )
  {
    v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x4C526650u);
    v15 = v14;
    if ( v14 )
    {
      *v14 = 0LL;
      v14[1] = 0LL;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        *((_DWORD *)v14 + 3) = 1;
      if ( *(_DWORD *)(a2 + 16) )
      {
        do
        {
          v16 = *(_QWORD *)(a2 + 24) + 16LL * v8;
          v17 = *(_QWORD *)v16;
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 2) != 0 )
            v17 &= 0xFFFFFFFFFFFFF000uLL;
          for ( i = *(_QWORD *)v16 + *(unsigned int *)(v16 + 8); v17 < i; ++*((_DWORD *)v15 + 2) )
          {
            v15[*((unsigned int *)v15 + 2) + 2] = v17;
            v17 += 4096LL;
          }
          ++v8;
        }
        while ( v8 < *(_DWORD *)(a2 + 16) );
      }
      *a4 = v15;
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225621LL;
}
