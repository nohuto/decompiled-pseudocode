/*
 * XREFs of ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01DFB08
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00B5C20 (GetDPIMETRICSForDpiUnsafe.c)
 *     GetDPIServerInfoForDpiUnsafe @ 0x1C00B7700 (GetDPIServerInfoForDpiUnsafe.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
struct tagDpiKMMetricsCacheNode *__fastcall EnsureKMDpiMetricsCacheNode(int a1)
{
  _QWORD *v1; // r10
  __int16 v2; // bx
  unsigned __int16 *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // rax

  v1 = (_QWORD *)gpDpiKernelModeMetricsMRUNode;
  v2 = a1;
  v3 = (unsigned __int16 *)gpDpiKernelModeMetricsMRUNode;
  if ( !gpDpiKernelModeMetricsMRUNode || (unsigned __int16)*gpDpiKernelModeMetricsMRUNode != a1 )
  {
    v3 = (unsigned __int16 *)gpDpiKernelModeMetricsCache;
    if ( !gpDpiKernelModeMetricsCache )
      goto LABEL_7;
    do
    {
      if ( *v3 == a1 )
        break;
      v3 = (unsigned __int16 *)*((_QWORD *)v3 + 1);
    }
    while ( v3 );
  }
  if ( v3 )
  {
LABEL_14:
    *v1 = v3;
    return (struct tagDpiKMMetricsCacheNode *)v3;
  }
LABEL_7:
  v4 = &DesktopScaleFactorsArray;
  while ( (96 * *v4 + 50) / 0x64u != a1 )
  {
    if ( (__int64)++v4 >= (__int64)L"Scancode Map Ex" )
      goto LABEL_13;
  }
  v5 = Win32AllocPoolZInit(208LL, 1768973397LL);
  v3 = (unsigned __int16 *)v5;
  if ( !v5 )
    return (struct tagDpiKMMetricsCacheNode *)v3;
  v1 = (_QWORD *)gpDpiKernelModeMetricsMRUNode;
  *(_WORD *)v5 = v2;
  *(_WORD *)(v5 + 2) = 1;
  *(_QWORD *)(v5 + 8) = gpDpiKernelModeMetricsCache;
  gpDpiKernelModeMetricsCache = v5;
LABEL_13:
  if ( v3 )
    goto LABEL_14;
  return (struct tagDpiKMMetricsCacheNode *)v3;
}
