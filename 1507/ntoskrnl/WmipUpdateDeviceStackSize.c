/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14057E710
 * Callers:
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
