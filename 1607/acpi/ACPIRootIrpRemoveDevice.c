/*
 * XREFs of ACPIRootIrpRemoveDevice @ 0x1C0056270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C0022BA4 (ACPIInitializeKernelTableHandler.c)
 */

__int64 __fastcall ACPIRootIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rdi
  unsigned __int8 MinorFunction; // bp
  char v6; // al
  __int64 v7; // rcx
  const char *v8; // rdx
  const char *v9; // r8
  int v10; // ecx
  int v11; // edx
  void *v12; // rcx
  void *v13; // rcx
  KIRQL v14; // al
  struct _DEVICE_OBJECT *v15; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  *(_DWORD *)(DeviceExtension + 320) = 4;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), Irp);
  v7 = *(_QWORD *)(DeviceExtension + 8);
  v8 = (const char *)qword_1C002C340;
  v9 = (const char *)qword_1C002C340;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(const char **)(DeviceExtension + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v9 = *(const char **)(DeviceExtension + 568);
  }
  v10 = 26;
  if ( MinorFunction < 0x1Au )
    v10 = MinorFunction;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x17u,
    (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids,
    (char)Irp,
    ACPIDispatchPnpTableNames[v10],
    v6,
    DeviceExtension,
    v8,
    v9);
  if ( IoWMIRegistrationControl(DeviceObject, 2u) < 0 )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      1,
      11,
      (__int64)&WPP_7c2b74e231b3382ede7fe299b6b07f82_Traceguids);
  }
  ACPIInitializeKernelTableHandler(0, (__int64)DeviceObject->DriverObject);
  v12 = *(void **)(DeviceExtension + 624);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *(void **)(DeviceExtension + 632);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = 0LL;
  v15 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 728);
  *(_QWORD *)(DeviceExtension + 728) = 0LL;
  *(_QWORD *)(DeviceExtension + 736) = 0LL;
  *(_QWORD *)(DeviceExtension + 720) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 8uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  IoDetachDevice(v15);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
