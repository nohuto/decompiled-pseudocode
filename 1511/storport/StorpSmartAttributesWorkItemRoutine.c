/*
 * XREFs of StorpSmartAttributesWorkItemRoutine @ 0x1C0039CF0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C003B6BC (StorpTelemetrySendUnitSmartAttributes.c)
 */

void __fastcall StorpSmartAttributesWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  StorpTelemetrySendUnitSmartAttributes(DeviceExtension);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
