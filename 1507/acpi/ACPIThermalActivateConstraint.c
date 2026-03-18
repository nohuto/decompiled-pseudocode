/*
 * XREFs of ACPIThermalActivateConstraint @ 0x1C0004D2C
 * Callers:
 *     ACPIThermalBuildConstraints @ 0x1C0066214 (ACPIThermalBuildConstraints.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0004FB0 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C0004FC8 (ACPIThermalQueryCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C002107C (ACPIThermalAssocaiteConstraint.c)
 */

void __fastcall ACPIThermalActivateConstraint(__int64 *a1)
{
  __int64 v2; // rbx
  KIRQL v3; // dl
  __int64 **v4; // rcx
  __int64 **v5; // rcx

  v2 = *(_QWORD *)(a1[4] + 192) + 176LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v4 = *(__int64 ***)(v2 + 8);
  *a1 = v2;
  a1[1] = (__int64)v4;
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  *v4 = a1;
  *(_QWORD *)(v2 + 8) = a1;
  v5 = (__int64 **)qword_1C00594F8;
  a1[2] = (__int64)&AcpiThermalUnclaimedConstraintList;
  a1[3] = (__int64)v5;
  if ( *v5 != &AcpiThermalUnclaimedConstraintList )
    __fastfail(3u);
  *v5 = a1 + 2;
  qword_1C00594F8 = (__int64)(a1 + 2);
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
  AMLIGetNameSpaceObject(a1 + 7);
}
