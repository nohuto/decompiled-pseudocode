/*
 * XREFs of PnpDiagnosticTraceObject @ 0x1400084E8
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14000882C (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1403F1F94 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B3CC (PnpQueueQueryAndRemoveEvent.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x1407B427C (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x1407B6254 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v5; // r8d
  __int16 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v5 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v5 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  v10 = v5;
  UserData.Size = 2;
  return EtwWrite(v2, EventDescriptor, 0LL, 2u, &UserData);
}
