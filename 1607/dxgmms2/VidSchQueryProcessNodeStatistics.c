/*
 * XREFs of VidSchQueryProcessNodeStatistics @ 0x1C00A1210
 * Callers:
 *     <none>
 * Callees:
 *     CopyNodeStatistics @ 0x1C00A09FC (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryProcessNodeStatistics(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rdx

  v4 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 60) )
    return 3221225485LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v5 )
    return 3221225485LL;
  v6 = *(_QWORD *)(v5 + 8 * v4 + 8);
  if ( !v6 )
    return 3221225485LL;
  CopyNodeStatistics(a4, v6);
  return 0LL;
}
