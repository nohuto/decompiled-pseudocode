/*
 * XREFs of PciConfigPinToLine @ 0x1C0024CD0
 * Callers:
 *     AcpiPccEjectInterface @ 0x1C001D95C (AcpiPccEjectInterface.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C003E65C (AcpiPccGetInterfaceInformation.c)
 *     PciBusEjectInterface @ 0x1C007071C (PciBusEjectInterface.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00708EC (AcpiEjectBusNumberTranslator.c)
 * Callees:
 *     <none>
 */

void __fastcall PciConfigPinToLine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  ;
}
