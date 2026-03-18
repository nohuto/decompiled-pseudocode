/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1C01D92C4
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C01CEA40 (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C01D9140 (GetScaledLogFontForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r11
  int v5; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbp
  INT v12; // eax
  __int64 *v13; // r11
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rbx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rbp
  __int64 v29; // rbx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // rbx
  int v34; // eax
  int v35; // eax
  __int64 v36; // r14
  __int64 v37; // r11
  int v38; // eax
  int v39; // eax
  __int64 v40; // r11
  __int64 v41; // rbx
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx

  v2 = (__int64 *)gpsi;
  if ( a2 == *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    v5 = *(_DWORD *)(gpsi + 2004LL);
  }
  else if ( a2 == 96 )
  {
    v5 = *(_DWORD *)(gpsi + 2392LL);
  }
  else
  {
    DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( DpiDepSysMetCachePlateauSlot == -1 )
    {
      v5 = ScaleSystemMetricForDPIWithoutCache(31LL, a2);
      v2 = (__int64 *)gpsi;
    }
    else
    {
      v7 = 112LL * DpiDepSysMetCachePlateauSlot;
      v5 = *(_DWORD *)(gpsi + v7 + 3096);
      if ( v5 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v2 = (__int64 *)gpsi;
        v5 = *(_DWORD *)(gpsi + v7 + 3096);
        if ( v5 == -1 )
          v5 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 20) = v5;
  v8 = *v2;
  if ( a2 == *(unsigned __int16 *)(*v2 + 8678) )
  {
    v9 = *(_DWORD *)(v8 + 2100);
  }
  else if ( a2 == 96 )
  {
    v9 = *(_DWORD *)(v8 + 2488);
  }
  else
  {
    v10 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v10 == -1 )
    {
      v9 = ScaleSystemMetricForDPIWithoutCache(55LL, a2);
      v2 = (__int64 *)gpsi;
    }
    else
    {
      v11 = 112LL * v10;
      v9 = *(_DWORD *)(v8 + v11 + 3140);
      if ( v9 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v2 = (__int64 *)gpsi;
        v9 = *(_DWORD *)(gpsi + v11 + 3140);
        if ( v9 == -1 )
          v9 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 220) = v9;
  v12 = EngMulDiv(*(_DWORD *)(*v2 + 5520), a2, 96);
  v13 = (__int64 *)gpsi;
  *(_DWORD *)(a1 + 4) = v12;
  if ( a2 == *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    v14 = *(_DWORD *)(gpsi + 1888LL);
  }
  else if ( a2 == 96 )
  {
    v14 = *(_DWORD *)(gpsi + 2276LL);
  }
  else
  {
    v15 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v15 == -1 )
    {
      v14 = ScaleSystemMetricForDPIWithoutCache(2LL, a2);
      v13 = (__int64 *)gpsi;
    }
    else
    {
      v16 = 112LL * v15;
      v14 = *(_DWORD *)(gpsi + v16 + 3044);
      if ( v14 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v13 = (__int64 *)gpsi;
        v14 = *(_DWORD *)(gpsi + v16 + 3044);
        if ( v14 == -1 )
          v14 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 8) = v14;
  v17 = *v13;
  if ( a2 == *(unsigned __int16 *)(*v13 + 8678) )
  {
    v18 = *(_DWORD *)(v17 + 1960);
  }
  else if ( a2 == 96 )
  {
    v18 = *(_DWORD *)(v17 + 2348);
  }
  else
  {
    v19 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v19 == -1 )
    {
      v18 = ScaleSystemMetricForDPIWithoutCache(20LL, a2);
      v13 = (__int64 *)gpsi;
    }
    else
    {
      v20 = 112LL * v19;
      v18 = *(_DWORD *)(v17 + v20 + 3084);
      if ( v18 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v13 = (__int64 *)gpsi;
        v18 = *(_DWORD *)(gpsi + v20 + 3084);
        if ( v18 == -1 )
          v18 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 12) = v18;
  v21 = *v13;
  if ( a2 == *(unsigned __int16 *)(*v13 + 8678) )
  {
    v22 = *(_DWORD *)(v21 + 2000);
  }
  else if ( a2 == 96 )
  {
    v22 = *(_DWORD *)(v21 + 2388);
  }
  else
  {
    v23 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v23 == -1 )
    {
      v22 = ScaleSystemMetricForDPIWithoutCache(30LL, a2);
      v13 = (__int64 *)gpsi;
    }
    else
    {
      v24 = 112LL * v23;
      v22 = *(_DWORD *)(v21 + v24 + 3092);
      if ( v22 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v13 = (__int64 *)gpsi;
        v22 = *(_DWORD *)(gpsi + v24 + 3092);
        if ( v22 == -1 )
          v22 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 16) = v22;
  v25 = *v13;
  if ( a2 == *(unsigned __int16 *)(*v13 + 8678) )
  {
    v26 = *(_DWORD *)(v25 + 2088);
  }
  else if ( a2 == 96 )
  {
    v26 = *(_DWORD *)(v25 + 2476);
  }
  else
  {
    v27 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v27 == -1 )
    {
      v26 = ScaleSystemMetricForDPIWithoutCache(52LL, a2);
      v13 = (__int64 *)gpsi;
    }
    else
    {
      v28 = 112LL * v27;
      v26 = *(_DWORD *)(v25 + v28 + 3128);
      if ( v26 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v13 = (__int64 *)gpsi;
        v26 = *(_DWORD *)(gpsi + v28 + 3128);
        if ( v26 == -1 )
          v26 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 116) = v26;
  v29 = *v13;
  if ( a2 == *(unsigned __int16 *)(*v13 + 8678) )
  {
    v30 = *(_DWORD *)(v29 + 2092);
  }
  else if ( a2 == 96 )
  {
    v30 = *(_DWORD *)(v29 + 2480);
  }
  else
  {
    v31 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v31 == -1 )
    {
      v30 = ScaleSystemMetricForDPIWithoutCache(53LL, a2);
      v13 = (__int64 *)gpsi;
    }
    else
    {
      v32 = 112LL * v31;
      v30 = *(_DWORD *)(v29 + v32 + 3132);
      if ( v30 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v13 = (__int64 *)gpsi;
        v30 = *(_DWORD *)(gpsi + v32 + 3132);
        if ( v30 == -1 )
          v30 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 120) = v30;
  v33 = *v13;
  if ( a2 == *(unsigned __int16 *)(*v13 + 8678) )
  {
    v34 = *(_DWORD *)(v33 + 2096);
  }
  else if ( a2 == 96 )
  {
    v34 = *(_DWORD *)(v33 + 2484);
  }
  else
  {
    v35 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v35 == -1 )
    {
      v34 = ScaleSystemMetricForDPIWithoutCache(54LL, a2);
      v13 = (__int64 *)gpsi;
    }
    else
    {
      v36 = 112 * (v35 + 28LL);
      v34 = *(_DWORD *)(v33 + v36);
      if ( v34 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v13 = (__int64 *)gpsi;
        v34 = *(_DWORD *)(v36 + gpsi);
        if ( v34 == -1 )
          v34 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 216) = v34;
  v37 = *v13;
  if ( a2 == *(unsigned __int16 *)(v37 + 8678) )
  {
    v38 = *(_DWORD *)(v37 + 2248);
  }
  else if ( a2 == 96 )
  {
    v38 = *(_DWORD *)(v37 + 2636);
  }
  else
  {
    v39 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v39 == -1 )
    {
      v38 = ScaleSystemMetricForDPIWithoutCache(92LL, a2);
    }
    else
    {
      v41 = 112LL * v39;
      v38 = *(_DWORD *)(v40 + v41 + 3152);
      if ( v38 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v38 = *(_DWORD *)(v41 + gpsi + 3152);
        if ( v38 == -1 )
          v38 = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 500) = v38;
  v42 = GetScaledLogFontForDpi(4, a2, (unsigned __int16 *)(a1 + 24)) & 1;
  v43 = GetScaledLogFontForDpi(1, a2, (unsigned __int16 *)(a1 + 124)) & v42;
  v44 = GetScaledLogFontForDpi(2, a2, (unsigned __int16 *)(a1 + 224)) & v43;
  v45 = GetScaledLogFontForDpi(3, a2, (unsigned __int16 *)(a1 + 316)) & v44;
  return v45 & (unsigned int)GetScaledLogFontForDpi(5, a2, (unsigned __int16 *)(a1 + 408));
}
