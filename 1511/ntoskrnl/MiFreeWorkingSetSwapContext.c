/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x1403B5964
 * Callers:
 *     MmInSwapWorkingSet @ 0x140001BC8 (MmInSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x14001BE64 (MiBeginProcessClean.c)
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14062AD24 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFreeReservationRun @ 0x1404D05A4 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiFreeReservationRun(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
