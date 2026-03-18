/*
 * XREFs of UsbhBuildDeviceID @ 0x1C0007730
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     UsbhMakeId @ 0x1C00084B0 (UsbhMakeId.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0051DF8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0051EB4 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C005203C (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C0056650 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildDeviceID(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r13
  int v8; // eax
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r12
  int v11; // r8d
  int v12; // r9d
  __int64 Id; // rax
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  char v17; // al
  int v19; // eax
  int v20; // r8d
  int v21; // r10d
  __int16 v22; // r10
  int v23; // r8d
  unsigned int v24; // r10d
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+28h] [rbp-40h]
  int v28; // [rsp+28h] [rbp-40h]
  int v29; // [rsp+30h] [rbp-38h]
  int v30; // [rsp+30h] [rbp-38h]
  int v31; // [rsp+78h] [rbp+10h] BYREF

  v31 = 0;
  if ( a2 )
  {
    v7 = PdoExt(a2);
    v8 = *(_DWORD *)(v7 + 1412);
    if ( (v8 & 0x10000) != 0 && (v8 & 4) == 0 )
    {
      v19 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v19 >= 0 )
      {
        Log(a1, 4096, 1684624728, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v21 )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v20,
            v21 + 10,
            (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1684625477, 0, v19);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v22 )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids);
    }
    v9 = *(_WORD *)(v7 + 1400);
    v10 = *(_WORD *)(v7 + 1402);
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  Log(a1, 4096, 1685473604, v9, v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v9, v11, v12, v25, v9, v10);
  LOWORD(v29) = v9;
  LOWORD(v27) = 4;
  LOWORD(v25) = 0;
  Id = UsbhMakeId(0LL, L"USB\\VID_nnnn", 0LL, &v31, v25, v27, v29, 0LL);
  if ( Id )
  {
    LOWORD(v30) = v10;
    LOWORD(v28) = 4;
    LOWORD(v26) = 2;
    v14 = UsbhMakeId(0LL, L"&PID_nnnn", Id, &v31, v26, v28, v30, 0LL);
    v16 = v14;
    if ( v14 )
    {
      *(_QWORD *)(a3 + 8) = v14;
      v17 = v31;
      *(_DWORD *)(a3 + 4) = v31;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sd(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v15,
          13,
          (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
          v16,
          v17);
      return 0LL;
    }
    v23 = 1684615474;
  }
  else
  {
    v23 = 1684615457;
  }
  Log(a1, 4096, v23, a2, -1073741670LL);
  return v24;
}
