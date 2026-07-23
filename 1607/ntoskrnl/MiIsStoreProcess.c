/*
 * XREFs of MiIsStoreProcess @ 0x14010AC04
 * Callers:
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiCheckBadSystemProcessAccess @ 0x14010ABB8 (MiCheckBadSystemProcessAccess.c)
 *     MiStoreCheckCandidatePage @ 0x140119734 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiOrderTrimList @ 0x1401E99B8 (MiOrderTrimList.c)
 *     MiCapturePfnVm @ 0x1401F7B64 (MiCapturePfnVm.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
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
