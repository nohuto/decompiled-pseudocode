/*
 * XREFs of ExInitializePagedLookasideList @ 0x1403E4DC0
 * Callers:
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     AlpcpInitSystem @ 0x14057C1B8 (AlpcpInitSystem.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14057EF2C (FsRtlInitExtraCreateParameterLookasideList.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1407B6CBC (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x1407B6E30 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x1407BC53C (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140002998 (ExInitializePagedLookasideListInternal.c)
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
