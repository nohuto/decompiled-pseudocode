/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x14051D8EC
 * Callers:
 *     PiCollapseEnumRequests @ 0x140130644 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x1403EEF7C (PiProcessReenumeration.c)
 * Callees:
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1403F1210 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipForDeviceNodeSubtree @ 0x14051D928 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
