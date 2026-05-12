/*
 * XREFs of StorpAggregateHierarchicalResetLun @ 0x1C0036490
 * Callers:
 *     RaidUnitResetUnit @ 0x1C00336F4 (RaidUnitResetUnit.c)
 * Callees:
 *     <none>
 */

char __fastcall StorpAggregateHierarchicalResetLun(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int8 v3; // r9
  char result; // al

  v3 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      result = v3;
      if ( a3 <= TraceLoggingResetLatencyBuckets[v3] )
        break;
      if ( ++v3 >= 5u )
        return result;
    }
    result = a2 & 0x3F;
    ++*(_DWORD *)(a1 + 12LL * v3 + 5192);
    if ( (a2 & 0x3F) == 1 )
    {
      result = 3 * v3;
      ++*(_DWORD *)(a1 + 12LL * v3 + 5196);
    }
    else
    {
      *(_BYTE *)(a1 + 12LL * v3 + 5200) = a2;
    }
  }
  return result;
}
