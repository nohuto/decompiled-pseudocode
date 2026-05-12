/*
 * XREFs of PortGetDeviceType @ 0x1C005A758
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C001094C (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetDeviceId @ 0x1C0010BA0 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C0011DE4 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0013C64 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0059154 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  if ( a1 >= 0x12 )
    a1 = 17;
  return &PortScsiDeviceTypes[4 * a1];
}
