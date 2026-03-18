/*
 * XREFs of VfEvtDeviceUsageNotification @ 0x1C00B87A0
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x1C00634D8 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C00634F8 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0063548 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00B7C70 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceUsageNotification(
        WDFDEVICE__ *Device,
        unsigned int NotificationType,
        unsigned __int8 IsInNotificationPath)
{
  char *TypedContext; // rdi
  void (__fastcall *v7)(WDFDEVICE__ *, _QWORD, __int64); // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // r8
  unsigned __int8 critRegion; // [rsp+58h] [rbp+20h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v7 = (void (__fastcall *)(WDFDEVICE__ *, _QWORD, __int64))*((_QWORD *)TypedContext + 16);
  if ( v7 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    LOBYTE(v9) = IsInNotificationPath;
    v7(Device, NotificationType, v9);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v7);
  }
}
