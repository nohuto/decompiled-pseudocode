/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x140075EDC
 * Callers:
 *     MiOutlawInswaps @ 0x14007574C (MiOutlawInswaps.c)
 *     MiOutPageSingleKernelStack @ 0x1400757B4 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x1400B5144 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1400C5478 (MmQueryProcessWorkingSetSwapPages.c)
 *     MiCheckReservePageFileSpace @ 0x1400E2AF0 (MiCheckReservePageFileSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
