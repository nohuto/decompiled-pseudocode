/*
 * XREFs of ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0019A90
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006C4D0 (IrqArbpFindSuitableRangeIsa.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C007EC0C (PnpiCmResourceToBiosExtendedIrq.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00167C8 (ACPIInternalFindDeviceExtensionNoLock.c)
 */

char __fastcall ACPIInternalInterruptPolarityCacheGetPolarity(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // bl
  KIRQL v7; // r14
  __int64 DeviceExtensionNoLock; // rcx
  __int64 *i; // rax
  int v10; // edx

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, RootDeviceExtension);
LABEL_3:
  if ( DeviceExtensionNoLock )
  {
    for ( i = *(__int64 **)(DeviceExtensionNoLock + 656); ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)(DeviceExtensionNoLock + 656) )
      {
        DeviceExtensionNoLock = *(_QWORD *)(DeviceExtensionNoLock + 736);
        goto LABEL_3;
      }
      if ( a2 == *((_DWORD *)i + 4) )
        break;
    }
    v10 = *((_DWORD *)i + 5);
    if ( v10 != -1 )
    {
      *a3 = v10;
      v3 = 1;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return v3;
}
