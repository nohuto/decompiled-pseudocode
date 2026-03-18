/*
 * XREFs of RIMHidTLCActive @ 0x1C001A8C4
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C001A680 (RIMDirectStartStopDeviceRead.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00755F8 (RIMFreeSpecificDevWorker.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
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
