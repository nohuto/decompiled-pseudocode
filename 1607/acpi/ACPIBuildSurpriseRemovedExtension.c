/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C0045508
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001EE60 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046BC0 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C000E380 (ACPIDevicePowerFlushQueue.c)
 *     ACPIDockIsDockDevice @ 0x1C0014200 (ACPIDockIsDockDevice.c)
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0043160 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C00449F0 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F96C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C004F990 (ACPIInitRemoveDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(__int64 a1)
{
  __int64 CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdi
  KIRQL v5; // si
  char v6; // dl
  bool v7; // cl
  bool v8; // dl
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 **v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  _QWORD v16[6]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+50h] [rbp-18h]

  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v16[1] = 0LL;
  v16[0] = a1 + 752;
  v16[5] = 768LL;
  v16[2] = &AcpiDeviceTreeLock;
  v17 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v16); ; i = (__int64)ACPIExtListEnumNext((__int64)v16) )
  {
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v16, 1) )
      break;
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (v6 & 0x20) != 0;
  v8 = (v6 & 0x40) != 0;
  if ( v8 || v7 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x8000000000100uLL);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x40uLL);
      *(_QWORD *)(a1 + 24) = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x20uLL);
      *(_QWORD *)(a1 + 24) = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x80uLL);
  if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 744);
    if ( v9 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x20000000000uLL);
      if ( *(_QWORD *)(a1 + 712) )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 736), SingleBusRelations);
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 400);
  if ( v10 )
  {
    v11 = *(__int64 ***)(v10 + 48);
    v12 = (__int64 *)(v10 + 40);
    v13 = (__int64 *)*v12;
    if ( *(__int64 **)(*v12 + 8) != v12 || *v11 != v12 )
      __fastfail(3u);
    *v11 = v13;
    v13[1] = (__int64)v11;
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  ACPIInitRemoveDeviceExtension(a1);
  if ( *(_QWORD *)(a1 + 712) )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 736);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 48) & 0x4000000) != 0 )
          ACPIInitDereferenceDeviceExtensionLocked(a1);
      }
    }
    *(_QWORD *)(**(_QWORD **)(a1 + 712) + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
