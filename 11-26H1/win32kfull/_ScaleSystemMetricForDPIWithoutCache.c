/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C
 * Callers:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140032974 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140032AE8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x14004E344 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1401BF4C0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserScaleSystemMetricForDPIWithoutCache @ 0x1401BF550 (NtUserScaleSystemMetricForDPIWithoutCache.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1401BF5C8 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetCursorSizesIndexFromDpi @ 0x14002BC2C (GetCursorSizesIndexFromDpi.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetCursorSizeFromIndex @ 0x1401BFD2C (GetCursorSizeFromIndex.c)
 *     Get96DpiServerInfo @ 0x140302324 (Get96DpiServerInfo.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(int a1, __int64 a2)
{
  unsigned int v2; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  INT v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  INT DpiDependentMetric; // eax
  int v19; // edi
  int v20; // ecx
  __int64 DpiMetricsForDpi; // rax
  __int64 v22; // rax
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  unsigned int CursorSizesIndexFromDpi; // eax
  __int64 v34; // rcx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // eax
  int v39; // edi
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ebx
  int v44; // eax
  int v45; // ebx

  v2 = a2;
  if ( (unsigned int)a1 > 0x1D || (int)a2 <= 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( a1 <= 16 )
  {
    if ( a1 != 16 )
    {
      v14 = a1 - 2;
      if ( v14 )
      {
        v15 = v14 - 5;
        if ( !v15 || (v16 = v15 - 1) == 0 )
        {
          CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(a2);
          return (unsigned int)GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
        }
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( (unsigned int)(v17 - 5) < 2 )
          {
            v22 = Get96DpiServerInfo();
            return (unsigned int)(EngMulDiv(*(_DWORD *)(v22 + 4), v2, 96) + 3);
          }
          goto LABEL_19;
        }
        v34 = 26LL;
      }
      else
      {
        v34 = 13LL;
      }
      return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v34, a2) + 1);
    }
    v35 = 2 * *(_DWORD *)(GetDpiServerInfoForDpi((unsigned int)a2) + 16);
    v36 = ScaleSystemMetricForDPIWithoutCache(29LL, v2) + v35;
    v37 = 2 * (v36 + ScaleSystemMetricForDPIWithoutCache(14LL, v2));
    v38 = ScaleSystemMetricForDPIWithoutCache(12LL, v2);
    v39 = v38 + v37 + 2 * v38;
    v40 = ScaleSystemMetricForDPIWithoutCache(13LL, v2) + 4;
    return (unsigned int)(v40 + v39);
  }
  v5 = a1 - 17;
  if ( !v5 )
  {
    v45 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
    v39 = 2 * (ScaleSystemMetricForDPIWithoutCache(15LL, v2) + v45);
    v40 = ScaleSystemMetricForDPIWithoutCache(2LL, v2);
    return (unsigned int)(v40 + v39);
  }
  v6 = v5 - 3;
  if ( !v6 )
  {
    v43 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
    v44 = ScaleSystemMetricForDPIWithoutCache(5LL, v2);
    v10 = v2;
    if ( v43 >= v44 / 2 )
    {
      v11 = 5LL;
      return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v11, v10) / 2);
    }
    v42 = 12LL;
    return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v42, v10) - 2);
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v20 = v7 - 1;
    if ( v20 )
    {
      if ( (unsigned int)(v20 - 5) <= 1 )
      {
        DpiMetricsForDpi = GetDpiMetricsForDpi((unsigned int)a2);
        return (unsigned int)(((*(_DWORD *)(DpiMetricsForDpi + 20) + *(_DWORD *)(DpiMetricsForDpi + 12) + 1) & 0xFFFE)
                            - 1);
      }
LABEL_19:
      DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
      v13 = EngMulDiv(DpiDependentMetric, v2, 96);
      if ( a1 <= 13 )
      {
        if ( a1 == 13 )
        {
          if ( v13 > *(_DWORD *)(GetDpiServerInfoForDpi(v2) + 20) + 2 )
            return (unsigned int)v13;
          v19 = *(_DWORD *)(GetDpiServerInfoForDpi(v2) + 20);
          return (unsigned int)(v19 + 2);
        }
        if ( a1 )
        {
          v29 = a1 - 1;
          if ( v29 )
          {
            v30 = v29 - 2;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                v32 = v31 - 6;
                if ( v32 )
                {
                  if ( (unsigned int)(v32 - 1) > 1 )
                    return (unsigned int)v13;
                }
              }
            }
          }
        }
        goto LABEL_43;
      }
      v23 = a1 - 18;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 4;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
            {
              if ( v13 > *(_DWORD *)(GetDpiMetricsForDpi(v2) + 44) + 2 )
                return (unsigned int)v13;
              v19 = *(_DWORD *)(GetDpiMetricsForDpi(v2) + 44);
              return (unsigned int)(v19 + 2);
            }
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 == 3 )
                {
                  if ( v13 >= 100 )
                  {
                    return 100;
                  }
                  else if ( v13 <= 0 )
                  {
                    return 0;
                  }
                }
              }
              else if ( v13 <= *(_DWORD *)(GetDpiMetricsForDpi(v2) + 28) )
              {
                return *(unsigned int *)(GetDpiMetricsForDpi(v2) + 28);
              }
              return (unsigned int)v13;
            }
          }
LABEL_43:
          if ( v13 <= 8 )
            return 8;
          return (unsigned int)v13;
        }
        if ( v13 > (int)ScaleSystemMetricForDPIWithoutCache(6LL, v2) )
          return (unsigned int)v13;
        v41 = 6LL;
      }
      else
      {
        if ( v13 > (int)ScaleSystemMetricForDPIWithoutCache(5LL, v2) )
          return (unsigned int)v13;
        v41 = 5LL;
      }
      return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v41, v2);
    }
    v34 = 24LL;
    return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v34, a2) + 1);
  }
  v8 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
  v9 = ScaleSystemMetricForDPIWithoutCache(6LL, v2);
  v10 = v2;
  if ( v8 < v9 / 2 )
  {
    v42 = 13LL;
    return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v42, v10) - 2);
  }
  v11 = 6LL;
  return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v11, v10) / 2);
}
