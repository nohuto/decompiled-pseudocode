/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C00321C8
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C001FF0C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     ReadManifestAssignedValue @ 0x1C0031CD4 (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C0031D90 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0031F20 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C00323F0 (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C00325B0 (MyRegQueryUlong.c)
 */

__int64 __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  int Ulong; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  unsigned __int8 v5; // dl
  HANDLE v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int16 v9; // r9
  unsigned __int8 v10; // dl
  int v11; // ebx
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r9
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+28h] [rbp-20h]
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  Ulong = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  v3 = Ulong;
  if ( Ulong < 0 )
  {
    v4 = 10;
    v5 = 2;
LABEL_3:
    v15 = Ulong;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      v4,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v15);
    goto LABEL_7;
  }
  Ulong = MyRegQueryUlong(Handle);
  v3 = Ulong;
  if ( Ulong < 0 )
  {
    v4 = 11;
    v5 = 4;
    goto LABEL_3;
  }
  v17 = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xCu,
    (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
    v17);
LABEL_7:
  v6 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v3 < 0 )
  {
    ReadManifestAssignedValue(a1);
    if ( !CheckUSBFnIncludeDefaultCfg(v7) )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1);
  }
  KeyHandle = 0LL;
  LODWORD(Handle) = 0;
  v8 = MyRegOpenKeyForRead(v6, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &KeyHandle);
  if ( v8 < 0 )
  {
    v9 = 28;
    v10 = 4;
LABEL_14:
    LODWORD(v16) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1u,
      v9,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v16);
    goto LABEL_18;
  }
  v8 = MyRegQueryUlong(KeyHandle);
  if ( v8 < 0 )
  {
    v9 = 29;
    v10 = 3;
    goto LABEL_14;
  }
  v11 = (int)Handle;
  LODWORD(v16) = (_DWORD)Handle;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x1Eu,
    (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
    v16);
  *a1 = *a1 & 0x7FFFFFFF | ((v11 != 0) << 31);
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  LODWORD(v18) = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x1Fu,
    (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
    v18);
  v12 = 32;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    v12 = 33;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v12,
    (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids);
  v13 = 34;
  if ( (*(_BYTE *)a1 & 2) == 0 )
    v13 = 35;
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           1u,
           v13,
           (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids);
}
