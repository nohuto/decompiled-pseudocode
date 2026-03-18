/*
 * XREFs of ACPIDockIrpRemoveDevice @ 0x1C0034280
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008968 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

__int64 __fastcall ACPIDockIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rdi
  unsigned int v5; // ebx
  _QWORD *v7; // r14
  KIRQL v8; // al
  char v9; // [rsp+80h] [rbp+18h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  if ( (*(_QWORD *)DeviceExtension & 0x2000000000002LL) == 0 )
  {
    v5 = 0;
    Irp->IoStatus.Status = 0;
LABEL_5:
    IofCompleteRequest(Irp, 0);
    return v5;
  }
  if ( *(_DWORD *)(DeviceExtension + 312) == 4 )
  {
    Irp->IoStatus.Status = -1073741810;
    v5 = -1073741810;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(DeviceExtension + 184) == 2 )
  {
    v7 = *(_QWORD **)(DeviceExtension + 176);
    if ( *(_DWORD *)(DeviceExtension + 192) != 1 )
    {
      KdDisableDebugger();
      ACPIGet(v7, 1262699615, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v9, 0LL);
      KdEnableDebugger();
    }
  }
  *(_DWORD *)(DeviceExtension + 192) = 0;
  *(_DWORD *)(DeviceExtension + 312) = 4;
  Irp->IoStatus.Status = 0;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  *(_QWORD *)(DeviceExtension + 720) = 0LL;
  *(_QWORD *)(DeviceExtension + 728) = 0LL;
  *(_QWORD *)(DeviceExtension + 712) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)DeviceExtension, 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)DeviceExtension, 8uLL);
  _InterlockedOr64((volatile signed __int64 *)DeviceExtension, 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
