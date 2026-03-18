/*
 * XREFs of VidSchQueryProcessVidPnSourceStatistics @ 0x1C00A1250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryProcessVidPnSourceStatistics(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // r8
  _DWORD *v6; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 40) )
    return 3221225485LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v5 || !*(_QWORD *)(v5 + 8LL * a2 + 520) )
    return 3221225485LL;
  _mm_lfence();
  v6 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4)) + 8LL * a2 + 520);
  *a4 = *v6;
  a4[1] = v6[1];
  a4[2] = v6[2];
  return 0LL;
}
