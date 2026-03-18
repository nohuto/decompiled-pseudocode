/*
 * XREFs of CiSchedulerSetPriority @ 0x1C0001840
 * Callers:
 *     CiSchedulerCommitPriority @ 0x1C0001520 (CiSchedulerCommitPriority.c)
 *     CiSchedulerAddThread @ 0x1C0001740 (CiSchedulerAddThread.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001800 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiProcessSuspend @ 0x1C0001A50 (CiProcessSuspend.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x1C0003B38 (CiLogSchedulerEvent.c)
 */

char __fastcall CiSchedulerSetPriority(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  unsigned int v5; // edi

  if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    return 0;
  if ( CiThreadsMovedUp )
  {
    v2 = *(_QWORD *)(a1 + 72);
    v3 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v2 + 120) || !*(_BYTE *)(v2 + 132) && *(_QWORD *)(v2 + 80) )
    {
      v4 = *(_BYTE *)(v3 + 40);
      if ( v4 > *(_BYTE *)(a1 + 104) )
        v4 = *(_BYTE *)(a1 + 104);
    }
    else
    {
      v4 = *(_BYTE *)(a1 + 104);
    }
    v5 = v4;
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 106);
  }
  if ( *(unsigned __int8 *)(a1 + 107) != v5 )
  {
    *(_BYTE *)(a1 + 107) = v5;
    if ( byte_1C0007290 )
      CiLogSchedulerEvent(a1, v5);
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 96), v5);
  }
  return 1;
}
