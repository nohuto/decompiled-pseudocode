/*
 * XREFs of CheckUSBFnIncludeDefaultCfg @ 0x1C0057918
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0057FB4 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_L @ 0x1C0058084 (WPP_RECORDER_SF_L.c)
 *     MyRegOpenKeyForRead @ 0x1C0058124 (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C00582E4 (MyRegQueryUlong.c)
 */

char __fastcall CheckUSBFnIncludeDefaultCfg(__int64 a1)
{
  int v1; // eax
  unsigned __int16 v2; // r9
  int Ulong; // eax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  __int64 v11; // [rsp+28h] [rbp-8h]
  int v12; // [rsp+28h] [rbp-8h]
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF

  Handle = 0LL;
  v1 = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default", &Handle);
  if ( v1 < 0 )
  {
    v2 = 16;
LABEL_3:
    LODWORD(v11) = v1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      v2,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v11);
    goto LABEL_12;
  }
  Ulong = MyRegQueryUlong(Handle);
  if ( Ulong >= 0 )
  {
    WPP_RECORDER_SF_L(WPP_GLOBAL_Control->DeviceExtension, v4, v5, 18);
  }
  else
  {
    v12 = Ulong;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x11u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v12);
  }
  ZwClose(Handle);
  Handle = 0LL;
  v1 = MyRegOpenKeyForRead(v6, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN", &Handle);
  if ( v1 < 0 )
  {
    v2 = 19;
    goto LABEL_3;
  }
  v7 = MyRegQueryUlong(Handle);
  if ( v7 >= 0 )
  {
    WPP_RECORDER_SF_L(WPP_GLOBAL_Control->DeviceExtension, v8, v9, 21);
  }
  else
  {
    LODWORD(v11) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x14u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v11);
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return 0;
}
