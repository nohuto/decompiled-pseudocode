/*
 * XREFs of Usbh_PCE_SD_Resume_Action @ 0x1C00427CC
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AAE8 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0024A00 (UsbhLockPcqWithTag.c)
 *     UsbhSetPcqEventStatus @ 0x1C00258C0 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_SD_Resume_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // [rsp+28h] [rbp-20h]
  KIRQL v15; // [rsp+58h] [rbp+10h] BYREF

  FdoExt(a1, a2, a3, a4);
  Log(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x30u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v14,
      a3);
  }
  v9 = UsbhLockPcqWithTag(a1, a2, 13, &v15, 0);
  if ( v9 == 1 || v9 == 6 )
  {
    Log(a1, 512, 825782321, v9, *(unsigned __int16 *)(a2 + 4));
    UsbhFlushPortChangeQueue(a1, a2, v11, v12);
    v13 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v13 + a2 + 1384) = 2;
    UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
    KeResetEvent((PRKEVENT)(a2 + 472));
  }
  else
  {
    v10 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v9;
    *(_DWORD *)(v10 + a2 + 1384) = v9;
  }
  UsbhUnlockPcqWithTag(a1, a2, v15, 0);
}
