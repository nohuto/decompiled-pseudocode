/*
 * XREFs of ?EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ @ 0x180023210
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180022C40 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?DoConvergedTargetingDecision@EdgeGestureComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180022F00 (-DoConvergedTargetingDecision@EdgeGestureComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall EdgeGestureComponent::EnsureEdgeThresholds(EdgeGestureComponent *this)
{
  float v2; // xmm0_4
  double v3; // xmm2_8
  double v4; // xmm2_8
  float v5; // xmm1_4
  int v6; // ecx
  double v7; // xmm0_8
  double v8; // xmm0_8
  DWORD cbData; // [rsp+40h] [rbp+10h] BYREF
  int Data; // [rsp+48h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+20h] BYREF

  if ( !*((_DWORD *)this + 9) )
  {
    v2 = (float)((float)*((int *)this + 7) / 800.0) * 40.0;
    v3 = v2;
    v4 = v2 < 0.0 ? v3 - 0.5 : v3 + 0.5;
    v5 = (float)((float)*((int *)this + 6) / 480.0) * 40.0;
    v6 = (int)v4;
    v7 = v5;
    v8 = v5 < 0.0 ? v7 - 0.5 : v7 + 0.5;
    *((_DWORD *)this + 9) = v6;
    *((_DWORD *)this + 10) = v6;
    *((_DWORD *)this + 11) = (int)v8;
    *((_DWORD *)this + 12) = (int)v8;
    if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\Touch\\EdgeGestureThresholds", 0, 0x20019u, &hKey) )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Top", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 9) = Data;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Bottom", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 10) = Data;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Left", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 11) = Data;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Right", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 12) = Data;
      RegCloseKey(hKey);
    }
  }
}
