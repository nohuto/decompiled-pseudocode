/*
 * XREFs of PrepareGammaRampData @ 0x1C00E4060
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C00E3890 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreGetDeviceGammaRamp @ 0x1C00E4224 (GreGetDeviceGammaRamp.c)
 */

__int64 __fastcall PrepareGammaRampData(unsigned int *a1, unsigned int **a2, _DWORD *a3)
{
  int DeviceGammaRamp; // r14d
  unsigned int v7; // esi
  __int64 DCEx; // rax
  __int64 v9; // rbx
  unsigned int DeviceCaps; // eax
  __int64 i; // rdx
  unsigned __int64 v12; // rcx
  unsigned int *v13; // rax
  unsigned int *v14; // rdi
  unsigned int v15; // ebp
  __int64 j; // rbx
  HDC DisplayDC; // rsi
  __int64 v18; // r15

  DeviceGammaRamp = 0;
  v7 = 0;
  DCEx = _GetDCEx(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL), 0LL, 8388611LL);
  v9 = DCEx;
  if ( !DCEx )
    return 3221225495LL;
  DeviceCaps = GreGetDeviceCaps(DCEx, 116LL);
  *a1 = DeviceCaps;
  if ( DeviceCaps < 0x3C )
    *a1 = 60;
  _ReleaseDC(v9);
  GreLockVisRgn(*gpDispInfo);
  for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 24) & 1) != 0 )
      ++v7;
  }
  v12 = 1544LL * v7;
  if ( v12 > 0xFFFFFFFF || (unsigned int)v12 >= 0xFFFFF9F8 )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(*gpDispInfo);
    return 3221225621LL;
  }
  v13 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(v12 + 1544), 1835231559LL);
  v14 = v13;
  if ( !v13 )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(*gpDispInfo);
    return 3221225495LL;
  }
  *v13 = v7;
  if ( !gProtocolType )
  {
    v15 = 0;
    for ( j = *(_QWORD *)(gpDispInfo + 96LL); j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_DWORD *)(j + 24) & 1) != 0 )
      {
        DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(j + 160), 0LL);
        if ( !DisplayDC )
          break;
        v18 = 386LL * v15;
        DeviceGammaRamp = GreGetDeviceGammaRamp(DisplayDC);
        if ( !DeviceGammaRamp )
          break;
        GreMarkUndeletableDC(DisplayDC);
        ++v15;
        *(_QWORD *)&v14[v18 + 386] = DisplayDC;
      }
    }
  }
  *a3 = DeviceGammaRamp;
  *a2 = v14;
  GreUnlockVisRgn(*gpDispInfo);
  return 0LL;
}
