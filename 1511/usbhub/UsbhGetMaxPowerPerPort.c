/*
 * XREFs of UsbhGetMaxPowerPerPort @ 0x1C001CB10
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001D394 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     UsbhGetHubPowerStatus @ 0x1C001CA44 (UsbhGetHubPowerStatus.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhGetMaxPowerPerPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  unsigned int v14; // ecx
  int v15; // [rsp+20h] [rbp-40h]
  int v16; // [rsp+48h] [rbp-18h]
  _DWORD v17[4]; // [rsp+50h] [rbp-10h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int16 v19; // [rsp+A0h] [rbp+40h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  LOWORD(v18) = 0;
  v6 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      34,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  v20 = 0;
  FdoExt(a1, v5, v7, v8);
  v17[0] = 128;
  v19 = 2;
  v17[1] = 0x20000;
  v10 = UsbhSyncSendCommand(a1, (__int64)v17, (__int64)&v18, &v19, v15, &v20);
  if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v10) )
  {
    LOBYTE(v16) = 0;
    UsbhException(a1, 0, 17, (int)&v18, v19, v10, v20, usbfile_hub_c, 3864, v16);
  }
  if ( v10 >= 0 )
  {
    if ( (v18 & 1) != 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          35,
          (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
      v6[761] = 500;
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          36,
          (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
      v6[761] = 100;
    }
  }
  UsbhGetHubPowerStatus(a1, v9, v11, v12);
  if ( v6[759] )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        37,
        (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
        v6[759]);
    return (unsigned int)v6[759];
  }
  else
  {
    result = (unsigned int)v6[761];
    if ( !(_DWORD)result )
    {
      v14 = v6[760];
      result = 500LL;
      if ( v14 )
        return v14;
    }
  }
  return result;
}
