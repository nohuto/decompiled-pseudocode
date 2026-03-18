/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1C01CEA40
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1C021B620 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C01D9140 (GetScaledLogFontForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1C01D92C4 (GetWindowNCMetricsForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  _DWORD *v6; // rdi
  __int64 *v7; // r14
  int v8; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // r11
  int v13; // eax
  int v14; // eax
  __int64 v15; // r11
  __int64 v16; // rbp
  __int64 v17; // rdx

  v5 = 0;
  v6 = a3;
  switch ( a1 )
  {
    case 31:
      v17 = a5;
      return (unsigned int)GetScaledLogFontForDpi(0LL, v17, a3);
    case 41:
      if ( *a3 == 504 )
        return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
      break;
    case 45:
      v7 = (__int64 *)gpsi;
      *a3 = 108;
      if ( a5 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v8 = *(_DWORD *)(gpsi + 2032LL);
      }
      else if ( a5 == 96 )
      {
        v8 = *(_DWORD *)(gpsi + 2420LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a5);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v8 = ScaleSystemMetricForDPIWithoutCache(38LL, a5);
          v7 = (__int64 *)gpsi;
        }
        else
        {
          v11 = 112LL * DpiDepSysMetCachePlateauSlot;
          v8 = *(_DWORD *)(v10 + v11 + 3108);
          if ( v8 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(a5);
            v7 = (__int64 *)gpsi;
            v8 = *(_DWORD *)(gpsi + v11 + 3108);
            if ( v8 == -1 )
              v8 = 0;
          }
        }
      }
      v6[1] = v8;
      v12 = *v7;
      if ( a5 == *(unsigned __int16 *)(*v7 + 8678) )
      {
        v13 = *(_DWORD *)(v12 + 2036);
      }
      else if ( a5 == 96 )
      {
        v13 = *(_DWORD *)(v12 + 2424);
      }
      else
      {
        v14 = GetDpiDepSysMetCachePlateauSlot(a5);
        if ( v14 == -1 )
        {
          v13 = ScaleSystemMetricForDPIWithoutCache(39LL, a5);
        }
        else
        {
          v16 = 112LL * v14;
          v13 = *(_DWORD *)(v15 + v16 + 3112);
          if ( v13 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(a5);
            v13 = *(_DWORD *)(gpsi + v16 + 3112);
            if ( v13 == -1 )
              v13 = 0;
          }
        }
      }
      v6[2] = v13;
      a3 = v6 + 4;
      v17 = a5;
      v6[3] = (gdwPUDFlags >> 21) & 1;
      return (unsigned int)GetScaledLogFontForDpi(0LL, v17, a3);
  }
  return v5;
}
