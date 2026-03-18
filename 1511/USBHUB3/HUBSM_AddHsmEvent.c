/*
 * XREFs of HUBSM_AddHsmEvent @ 0x1C0008948
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0062160 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062E40 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C00635C0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C00638E4 (HUBFDO_IoctlGetPortStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBSM_AddHsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 1208, a2);
}
