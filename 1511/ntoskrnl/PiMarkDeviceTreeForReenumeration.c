/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140495BE0
 * Callers:
 *     PiCollapseEnumRequests @ 0x140125B34 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140495ADC (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x140495BA8 (PipForDeviceNodeSubtree.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140495DB0 (PiMarkDeviceTreeForReenumerationWorker.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1, 0LL);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, (__int64)PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
