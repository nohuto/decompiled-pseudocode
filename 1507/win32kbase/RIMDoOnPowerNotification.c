/*
 * XREFs of RIMDoOnPowerNotification @ 0x1C006E438
 * Callers:
 *     RIMOnPowerNotification @ 0x1C006E310 (RIMOnPowerNotification.c)
 * Callees:
 *     IsIsPrecisionTouchPadEnabledSupported_0 @ 0x1C0002E30 (IsIsPrecisionTouchPadEnabledSupported_0.c)
 *     IsPrecisionTouchPadEnabled_0 @ 0x1C0002E38 (IsPrecisionTouchPadEnabled_0.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C006E618 (RIMDeliverConfigRequestWithTimeout.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0071518 (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0077D50 (RIMGetDeviceObjectPointer.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D0E34 (RIMSendPTPLatencyMgtDeviceRequest.c)
 */

__int64 __fastcall RIMDoOnPowerNotification(int a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  int v7; // r15d
  int v8; // edi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  PVOID v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+28h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  int v24; // [rsp+A0h] [rbp+50h] BYREF
  int v25; // [rsp+A8h] [rbp+58h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xAu,
    (__int64)&WPP_53ee9f8980b1cd91d40acf6113c44ddb_Traceguids);
  v7 = 1;
  v8 = 0;
  if ( (a3 & 1) != 0 && *(_BYTE *)(a2 + 48) == 3 )
  {
    v10 = *(_QWORD *)(a2 + 400);
    if ( *(_WORD *)(v10 + 42) == 13 && *(_WORD *)(v10 + 40) == 14 )
    {
      v8 = RIMGetDeviceObjectPointer(a2 + 208, v6, 2LL, &Handle, &Object, &v20);
      if ( v8 < 0 )
        goto LABEL_24;
      v11 = *(_DWORD *)(a2 + 184);
      v12 = 3;
      v25 = 0;
      v24 = 0;
      v21 = 0LL;
      if ( (v11 & 0x200) != 0 )
      {
        v12 = 2;
      }
      else if ( (v11 & 0x400) == 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0xBu,
          (__int64)&WPP_53ee9f8980b1cd91d40acf6113c44ddb_Traceguids);
      }
      v13 = Object;
      LOWORD(v17) = 82;
      v8 = RIMDeliverConfigRequestWithTimeout(*(_QWORD *)(a2 + 400), v20, Object, v12, v17);
      if ( v8 >= 0 )
      {
        if ( (int)IsIsPrecisionTouchPadEnabledSupported_0() >= 0 )
          v7 = IsPrecisionTouchPadEnabled_0();
        if ( !v7 )
        {
          LOWORD(v18) = 87;
          v15 = RIMDeliverConfigRequestWithTimeout(*(_QWORD *)(a2 + 400), v20, v13, 0LL, v18);
          v8 = v15;
          if ( v15 < 0 )
          {
            LODWORD(v19) = v15;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0xCu,
              (__int64)&WPP_53ee9f8980b1cd91d40acf6113c44ddb_Traceguids,
              v19);
          }
        }
      }
      if ( (unsigned int)RIMFindInputDeviceForConfig(
                           *(_QWORD *)(a2 + 400),
                           a1,
                           a2,
                           (unsigned int)&v25,
                           (__int64)&v24,
                           (__int64)&v21)
        && v12 == 3 )
      {
        v16 = RIMSendPTPLatencyMgtDeviceRequest(v14, v21, *(_QWORD *)(v21 + 400), 0LL);
        v8 = v16;
        if ( v16 < 0 )
        {
          LODWORD(v19) = v16;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xDu,
            (__int64)&WPP_53ee9f8980b1cd91d40acf6113c44ddb_Traceguids,
            v19);
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xEu,
          (__int64)&WPP_53ee9f8980b1cd91d40acf6113c44ddb_Traceguids);
      }
      ObfDereferenceObject(v13);
      ZwClose(Handle);
      if ( v8 < 0 )
      {
LABEL_24:
        LODWORD(v19) = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_53ee9f8980b1cd91d40acf6113c44ddb_Traceguids,
          v19);
      }
    }
  }
  LODWORD(v19) = v8;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x10u,
    (__int64)&WPP_53ee9f8980b1cd91d40acf6113c44ddb_Traceguids,
    v19);
  return (unsigned int)v8;
}
