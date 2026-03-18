/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x1C000CB88
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     ACPIProcessorStartDevice @ 0x1C001A890 (ACPIProcessorStartDevice.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00795E0 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C007AB40 (ACPIFanStartDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C007EC40 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C0004FC8 (ACPIThermalQueryCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C002107C (ACPIThermalAssocaiteConstraint.c)
 */

__int64 __fastcall ACPIThermalAcquireCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // r14
  __int64 *v5; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  *(_BYTE *)(a1 + 608) = 1;
  v3 = (__int64 *)AcpiThermalUnclaimedConstraintList;
  v4 = v2;
  while ( v3 != &AcpiThermalUnclaimedConstraintList )
  {
    v5 = v3 - 2;
    v3 = (__int64 *)*v3;
    AMLIGetNameSpaceObject(v5 + 7);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
  return 3221225659LL;
}
