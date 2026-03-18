/*
 * XREFs of CiSchedulerSetPriority @ 0x1C0001930
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001370 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerCommitPriority @ 0x1C0001730 (CiSchedulerCommitPriority.c)
 *     CiSchedulerAddThread @ 0x1C0001870 (CiSchedulerAddThread.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x1C00037B0 (CiLogSchedulerEvent.c)
 */

char __fastcall CiSchedulerSetPriority(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edi

  if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    return 0;
  if ( CiThreadsMovedUp )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 72) + 80LL) )
    {
      v2 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( v2 > *(_BYTE *)(a1 + 104) )
        v2 = *(_BYTE *)(a1 + 104);
    }
    else
    {
      v2 = *(_BYTE *)(a1 + 104);
    }
    v3 = v2;
  }
  else
  {
    v3 = *(unsigned __int8 *)(a1 + 106);
  }
  if ( *(unsigned __int8 *)(a1 + 107) != v3 )
  {
    *(_BYTE *)(a1 + 107) = v3;
    if ( byte_1C0007298 )
      CiLogSchedulerEvent(a1, v3);
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 96), v3);
  }
  return 1;
}
