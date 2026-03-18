/*
 * XREFs of UsbhGetHubPowerStatus @ 0x1C002010C
 * Callers:
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C001FF94 (UsbhGetMaxPowerPerPort.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhQueryHubState @ 0x1C00201D8 (UsbhQueryHubState.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  int HubState; // eax
  int v7; // r10d

  v5 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
  if ( *((_QWORD *)v5 + 328) )
  {
    HubState = UsbhQueryHubState(a1);
    Log(a1, 8, 1752396916, 0LL, HubState);
    if ( v7 >= 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          33,
          (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
      v5[762] = 500;
    }
  }
  else
  {
    v5[762] = 0;
  }
}
