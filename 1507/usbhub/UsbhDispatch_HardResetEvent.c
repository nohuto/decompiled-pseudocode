/*
 * XREFs of UsbhDispatch_HardResetEvent @ 0x1C0015DC8
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhResumeHardReset @ 0x1C0002F58 (UsbhResumeHardReset.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E040 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E1B0 (UsbhQueueOvercurrentReset.c)
 *     UsbhDisableHardReset @ 0x1C00467DC (UsbhDisableHardReset.c)
 *     UsbhHardResetWorker @ 0x1C0046820 (UsbhHardResetWorker.c)
 *     UsbhQueueHardReset @ 0x1C0046B50 (UsbhQueueHardReset.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B760 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     Usbh_HRS_Paused @ 0x1C0004104 (Usbh_HRS_Paused.c)
 *     Usbh_HRS_WaitReady @ 0x1C00041D4 (Usbh_HRS_WaitReady.c)
 *     UsbhReleaseResetLock @ 0x1C0004280 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_HRS_Disabled @ 0x1C0026E74 (Usbh_HRS_Disabled.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C0046B08 (UsbhIncrementConcurrentResetCounter.c)
 *     Usbh_HRS_PausedWaitDone @ 0x1C0046E10 (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x1C0046EEC (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x1C0047184 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x1C0047288 (Usbh_HRS_WaitDone.c)
 */

__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // r14
  KIRQL v10; // r13
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rbx
  char v16; // cl
  __int64 v17; // rcx

  v4 = (int)a3;
  v7 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
      v4);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 350);
  LODWORD(v9) = v7[702];
  v10 = v8;
  Log(a1, 16, 1381200433, (int)v9, v4);
  if ( ((_DWORD)v4 == 3 || (_DWORD)v4 == 9) && (_DWORD)v9 == 3 )
  {
    if ( *((_BYTE *)v7 + 5268) )
    {
      _InterlockedIncrement(v7 + 1315);
      UsbhIncrementConcurrentResetCounter(a1);
    }
    Log(a1, 16, 1381200434, 3LL, v4);
    KeReleaseSpinLock((PKSPIN_LOCK)v7 + 350, v10);
    return (unsigned int)v9;
  }
  Log(a1, 16, 1381200435, v11, v4);
  KeReleaseSpinLock((PKSPIN_LOCK)v7 + 350, v10);
  Log(a1, 16, 1920150315, a2, v4);
  v15 = FdoExt(a1, v12, v13, v14);
  KeWaitForSingleObject(v15 + 704, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 64) = 2018792274;
  *(_DWORD *)(a2 + 72) = v4;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v9 = (int)v15[702];
  *(_DWORD *)(a2 + 68) = v9;
  v16 = v15[230] + 1;
  *((_QWORD *)v15 + 165) = a2;
  v17 = v16 & 7;
  v15[230] = v17;
  v17 *= 32LL;
  *(_DWORD *)((char *)v15 + v17 + 924) = v4;
  *(_DWORD *)((char *)v15 + v17 + 928) = v15[702];
  Log(a1, 16, 1920150829, a2, v9);
  switch ( (_DWORD)v9 )
  {
    case 1:
      return Usbh_HRS_Disabled(a2, (unsigned int)v4);
    case 2:
      return Usbh_HRS_WaitReady(a2, v4);
    case 3:
      return Usbh_HRS_Queued(a2, (unsigned int)v4);
    case 4:
      return Usbh_HRS_ResetStop(a2, (unsigned int)v4);
    case 5:
      return Usbh_HRS_WaitDone(a2, (unsigned int)v4);
    case 6:
      return Usbh_HRS_Paused(a2, v4);
  }
  if ( (_DWORD)v9 != 7 )
  {
    UsbhReleaseResetLock(a1, a2, v9);
    return (unsigned int)v9;
  }
  return Usbh_HRS_PausedWaitDone(a2, (unsigned int)v4);
}
