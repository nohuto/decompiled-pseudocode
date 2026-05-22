/*
 * XREFs of ?__StaticInitConfig@CraneGrabRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180039D34
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18003A698 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800375A8 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall CraneGrabRecognizer::__StaticInitConfig(HKEY hKey)
{
  int v2; // ebx
  int v3; // ebx
  unsigned __int16 RegConfigValue; // ax
  unsigned __int16 v5; // cx
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  __int16 Data; // [rsp+60h] [rbp+30h] BYREF

  v2 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 480.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"CraneMaximumFingerSeparation", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v2) = Data;
  }
  CraneGrabRecognizer::s_maximumFingerSeparation = v2;
  v3 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 150.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"CraneMaximumGrabSeparation", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v3) = Data;
  }
  CraneGrabRecognizer::s_maximumGrabSeparation = v3;
  RegConfigValue = GestureSession::ReadRegConfigValue(hKey, L"CraneMinimumPickUpAltitude", 5u, 0);
  v5 = CraneGrabRecognizer::s_maximumFingerSeparation;
  CraneGrabRecognizer::s_minimumPickUpAltitude = RegConfigValue;
  if ( CraneGrabRecognizer::s_maximumFingerSeparation < CraneGrabRecognizer::s_maximumGrabSeparation )
    v5 = CraneGrabRecognizer::s_maximumGrabSeparation;
  CraneGrabRecognizer::s_maximumFingerSeparation = v5;
}
