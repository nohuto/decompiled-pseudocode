/*
 * XREFs of Usbh_PCE_Close_Action @ 0x1C0041B10
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000B3D4 (UsbhFlushPortChangeQueue.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000C760 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024260 (UsbhLockPcqWithTag.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 *     UsbhHubDereferenceProcessChangeWorkItem @ 0x1C00406F0 (UsbhHubDereferenceProcessChangeWorkItem.c)
 *     UsbhPCE_Close @ 0x1C0040B68 (UsbhPCE_Close.c)
 */

void __fastcall Usbh_PCE_Close_Action(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r9
  int v12; // r10d
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rax
  KIRQL v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // [rsp+28h] [rbp-30h]
  KIRQL v22; // [rsp+68h] [rbp+10h] BYREF

  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v21 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x23u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v21,
      a3);
  }
  v9 = UsbhLockPcqWithTag((__int64)a1, a2, 22, &v22, 0);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 140));
  v10 = v9;
  Log((__int64)a1, 512, 842166320, v9, *(unsigned __int16 *)(a2 + 4));
  if ( v12 == 1 || v12 == 6 || v12 == 15 )
  {
    Log((__int64)a1, 512, 842166321, v11, *(unsigned __int16 *)(a2 + 4));
    v17 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 20;
    *(_DWORD *)(v17 + a2 + 1384) = 20;
    UsbhFlushPortChangeQueue((__int64)a1, a2, v18, v19);
    UsbhUnlockPcqWithTag((__int64)a1, a2, v22, 0);
    UsbhHubDereferenceProcessChangeWorkItem(v20, a2);
    KeWaitForSingleObject((PVOID)(a2 + 2416), Executive, 0, 0, 0LL);
  }
  else if ( (unsigned int)(v12 - 16) > 1 )
  {
    v15 = *(unsigned int *)(a2 + 2400);
    v16 = v22;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v15 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag((__int64)a1, a2, v16, 0);
  }
  else
  {
    UsbhSetPcqEventStatus((__int64)a1, a2, 2LL, 20);
    UsbhUnlockPcqWithTag((__int64)a1, a2, v22, 0);
    Log((__int64)a1, 512, 842166322, v10, *(unsigned __int16 *)(a2 + 4));
    UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 472), 660000, v13, 7u, a2);
    UsbhPCE_Close(a1, a2, a3, v14);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 140));
}
