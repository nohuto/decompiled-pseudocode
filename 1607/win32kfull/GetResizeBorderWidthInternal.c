/*
 * XREFs of GetResizeBorderWidthInternal @ 0x1C006C188
 * Callers:
 *     GetResizeBorderWidth @ 0x1C00678DC (GetResizeBorderWidth.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C006EB78 (GetWindowBordersWithCompatFlags2.c)
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetResizeBorderWidthInternal(int a1, unsigned int a2)
{
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // r11
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v8; // r11
  __int64 v9; // rsi

  if ( (a1 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v3 = (int)(a2 * *(_DWORD *)(gpsi + 5520LL) + 48) / 96;
    if ( (a1 & 0x20000000) != 0 )
    {
      if ( a2 )
      {
        if ( a2 == *(unsigned __int16 *)(gpsi + 8678LL) )
        {
          v5 = *(_DWORD *)(gpsi + 2248LL);
        }
        else if ( a2 == 96 )
        {
          v5 = *(_DWORD *)(gpsi + 2636LL);
        }
        else
        {
          DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a2);
          if ( DpiDepSysMetCachePlateauSlot == -1 )
          {
            v5 = ScaleSystemMetricForDPIWithoutCache(92LL, a2);
          }
          else
          {
            v9 = 112LL * DpiDepSysMetCachePlateauSlot;
            v5 = *(_DWORD *)(v9 + v8 + 3152);
            if ( v5 == -1 )
            {
              EnsureDpiDepSysMetCacheForPlateau(a2);
              v5 = *(_DWORD *)(v9 + gpsi + 3152);
              if ( v5 == -1 )
                v5 = 0;
            }
          }
        }
      }
      else
      {
        if ( (a1 & 0x2000000) != 0 )
          v6 = gpsi + 1880LL;
        else
          v6 = gpsi + 2268LL;
        v5 = *(_DWORD *)(v6 + 368);
      }
      v3 += v5;
    }
  }
  return v3;
}
