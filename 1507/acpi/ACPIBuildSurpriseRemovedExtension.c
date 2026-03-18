/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0016BD8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0035D00 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C00360D0 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C000A38C (ACPIDevicePowerFlushQueue.c)
 *     ACPIDockIsDockDevice @ 0x1C000D7C8 (ACPIDockIsDockDevice.c)
 *     ACPIExtListStartEnum @ 0x1C0014580 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C00145E0 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00159B8 (ACPIExtListTestElement.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C00340D0 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0034FF8 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C388 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C003C3AC (ACPIInitRemoveDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(__int64 a1)
{
  _QWORD *CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdi
  KIRQL v5; // si
  bool v6; // cl
  bool v7; // dl
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+50h] [rbp-18h]

  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *((_DWORD *)CorrespondingDock + 78) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v11[1] = 0LL;
  v11[0] = a1 + 744;
  v11[5] = 760LL;
  v11[2] = &AcpiDeviceTreeLock;
  v12 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v11); ; i = (__int64)ACPIExtListEnumNext((__int64)v11) )
  {
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v11, 1) )
      break;
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = (*(_QWORD *)a1 & 0x20) != 0;
  v7 = (*(_QWORD *)a1 & 0x40) != 0;
  if ( (*(_QWORD *)a1 & 0x40) != 0 || (*(_QWORD *)a1 & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)a1, 0x8000000000100uLL);
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)a1, 0x40uLL);
      *(_QWORD *)(a1 + 16) = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)a1, 0x20uLL);
      *(_QWORD *)(a1 + 16) = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)a1, 0x80uLL);
  if ( (*(_QWORD *)a1 & 0x80000000000LL) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 736);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)v8, 0x20000000000uLL);
      if ( *(_QWORD *)(a1 + 704) )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 728), SingleBusRelations);
      }
    }
  }
  ACPIInitRemoveDeviceExtension(a1);
  if ( *(_QWORD *)(a1 + 704) )
  {
    if ( (*(_QWORD *)a1 & 0x80000000000LL) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 728);
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 48) & 0x4000000) != 0 )
          ACPIInitDereferenceDeviceExtensionLocked(a1);
      }
    }
    *(_QWORD *)(**(_QWORD **)(a1 + 704) + 96LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
