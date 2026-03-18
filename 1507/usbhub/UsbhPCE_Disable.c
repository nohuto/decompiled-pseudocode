/*
 * XREFs of UsbhPCE_Disable @ 0x1C0040C34
 * Callers:
 *     UsbhQueueDriverOvercurrent @ 0x1C003E040 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E1B0 (UsbhQueueOvercurrentReset.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C00423C0 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhCancelEnumeration @ 0x1C0027BB0 (UsbhCancelEnumeration.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Disable(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // bx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 PortData; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp+20h]

  v5 = a2;
  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = v5;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x42u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v15,
      a3);
  }
  Log((__int64)a1, 512, 1346711602, 0LL, v5);
  PortData = UsbhGetPortData((__int64)a1, v5);
  v10 = PortData;
  if ( PortData )
  {
    LODWORD(v16) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 2LL, a3, v16, 0, 0LL, 0LL);
    v11 = UsbhLatchPdo((__int64)a1, *(_WORD *)(v10 + 4), 0LL, 0x7050444Fu);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_DWORD *)(v10 + 400);
      *(_QWORD *)(v10 + 376) = v10 + 24;
      *(_DWORD *)(v10 + 416) = 1;
      UsbhCancelEnumeration((__int64)a1, v13, v10, v11);
      *(_QWORD *)(v10 + 376) = 0LL;
      if ( *(_DWORD *)(v10 + 416) )
        UsbhBusUnlatchPdo((__int64)a1, v12, v10, v14, 0LL);
      else
        *(_DWORD *)(v10 + 400) = 0;
    }
  }
}
