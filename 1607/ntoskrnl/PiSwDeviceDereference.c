/*
 * XREFs of PiSwDeviceDereference @ 0x1404C3AB4
 * Callers:
 *     PiSwDispatch @ 0x140489CB0 (PiSwDispatch.c)
 *     PiSwProcessRemove @ 0x1404C36B0 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1404C3900 (PiSwCloseDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1404C3A00 (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x1404C3A38 (PiSwBusRelationRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x1404C3B98 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(a1, 0x57706E50u);
  }
}
