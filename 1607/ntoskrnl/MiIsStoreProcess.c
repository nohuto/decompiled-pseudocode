/*
 * XREFs of MiIsStoreProcess @ 0x14010CE84
 * Callers:
 *     MiResolvePageTablePage @ 0x14003FD10 (MiResolvePageTablePage.c)
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     MiCheckBadSystemProcessAccess @ 0x14010CE38 (MiCheckBadSystemProcessAccess.c)
 *     MiStoreCheckCandidatePage @ 0x1401191C4 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiOrderTrimList @ 0x1401E9B8C (MiOrderTrimList.c)
 *     MiCapturePfnVm @ 0x1401F7D38 (MiCapturePfnVm.c)
 *     MiCombineWorkingSet @ 0x1401F80D0 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 */

_BOOL8 __fastcall MiIsStoreProcess(__int64 a1)
{
  int *v1; // rcx
  __int64 v2; // r8
  _BOOL8 result; // rax

  v1 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1444));
  result = 0LL;
  if ( v1[266] )
    return *((_QWORD *)v1 + 148) == v2;
  return result;
}
