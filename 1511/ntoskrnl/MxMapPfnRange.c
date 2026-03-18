/*
 * XREFs of MxMapPfnRange @ 0x140747288
 * Callers:
 *     MiCreateSparsePfnDatabase @ 0x1407470B0 (MiCreateSparsePfnDatabase.c)
 * Callees:
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x140131AC8 (MiRestrictRangeToNode.c)
 *     MxMapVa @ 0x140747468 (MxMapVa.c)
 */

__int64 __fastcall MxMapPfnRange(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // r13d
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // r8

  v3 = 48 * a1 - 0x58000000000LL;
  v4 = a2;
  v5 = a1;
  if ( v3 == (v3 & 0xFFFFFFFFFFE00000uLL) )
    v6 = 0LL;
  else
    v6 = ((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( a2 == -1LL )
  {
    v8 = 0LL;
    goto LABEL_9;
  }
  v7 = 48 * (a1 + a2);
  if ( v7 - 0x58000000000LL == ((v7 - 0x58000000000LL) & 0xFFFFFFFFFFE00000uLL) )
    v8 = 0LL;
  else
    v8 = (((unsigned __int64)(v7 - 0x58000000001LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( v4 )
  {
LABEL_9:
    v10 = v4;
    if ( v4 == -1LL )
    {
      v11 = (MxPfnAllocation << 12) + MmPfnDatabase - 1;
      v4 = 0LL;
    }
    else
    {
      v10 = MiRestrictRangeToNode(v5, v4);
      v11 = 48 * (v5 + v10) - 0x58000000001LL;
      v4 -= v10;
    }
    v12 = 48 * v5;
    v13 = MiPageToNode(v5, 0);
    v5 += v10;
    v14 = (((unsigned __int64)(v12 - 0x58000000000LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v15 = (((((v11 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    while ( v14 <= v15 )
    {
      if ( v14 == v6 || (v16 = a3, v14 == v8) )
        v16 = 1LL;
      if ( !(unsigned int)MxMapVa((__int64)(v14 << 25) >> 16 << 25 >> 16, v13, v16) )
        return 0LL;
      v14 += 8LL;
    }
  }
  return 1LL;
}
