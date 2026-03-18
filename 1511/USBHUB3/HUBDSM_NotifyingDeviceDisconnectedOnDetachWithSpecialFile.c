/*
 * XREFs of HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile @ 0x1C00174B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x1C0011B60 (HUBPDO_NotifyDeviceDisconnected.c)
 */

__int64 __fastcall HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile(__int64 a1)
{
  HUBPDO_NotifyDeviceDisconnected(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
