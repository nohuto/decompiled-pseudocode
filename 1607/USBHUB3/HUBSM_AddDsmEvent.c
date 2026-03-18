/*
 * XREFs of HUBSM_AddDsmEvent @ 0x1C0008A20
 * Callers:
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C00659E4 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C00699D0 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 *     HUBPDO_EvtDeviceReportedMissing @ 0x1C0069B70 (HUBPDO_EvtDeviceReportedMissing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBSM_AddDsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 488, a2);
}
