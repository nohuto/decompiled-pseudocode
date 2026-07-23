/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x1403F00D4
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x1404887B0 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 776 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
