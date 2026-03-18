/*
 * XREFs of ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@@Z @ 0x18001D014
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18001CA90 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001CB00 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800A1CAC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ConvertTelemetryInteractionTypeToString(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
      return L"MouseHWheel";
    if ( !a1 )
      return L"Unknown";
    v2 = a1 - 1;
    if ( !v2 )
      return L"Manipulation";
    v3 = v2 - 1;
    if ( !v3 )
      return L"Tap";
    v4 = v3 - 1;
    if ( !v4 )
      return L"Hold";
    v5 = v4 - 1;
    if ( !v5 )
      return L"CrossSlide";
    v6 = v5 - 1;
    if ( !v6 )
      return L"PinchZoom";
    v7 = v6 - 1;
    if ( !v7 )
      return L"DirectInk";
    v8 = v7 - 1;
    if ( !v8 )
      return L"MouseLeftButton";
    if ( v8 == 1 )
      return L"MouseWheel";
    return L"Undefined";
  }
  v9 = a1 - 10;
  if ( !v9 )
    return L"KbdUp";
  v10 = v9 - 1;
  if ( !v10 )
    return L"KbdDown";
  v11 = v10 - 1;
  if ( !v11 )
    return L"KbdPageUp";
  v12 = v11 - 1;
  if ( !v12 )
    return L"KbdPageDown";
  v13 = v12 - 1;
  if ( !v13 )
    return L"KbdLeft";
  v14 = v13 - 1;
  if ( !v14 )
    return L"KbdRight";
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
      return L"KbdEnd";
    return L"Undefined";
  }
  return L"KbdHome";
}
