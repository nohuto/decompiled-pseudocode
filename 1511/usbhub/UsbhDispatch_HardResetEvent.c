/*
 * XREFs of UsbhDispatch_HardResetEvent @ 0x1C001212C
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhResumeHardReset @ 0x1C0002F58 (UsbhResumeHardReset.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhFinishStart @ 0x1C001B760 (UsbhFinishStart.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E018 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E270 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E3E0 (UsbhQueueOvercurrentReset.c)
 *     UsbhDisableHardReset @ 0x1C004685C (UsbhDisableHardReset.c)
 *     UsbhHardResetWorker @ 0x1C00468A0 (UsbhHardResetWorker.c)
 *     UsbhQueueHardReset @ 0x1C0046BD0 (UsbhQueueHardReset.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B710 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     Usbh_HRS_Paused @ 0x1C000401C (Usbh_HRS_Paused.c)
 *     Usbh_HRS_WaitReady @ 0x1C00040EC (Usbh_HRS_WaitReady.c)
 *     UsbhReleaseResetLock @ 0x1C0004198 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     Usbh_HRS_Disabled @ 0x1C0025FD4 (Usbh_HRS_Disabled.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C0046B88 (UsbhIncrementConcurrentResetCounter.c)
 *     Usbh_HRS_PausedWaitDone @ 0x1C0046E90 (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x1C0046F6C (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x1C0047204 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x1C0047308 (Usbh_HRS_WaitDone.c)
 */

__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // r14
  KIRQL v9; // r13
  int v10; // r9d
  __int64 v11; // rbx
  char v12; // cl
  __int64 v13; // rcx

  v3 = a3;
  v6 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
      v3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2800));
  LODWORD(v8) = *(_DWORD *)(v6 + 2808);
  v9 = v7;
  Log(a1, 16, 1381200433, v8, v3);
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v8 == 3 )
  {
    if ( *(_BYTE *)(v6 + 5268) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 5260));
      UsbhIncrementConcurrentResetCounter(a1);
    }
    Log(a1, 16, 1381200434, 3, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v9);
    return (unsigned int)v8;
  }
  Log(a1, 16, 1381200435, v10, v3);
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v9);
  Log(a1, 16, 1920150315, a2, v3);
  v11 = FdoExt(a1);
  KeWaitForSingleObject((PVOID)(v11 + 2816), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 64) = 2018792274;
  *(_DWORD *)(a2 + 72) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v8 = *(int *)(v11 + 2808);
  *(_DWORD *)(a2 + 68) = v8;
  v12 = *(_DWORD *)(v11 + 920) + 1;
  *(_QWORD *)(v11 + 1320) = a2;
  v13 = v12 & 7;
  *(_DWORD *)(v11 + 920) = v13;
  v13 *= 32LL;
  *(_DWORD *)(v13 + v11 + 924) = v3;
  *(_DWORD *)(v13 + v11 + 928) = *(_DWORD *)(v11 + 2808);
  Log(a1, 16, 1920150829, a2, v8);
  switch ( (_DWORD)v8 )
  {
    case 1:
      return Usbh_HRS_Disabled(a2, (unsigned int)v3);
    case 2:
      return Usbh_HRS_WaitReady(a2, v3);
    case 3:
      return Usbh_HRS_Queued(a2, (unsigned int)v3);
    case 4:
      return Usbh_HRS_ResetStop(a2, (unsigned int)v3);
    case 5:
      return Usbh_HRS_WaitDone(a2, (unsigned int)v3);
    case 6:
      return Usbh_HRS_Paused(a2, v3);
  }
  if ( (_DWORD)v8 != 7 )
  {
    UsbhReleaseResetLock(a1, a2, v8);
    return (unsigned int)v8;
  }
  return Usbh_HRS_PausedWaitDone(a2, (unsigned int)v3);
}
