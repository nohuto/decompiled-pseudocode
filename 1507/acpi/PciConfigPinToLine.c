/*
 * XREFs of PciConfigPinToLine @ 0x1C0023660
 * Callers:
 *     AcpiPccEjectInterface @ 0x1C0007108 (AcpiPccEjectInterface.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C003EB1C (AcpiPccGetInterfaceInformation.c)
 *     PciBusEjectInterface @ 0x1C0066CF4 (PciBusEjectInterface.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C0073258 (AcpiEjectBusNumberTranslator.c)
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
