/*
 * XREFs of ?__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180038FD0
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18003A698 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800375A8 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall ClickRecognizer::__StaticInitConfig(HKEY hKey)
{
  int v2; // ebx
  unsigned __int16 RegConfigValue; // dx
  int v4; // ebx
  LSTATUS v5; // eax
  unsigned __int16 v6; // ax
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  __int16 Data; // [rsp+60h] [rbp+30h] BYREF

  ClickRecognizer::s_doubleTapTimeThreshold = GestureSession::ReadRegConfigValue(
                                                hKey,
                                                L"DoubleTapTimeThreshold",
                                                0x12Cu,
                                                0);
  v2 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 60.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"DoubleTapDistanceThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v2) = Data;
  }
  ClickRecognizer::s_doubleTapDistanceThreshold = v2;
  ClickRecognizer::s_tapAndLongHoldTimeThreshold = GestureSession::ReadRegConfigValue(
                                                     hKey,
                                                     L"TapAndLongHoldTimeThreshold",
                                                     0x3E8u,
                                                     0);
  ClickRecognizer::s_tapAndHoldStartTimeThreshold = GestureSession::ReadRegConfigValue(
                                                      hKey,
                                                      L"TapAndHoldStartTimeThreshold",
                                                      0x2BCu,
                                                      0);
  ClickRecognizer::s_tapAndShortHoldTimeThreshold = GestureSession::ReadRegConfigValue(
                                                      hKey,
                                                      L"TapAndShortHoldTimeThreshold",
                                                      0x258u,
                                                      0);
  RegConfigValue = GestureSession::ReadRegConfigValue(hKey, L"TapAndHoldDurationThreshold", 0x12Cu, 0);
  ClickRecognizer::s_tapAndHoldDurationThreshold = RegConfigValue;
  v4 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 30.0);
  if ( hKey )
  {
    cbData = 4;
    v5 = RegQueryValueExW(hKey, L"TapAndHoldDistanceThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData);
    RegConfigValue = ClickRecognizer::s_tapAndHoldDurationThreshold;
    if ( !v5 && Type == 4 )
      LOWORD(v4) = Data;
  }
  v6 = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
  ClickRecognizer::s_tapAndHoldDistanceThreshold = v4;
  if ( ClickRecognizer::s_tapAndHoldStartTimeThreshold < ClickRecognizer::s_tapAndShortHoldTimeThreshold )
    v6 = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
  ClickRecognizer::s_tapAndShortHoldTimeThreshold = v6;
  if ( ClickRecognizer::s_tapAndHoldStartTimeThreshold + (unsigned int)RegConfigValue > ClickRecognizer::s_tapAndLongHoldTimeThreshold )
    ClickRecognizer::s_tapAndLongHoldTimeThreshold = ClickRecognizer::s_tapAndHoldStartTimeThreshold + RegConfigValue;
}
