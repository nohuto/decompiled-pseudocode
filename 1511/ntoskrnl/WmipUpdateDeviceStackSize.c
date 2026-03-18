/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x140507E74
 * Callers:
 *     WmipForwardWmiIrp @ 0x1403D34E8 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
