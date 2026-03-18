/*
 * XREFs of Usbh_PCE_HW_Stop_Action @ 0x1C0042268
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AAE8 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0024A00 (UsbhLockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0025544 (UsbhiSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00258C0 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_HW_Stop_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+28h] [rbp-20h]
  KIRQL v20; // [rsp+58h] [rbp+10h] BYREF

  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x22u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v19,
      a3);
  }
  v9 = UsbhLockPcqWithTag(a1, a2, 17, &v20, 0);
  Log(a1, 512, 825716784, v9, *(unsigned __int16 *)(a2 + 4));
  if ( v11 > 10 )
  {
    if ( v11 == 11 )
      goto LABEL_20;
    if ( v11 <= 14 )
      goto LABEL_18;
    if ( v11 <= 17 )
      goto LABEL_17;
    if ( v11 == 18 )
      goto LABEL_20;
    if ( v11 == 20 )
    {
LABEL_17:
      Log(a1, v12, 825716788, v10, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_21;
    }
LABEL_19:
    v15 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(v15 + a2 + 1384) = 19;
    goto LABEL_21;
  }
  if ( v11 == 10 )
    goto LABEL_18;
  if ( v11 <= 0 )
    goto LABEL_19;
  if ( v11 <= 2 )
    goto LABEL_20;
  if ( v11 == 3 )
    goto LABEL_18;
  if ( v11 > 5 )
  {
    if ( v11 > 7 )
    {
      if ( v11 != 8 )
        goto LABEL_11;
LABEL_18:
      Log(a1, v12, 825716785, v10, *(unsigned __int16 *)(a2 + 4));
      v14 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v14 + a2 + 1384) = 17;
      goto LABEL_21;
    }
LABEL_20:
    Log(a1, v12, 825716786, v10, *(unsigned __int16 *)(a2 + 4));
    UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
    v16 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 15;
    *(_DWORD *)(32 * v16 + a2 + 1384) = 15;
    UsbhFlushPortChangeQueue(a1, a2, v17, v18);
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    UsbhiSignalResumeEvent(a1, a2);
    goto LABEL_21;
  }
LABEL_11:
  Log(a1, v12, 825716787, v10, *(unsigned __int16 *)(a2 + 4));
  v13 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 16;
  *(_DWORD *)(v13 + a2 + 1384) = 16;
LABEL_21:
  UsbhUnlockPcqWithTag(a1, a2, v20, 0);
}
