/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x1403F1210
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x14051D8EC (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 776 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
