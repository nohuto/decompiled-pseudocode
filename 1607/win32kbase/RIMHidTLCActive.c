/*
 * XREFs of RIMHidTLCActive @ 0x1C0010254
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000A37C (RIMFreeSpecificDevWorker.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0010070 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1[6] || a1[7] > (unsigned int)(a1[8] - a1[9]) )
    return 1;
  return v1;
}
