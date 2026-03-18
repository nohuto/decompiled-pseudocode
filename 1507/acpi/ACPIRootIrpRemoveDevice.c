/*
 * XREFs of ACPIRootIrpRemoveDevice @ 0x1C00408E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008968 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C001AD1C (ACPIInitializeKernelTableHandler.c)
 */

__int64 __fastcall ACPIRootIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rdi
  void *v5; // rcx
  void *v6; // rcx
  KIRQL v7; // al
  struct _DEVICE_OBJECT *v8; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  *(_DWORD *)(DeviceExtension + 312) = 4;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), Irp);
  IoWMIRegistrationControl(DeviceObject, 2u);
  ACPIInitializeKernelTableHandler(0, (__int64)DeviceObject->DriverObject);
  v5 = *(void **)(DeviceExtension + 616);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(DeviceExtension + 624);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = 0LL;
  v8 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 720);
  *(_QWORD *)(DeviceExtension + 720) = 0LL;
  *(_QWORD *)(DeviceExtension + 728) = 0LL;
  *(_QWORD *)(DeviceExtension + 712) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)DeviceExtension, 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)DeviceExtension, 8uLL);
  _InterlockedOr64((volatile signed __int64 *)DeviceExtension, 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  IoDetachDevice(v8);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
