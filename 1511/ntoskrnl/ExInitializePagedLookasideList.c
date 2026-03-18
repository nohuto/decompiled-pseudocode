/*
 * XREFs of ExInitializePagedLookasideList @ 0x1404D17DC
 * Callers:
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     AlpcpInitSystem @ 0x140547BD8 (AlpcpInitSystem.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140549E00 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x14076C038 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x14076C470 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x14076C5E4 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140771934 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400F8AB0 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal((__int64)Lookaside, Allocate, Free, Flags, Size, Tag, Depth, 0);
}
