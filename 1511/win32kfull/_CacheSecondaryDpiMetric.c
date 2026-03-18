/*
 * XREFs of _CacheSecondaryDpiMetric @ 0x1C01E9BC0
 * Callers:
 *     RealGetDpiSystemMetrics @ 0x1C006F5CC (RealGetDpiSystemMetrics.c)
 *     ScaleSystemMetricForDPI @ 0x1C0071688 (ScaleSystemMetricForDPI.c)
 *     NtUserGetDpiSystemMetrics @ 0x1C00D9C10 (NtUserGetDpiSystemMetrics.c)
 * Callees:
 *     ?EnsureSecondaryDpiMetricsCacheNode@@YAPEAUtagDpiSysMetCache@@H@Z @ 0x1C01E9470 (-EnsureSecondaryDpiMetricsCacheNode@@YAPEAUtagDpiSysMetCache@@H@Z.c)
 *     ?ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z @ 0x1C01E9798 (-ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z.c)
 */

__int64 __fastcall CacheSecondaryDpiMetric(signed int a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  _QWORD *v5; // rdx
  __int64 v6; // rbx

  v2 = a1;
  v3 = 0;
  if ( (unsigned int)a1 <= 0x60 )
  {
    v3 = *(_DWORD *)(gpsi + 4LL * a1 + 1880);
    EnsureSecondaryDpiMetricsCacheNode(a2);
    v5 = (_QWORD *)gpsi;
    v6 = *(_QWORD *)(gpsi + 3048LL);
    if ( v6 )
    {
      do
      {
        *(_DWORD *)(v6 + 4 * v2 + 16) = ScaleSystemMetricForDPIWithoutCache(v2, *(_DWORD *)v6);
        *(_WORD *)(v6 + 2 * v2 + 404) = 1;
        if ( *(_DWORD *)v6 == a2 )
          v3 = *(_DWORD *)(v6 + 4 * v2 + 16);
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v6 );
      v5 = (_QWORD *)gpsi;
    }
    *(_DWORD *)(*v5 + 4 * v2 + 3056) = *(_DWORD *)(*v5 + 4 * v2 + 1880);
  }
  return v3;
}
