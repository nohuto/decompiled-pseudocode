/*
 * XREFs of UsbhWait @ 0x1C000946C
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 *     UsbhPortResumeComplete @ 0x1C0024F80 (UsbhPortResumeComplete.c)
 *     UsbhInitializeDevice @ 0x1C0026B6C (UsbhInitializeDevice.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463B0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C004688C (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x1C0050B40 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 */

__int64 __fastcall UsbhWait(int a1, int a2)
{
  unsigned int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  return UsbhRawWait(v2);
}
