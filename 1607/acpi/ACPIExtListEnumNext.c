/*
 * XREFs of ACPIExtListEnumNext @ 0x1C001E9F0
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E3E0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E47C (ACPIDetectDuplicateHID.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E640 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E8A0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIDetectDockDevices @ 0x1C001EB70 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001EE60 (ACPIFilterRemoveNonPresentDevices.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002056C (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C0029A1C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0043160 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C0048368 (ACPIDetectEjectDevices.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 */

char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  char *v4; // rcx
  KIRQL v6; // al
  __int64 v7; // r8
  KIRQL v8; // dl
  __int64 v9; // rcx
  _QWORD *v10; // rax
  KSPIN_LOCK *v11; // rcx
  char *v12; // rdi
  volatile signed __int32 *v13; // rsi
  KIRQL v14; // bp
  KIRQL v15; // al
  bool v16; // zf

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v7 = *(_QWORD *)(a1 + 40);
    v8 = v6;
    v9 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 24) = v6;
    v10 = *(_QWORD **)(v7 + v9);
    if ( (_QWORD *)*v10 == v10 )
      v10 = *(_QWORD **)(a1 + 8);
    v11 = *(KSPIN_LOCK **)(a1 + 16);
    v12 = (char *)v10 - v7;
    *(_QWORD *)(a1 + 8) = *v10;
    KeReleaseSpinLock(v11, v8);
    v13 = *(volatile signed __int32 **)(a1 + 32);
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    if ( _InterlockedExchangeAdd(v13 + 171, 0xFFFFFFFF) == 1 )
      ACPIInitDeleteDeviceExtension((PVOID)v13);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLock(&AcpiPowerLock, v14);
    v15 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v16 = &v12[*(_QWORD *)(a1 + 40)] == *(char **)a1;
    *(_QWORD *)(a1 + 32) = v12;
    if ( v16 )
      v12 = 0LL;
    *(_BYTE *)(a1 + 24) = v15;
    return v12;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD **)(v2 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v3 == v3 )
      v3 = *(_QWORD **)(a1 + 8);
    v4 = (char *)v3 - v2;
    *(_QWORD *)(a1 + 32) = (char *)v3 - v2;
    *(_QWORD *)(a1 + 8) = *v3;
    if ( v3 == *(_QWORD **)a1 )
      return 0LL;
    return v4;
  }
}
