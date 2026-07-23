/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140111160
 * Callers:
 *     AlpcpInitSystem @ 0x14057C1B8 (AlpcpInitSystem.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14057EF2C (FsRtlInitExtraCreateParameterLookasideList.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     WmipInitializeRegistration @ 0x14079C5A8 (WmipInitializeRegistration.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1407B6CBC (FsRtlInitializeFileLocks.c)
 *     PopInitializeIrpWorkers @ 0x1407BB170 (PopInitializeIrpWorkers.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140111194 (ExInitializeNPagedLookasideListInternal.c)
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
