/*
 * XREFs of UsbhGetHubPowerStatus @ 0x1C001CA44
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C001CB10 (UsbhGetMaxPowerPerPort.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryHubState @ 0x1C001C92C (UsbhQueryHubState.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  int v6; // eax
  int v7; // r10d
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v5 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  if ( *((_QWORD *)v5 + 328) )
  {
    v8 = 0;
    v6 = UsbhQueryHubState(a1, &v8, &v9);
    Log(a1, 8, 1752396916, 0LL, v6);
    if ( v7 >= 0 )
    {
      if ( (v8 & 1) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            32,
            (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
        v5[762] = 100;
      }
      else
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            33,
            (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
        v5[762] = 500;
      }
    }
  }
  else
  {
    v5[762] = 0;
  }
}
