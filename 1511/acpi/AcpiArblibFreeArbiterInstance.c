/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C00791D0
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0007880 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0019284 (ACPIBuildPdo.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C93C (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C007922C (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C008110C (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *a1)
{
  if ( a1[128] )
    ArbDeleteArbiterInstance(a1 + 136);
  ExFreePoolWithTag(a1, 0);
}
