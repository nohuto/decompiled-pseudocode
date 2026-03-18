/*
 * XREFs of HUBSM_AddHsmEvent @ 0x1C0008DE8
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C00661A0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B50 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C00672E0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C006760C (HUBFDO_IoctlGetPortStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBSM_AddHsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 1232, a2);
}
