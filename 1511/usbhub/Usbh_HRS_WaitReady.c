/*
 * XREFs of Usbh_HRS_WaitReady @ 0x1C00040EC
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004B8A4 (UsbhResetNotifyDownstreamHub.c)
 */

__int64 __fastcall Usbh_HRS_WaitReady(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
      v3);
  v6 = v3 - 2;
  if ( !v6 )
  {
    v8 = 1LL;
    goto LABEL_12;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    KeResetEvent((PRKEVENT)(v4 + 2848));
    UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
    IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 1184), UsbhHardResetWorker, DelayedWorkQueue, 0LL);
    v8 = 3LL;
    goto LABEL_12;
  }
  v8 = 6LL;
  v9 = v7 - 6;
  if ( !v9 )
  {
    v8 = 2LL;
LABEL_12:
    v10 = *(_QWORD *)(a1 + 8);
    v11 = a1;
    return UsbhReleaseResetLock(v10, v11, v8);
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = a1;
  if ( v9 != 1 )
    v8 = v5;
  return UsbhReleaseResetLock(v10, v11, v8);
}
