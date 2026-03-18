/*
 * XREFs of MiIsPfn @ 0x14000FBA0
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x14002E6B0 (MiUpdatePfnPriorityByPte.c)
 *     MiMarkHiberNotCachedPages @ 0x1403CB4A0 (MiMarkHiberNotCachedPages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1403CB5A8 (MiMarkNonPagedHiberPhasePages.c)
 *     MiInvalidateHiberPhasePages @ 0x1403D11F0 (MiInvalidateHiberPhasePages.c)
 *     PfpPfnPrioRequest @ 0x14041B450 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528600 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MmIsExtentDangling @ 0x14065AC80 (MmIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1406646F8 (MmRelocatePfnList.c)
 *     MmAreMdlPagesLocked @ 0x140701990 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140701B94 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140701CA4 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140326A90 )
    return 0LL;
  if ( MmPhysicalMemoryBlock )
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0;
  return 1LL;
}
