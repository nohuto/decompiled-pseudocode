/*
 * XREFs of ?InitializeEndpointCharacteristicsCache@@YAJXZ @ 0x180042388
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x1800412AC (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 */

__int64 InitializeEndpointCharacteristicsCache(void)
{
  RTL_SRWLOCK *v0; // rax
  __int64 v1; // rdx
  unsigned int v2; // ebx
  RTL_SRWLOCK *v3; // rax

  v0 = (RTL_SRWLOCK *)operator new(0x50uLL);
  v2 = 0;
  if ( v0 )
    v3 = (RTL_SRWLOCK *)CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v0, v1);
  else
    v3 = 0LL;
  g_pEndpointCharacteristicsCache = v3;
  if ( !v3 )
    return (unsigned int)-2147024882;
  TrySubmitThreadpoolCallback((PTP_SIMPLE_CALLBACK)PopulateEndpointCharacteristicsCache, 0LL, 0LL);
  if ( !g_pEndpointCharacteristicsCache )
    return (unsigned int)-2147024882;
  return v2;
}
