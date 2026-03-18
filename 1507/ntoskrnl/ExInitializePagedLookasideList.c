/*
 * XREFs of ExInitializePagedLookasideList @ 0x1404F9D70
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     AlpcpInitSystem @ 0x1405BEC58 (AlpcpInitSystem.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1405C1974 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1407E1684 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x1407E17F8 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x1407E7FE0 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400D9BD8 (ExInitializePagedLookasideListInternal.c)
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
