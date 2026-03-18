/*
 * XREFs of ?ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@PEAG@Z @ 0x1800E4BA4
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800E4E20 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x1800E5554 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertTelemetryInteractionTypeToString(int a1, char *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  wchar_t *v9; // r8
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  if ( a1 > 9 )
  {
    v10 = a1 - 10;
    if ( !v10 )
    {
      v9 = (wchar_t *)L"KbdUp";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v9 = L"KbdDown";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v9 = L"KbdPageUp";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v9 = L"KbdPageDown";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v9 = L"KbdLeft";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v9 = L"KbdRight";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v9 = L"KbdHome";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    if ( v16 == 1 )
    {
      v9 = L"KbdEnd";
      return StringCchCopyW(a2, 128LL, (char *)v9);
    }
    goto LABEL_30;
  }
  if ( a1 == 9 )
  {
    v9 = L"MouseHWheel";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  if ( !a1 )
  {
    v9 = L"Unknown";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    v9 = L"Manipulation";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v9 = L"Tap";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v9 = L"Hold";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = L"CrossSlide";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = L"PinchZoom";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = L"DirectInk";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = L"MouseLeftButton";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  if ( v8 != 1 )
  {
LABEL_30:
    v9 = L"Undefined";
    return StringCchCopyW(a2, 128LL, (char *)v9);
  }
  v9 = L"MouseWheel";
  return StringCchCopyW(a2, 128LL, (char *)v9);
}
