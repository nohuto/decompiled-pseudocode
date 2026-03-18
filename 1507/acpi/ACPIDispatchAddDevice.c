/*
 * XREFs of ACPIDispatchAddDevice @ 0x1C0087250
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyA @ 0x1C000CB20 (RtlStringCchCopyA.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001720C (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021420 (ExFreeToNPagedLookasideList.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPICreateRootSymbolicLink @ 0x1C0072160 (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C007223C (AcpiSetupNativeMethodInterface.c)
 *     ACPIGetPortRangeInterfaces @ 0x1C00874F8 (ACPIGetPortRangeInterfaces.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rdi
  struct _DEVICE_OBJECT *v5; // rsi
  char *PoolWithTag; // rax
  char *v7; // r14
  char *v8; // rax
  char *v9; // rbp
  NTSTATUS v10; // ebx
  PVOID v11; // rax
  KIRQL v12; // al
  KIRQL v13; // al
  PDEVICE_OBJECT SourceDevice; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  SourceDevice = 0LL;
  v5 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xEuLL, 0x53706341u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCchCopyA(PoolWithTag, 0xEuLL, "ACPI\\PNP0C08");
    v8 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
    v9 = v8;
    if ( v8 )
    {
      RtlStringCchCopyA(v8, 0xBuLL, "0x5F534750");
      v10 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0, 0, &SourceDevice);
      if ( v10 < 0 )
      {
        SourceDevice = 0LL;
LABEL_7:
        if ( v10 >= 0 )
          return (unsigned int)v10;
        goto LABEL_13;
      }
      v5 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
      if ( !v5 )
      {
        v10 = -1073741810;
        goto LABEL_13;
      }
      v11 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
      v2 = (__int64)v11;
      if ( v11 )
      {
        memset(v11, 0, 0x390uLL);
        *(_DWORD *)(v2 + 676) = 1;
        _InterlockedAdd((volatile signed __int32 *)(v2 + 672), 1u);
        v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        SourceDevice->DeviceExtension = (void *)v2;
        *(_QWORD *)(v2 + 712) = SourceDevice;
        *(_QWORD *)(v2 + 16) = &AcpiFdoIrpDispatch;
        *(_QWORD *)(v2 + 728) = DeviceObject;
        *(_QWORD *)(v2 + 720) = v5;
        *(_DWORD *)(v2 + 8) = 1599293264;
        *(_QWORD *)(v2 + 552) = v7;
        *(_QWORD *)(v2 + 560) = v9;
        *(_DWORD *)(v2 + 472) = 4;
        *(_QWORD *)(v2 + 476) = 4LL;
        *(_DWORD *)(v2 + 452) = 0;
        *(_DWORD *)(v2 + 484) = 0;
        *(_DWORD *)(v2 + 456) = 1;
        *(_DWORD *)(v2 + 460) = 1;
        *(_DWORD *)(v2 + 464) = 1;
        *(_DWORD *)(v2 + 468) = 1;
        *(_DWORD *)(v2 + 492) = 1;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v12);
        _InterlockedOr64((volatile signed __int64 *)v2, 0x1E00000200010uLL);
        *(_QWORD *)(v2 + 752) = v2 + 744;
        *(_QWORD *)(v2 + 744) = v2 + 744;
        *(_QWORD *)(v2 + 768) = v2 + 760;
        *(_QWORD *)(v2 + 760) = v2 + 760;
        *(_QWORD *)(v2 + 784) = v2 + 776;
        *(_QWORD *)(v2 + 776) = v2 + 776;
        *(_QWORD *)(v2 + 800) = v2 + 792;
        *(_QWORD *)(v2 + 792) = v2 + 792;
        *(_QWORD *)(v2 + 536) = v2 + 528;
        *(_QWORD *)(v2 + 528) = v2 + 528;
        *(_DWORD *)(v2 + 648) = -1;
        *(_QWORD *)(v2 + 664) = v2 + 656;
        *(_QWORD *)(v2 + 656) = v2 + 656;
        v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        RootDeviceExtension = v2;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
        ACPIGetPortRangeInterfaces(DeviceObject);
        IoWMIRegistrationControl(SourceDevice, 1u);
        AcpiSetupNativeMethodInterface();
        SourceDevice->Flags &= ~0x80u;
        ACPICreateRootSymbolicLink(DeviceObject);
        goto LABEL_7;
      }
    }
    v10 = -1073741670;
LABEL_13:
    ExFreePoolWithTag(v7, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( v5 )
      IoDetachDevice(v5);
    goto LABEL_17;
  }
  v10 = -1073741670;
LABEL_17:
  if ( SourceDevice )
    IoDeleteDevice(SourceDevice);
  if ( v2 )
    ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, (PVOID)v2);
  return (unsigned int)v10;
}
