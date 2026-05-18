/*
 * XREFs of ?SqmCrashAndRecovery@@YAXHK@Z @ 0x180002544
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000290C (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x1800024E4 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007B86 (memset_0.c)
 */

void __fastcall SqmCrashAndRecovery(__int64 a1, int a2)
{
  int v2; // edi
  __int64 v4; // rcx
  WCHAR *DeviceString; // rax
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v7[6]; // [rsp+378h] [rbp+270h] BYREF
  WCHAR *v8; // [rsp+390h] [rbp+288h]
  int v9; // [rsp+398h] [rbp+290h]
  int v10; // [rsp+3A0h] [rbp+298h]

  v2 = gDwmNumRetriesSoFar;
  DisplayDevice.cb = 0;
  memset_0(DisplayDevice.DeviceName, 0, 0x344uLL);
  if ( (unsigned int)WinSqmIsOptedIn(v4) && GetPrimaryDisplayDeviceInfo(&DisplayDevice) )
  {
    v7[0] = 1;
    v9 = 1;
    DeviceString = DisplayDevice.DeviceString;
    if ( !DisplayDevice.DeviceString[0] )
      DeviceString = L"(null)";
    v7[2] = v2;
    v8 = DeviceString;
    v7[4] = 2;
    v10 = a2;
    WinSqmAddToStream(0LL, 11276LL, 3LL, v7, DisplayDevice.cb);
  }
}
