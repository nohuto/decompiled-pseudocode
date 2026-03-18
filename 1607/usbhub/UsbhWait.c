/*
 * XREFs of UsbhWait @ 0x1C0009D88
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 *     UsbhCancelResetTimeout @ 0x1C0009144 (UsbhCancelResetTimeout.c)
 *     UsbhReset1Complete @ 0x1C0009900 (UsbhReset1Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     UsbhInitialize @ 0x1C0019A10 (UsbhInitialize.c)
 *     UsbhPortResumeComplete @ 0x1C0025570 (UsbhPortResumeComplete.c)
 *     UsbhInitializeDevice @ 0x1C0026B94 (UsbhInitializeDevice.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E338 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046760 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C0046CFC (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x1C0051140 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 */

__int64 __fastcall UsbhWait(int a1, int a2)
{
  unsigned int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  return UsbhRawWait(v2);
}
