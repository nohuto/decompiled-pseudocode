/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1401BF4C0
 * Callers:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     NtUserEnsureDpiDepSysMetCacheForPlateau @ 0x1401BF480 (NtUserEnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = a1;
  v2 = 0;
  v5 = 120LL * (int)GetDpiCacheIndex(a1) + 2284;
  do
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19904);
    if ( *(_DWORD *)(v5 + v4) == -1 )
    {
      v6 = ScaleSystemMetricForDPIWithoutCache(v2, v1);
      v4 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904);
      *(_DWORD *)(v5 + v4) = v6;
    }
    ++v2;
    v5 += 4LL;
  }
  while ( v2 < 0x1E );
  return 1LL;
}
