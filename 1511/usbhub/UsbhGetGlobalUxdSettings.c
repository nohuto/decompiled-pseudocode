/*
 * XREFs of UsbhGetGlobalUxdSettings @ 0x1C00071DC
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 *     UsbhRegPnpStart @ 0x1C0007060 (UsbhRegPnpStart.c)
 *     UsbhDeleteUxdSettings @ 0x1C00568D4 (UsbhDeleteUxdSettings.c)
 *     UsbhUxdShutdown @ 0x1C0057324 (UsbhUxdShutdown.c)
 * Callees:
 *     UsbhRegQueryGlobalKey @ 0x1C0007310 (UsbhRegQueryGlobalKey.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhGetGlobalUxdSettings(__int64 a1, _QWORD *a2)
{
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall *v4)(int, int, int, int, __int64, __int64); // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+48h] [rbp-B8h]
  const wchar_t *v6; // [rsp+50h] [rbp-B0h]
  _QWORD *v7; // [rsp+58h] [rbp-A8h]
  int v8; // [rsp+60h] [rbp-A0h]
  _QWORD *v9; // [rsp+68h] [rbp-98h]
  int v10; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v11)(int, int, int, int, __int64, __int64); // [rsp+78h] [rbp-88h]
  int v12; // [rsp+80h] [rbp-80h]
  const wchar_t *v13; // [rsp+88h] [rbp-78h]
  char *v14; // [rsp+90h] [rbp-70h]
  int v15; // [rsp+98h] [rbp-68h]
  char *v16; // [rsp+A0h] [rbp-60h]
  int v17; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v18)(int, int, int, int, __int64, __int64); // [rsp+B0h] [rbp-50h]
  int v19; // [rsp+B8h] [rbp-48h]
  const wchar_t *v20; // [rsp+C0h] [rbp-40h]
  _QWORD *v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+D0h] [rbp-30h]
  _QWORD *v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v25)(int, int, int, int, __int64, __int64); // [rsp+E8h] [rbp-18h]
  int v26; // [rsp+F0h] [rbp-10h]
  const wchar_t *v27; // [rsp+F8h] [rbp-8h]
  char *v28; // [rsp+100h] [rbp+0h]
  int v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  __int64 v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  __int128 v34; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h]
  int v37; // [rsp+150h] [rbp+50h]

  v7 = a2;
  v3 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = UsbhQueryGlobalHubValue;
  v5 = 0;
  v6 = L"UxdGlobalDeleteOnShutdown";
  v13 = L"UxdGlobalDeleteOnReload";
  v14 = (char *)a2 + 4;
  v16 = (char *)a2 + 4;
  v20 = L"UxdGlobalDeleteOnDisconnect";
  v21 = a2 + 1;
  v23 = a2 + 1;
  v27 = L"UxdGlobalEnable";
  v28 = (char *)a2 + 12;
  v9 = a2;
  v11 = UsbhQueryGlobalHubValue;
  v12 = 0;
  v18 = UsbhQueryGlobalHubValue;
  v19 = 0;
  v25 = UsbhQueryGlobalHubValue;
  v26 = 0;
  v32 = 0LL;
  v33 = 0;
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v30 = &v3;
  v8 = 4;
  v10 = 4;
  v15 = 4;
  v17 = 4;
  v22 = 4;
  v24 = 4;
  v29 = 4;
  v31 = 4;
  v34 = 0LL;
  return UsbhRegQueryGlobalKey(1, (unsigned int)L"usbhub\\uxd_control\\policy", 4, (unsigned int)&v4, 280);
}
