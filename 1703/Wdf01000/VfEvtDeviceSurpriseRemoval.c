/*
 * XREFs of VfEvtDeviceSurpriseRemoval @ 0x1C00D2C40
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x1C0075AF8 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0075B20 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0075B78 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00D212C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceSurpriseRemoval(WDFDEVICE__ *Device)
{
  char *TypedContext; // rdi
  void (__fastcall *v3)(WDFDEVICE__ *); // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+38h] [rbp+10h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v3 = (void (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 13);
  if ( v3 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v3(Device);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v3);
  }
}
