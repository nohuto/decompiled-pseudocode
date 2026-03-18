/*
 * XREFs of UsbhQueueSoftConnectChange @ 0x1C00414FC
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 *     UsbhCycleDevicePort @ 0x1C0042BF4 (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0043EE4 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463B0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPortCycle @ 0x1C0050740 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x1C0050A80 (UsbhPortRecycle.c)
 * Callees:
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C004310C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhQueueSoftConnectChange(struct _DEVICE_OBJECT *a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+48h] [rbp-30h]
  _BYTE v17[4]; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+54h] [rbp-24h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]

  LODWORD(v19) = 1;
  v18 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x54u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v15);
  }
  result = UsbhGetPortData((__int64)a1, a2);
  v9 = result;
  if ( result )
  {
    if ( a4
      && (UsbhDisablePort((_DWORD)a1), (FdoExt((__int64)a1, v10, v11, v12)[640] & 1) != 0)
      && ((v13 = UsbhQueryPortState((__int64)a1, *(_WORD *)(v9 + 4), (__int64)v17, &v18), v13 < 0)
       || (v17[0] & 2) != 0
       && ((UsbhWait((int)a1, 10), v13 = UsbhQueryPortState((__int64)a1, *(_WORD *)(v9 + 4), (__int64)v17, &v18),
                                   v13 < 0)
        || (v17[0] & 2) != 0)) )
    {
      LOBYTE(v16) = 0;
      result = UsbhException((int)a1, *(unsigned __int16 *)(v9 + 4), 20, 0, 0, v13, v18, usbfile_pchange_c, 5286, v16);
    }
    else
    {
      result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, v9, 4LL, a3, v19, 0, 0LL, 0LL);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v14) = a2;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x55u,
             (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
             v14);
  }
  return result;
}
