/*
 * XREFs of MiIsPfn @ 0x14000F720
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x14002E230 (MiUpdatePfnPriorityByPte.c)
 *     MiMarkHiberNotCachedPages @ 0x1403CB4A0 (MiMarkHiberNotCachedPages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1403CB5A8 (MiMarkNonPagedHiberPhasePages.c)
 *     MiInvalidateHiberPhasePages @ 0x1403D11F0 (MiInvalidateHiberPhasePages.c)
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     MmIsExtentDangling @ 0x14065AD64 (MmIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1406647DC (MmRelocatePfnList.c)
 *     MmAreMdlPagesLocked @ 0x1407019C0 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140701BC4 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140701CD4 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140326AD0 )
    return 0LL;
  if ( MmPhysicalMemoryBlock )
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0;
  return 1LL;
}
