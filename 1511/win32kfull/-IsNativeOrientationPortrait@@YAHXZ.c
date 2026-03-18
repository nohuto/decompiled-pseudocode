/*
 * XREFs of ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C009A544
 * Callers:
 *     xxxUserReinitializeAutoRotation @ 0x1C009A300 (xxxUserReinitializeAutoRotation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 IsNativeOrientationPortrait(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v4[128]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v5[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v6; // [rsp+C8h] [rbp-38h]
  int v7; // [rsp+D0h] [rbp-30h]
  unsigned int v8; // [rsp+D4h] [rbp-2Ch]
  unsigned int v9; // [rsp+D8h] [rbp-28h]
  _BYTE v10[20]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v11; // [rsp+124h] [rbp+24h]
  int v12; // [rsp+12Ch] [rbp+2Ch]

  v2 = 1;
  v0 = 0;
  v3[0] = 2;
  if ( (int)((__int64 (__fastcall *)(__int64, int *, _BYTE *, int *, _BYTE *, _QWORD))DrvQueryDisplayConfig)(
              1073741825LL,
              &v2,
              v10,
              v3,
              v4,
              0LL) < 0 )
    return 0LL;
  v6 = v11;
  v7 = v12;
  v5[0] = 3;
  v5[1] = 80;
  if ( (int)DrvDisplayConfigGetDeviceInfo(v5) < 0 )
    return 0LL;
  LOBYTE(v0) = v9 > v8;
  return v0;
}
