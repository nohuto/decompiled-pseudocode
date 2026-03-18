/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x1404FB0F8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1400DDC48 (MiBeginProcessClean.c)
 *     MmInSwapWorkingSet @ 0x1400DE740 (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406A93F4 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiFreeReservationRun @ 0x1404FB09C (MiFreeReservationRun.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(struct _KEVENT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  void *v7; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v6 = *(void **)(a2 + 8);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(a2 + 56);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  MiFreeReservationRun(a1, a2 + 64, a3, a4);
  ExFreePoolWithTag((PVOID)a2, 0);
}
