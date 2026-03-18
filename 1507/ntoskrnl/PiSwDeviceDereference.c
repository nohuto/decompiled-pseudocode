/*
 * XREFs of PiSwDeviceDereference @ 0x140539DD0
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140539D20 (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x140539D58 (PiSwBusRelationRemove.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140539E04 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(a1, 0x57706E50u);
  }
}
