/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14053ACA0
 * Callers:
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14053AA68 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
