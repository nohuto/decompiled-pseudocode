/*
 * XREFs of UsbhHubAckPortChange @ 0x1C0025B34
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003CF38 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubAckPortChange(__int64 a1, unsigned __int16 a2, __int16 *a3, _DWORD *a4)
{
  __int16 v8; // ax
  unsigned __int16 v9; // bx
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-48h]
  _WORD v13[8]; // [rsp+40h] [rbp-28h] BYREF
  __int16 v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
      a2);
  v8 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    v9 = 16;
  }
  else if ( (v8 & 2) != 0 )
  {
    v9 = 17;
  }
  else if ( (v8 & 4) != 0 )
  {
    v9 = 18;
  }
  else if ( (v8 & 8) != 0 )
  {
    v9 = 19;
  }
  else
  {
    if ( (v8 & 0x10) == 0 )
      return 0LL;
    v9 = 20;
  }
  v13[0] = 291;
  v13[1] = v9;
  v13[2] = a2;
  v13[3] = 0;
  v10 = UsbhSyncSendCommand(a1, (__int64)v13, 0LL, &v14, v12, a4);
  Log(a1, 4, 1095459687, v9, (int)v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      28,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
      a2,
      v10);
  return v10;
}
