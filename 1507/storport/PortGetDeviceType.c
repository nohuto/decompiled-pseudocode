/*
 * XREFs of PortGetDeviceType @ 0x1C004FABC
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C000A35C (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetDeviceId @ 0x1C000A5B0 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C000D66C (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C000DA2C (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C004D79C (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C004E658 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  if ( a1 >= 0x12 )
    a1 = 17;
  return &PortScsiDeviceTypes[4 * a1];
}
