/*
 * XREFs of Usbh_HRS_Paused @ 0x1C000401C
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_Paused(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // r8
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920159827, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
      v3);
  v6 = v3 - 1;
  if ( !v6 )
  {
LABEL_9:
    if ( (*(_DWORD *)(v4 + 2560) & 0x10) != 0 )
    {
      KeResetEvent((PRKEVENT)(v4 + 2848));
      IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 1184), UsbhHardResetWorker, DelayedWorkQueue, 0LL);
      v8 = 3LL;
    }
    else
    {
      v8 = 2LL;
    }
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 1LL;
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v8 = 6LL;
  v9 = v7 - 1;
  if ( !v9 || (v10 = v9 - 6) == 0 )
  {
    *(_DWORD *)(v4 + 2560) |= 0x10u;
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v8 = v5;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
    }
    goto LABEL_9;
  }
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
}
