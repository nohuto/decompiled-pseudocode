/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C0079070
 * Callers:
 *     ACPIBuildPdo @ 0x1C00192F8 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C001AA90 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C5AC (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00790CC (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C0080F2C (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *a1)
{
  if ( a1[128] )
    ArbDeleteArbiterInstance(a1 + 136);
  ExFreePoolWithTag(a1, 0);
}
