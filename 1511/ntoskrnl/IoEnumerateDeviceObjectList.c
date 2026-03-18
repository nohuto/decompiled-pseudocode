/*
 * XREFs of IoEnumerateDeviceObjectList @ 0x14013F820
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

NTSTATUS __stdcall IoEnumerateDeviceObjectList(
        PDRIVER_OBJECT DriverObject,
        PDEVICE_OBJECT *DeviceObjectList,
        ULONG DeviceObjectListSize,
        PULONG ActualNumberDeviceObjects)
{
  ULONG v5; // ebx
  KIRQL v9; // al
  PDEVICE_OBJECT DeviceObject; // r8
  KIRQL v11; // r15
  ULONG v12; // edi
  NTSTATUS v13; // esi
  bool v14; // cc
  PDEVICE_OBJECT v15; // rbx

  v5 = 0;
  v9 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject = DriverObject->DeviceObject;
  v11 = v9;
  v12 = DeviceObjectListSize >> 3;
  while ( DeviceObject )
  {
    DeviceObject = DeviceObject->NextDevice;
    ++v5;
  }
  *ActualNumberDeviceObjects = v5;
  v13 = 0;
  v14 = v5 <= v12;
  v15 = DriverObject->DeviceObject;
  if ( !v14 )
    v13 = -1073741789;
  for ( ; v12; --v12 )
  {
    if ( !v15 )
      break;
    ObfReferenceObjectWithTag(v15, 0x746C6644u);
    *DeviceObjectList++ = v15;
    v15 = v15->NextDevice;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v11);
  return v13;
}
