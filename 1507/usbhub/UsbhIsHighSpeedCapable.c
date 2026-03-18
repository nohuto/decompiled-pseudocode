/*
 * XREFs of UsbhIsHighSpeedCapable @ 0x1C00281F4
 * Callers:
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
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
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
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
