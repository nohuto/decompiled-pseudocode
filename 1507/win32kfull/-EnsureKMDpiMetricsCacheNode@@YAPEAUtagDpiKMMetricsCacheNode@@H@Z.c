/*
 * XREFs of ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01E8D1C
 * Callers:
 *     GetDPIMETRICSForDpi @ 0x1C0053EE8 (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C0100128 (GetDPIServerInfoForDpi.c)
 * Callees:
 *     ?IsValidPlateauDPI@@YA_NH@Z @ 0x1C01E8EDC (-IsValidPlateauDPI@@YA_NH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagDpiKMMetricsCacheNode *__fastcall EnsureKMDpiMetricsCacheNode(int a1)
{
  _QWORD *v1; // r11
  __int16 v2; // bx
  unsigned __int16 *v3; // r10
  __int64 v4; // rax

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
LABEL_11:
    *v1 = v3;
    return (struct tagDpiKMMetricsCacheNode *)v3;
  }
LABEL_7:
  if ( IsValidPlateauDPI(a1) )
  {
    v4 = Win32AllocPoolZInit(208LL, 1768973397LL);
    v3 = (unsigned __int16 *)v4;
    if ( !v4 )
      return (struct tagDpiKMMetricsCacheNode *)v3;
    v1 = (_QWORD *)gpDpiKernelModeMetricsMRUNode;
    *(_WORD *)v4 = v2;
    *(_WORD *)(v4 + 2) = 1;
    *(_QWORD *)(v4 + 8) = gpDpiKernelModeMetricsCache;
    gpDpiKernelModeMetricsCache = v4;
  }
  if ( v3 )
    goto LABEL_11;
  return (struct tagDpiKMMetricsCacheNode *)v3;
}
