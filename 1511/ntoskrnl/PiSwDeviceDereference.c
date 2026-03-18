/*
 * XREFs of PiSwDeviceDereference @ 0x140494688
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x1404944B8 (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x1404944F0 (PiSwBusRelationRemove.c)
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1404957E8 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140494D34 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(a1, 0x57706E50u);
  }
}
