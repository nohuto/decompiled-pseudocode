/*
 * XREFs of StorpSmartAttributesWorkItemRoutine @ 0x1C0037E60
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0038FE0 (StorpTelemetrySendUnitSmartAttributes.c)
 */

void __fastcall StorpSmartAttributesWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  StorpTelemetrySendUnitSmartAttributes(DeviceExtension);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
