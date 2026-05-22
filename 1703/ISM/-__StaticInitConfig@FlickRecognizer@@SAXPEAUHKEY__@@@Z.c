/*
 * XREFs of ?__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180037EFC
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18003A698 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800375A8 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall FlickRecognizer::__StaticInitConfig(HKEY hKey)
{
  int v2; // ebx
  int v3; // ebx
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  __int16 Data; // [rsp+60h] [rbp+30h] BYREF

  v2 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 100.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"FlickMinimumFlickSpeed", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v2) = Data;
  }
  FlickRecognizer::s_minimumFlickSpeed = v2;
  v3 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 30.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"FlickMinimumFlickDelta", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v3) = Data;
  }
  FlickRecognizer::s_minimumFlickDelta = v3;
  FlickRecognizer::s_maximumFlickTail = GestureSession::ReadRegConfigValue(hKey, L"FlickMaximumTimeTail", 0x64u, 0);
  FlickRecognizer::s_maximumFlickUp = GestureSession::ReadRegConfigValue(hKey, L"FlickMaximumTimeUp", 0x32u, 0);
}
