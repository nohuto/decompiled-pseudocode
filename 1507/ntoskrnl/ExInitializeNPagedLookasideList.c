/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140137DA8
 * Callers:
 *     AlpcpInitSystem @ 0x1405BEC58 (AlpcpInitSystem.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1405C1974 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     WmipInitializeRegistration @ 0x1407BA2F8 (WmipInitializeRegistration.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1407E1684 (FsRtlInitializeFileLocks.c)
 *     PopInitializeIrpWorkers @ 0x1407E6434 (PopInitializeIrpWorkers.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140137DDC (ExInitializeNPagedLookasideListInternal.c)
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
