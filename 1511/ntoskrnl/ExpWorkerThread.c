/*
 * XREFs of ExpWorkerThread @ 0x14006F990
 * Callers:
 *     <none>
 * Callees:
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x1400DE5E0 (KeSetKernelStackSwapEnable.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     KeSetAffinityThread @ 0x14012DAD4 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     EtwTraceThreadWorkItem @ 0x14020E3F0 (EtwTraceThreadWorkItem.c)
 */

BOOLEAN __fastcall ExpWorkerThread(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // r15
  char v4; // r12
  __int64 v5; // rax
  _QWORD *BugCheckParameter4; // rsi
  int v7; // ecx
  void (__fastcall *v8)(const void *); // rbp
  const void *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int Queue_high; // eax
  signed __int32 v20; // r8d
  signed __int32 v21; // ecx
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v25[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(BugCheckParameter2 + 688);
  v4 = 1;
  v26[1] = 0LL;
  LODWORD(CurrentThread[1].Queue) |= 1u;
  _InterlockedOr(v25, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
    while ( 1 )
    {
LABEL_3:
      while ( 1 )
      {
        v5 = KeRemovePriQueue(BugCheckParameter2);
        BugCheckParameter4 = (_QWORD *)v5;
        if ( !v4 )
          break;
        v4 = 0;
        *(_DWORD *)(BugCheckParameter2 + 708) &= ~0x80000000;
        _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 704), 0xFFFFBFFF);
        if ( v5 != 258 )
          goto LABEL_5;
      }
      if ( v5 == 258 )
        break;
LABEL_5:
      v7 = *(_DWORD *)(BugCheckParameter2 + 704);
      if ( v7 < (2 * *(_DWORD *)(BugCheckParameter2 + 708)) >> 1
        || v7 < *(_DWORD *)(BugCheckParameter2 + 712)
        && *(_QWORD *)(BugCheckParameter2 + 8) == BugCheckParameter2 + 8
        && (*(_DWORD *)(BugCheckParameter2 + 4) || *(int *)(BugCheckParameter2 + 708) < 0) )
      {
        KeSetEvent((PRKEVENT)(v2 + 1040), 0, 0);
      }
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 696));
      v8 = (void (__fastcall *)(const void *))BugCheckParameter4[2];
      v9 = (const void *)BugCheckParameter4[3];
      if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
      {
        EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
        v8(v9);
        EtwTraceThreadWorkItem(v8, 1345LL);
      }
      else
      {
        v8((const void *)BugCheckParameter4[3]);
      }
      if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
        KeBugCheckEx(0x39u, (ULONG_PTR)v8, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4, 0LL);
      if ( CurrentThread->WaitBlock[3].SpareLong )
        KeBugCheckEx(1u, (ULONG_PTR)v8, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
      if ( KeGetCurrentIrql() )
        KeBugCheckEx(0xE1u, (ULONG_PTR)v8, KeGetCurrentIrql(), (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
        KeBugCheckEx(0xDFu, (ULONG_PTR)v8, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4, 0LL);
      if ( (unsigned __int8)KeIsAttachedProcess(v11, v10, v12) )
        KeBugCheckEx(
          5u,
          (ULONG_PTR)CurrentThread->Process,
          (ULONG_PTR)CurrentThread->ApcState.Process,
          CurrentThread->ApcStateIndex,
          (ULONG_PTR)CurrentThread);
      if ( (unsigned int)PsGetIoPriorityThread(CurrentThread) != 2 )
      {
        IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
        KeBugCheckEx(0x128u, (ULONG_PTR)v8, IoPriorityThread, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      }
      if ( (unsigned int)PsGetPagePriorityThread(CurrentThread, v13, v14, v15) != 5 )
      {
        PagePriorityThread = PsGetPagePriorityThread(CurrentThread, v16, v17, v18);
        KeBugCheckEx(0x129u, (ULONG_PTR)v8, PagePriorityThread, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      }
      Queue_high = HIDWORD(CurrentThread[1].Queue);
      if ( (Queue_high & 0x100) != 0 )
        KeBugCheckEx(0x15Bu, (ULONG_PTR)v8, (Queue_high >> 9) & 7, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      if ( (CurrentThread->MiscFlags & 8) != 0 )
      {
        DbgPrintEx(
          0,
          0,
          "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
          v8,
          v9,
          BugCheckParameter4);
        Affinity.Mask = 0LL;
        *(_QWORD *)&Affinity.Group = 0LL;
        KeRevertToUserGroupAffinityThread(&Affinity);
      }
      if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v2 + 144)
        || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v2 + 136) )
      {
        KeQueryNodeActiveAffinity(*(_WORD *)(v2 + 146), &Affinity, 0LL);
        KeSetAffinityThread(CurrentThread, &Affinity);
      }
      if ( CurrentThread[1].WaitBlock[0].SparePtr )
      {
        DbgPrintEx(
          0,
          0,
          "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
          v8,
          v9,
          BugCheckParameter4);
        v26[0] = 0LL;
        EtwActivityIdControlKernel(2LL, v26);
      }
    }
  }
  while ( CurrentThread[1].FirstArgument != &CurrentThread[1].FirstArgument );
  _m_prefetchw((const void *)(BugCheckParameter2 + 704));
  v20 = *(_DWORD *)(BugCheckParameter2 + 704);
  do
  {
    if ( (v20 & 0x3FFF) <= (2 * *(_DWORD *)(BugCheckParameter2 + 708)) >> 1
      || (v20 & 0x4000) != 0
      || *(_DWORD *)(BugCheckParameter2 + 4) )
    {
      goto LABEL_3;
    }
    v21 = v20 - 1;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 704), v20 - 1, v20);
  }
  while ( v20 != v21 + 1 );
  LODWORD(CurrentThread[1].Queue) &= ~1u;
  return KeSetKernelStackSwapEnable(1u);
}
