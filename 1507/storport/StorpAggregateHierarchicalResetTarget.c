/*
 * XREFs of StorpAggregateHierarchicalResetTarget @ 0x1C00364E4
 * Callers:
 *     RaidUnitResetTarget @ 0x1C003346C (RaidUnitResetTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall StorpAggregateHierarchicalResetTarget(__int64 a1, char a2, unsigned __int64 a3)
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
    ++*(_DWORD *)(a1 + 12LL * v3 + 5252);
    if ( (a2 & 0x3F) == 1 )
    {
      result = 3 * v3;
      ++*(_DWORD *)(a1 + 12LL * v3 + 5256);
    }
    else
    {
      *(_BYTE *)(a1 + 12LL * v3 + 5260) = a2;
    }
  }
  return result;
}
