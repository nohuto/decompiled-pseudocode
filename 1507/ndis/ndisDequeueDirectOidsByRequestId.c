/*
 * XREFs of ndisDequeueDirectOidsByRequestId @ 0x1C00675DC
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0023238 (ndisSetBusyAsync.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisDequeueDirectOidsByRequestId(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 *result; // rax
  __int64 v6; // rcx
  __int64 **v7; // rdx
  __int64 **v8; // rdx

  v3 = a1 + 560;
  result = *(__int64 **)(a1 + 560);
  if ( result != (__int64 *)(a1 + 560) )
  {
    do
    {
      v6 = *result;
      if ( *(result - 7) == a2 )
      {
        v7 = (__int64 **)result[1];
        if ( *(__int64 **)(v6 + 8) != result || *v7 != result )
          __fastfail(3u);
        *v7 = (__int64 *)v6;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = *(__int64 ***)(a3 + 8);
        *result = a3;
        result[1] = (__int64)v8;
        if ( *v8 != (__int64 *)a3 )
          __fastfail(3u);
        *v8 = result;
        *(_QWORD *)(a3 + 8) = result;
      }
      result = (__int64 *)v6;
    }
    while ( v6 != v3 );
  }
  return result;
}
