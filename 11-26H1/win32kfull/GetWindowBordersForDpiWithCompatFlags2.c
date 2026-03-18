/*
 * XREFs of GetWindowBordersForDpiWithCompatFlags2 @ 0x140032974
 * Callers:
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140032AE8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetWindowBordersForDpiWithCompatFlags2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int16 v7; // r14
  int v8; // r12d
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int DpiDependentMetric; // eax

  v7 = a2;
  v8 = a1;
  if ( (a2 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = (a2 & 0x20000) != 0;
  if ( (a1 & 0xC00000) != 0 || (a2 & 1) != 0 )
    ++v9;
  if ( (a6 & 0x10000000) != 0 || (a6 & 0x20000000) != 0 )
  {
    v10 = 0;
  }
  else
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
    if ( a5 == *(unsigned __int16 *)(v13 + 6998) )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904) + 2400LL);
    }
    else if ( a5 == 96 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904) + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheIndex(a5) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
      else
        DpiDependentMetric = GetDpiDependentMetric(29, a5);
      v10 = DpiDependentMetric;
    }
  }
  if ( (v8 & 0x40000) != 0 || v10 > 0 && (v8 & 0xC00000) == 0xC00000 && (a6 & 0x30000000) == 0 )
    v9 += v10 + GetResizeBorderWidthForDpiWithAppCompat2(a5, a6);
  if ( a4 && (v7 & 0x200) != 0 )
    v9 += 2;
  return v9;
}
