/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1400194B8
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x1405483F0 (PiDqQueryCreate.c)
 *     PiDmObjectManagerInit @ 0x1405AC380 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTree @ 0x1407324E4 (VfAvlInitializeTree.c)
 *     PiDcInit @ 0x1407C039C (PiDcInit.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInit @ 0x1407E52C4 (PopPowerRequestInit.c)
 *     PnpInitPhase0 @ 0x1407E7914 (PnpInitPhase0.c)
 *     PiSwInit @ 0x1407E84D8 (PiSwInit.c)
 *     PiInitializeDDBCache @ 0x1407E8E4C (PiInitializeDDBCache.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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
