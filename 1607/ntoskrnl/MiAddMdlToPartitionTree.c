/*
 * XREFs of MiAddMdlToPartitionTree @ 0x1401F0B10
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiAddRangeToPartitionTree @ 0x1401F0BB8 (MiAddRangeToPartitionTree.c)
 */

__int64 __fastcall MiAddMdlToPartitionTree(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbx

  v2 = 0LL;
  v3 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v4 = -1LL;
  v5 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v5 == v3 )
    {
      if ( !v2 )
        return 1LL;
    }
    else
    {
      if ( !v2 )
      {
        v4 = *(_QWORD *)(a2 + 8 * v5 + 48);
        v2 = 1LL;
        goto LABEL_7;
      }
      if ( *(_QWORD *)(a2 + 8 * v5 + 40) + 1LL == *(_QWORD *)(a2 + 8 * v5 + 48) )
      {
        ++v2;
        goto LABEL_7;
      }
    }
    if ( !(unsigned int)MiAddRangeToPartitionTree(a1, v4, v2, 0LL) )
      return 0LL;
    if ( (unsigned int)v5 == v3 )
      return 1LL;
    v2 = 0LL;
    LODWORD(v5) = v5 - 1;
LABEL_7:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 > v3 )
      return 1LL;
  }
}
