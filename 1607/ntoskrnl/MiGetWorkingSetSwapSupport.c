/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x140075E5C
 * Callers:
 *     MiOutlawInswaps @ 0x1400756CC (MiOutlawInswaps.c)
 *     MiOutPageSingleKernelStack @ 0x140075734 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x1400B72AC (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1400C75D8 (MmQueryProcessWorkingSetSwapPages.c)
 *     MiCheckReservePageFileSpace @ 0x1400E4C50 (MiCheckReservePageFileSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
