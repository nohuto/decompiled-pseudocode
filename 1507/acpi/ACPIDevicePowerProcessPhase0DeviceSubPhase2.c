/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteCommon @ 0x1C001EB0C (ACPIDeviceCompleteCommon.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(_DWORD *a1)
{
  if ( (a1[58] & 1) != 0 )
  {
    a1[53] = 0;
  }
  else
  {
    a1[64] = 0;
    a1[53] = 2;
  }
  a1[14] &= 0xEEFFFFFF;
  ACPIDeviceCompleteCommon(a1 + 52, (unsigned int)a1[53]);
  return 0LL;
}
