/*
 * XREFs of VfEvtDeviceRelationsQuery @ 0x1C00C7300
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x1C0071EE8 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0071F08 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0071F58 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C6C90 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceRelationsQuery(WDFDEVICE__ *Device, unsigned int RelationType)
{
  char *TypedContext; // rdi
  void (__fastcall *v5)(WDFDEVICE__ *, _QWORD); // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+50h] [rbp+18h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v5 = (void (__fastcall *)(WDFDEVICE__ *, _QWORD))*((_QWORD *)TypedContext + 17);
  if ( v5 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v5(Device, RelationType);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v5);
  }
}
