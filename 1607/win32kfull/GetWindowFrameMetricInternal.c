/*
 * XREFs of GetWindowFrameMetricInternal @ 0x1C006F3E4
 * Callers:
 *     GetWindowFrameMetric @ 0x1C0067910 (GetWindowFrameMetric.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C006EB78 (GetWindowBordersWithCompatFlags2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowFrameMetricInternal(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v7; // r11d
  __int64 v8; // rsi
  unsigned int v9; // eax

  v3 = 0;
  if ( (a2 & 0x10000000) == 0 && (a2 & 0x20000000) == 0 )
  {
    if ( a3 )
    {
      if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        return *(unsigned int *)(gpsi + 2248LL);
      }
      else if ( a3 == 96 )
      {
        return *(unsigned int *)(gpsi + 2636LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a3);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          return (unsigned int)ScaleSystemMetricForDPIWithoutCache(92LL, v7);
        }
        else
        {
          v8 = 112LL * DpiDepSysMetCachePlateauSlot;
          v9 = *(_DWORD *)(gpsi + v8 + 3152);
          if ( v9 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v7);
            v9 = *(_DWORD *)(v8 + gpsi + 3152);
            if ( v9 == -1 )
              return 0;
          }
        }
        return v9;
      }
    }
    else
    {
      if ( (a2 & 0x2000000) != 0 )
        v5 = gpsi + 1880LL;
      else
        v5 = gpsi + 2268LL;
      return *(unsigned int *)(v5 + 368);
    }
  }
  return v3;
}
