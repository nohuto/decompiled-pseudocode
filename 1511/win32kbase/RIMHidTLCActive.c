/*
 * XREFs of RIMHidTLCActive @ 0x1C00115AC
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000CD9C (RIMFreeSpecificDevWorker.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
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
