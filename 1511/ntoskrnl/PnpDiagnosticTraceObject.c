/*
 * XREFs of PnpDiagnosticTraceObject @ 0x14001A954
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140099428 (PnpDeviceCompletionRoutine.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1404BDD10 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1404C25EC (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PnpRebalance @ 0x140606198 (PnpRebalance.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1406169A8 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpInitializeBootStartDriver @ 0x140751FAC (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x14076B684 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x14076BEBC (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
