/*
 * XREFs of Usbh_PCE_QueueDriverReset_Action @ 0x1C0004540
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhHubQueueProcessChangeWorker @ 0x1C000B2A0 (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000E1A0 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024260 (UsbhLockPcqWithTag.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003CF38 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0042854 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C0045538 (Usbh_iSignalSyncDeviceReset.c)
 */

__int64 Usbh_PCE_QueueDriverReset_Action(__int64 a1, __int64 a2, char a3, ...)
{
  int v6; // eax
  int v7; // r14d
  __int64 v8; // rsi
  int v9; // r10d
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 result; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // edx
  char v23; // r10
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-20h]
  char v27; // [rsp+88h] [rbp+48h] BYREF
  __int64 v28; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  __int64 v30; // [rsp+A0h] [rbp+60h]
  __int64 v31; // [rsp+A8h] [rbp+68h]
  va_list va1; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  FdoExt(a1);
  v6 = UsbhLockPcqWithTag(a1, a2, 15, (unsigned int)&v27, v28);
  v7 = v6;
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) || (unsigned int)(*(_DWORD *)(a2 + 400) - 1) <= 1 )
  {
    Usbh_iSignalSyncDeviceReset(a1, v31, a2);
    LOBYTE(v25) = v27;
    return UsbhUnlockPcqWithTag(a1, a2, v25, 0LL);
  }
  v8 = *(unsigned __int16 *)(a2 + 4);
  Log(a1, 512, 825585712, v6, v8);
  Log(a1, v9, 825585713, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v10,
      27,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  UsbhSetPcqEventStatus(a1, a2, 3LL, 10LL);
  KeResetEvent((PRKEVENT)(a2 + 824));
  if ( v7 > 13 )
  {
    if ( v7 == 14 )
      goto LABEL_18;
    if ( v7 > 18 && v7 != 20 )
    {
LABEL_35:
      v24 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v24 + a2 + 1384) = 19;
      goto LABEL_23;
    }
LABEL_34:
    Log(a1, 512, 825585713, v7, *(unsigned __int16 *)(a2 + 4));
    v19 = v31;
    goto LABEL_22;
  }
  if ( v7 >= 5 || v7 == 1 )
    goto LABEL_34;
  if ( v7 != 2 )
  {
    if ( v7 == 3 )
    {
      Log(a1, 8, 825585718, a2, v8);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          31,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          v8);
      v20 = v31;
      if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v8, (unsigned int)va, v30, v31) < 0 )
        Usbh_iSignalSyncDeviceReset(a1, v20, a2);
      v21 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      *(_DWORD *)(v21 + a2 + 1384) = 14;
      goto LABEL_23;
    }
    if ( v7 == 4 )
    {
LABEL_18:
      Log(a1, 8, 825585717, a2, v8);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          30,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          v8);
      v12 = v31;
      if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v8, (unsigned int)va, v30, v31) >= 0 )
        goto LABEL_23;
      goto LABEL_21;
    }
    goto LABEL_35;
  }
  Log(a1, 512, 825585714, 2, *(unsigned __int16 *)(a2 + 4));
  v12 = v31;
  if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v8, (unsigned int)va, v30, v31) >= 0 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        28,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        v8);
    Log(a1, 8, 825585715, a2, v8);
    v13 = *(unsigned int *)(a2 + 2400);
    v14 = 4LL;
    *(_DWORD *)(a2 + 12) = 4;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 4;
    LOBYTE(v14) = v27;
    UsbhUnlockPcqWithTag(a1, a2, v14, 0LL);
    result = UsbhHubQueueProcessChangeWorker(v15, a2);
    goto LABEL_14;
  }
  Log(a1, 8, 825585716, a2, v8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      1,
      29,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v8,
      v23);
LABEL_21:
  v19 = v12;
LABEL_22:
  Usbh_iSignalSyncDeviceReset(a1, v19, a2);
LABEL_23:
  LOBYTE(v11) = v27;
  result = UsbhUnlockPcqWithTag(a1, a2, v11, 0LL);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v17, v18, 32, v26, v8, v7);
  return result;
}
