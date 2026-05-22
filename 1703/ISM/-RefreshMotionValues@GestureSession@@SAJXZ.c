/*
 * XREFs of ?RefreshMotionValues@GestureSession@@SAJXZ @ 0x180037180
 * Callers:
 *     ?StaticGetMotionParameterValue@GestureSession@@SAJW4MotionParameter@@PEAM@Z @ 0x180036C8C (-StaticGetMotionParameterValue@GestureSession@@SAJW4MotionParameter@@PEAM@Z.c)
 * Callees:
 *     ?OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z @ 0x180036D6C (-OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z.c)
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800375A8 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

__int64 GestureSession::RefreshMotionValues(void)
{
  unsigned __int16 RegConfigValue; // ax
  HKEY v1; // rcx
  int v2; // ebx
  LSTATUS v3; // eax
  int v4; // eax
  int v5; // ebx
  LSTATUS v6; // eax
  unsigned __int16 v7; // ax
  HKEY v8; // rcx
  int v9; // ebx
  LSTATUS v10; // eax
  int v11; // eax
  int v12; // ebx
  LSTATUS v13; // eax
  int v14; // eax
  int v15; // ebx
  LSTATUS v16; // eax
  float v17; // xmm2_4
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  __int16 Data; // [rsp+60h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+38h] BYREF

  hKey = 0LL;
  GestureSession::OpenConfigRegKey(&hKey);
  RegConfigValue = GestureSession::ReadRegConfigValue(hKey, L"MotionFriction", 20LL, 0LL);
  v1 = hKey;
  v2 = (int)(float)(GestureSession::s_LogicalScaleFactor * 80.0);
  GestureSession::s_motionFriction = (float)RegConfigValue / 100.0;
  if ( hKey )
  {
    cbData = 4;
    v3 = RegQueryValueExW(hKey, L"MotionParkingSpeed", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v1 = hKey;
    if ( !v3 && Type == 4 )
      LOWORD(v2) = Data;
  }
  v4 = (unsigned __int16)v2;
  v5 = (int)(float)(GestureSession::s_LogicalScaleFactor * 4000.0);
  GestureSession::s_motionParkingSpeed = (float)v4;
  if ( v1 )
  {
    cbData = 4;
    v6 = RegQueryValueExW(v1, L"MotionMaximumSpeed", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v1 = hKey;
    if ( !v6 && Type == 4 )
      LOWORD(v5) = Data;
  }
  GestureSession::s_motionMaximumSpeed = (float)(unsigned __int16)v5;
  v7 = GestureSession::ReadRegConfigValue(v1, L"MotionCompressPercent", 0LL, 0LL);
  v8 = hKey;
  v9 = (int)(float)(GestureSession::s_LogicalScaleFactor * 1800.0);
  GestureSession::s_motionCompressPercent = (float)v7 / 100.0;
  if ( hKey )
  {
    cbData = 4;
    v10 = RegQueryValueExW(hKey, L"MotionCompressOffsetX", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v8 = hKey;
    if ( !v10 && Type == 4 )
      LOWORD(v9) = Data;
  }
  v11 = (unsigned __int16)v9;
  v12 = (int)(float)(GestureSession::s_LogicalScaleFactor * 1800.0);
  GestureSession::s_motionCompressOffsetX = (float)v11;
  if ( v8 )
  {
    cbData = 4;
    v13 = RegQueryValueExW(v8, L"MotionCompressOffsetY", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v8 = hKey;
    if ( !v13 && Type == 4 )
      LOWORD(v12) = Data;
  }
  v14 = (unsigned __int16)v12;
  v15 = (int)(float)(GestureSession::s_LogicalScaleFactor * 125.0);
  GestureSession::s_motionCompressOffsetY = (float)v14;
  if ( v8 )
  {
    cbData = 4;
    v16 = RegQueryValueExW(v8, L"MotionCompressLimit", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v8 = hKey;
    if ( !v16 && Type == 4 )
      LOWORD(v15) = Data;
  }
  GestureSession::s_motionCompressLimit = (float)(unsigned __int16)v15;
  GestureSession::s_motionSpringFactor = (float)(unsigned __int16)GestureSession::ReadRegConfigValue(
                                                                    v8,
                                                                    L"MotionSpringFactor",
                                                                    49900LL,
                                                                    0LL)
                                       / 1000.0;
  GestureSession::s_motionSpringPower = (float)(unsigned __int16)GestureSession::ReadRegConfigValue(
                                                                   hKey,
                                                                   L"MotionSpringPower",
                                                                   750LL,
                                                                   0LL)
                                      / 1000.0;
  v17 = (float)(unsigned __int16)GestureSession::ReadRegConfigValue(hKey, L"MotionDamperFactor", 90LL, 0LL) / 1000.0;
  GestureSession::s_motionDamperFactor = v17;
  if ( GestureSession::s_motionFriction >= 1.0
    || GestureSession::s_motionParkingSpeed == 0.0
    || GestureSession::s_motionMaximumSpeed < 0.0
    || GestureSession::s_motionCompressLimit <= 0.0
    || GestureSession::s_motionSpringFactor <= 0.0
    || GestureSession::s_motionSpringPower <= 0.0
    || v17 < 0.0
    || v17 > 1.0 )
  {
    GestureSession::s_motionCompressPercent = 0.0;
    GestureSession::s_motionFriction = FLOAT_0_2;
    GestureSession::s_motionParkingSpeed = GestureSession::s_LogicalScaleFactor * 80.0;
    GestureSession::s_motionMaximumSpeed = GestureSession::s_LogicalScaleFactor * 4000.0;
    GestureSession::s_motionCompressOffsetX = GestureSession::s_LogicalScaleFactor * 1800.0;
    GestureSession::s_motionCompressOffsetY = GestureSession::s_LogicalScaleFactor * 1800.0;
    GestureSession::s_motionSpringFactor = FLOAT_49_900002;
    GestureSession::s_motionSpringPower = FLOAT_0_75;
    GestureSession::s_motionCompressLimit = GestureSession::s_LogicalScaleFactor * 125.0;
    GestureSession::s_motionDamperFactor = FLOAT_0_090000004;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
