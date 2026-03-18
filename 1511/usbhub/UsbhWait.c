/*
 * XREFs of UsbhWait @ 0x1C001E700
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhInitializeDevice @ 0x1C0009770 (UsbhInitializeDevice.c)
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 *     UsbhCancelResetTimeout @ 0x1C000FBE4 (UsbhCancelResetTimeout.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 *     UsbhReset1Complete @ 0x1C001EA00 (UsbhReset1Complete.c)
 *     UsbhPortResumeComplete @ 0x1C001F680 (UsbhPortResumeComplete.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E018 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046430 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C004690C (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x1C0050AA0 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 */

void __fastcall UsbhWait(__int64 a1, unsigned int a2)
{
  int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  UsbhRawWait(v2);
}
