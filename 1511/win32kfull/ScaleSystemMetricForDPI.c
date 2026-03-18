/*
 * XREFs of ScaleSystemMetricForDPI @ 0x1C0071688
 * Callers:
 *     AdjustWindowRectExInternal @ 0x1C006F17C (AdjustWindowRectExInternal.c)
 *     GetWindowFrameMetricInternal @ 0x1C0070F40 (GetWindowFrameMetricInternal.c)
 *     GetResizeBorderWidthInternal @ 0x1C007102C (GetResizeBorderWidthInternal.c)
 * Callees:
 *     IsDpiDependentMetric @ 0x1C00721FC (IsDpiDependentMetric.c)
 *     _CacheSecondaryDpiMetric @ 0x1C01E9BC0 (_CacheSecondaryDpiMetric.c)
 */

__int64 __fastcall ScaleSystemMetricForDPI(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 i; // rax

  if ( !(unsigned int)IsDpiDependentMetric(a1) || (_DWORD)v1 == *(unsigned __int16 *)(gpsi + 7286LL) )
    return *(unsigned int *)(gpsi + 4 * v3 + 1880);
  if ( (_DWORD)v1 == 96 )
    return *(unsigned int *)(gpsi + 4 * v3 + 2268);
  if ( *(_DWORD *)(gpsi + 4 * v3 + 3056) == *(_DWORD *)(gpsi + 4 * v3 + 1880) )
  {
    for ( i = *(_QWORD *)(gpsi + 3048LL); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == (_DWORD)v1 )
      {
        if ( !*(_WORD *)(i + 2 * v3 + 404) )
          return CacheSecondaryDpiMetric(v2, v1);
        return *(unsigned int *)(i + 4 * v3 + 16);
      }
    }
  }
  return CacheSecondaryDpiMetric(v2, v1);
}
