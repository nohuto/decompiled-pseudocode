/*
 * XREFs of GetSystemMetricsForWindow @ 0x1C006E7C8
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00B2AE0 (ParkIcon.c)
 *     GetCaptionHeight @ 0x1C011CE48 (GetCaptionHeight.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0120C50 (NtUserGetWindowMinimizeRect.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C3D78 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     MNPositionSysMenu @ 0x1C01F46E8 (MNPositionSysMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetDpiDepSysMetCacheMetricSlot @ 0x1C006E95C (GetDpiDepSysMetCacheMetricSlot.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetSystemMetricsForWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int DpiDepSysMetCacheMetricSlot; // eax
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r11d
  unsigned int v18; // eax
  __int64 v19; // rax
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v21; // r11d
  __int64 v22; // rdi

  v2 = (int)a2;
  v4 = 0;
  if ( (unsigned int)IsDPIDWMSysMet(a2)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) + 408) )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
  }
  DpiDepSysMetCacheMetricSlot = GetDpiDepSysMetCacheMetricSlot((unsigned int)v2);
  v9 = DpiDepSysMetCacheMetricSlot;
  if ( DpiDepSysMetCacheMetricSlot == -1 )
  {
    if ( (*(_DWORD *)(a1 + 352) & 0xF) == 2 || !(unsigned int)IsDPIAbsoluteSysMet((unsigned int)v2) && !v13 )
    {
      v10 = gpsi;
      return *(unsigned int *)(v10 + 4 * v2 + 1880);
    }
    if ( !v12 )
      return *(unsigned int *)(gpsi + 4 * v2 + 2268);
    if ( v12 == 1 )
    {
      v10 = gpsi;
      if ( v13 )
        return *(unsigned int *)(gpsi + 4 * v2 + 2656);
      return *(unsigned int *)(v10 + 4 * v2 + 1880);
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
    {
      v17 = *(unsigned __int16 *)(a1 + 356);
    }
    else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
           && (v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 244LL) & 1) != 0 )
    {
      v17 = 96;
    }
    else
    {
      v17 = *(unsigned __int16 *)(gpsi + 8678LL);
    }
    if ( v17 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      return *(unsigned int *)(gpsi + 4 * v2 + 1880);
    }
    else if ( v17 == 96 )
    {
      return *(unsigned int *)(gpsi + 4 * v2 + 2268);
    }
    else
    {
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v17);
      if ( DpiDepSysMetCachePlateauSlot == -1 )
      {
        return (unsigned int)ScaleSystemMetricForDPIWithoutCache((unsigned int)v2, v21);
      }
      else
      {
        v22 = v9 + 28LL * DpiDepSysMetCachePlateauSlot;
        v18 = *(_DWORD *)(gpsi + 4 * v22 + 3044);
        if ( v18 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v21);
          v18 = *(_DWORD *)(gpsi + 4 * v22 + 3044);
          if ( v18 == -1 )
            return 0;
        }
      }
    }
    return v18;
  }
  return v4;
}
