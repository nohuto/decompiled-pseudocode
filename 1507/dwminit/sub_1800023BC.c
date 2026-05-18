/*
 * XREFs of sub_1800023BC @ 0x1800023BC
 * Callers:
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 * Callees:
 *     sub_18000235C @ 0x18000235C (sub_18000235C.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 *     memset @ 0x180007606 (memset.c)
 */

char __fastcall sub_1800023BC(__int64 a1, int a2)
{
  int v2; // edi
  int IsOptedIn; // eax
  WCHAR *DeviceString; // rax
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v8[6]; // [rsp+378h] [rbp+270h] BYREF
  WCHAR *v9; // [rsp+390h] [rbp+288h]
  int v10; // [rsp+398h] [rbp+290h]
  int v11; // [rsp+3A0h] [rbp+298h]

  v2 = dword_18000C698;
  memset(&DisplayDevice, 0, sizeof(DisplayDevice));
  IsOptedIn = WinSqmIsOptedIn();
  if ( IsOptedIn )
  {
    LOBYTE(IsOptedIn) = sub_18000235C(&DisplayDevice);
    if ( (_BYTE)IsOptedIn )
    {
      v8[0] = 1;
      v10 = 1;
      DeviceString = DisplayDevice.DeviceString;
      if ( !DisplayDevice.DeviceString[0] )
        DeviceString = L"(null)";
      v8[2] = v2;
      v9 = DeviceString;
      v8[4] = 2;
      v11 = a2;
      LOBYTE(IsOptedIn) = WinSqmAddToStream(0LL, 11276LL, 3LL, v8);
    }
  }
  return IsOptedIn;
}
