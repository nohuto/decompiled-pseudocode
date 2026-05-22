/*
 * XREFs of ?__StaticInitConfig@CraneCarryRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180038740
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18003A698 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800375A8 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall CraneCarryRecognizer::__StaticInitConfig(HKEY hKey)
{
  int v2; // ebx
  int v3; // ebx
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  __int16 Data; // [rsp+60h] [rbp+30h] BYREF

  CraneCarryRecognizer::s_maximumReentryTime = GestureSession::ReadRegConfigValue(
                                                 hKey,
                                                 L"CraneMaximumReentryTime",
                                                 0x3E8u,
                                                 0);
  v2 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 800.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"CraneReentryDeadzone", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v2) = Data;
  }
  CraneCarryRecognizer::s_reentryDeadzone = v2;
  v3 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 0.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"CraneExitDeadzone", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v3) = Data;
  }
  CraneCarryRecognizer::s_exitDeadzone = v3;
  CraneCarryRecognizer::s_carryTimeoutMS = GestureSession::ReadRegConfigValue(hKey, L"CraneCarryTimeoutMS", 0x7D0u, 0);
}
