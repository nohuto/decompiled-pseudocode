/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14053A760
 * Callers:
 *     WmipForwardWmiIrp @ 0x14050514C (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14053A528 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
