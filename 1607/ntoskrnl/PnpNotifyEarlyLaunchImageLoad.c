/*
 * XREFs of PnpNotifyEarlyLaunchImageLoad @ 0x14079BFE8
 * Callers:
 *     PipInitializeDriverDependentDLLs @ 0x14079ACD0 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 */

void __fastcall PnpNotifyEarlyLaunchImageLoad(__int64 a1, __int64 a2)
{
  _QWORD v2[4]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v3[120]; // [rsp+40h] [rbp-78h] BYREF

  if ( PnpBootDriverCallbackObject )
  {
    v2[2] = a2;
    v2[0] = PnpEarlyLaunchImageNotificationPreProcess;
    v2[3] = a1;
    v2[1] = PnpEarlyLaunchImageNotificationPostProcess;
    ExNotifyWithProcessing((__int64)PnpBootDriverCallbackObject, 1LL, (__int64)v3, (__int64)v2);
  }
}
