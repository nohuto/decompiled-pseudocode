/*
 * XREFs of DestroyDpiMetricsCache @ 0x1C0135A10
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFA54 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFACC (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 DestroyDpiMetricsCache()
{
  _QWORD *v0; // rcx
  __int64 v1; // rdi
  __int64 result; // rax
  struct tagDpiKMMetricsCacheNode *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v0 = (_QWORD *)gpDpiKernelModeMetricsCache;
  v1 = gpDpiKernelModeMetricsCache;
  if ( gpDpiKernelModeMetricsCache )
  {
    do
    {
      v3 = (struct tagDpiKMMetricsCacheNode *)v1;
      v1 = *(_QWORD *)(v1 + 8);
      ClearKMDpiMetricsCacheNodeDPIMETRICS(v3);
      ClearKMDpiMetricsCacheNodeDPISERVERINFO(v3);
      Win32FreePool(v3, v4, v5);
    }
    while ( v1 );
    v0 = (_QWORD *)gpDpiKernelModeMetricsCache;
  }
  result = gpDpiKernelModeMetricsMRUNode;
  gpDpiKernelModeMetricsMRUNode = 0LL;
  *v0 = 0LL;
  return result;
}
