/*
 * XREFs of ndisOidPostStatistics @ 0x1C000F750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisOidPostStatistics(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[4];
  if ( *a1 )
  {
    result = *(unsigned int *)(result + 4);
    if ( (result & 0xFFFFFFFD) == 0 )
    {
      if ( *(_QWORD *)(*a1 + 4512LL) )
        return ndisSSUpdateOidCacheValue();
    }
  }
  return result;
}
