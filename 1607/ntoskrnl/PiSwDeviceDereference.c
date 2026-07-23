/*
 * XREFs of PiSwDeviceDereference @ 0x1404869A8
 * Callers:
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140483C1C (PiSwCloseDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140483D1C (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x140483D54 (PiSwBusRelationRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x140489090 (PiSwDispatch.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140483DD0 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)a1);
    ExFreePoolWithTag(a1, 0x57706E50u);
  }
}
