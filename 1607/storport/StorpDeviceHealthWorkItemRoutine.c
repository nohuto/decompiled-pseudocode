/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C003CBE0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0040278 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00408B4 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00415F8 (StorpTelemetrySendUnitSmartAttributes.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  struct _KEVENT *DeviceExtension; // rbx

  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( *(_DWORD *)(*(_QWORD *)&DeviceExtension[1].Header.Lock + 4356LL) == 17 )
  {
    StorpTelemetrySendUnitNvmeHealthInfo(DeviceExtension);
  }
  else
  {
    StorpTelemetrySendUnitSmartAttributes(DeviceExtension);
    StorpTelemetrySendUnitDeviceStatistics(DeviceExtension);
  }
  RaUnitReleaseRemoveLock(DeviceExtension);
  IoFreeWorkItem(Context);
}
