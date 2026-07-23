/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1400C1E1C
 * Callers:
 *     PiDqQueryCreate @ 0x14048CC10 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PiDmObjectManagerInit @ 0x140564B38 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTreeEx @ 0x1406FE23C (VfAvlInitializeTreeEx.c)
 *     PiDcInit @ 0x14079D9B0 (PiDcInit.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInit @ 0x1407BA2C4 (PopPowerRequestInit.c)
 *     PnpInitPhase0 @ 0x1407BC144 (PnpInitPhase0.c)
 *     PiSwInit @ 0x1407BC880 (PiSwInit.c)
 *     PiInitializeDDBCache @ 0x1407BD150 (PiInitializeDDBCache.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
