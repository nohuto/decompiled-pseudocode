/*
 * XREFs of CcCreateVacbArray @ 0x1404B1B74
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcCreateVacbArray(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // r15d
  __int64 v5; // rbx
  unsigned int v6; // ebp
  char *PoolWithTag; // rdi
  __int64 result; // rax
  unsigned int v9; // r8d
  int v10; // ecx
  char *v11; // rcx
  char *v12; // r8
  char **v13; // rax
  char *v14; // rdx

  v2 = 0;
  v3 = 0;
  if ( HIDWORD(a2) )
  {
    LODWORD(v5) = -1;
  }
  else if ( (unsigned int)a2 > 0x100000 )
  {
    LODWORD(v5) = 8 * ((unsigned int)a2 >> 18);
  }
  else
  {
    LODWORD(v5) = HIDWORD(a2) + 32;
  }
  v6 = v5;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (_DWORD)v5 == 32 )
  {
    PoolWithTag = (char *)(a1 + 56);
  }
  else
  {
    if ( (unsigned int)v5 > 0x400 )
    {
      v9 = 0;
      v6 = 1024;
      LODWORD(v5) = 1032;
      v10 = 25;
      v3 = 1;
      do
      {
        v10 += 7;
        ++v9;
      }
      while ( a2 > 1LL << v10 );
      if ( v9 >= CcMaxVacbLevelsSeen )
        CcMaxVacbLevelsSeen = v9 + 1;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 && a2 > 0x200000 )
      {
        v2 = 1;
        LODWORD(v5) = ((v5 + 15) & 0xFFFFFFF0) + v5;
      }
      if ( v6 == 1024 )
      {
        LODWORD(v5) = v5 + 8;
        v3 = 1;
      }
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v5, 0x70566343u);
    if ( !PoolWithTag )
    {
      result = 3221225626LL;
      *(_DWORD *)(a1 + 156) = -1073741670;
      return result;
    }
  }
  memset(PoolWithTag, 0, v6);
  if ( v3 )
  {
    v5 = (unsigned int)(v5 - 8);
    *(_QWORD *)&PoolWithTag[v5] = 0LL;
  }
  if ( v2 )
  {
    v11 = &PoolWithTag[v6];
    v12 = &PoolWithTag[(unsigned int)v5];
    if ( v11 < v12 )
    {
      v13 = (char **)(a1 + 16);
      do
      {
        v14 = *v13;
        if ( *((char ***)*v13 + 1) != v13 )
          __fastfail(3u);
        *(_QWORD *)v11 = v14;
        *((_QWORD *)v11 + 1) = v13;
        *((_QWORD *)v14 + 1) = v11;
        *v13 = v11;
        v11 += 16;
      }
      while ( v11 < v12 );
    }
  }
  *(_QWORD *)(a1 + 32) = a2;
  result = 0LL;
  *(_QWORD *)(a1 + 88) = PoolWithTag;
  return result;
}
