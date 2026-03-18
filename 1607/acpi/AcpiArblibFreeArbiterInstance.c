/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C009995C
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C000AEB0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0021478 (ACPIBuildPdo.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FB94 (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00999B8 (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00A2D0C (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *a1)
{
  if ( a1[128] )
    ArbDeleteArbiterInstance(a1 + 136);
  ExFreePoolWithTag(a1, 0);
}
