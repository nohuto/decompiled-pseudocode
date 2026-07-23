/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x1404887B0
 * Callers:
 *     PiCollapseEnumRequests @ 0x140130BB4 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140488E80 (PiProcessReenumeration.c)
 * Callees:
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1403F00D4 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipForDeviceNodeSubtree @ 0x140487410 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, (__int64)PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
