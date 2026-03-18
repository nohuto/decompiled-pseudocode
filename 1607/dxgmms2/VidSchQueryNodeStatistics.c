/*
 * XREFs of VidSchQueryNodeStatistics @ 0x1C00A1160
 * Callers:
 *     <none>
 * Callees:
 *     CopyNodeStatistics @ 0x1C00A09FC (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryNodeStatistics(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r11

  if ( a2 >= *(_DWORD *)(a1 + 60) )
    return 3221225485LL;
  CopyNodeStatistics(a3, *(_QWORD *)(a1 + 8LL * a2 + 408) + 2528LL);
  CopyNodeStatistics(
    a3 + 272,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 24) + 8LL * *(unsigned int *)(a1 + 4)) + 8 * v6 + 8));
  return 0LL;
}
