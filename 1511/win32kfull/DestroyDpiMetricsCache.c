/*
 * XREFs of DestroyDpiMetricsCache @ 0x1C01142B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E91CC (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9244 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 DestroyDpiMetricsCache()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx
  struct tagDpiKMMetricsCacheNode *v7; // rbx

  v0 = (__int64 *)gpsi;
  v1 = *(_QWORD *)(gpsi + 3048LL);
  if ( v1 )
  {
    do
    {
      v6 = v1;
      v1 = *(_QWORD *)(v1 + 8);
      SharedFree(v6);
    }
    while ( v1 );
    v0 = (__int64 *)gpsi;
  }
  v2 = *v0;
  v3 = (_QWORD *)gpDpiKernelModeMetricsCache;
  *(_QWORD *)(v2 + 3048) = 0LL;
  v4 = gpDpiKernelModeMetricsCache;
  if ( gpDpiKernelModeMetricsCache )
  {
    do
    {
      v7 = (struct tagDpiKMMetricsCacheNode *)v4;
      v4 = *(_QWORD *)(v4 + 8);
      ClearKMDpiMetricsCacheNodeDPIMETRICS(v7);
      ClearKMDpiMetricsCacheNodeDPISERVERINFO(v7);
      Win32FreePool(v7);
    }
    while ( v4 );
    v3 = (_QWORD *)gpDpiKernelModeMetricsCache;
  }
  result = gpDpiKernelModeMetricsMRUNode;
  gpDpiKernelModeMetricsMRUNode = 0LL;
  *v3 = 0LL;
  return result;
}
