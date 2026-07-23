/*
 * XREFs of PfpFileBuildReadList @ 0x1404EC098
 * Callers:
 *     PfpFileBuildReadSupport @ 0x1404EC2A0 (PfpFileBuildReadSupport.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpFileBuildReadList(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  __int64 v10; // r9
  _DWORD *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  _QWORD *PoolWithTag; // rax

  v4 = 0;
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
  v8 = *(_DWORD *)(a2 + 16);
  v9 = 0;
  if ( v8 )
  {
    v10 = v8;
    v11 = (_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
    do
    {
      v12 = *v11 >> 12;
      v11 += 4;
      v9 += v12 + 2;
      --v10;
    }
    while ( v10 );
  }
  v13 = 8LL * v9 + 16;
  if ( v13 <= 0xFFFFFFFF )
  {
    v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x4C526650u);
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
          v15 = *(_QWORD *)(a2 + 24) + 16LL * v4;
          v16 = *(_QWORD *)v15;
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 2) != 0 )
            v16 &= 0xFFFFFFFFFFFFF000uLL;
          v17 = *(_QWORD *)v15 + *(unsigned int *)(v15 + 8);
          while ( v16 < v17 )
          {
            v14[(unsigned int)(*((_DWORD *)v14 + 2))++ + 2] = v16;
            v16 += 4096LL;
          }
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a2 + 16) );
      }
      *a4 = v14;
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225621LL;
}
