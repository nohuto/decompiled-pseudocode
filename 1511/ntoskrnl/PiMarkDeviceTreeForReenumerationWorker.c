/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x140495DB0
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x140495BE0 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 776 )
    PipSetDevNodeFlags(a1, 8);
  return 0LL;
}
