/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x14045C2F8
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x14045C124 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 776 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
