/*
 * XREFs of RIMDoOnPowerNotification @ 0x1C0086D18
 * Callers:
 *     RIMOnPowerNotification @ 0x1C0086BF0 (RIMOnPowerNotification.c)
 * Callees:
 *     IsIsPrecisionTouchPadEnabledSupported_0 @ 0x1C0002E40 (IsIsPrecisionTouchPadEnabledSupported_0.c)
 *     IsPrecisionTouchPadEnabled_0 @ 0x1C0002E48 (IsPrecisionTouchPadEnabled_0.c)
 *     RIMFindInputDeviceForConfig @ 0x1C00059EC (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000B2CC (RIMGetDeviceObjectPointer.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0 (RIMSendLatencyMgtDeviceRequest.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50 (RIMDeliverConfigRequestWithTimeout.c)
 */

__int64 __fastcall RIMDoOnPowerNotification(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  int v9; // edi
  int v10; // r14d
  int v11; // r15d
  int v12; // eax
  __int64 v14; // rax
  int v15; // edx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r9
  PVOID v19; // rbx
  int v21; // edx
  int v22; // eax
  int v23; // [rsp+20h] [rbp-30h]
  int v24; // [rsp+20h] [rbp-30h]
  __int64 v25; // [rsp+28h] [rbp-28h]
  PDEVICE_OBJECT v26; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+38h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+98h] [rbp+48h] BYREF
  int v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    10,
    (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids);
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v31 = 0LL;
  if ( *(_DWORD *)(v4 + 316) )
  {
    v8 = v4;
    v10 = 1;
    v31 = v4;
  }
  v11 = a3 & 1;
  if ( v11 )
  {
    if ( *(_BYTE *)(v4 + 48) == 3 )
    {
      v14 = *(_QWORD *)(v4 + 464);
      if ( *(_WORD *)(v14 + 42) == 13 && *(_WORD *)(v14 + 40) == 14 )
      {
        v9 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v4 + 208), v6, v7, &Handle, &Object, &v26);
        if ( v9 < 0 )
          goto LABEL_29;
        v16 = *(_DWORD *)(v4 + 184);
        v17 = 0;
        v30 = 0;
        v29 = 0;
        if ( (v16 & 0x200) != 0 )
        {
          v17 = 2;
        }
        else if ( (v16 & 0x400) != 0 )
        {
          v17 = 3;
        }
        else
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            2,
            11,
            (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids);
        }
        v18 = v17;
        v19 = Object;
        LOWORD(v23) = 82;
        v9 = RIMDeliverConfigRequestWithTimeout(*(_QWORD *)(v4 + 464), v26, Object, v18, v23);
        if ( v9 >= 0 && !((int)IsIsPrecisionTouchPadEnabledSupported_0() < 0 ? 1 : IsPrecisionTouchPadEnabled_0()) )
        {
          LOWORD(v24) = 87;
          v22 = RIMDeliverConfigRequestWithTimeout(*(_QWORD *)(v4 + 464), v26, v19, 0LL, v24);
          v9 = v22;
          if ( v22 < 0 )
          {
            LODWORD(v25) = v22;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0xCu,
              (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids,
              v25);
          }
        }
        if ( (unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(v4 + 464), a1, v4, &v30, &v29, &v31) )
        {
          v10 = 1;
        }
        else
        {
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            3,
            13,
            (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids);
        }
        ObfDereferenceObject(v19);
        ZwClose(Handle);
        v8 = v31;
        if ( v9 < 0 )
        {
LABEL_29:
          LODWORD(v25) = v9;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xEu,
            (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids,
            v25);
        }
      }
    }
  }
  if ( v10 )
  {
    v12 = RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)v8, *(_QWORD *)(v8 + 464), v11 == 0LL);
    if ( v12 < 0 )
    {
      LODWORD(v25) = v12;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xFu,
        (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids,
        v25);
    }
  }
  LODWORD(v25) = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x10u,
    (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids,
    v25);
  return (unsigned int)v9;
}
