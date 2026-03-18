/*
 * XREFs of UsbhIsHighSpeedCapable @ 0x1C0027224
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

bool __fastcall UsbhIsHighSpeedCapable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  int v7; // [rsp+20h] [rbp-48h]
  __int16 v8; // [rsp+30h] [rbp-38h] BYREF
  __int16 v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+3Ah] [rbp-2Eh]
  __int16 v11; // [rsp+3Eh] [rbp-2Ah]
  int v12; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-20h] BYREF

  v5 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  if ( v5[633] != 1 )
    return 0;
  if ( v5[634] == 2 )
    return 1;
  v9 = 1664;
  v8 = 10;
  v11 = 10;
  v10 = 1536;
  return (int)UsbhSyncSendCommand(a1, (__int64)&v9, (__int64)v13, &v8, v7, &v12) >= 0;
}
