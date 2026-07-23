/*
 * XREFs of MiCreateFixupRecord @ 0x1404C61FC
 * Callers:
 *     MiScanRelocationPage @ 0x140507FA0 (MiScanRelocationPage.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateFixupRecord(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, _WORD *a6, _QWORD *a7)
{
  unsigned __int64 v7; // rdi
  __int64 v9; // rbx
  __int16 v10; // r12
  unsigned int v11; // r15d
  int v12; // esi
  _WORD *PoolWithTag; // rax
  __int64 v14; // [rsp+40h] [rbp+8h]

  v7 = a3;
  if ( (a3 + 4096) >> 12 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return 3221225477LL;
  v9 = 0LL;
  HIDWORD(v14) = 0;
  v10 = *a6 >> 12;
  v11 = 4096 - a4;
  if ( (a3 & 0xFFF) < 4096 - a4 )
  {
    v12 = a5;
    if ( a5 == 4 )
    {
      LODWORD(v14) = *(_DWORD *)(a3 + a2);
      v9 = v14;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + a2);
    }
  }
  else
  {
    *a6 &= 0xFFFu;
    v12 = a5;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x72466D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[8] = v10;
  *((_DWORD *)PoolWithTag + 3) = v7 + v12;
  if ( (v7 & 0xFFF) < v11 )
  {
    *((_DWORD *)PoolWithTag + 2) = v7;
    *((_QWORD *)PoolWithTag + 3) = v9;
    *(_QWORD *)(*a7 + 8 * (v7 >> 12)) |= 1uLL;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 2) = (v7 & 0xFFFFF000) + 4096;
  }
  *(_QWORD *)(*a7 + 8 * ((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 12)) |= 1uLL;
  *(_QWORD *)PoolWithTag = a7[2];
  a7[2] = PoolWithTag;
  return 0LL;
}
