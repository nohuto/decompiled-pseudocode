/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140105A8C
 * Callers:
 *     AlpcpInitSystem @ 0x140547BD8 (AlpcpInitSystem.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140549E00 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     WmipInitializeRegistration @ 0x140753170 (WmipInitializeRegistration.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     FsRtlInitSystem @ 0x14076C038 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x14076C470 (FsRtlInitializeFileLocks.c)
 *     PopInitializeIrpWorkers @ 0x140770504 (PopInitializeIrpWorkers.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140105AC0 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
