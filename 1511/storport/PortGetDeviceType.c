/*
 * XREFs of PortGetDeviceType @ 0x1C005381C
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C000C594 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetDeviceId @ 0x1C000C7E8 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C000F8DC (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C000FC9C (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0051378 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00523C0 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  if ( a1 >= 0x12 )
    a1 = 17;
  return &PortScsiDeviceTypes[4 * a1];
}
