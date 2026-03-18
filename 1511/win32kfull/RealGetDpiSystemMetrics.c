/*
 * XREFs of RealGetDpiSystemMetrics @ 0x1C006F5CC
 * Callers:
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsDpiDependentMetric @ 0x1C00721FC (IsDpiDependentMetric.c)
 */

__int64 __fastcall RealGetDpiSystemMetrics(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // r10d
  __int64 i; // rax

  if ( (unsigned int)IsDpiDependentMetric(a1) )
  {
    if ( v2 == *(unsigned __int16 *)(gpsi + 7286LL) )
    {
      return *(unsigned int *)(gpsi + 4 * v1 + 1880);
    }
    else if ( v2 == 96 )
    {
      return *(unsigned int *)(gpsi + 4 * v1 + 2268);
    }
    else
    {
      for ( i = *(_QWORD *)(gpsi + 3048LL); ; i = *(_QWORD *)(i + 8) )
      {
        if ( !i )
          return CacheSecondaryDpiMetric((unsigned int)v1, v2);
        if ( *(_DWORD *)i == v2 )
          break;
      }
      if ( *(_DWORD *)(gpsi + 4 * v1 + 3056) != *(_DWORD *)(gpsi + 4 * v1 + 1880) || !*(_WORD *)(i + 2 * v1 + 404) )
        return CacheSecondaryDpiMetric((unsigned int)v1, v2);
      return *(unsigned int *)(i + 4 * v1 + 16);
    }
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
