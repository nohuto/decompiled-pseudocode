/*
 * XREFs of SetDesktopMetrics @ 0x1C00BA970
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00BA240 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetDesktopMetrics(__int64 a1)
{
  _DWORD *v1; // r9
  _DWORD *v2; // r9
  _DWORD *v3; // r9

  v1 = *(_DWORD **)(GetDispInfo(a1) + 88);
  *(_DWORD *)(gpsi + 1944LL) = v1[21] - v1[19];
  *(_DWORD *)(gpsi + 2124LL) = v1[21] + 2 * (*(_DWORD *)(gpsi + 2008LL) + *(_DWORD *)(gpsi + 2248LL)) - v1[19];
  *(_DWORD *)(gpsi + 1948LL) = v1[22] - *(_DWORD *)(gpsi + 1896LL) - v1[20];
  *(_DWORD *)(gpsi + 2128LL) = v1[22] + 2 * (*(_DWORD *)(gpsi + 2012LL) + *(_DWORD *)(gpsi + 2248LL)) - v1[20];
  v2 = *(_DWORD **)(GetDispInfo(gpsi) + 88);
  *(_DWORD *)(gpsi + 2332LL) = v2[25] - v2[23];
  *(_DWORD *)(gpsi + 2512LL) = v2[25] + 2 * (*(_DWORD *)(gpsi + 2008LL) + *(_DWORD *)(gpsi + 2636LL)) - v2[23];
  *(_DWORD *)(gpsi + 2336LL) = v2[26] - *(_DWORD *)(gpsi + 2284LL) - v2[24];
  *(_DWORD *)(gpsi + 2516LL) = v2[26] + 2 * (*(_DWORD *)(gpsi + 2012LL) + *(_DWORD *)(gpsi + 2636LL)) - v2[24];
  v3 = *(_DWORD **)(GetDispInfo(gpsi) + 88);
  *(_DWORD *)(gpsi + 2720LL) = v3[29] - v3[27];
  *(_DWORD *)(gpsi + 2900LL) = v3[29] + 2 * (*(_DWORD *)(gpsi + 2008LL) + *(_DWORD *)(gpsi + 2248LL)) - v3[27];
  *(_DWORD *)(gpsi + 2724LL) = v3[30] - *(_DWORD *)(gpsi + 2284LL) - v3[28];
  *(_DWORD *)(gpsi + 2904LL) = v3[30] + 2 * (*(_DWORD *)(gpsi + 2012LL) + *(_DWORD *)(gpsi + 2248LL)) - v3[28];
  return UpdateDesktopThresholds();
}
