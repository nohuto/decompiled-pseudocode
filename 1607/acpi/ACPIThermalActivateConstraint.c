/*
 * XREFs of ACPIThermalActivateConstraint @ 0x1C00080EC
 * Callers:
 *     ACPIThermalBuildConstraints @ 0x1C00817DC (ACPIThermalBuildConstraints.c)
 * Callees:
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C0008248 (ACPIThermalQueryCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0013940 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0028780 (ACPIThermalAssocaiteConstraint.c)
 */

void __fastcall ACPIThermalActivateConstraint(__int64 *a1)
{
  __int64 v2; // rbx
  KIRQL v3; // dl
  __int64 **v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  v2 = *(_QWORD *)(a1[4] + 200) + 176LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v4 = *(__int64 ***)(v2 + 8);
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  a1[1] = (__int64)v4;
  *a1 = v2;
  *v4 = a1;
  v5 = a1 + 2;
  *(_QWORD *)(v2 + 8) = a1;
  v6 = (_QWORD *)qword_1C00738D8;
  if ( *(__int64 **)qword_1C00738D8 != &AcpiThermalUnclaimedConstraintList )
    __fastfail(3u);
  *v5 = &AcpiThermalUnclaimedConstraintList;
  a1[3] = (__int64)v6;
  *v6 = v5;
  qword_1C00738D8 = (__int64)(a1 + 2);
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
  AMLIGetNameSpaceObject(a1 + 7);
}
