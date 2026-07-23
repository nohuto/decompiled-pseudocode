/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1400909E4
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x14045F138 (PiDqQueryCreate.c)
 *     PiDmObjectManagerInit @ 0x14051B110 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTree @ 0x1406B24D4 (VfAvlInitializeTree.c)
 *     PiSwInit @ 0x140755538 (PiSwInit.c)
 *     PiInitializeDDBCache @ 0x140755DA8 (PiInitializeDDBCache.c)
 *     PiDcInit @ 0x140756E88 (PiDcInit.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInit @ 0x14075B800 (PopPowerRequestInit.c)
 *     PnpInitPhase0 @ 0x140771408 (PnpInitPhase0.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
