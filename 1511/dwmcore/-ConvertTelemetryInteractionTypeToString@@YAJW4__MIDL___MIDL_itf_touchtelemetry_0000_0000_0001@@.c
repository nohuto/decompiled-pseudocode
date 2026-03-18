/*
 * XREFs of ?ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@PEAG@Z @ 0x1800025E4
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800AFAA8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180101EF0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertTelemetryInteractionTypeToString(int a1, unsigned __int16 *a2)
{
  int v2; // ecx
  const unsigned __int16 *v3; // r8
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
  int v16; // ecx
  int v17; // ecx

  if ( a1 > 9 )
  {
    v11 = a1 - 10;
    if ( !v11 )
    {
      v3 = L"KbdUp";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v3 = L"KbdDown";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v3 = L"KbdPageUp";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v3 = L"KbdPageDown";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v3 = L"KbdLeft";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v3 = L"KbdRight";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v3 = L"KbdHome";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    if ( v17 == 1 )
    {
      v3 = L"KbdEnd";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    goto LABEL_32;
  }
  if ( a1 == 9 )
  {
    v3 = L"MouseHWheel";
    return StringCchCopyW(a2, 0x80uLL, v3);
  }
  if ( !a1 )
  {
    v3 = L"Unknown";
    return StringCchCopyW(a2, 0x80uLL, v3);
  }
  v2 = a1 - 1;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( !v5 )
    {
      v3 = L"Tap";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v3 = L"Hold";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v3 = L"CrossSlide";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v3 = L"PinchZoom";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v3 = L"DirectInk";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v3 = L"MouseLeftButton";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
    if ( v10 == 1 )
    {
      v3 = L"MouseWheel";
      return StringCchCopyW(a2, 0x80uLL, v3);
    }
LABEL_32:
    v3 = L"Undefined";
    return StringCchCopyW(a2, 0x80uLL, v3);
  }
  v3 = L"Manipulation";
  return StringCchCopyW(a2, 0x80uLL, v3);
}
