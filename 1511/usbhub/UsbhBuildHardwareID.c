/*
 * XREFs of UsbhBuildHardwareID @ 0x1C0007ACC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     UsbhMakeId @ 0x1C00084B0 (UsbhMakeId.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004FD8C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0051EB4 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C005203C (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C0056650 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildHardwareID(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r11
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r10
  char v11; // r11
  int v13; // r8d
  __int64 v14; // r15
  int v15; // eax
  PDEVICE_OBJECT v16; // r10
  unsigned __int16 v17; // r13
  unsigned __int16 v18; // r12
  __int16 v19; // r15
  __int64 Id; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // r8d
  char v26; // dl
  int v27; // eax
  int v28; // r8d
  int v29; // r9d
  int v30; // r8d
  unsigned int v31; // r10d
  int v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+20h] [rbp-48h]
  int v35; // [rsp+20h] [rbp-48h]
  int v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+28h] [rbp-40h]
  int v38; // [rsp+28h] [rbp-40h]
  int v39; // [rsp+28h] [rbp-40h]
  int v40; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+28h] [rbp-40h]
  int v42; // [rsp+30h] [rbp-38h]
  int v43; // [rsp+30h] [rbp-38h]
  int v44; // [rsp+30h] [rbp-38h]
  int v45; // [rsp+30h] [rbp-38h]
  int v46; // [rsp+30h] [rbp-38h]
  unsigned int v47; // [rsp+78h] [rbp+10h] BYREF

  v47 = 0;
  if ( a2 )
  {
    v14 = PdoExt(a2);
    v15 = *(_DWORD *)(v14 + 1412);
    if ( (v15 & 0x10000) != 0 && (v15 & 4) == 0 )
    {
      v27 = UsbhBuildUxdPnpId(4LL, a2, a3);
      if ( v27 >= 0 )
      {
        Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v28,
            14,
            (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1752651845, 0, v27);
      v16 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        15,
        (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids);
    }
    v16 = WPP_GLOBAL_Control;
LABEL_8:
    v17 = *(_WORD *)(v14 + 1400);
    v18 = *(_WORD *)(v14 + 1402);
    v19 = *(_WORD *)(v14 + 1404);
    if ( LOWORD(v16->DeviceType) )
      WPP_RECORDER_SF_DDD(
        v16->DeviceExtension,
        v17,
        v13,
        16,
        (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
        v17,
        v18,
        v19);
    Log(a1, 4096, 1752648004, v17, v18);
    LOWORD(v42) = v17;
    LOWORD(v37) = 4;
    LOWORD(v32) = 0;
    Id = UsbhMakeId(0LL, L"USB\\VID_nnnn", 0LL, &v47, v32, v37, v42, 0LL);
    if ( Id )
    {
      LOWORD(v43) = v18;
      LOWORD(v38) = 4;
      LOWORD(v33) = 0;
      v21 = UsbhMakeId(0LL, L"&PID_nnnn", Id, &v47, v33, v38, v43, 0LL);
      if ( v21 )
      {
        LOWORD(v44) = v19;
        LOWORD(v39) = 4;
        LOWORD(v34) = 1;
        v22 = UsbhMakeId(1LL, L"&REV_nnnn", v21, &v47, v34, v39, v44, 0LL);
        LOWORD(v45) = v17;
        LOWORD(v40) = 4;
        LOWORD(v35) = 0;
        v23 = UsbhMakeId(0LL, L"USB\\VID_nnnn", v22, &v47, v35, v40, v45, 0LL);
        if ( v23 )
        {
          LOWORD(v46) = v18;
          LOWORD(v41) = 4;
          LOWORD(v36) = 2;
          v24 = UsbhMakeId(0LL, L"&PID_nnnn", v23, &v47, v36, v41, v46, 0LL);
          if ( v24 )
          {
            v26 = v47;
            *(_DWORD *)(a3 + 4) = v47;
            *(_QWORD *)(a3 + 8) = v24;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_Sd(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                v25,
                18,
                (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
                v24,
                v26);
            return 0LL;
          }
          v29 = a2;
          v30 = 1751725089;
        }
        else
        {
          v29 = a2;
          v30 = 1751725345;
        }
      }
      else
      {
        v29 = a2;
        v30 = 1751724321;
      }
    }
    else
    {
      v29 = a2;
      v30 = 1751724577;
    }
    goto LABEL_27;
  }
  v6 = UsbhMakeId(0LL, L"USB\\UNKNOWN", 0LL, &v47, 2, 0, 0, 0LL);
  if ( v6 )
  {
    v7 = v47;
    *(_DWORD *)(a3 + 4) = v47;
    *(_QWORD *)(a3 + 8) = v6;
    Log(a1, 4096, 1751733537, v6, v7);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sqd(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        v9,
        17,
        (__int64)&WPP_ddb07952c6cd0379ee9386e940421eb8_Traceguids,
        v10,
        v10,
        v11);
    return 0LL;
  }
  v29 = 0;
  v30 = 1751724833;
LABEL_27:
  Log(a1, 4096, v30, v29, -1073741670LL);
  return v31;
}
