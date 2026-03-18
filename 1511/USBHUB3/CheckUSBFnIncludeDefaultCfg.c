/*
 * XREFs of CheckUSBFnIncludeDefaultCfg @ 0x1C0032710
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0032B48 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     MyRegOpenKeyForRead @ 0x1C0032D70 (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C0032F30 (MyRegQueryUlong.c)
 */

char __fastcall CheckUSBFnIncludeDefaultCfg(__int64 a1)
{
  int v1; // eax
  unsigned __int16 v2; // r9
  int Ulong; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v7; // [rsp+28h] [rbp-8h]
  int v8; // [rsp+28h] [rbp-8h]
  int v9; // [rsp+28h] [rbp-8h]
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF

  Handle = 0LL;
  v1 = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default", &Handle);
  if ( v1 < 0 )
  {
    v2 = 16;
LABEL_3:
    LODWORD(v7) = v1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      v2,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v7);
    goto LABEL_12;
  }
  Ulong = MyRegQueryUlong(Handle);
  if ( Ulong >= 0 )
  {
    v9 = 0;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x12u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v9);
  }
  else
  {
    v8 = Ulong;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x11u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v8);
  }
  ZwClose(Handle);
  Handle = 0LL;
  v1 = MyRegOpenKeyForRead(v4, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN", &Handle);
  if ( v1 < 0 )
  {
    v2 = 19;
    goto LABEL_3;
  }
  v5 = MyRegQueryUlong(Handle);
  if ( v5 >= 0 )
  {
    LODWORD(v7) = 0;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x15u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v7);
  }
  else
  {
    LODWORD(v7) = v5;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x14u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v7);
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return 0;
}
