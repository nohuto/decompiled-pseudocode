/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x14045C124
 * Callers:
 *     PiCollapseEnumRequests @ 0x140158EA4 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x14045E274 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x14045C0EC (PipForDeviceNodeSubtree.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14045C2F8 (PiMarkDeviceTreeForReenumerationWorker.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1, 0LL);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, (__int64)PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
