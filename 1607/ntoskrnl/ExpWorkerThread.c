/*
 * XREFs of ExpWorkerThread @ 0x1400E55A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x14007B664 (KeSetKernelStackSwapEnable.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     KeSetAffinityThread @ 0x140134874 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     EtwTraceThreadWorkItem @ 0x1402260D0 (EtwTraceThreadWorkItem.c)
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
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int Queue; // eax
  signed __int32 v15; // r8d
  signed __int32 v16; // ecx
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h]
  PVOID v22; // [rsp+38h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(BugCheckParameter2 + 688);
  v4 = 1;
  v21 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 1u;
  _InterlockedOr(v20, 0);
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
        KeSetEvent((PRKEVENT)(v2 + 1824), 0, 0);
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
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        KeBugCheckEx(0xDFu, (ULONG_PTR)v8, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4, 0LL);
      if ( (unsigned __int8)KeIsAttachedProcess() )
        KeBugCheckEx(
          5u,
          (ULONG_PTR)CurrentThread->Process,
          (ULONG_PTR)CurrentThread->ApcState.Process,
          CurrentThread->ApcStateIndex,
          (ULONG_PTR)CurrentThread);
      if ( *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[160] != -3LL )
        KeBugCheckEx(0x19Au, (ULONG_PTR)v8, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4, 0LL);
      if ( (unsigned int)PsGetIoPriorityThread(CurrentThread, v10, v11) != 2 )
      {
        IoPriorityThread = PsGetIoPriorityThread(CurrentThread, v12, v13);
        KeBugCheckEx(0x128u, (ULONG_PTR)v8, IoPriorityThread, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      }
      if ( (unsigned int)PsGetPagePriorityThread(CurrentThread) != 5 )
      {
        PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
        KeBugCheckEx(0x129u, (ULONG_PTR)v8, PagePriorityThread, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      }
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
        KeBugCheckEx(0x15Bu, (ULONG_PTR)v8, (Queue >> 9) & 7, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      if ( (CurrentThread->MiscFlags & 8) != 0 )
      {
        DbgPrintEx(
          0,
          0,
          "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
          v8,
          v9,
          BugCheckParameter4);
        PreviousAffinity.Mask = 0LL;
        *(_QWORD *)&PreviousAffinity.Group = 0LL;
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      }
      if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v2 + 144)
        || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v2 + 136) )
      {
        KeQueryNodeActiveAffinity(*(_WORD *)(v2 + 146), &PreviousAffinity, 0LL);
        KeSetAffinityThread(CurrentThread, &PreviousAffinity);
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
        v22 = 0LL;
        EtwActivityIdControlKernel(2, &v22);
      }
    }
  }
  while ( CurrentThread[1].FirstArgument != &CurrentThread[1].FirstArgument );
  _m_prefetchw((const void *)(BugCheckParameter2 + 704));
  v15 = *(_DWORD *)(BugCheckParameter2 + 704);
  do
  {
    if ( (v15 & 0x3FFF) <= (2 * *(_DWORD *)(BugCheckParameter2 + 708)) >> 1
      || (v15 & 0x4000) != 0
      || *(_DWORD *)(BugCheckParameter2 + 4) )
    {
      goto LABEL_3;
    }
    v16 = v15 - 1;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 704), v15 - 1, v15);
  }
  while ( v15 != v16 + 1 );
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  return KeSetKernelStackSwapEnable(1u);
}
