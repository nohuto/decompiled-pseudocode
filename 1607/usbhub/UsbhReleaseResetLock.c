/*
 * XREFs of UsbhReleaseResetLock @ 0x1C0004398
 * Callers:
 *     Usbh_HRS_Paused @ 0x1C000421C (Usbh_HRS_Paused.c)
 *     Usbh_HRS_WaitReady @ 0x1C00042EC (Usbh_HRS_WaitReady.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0017864 (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Disabled @ 0x1C0026D60 (Usbh_HRS_Disabled.c)
 *     Usbh_HRS_PausedWaitDone @ 0x1C0047280 (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x1C004735C (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x1C00475F4 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x1C00476F8 (Usbh_HRS_WaitDone.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhReleaseResetLock(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KSEMAPHORE *v5; // rax
  __int64 Limit; // rcx

  v5 = (struct _KSEMAPHORE *)FdoExt(a1);
  v5[87].Limit = a3;
  *(_DWORD *)(a2 + 68) = a3;
  *(_DWORD *)(a2 + 64) = 1734964085;
  Limit = (unsigned int)v5[28].Limit;
  v5[41].Header.WaitListHead.Flink = 0LL;
  v5[Limit + 29].Header.SignalState = a3;
  KeReleaseSemaphore(v5 + 88, 16, 1, 0);
  return a3;
}
