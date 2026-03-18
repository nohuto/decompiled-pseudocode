/*
 * XREFs of ExpWorkerThread @ 0x1400316D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x14006FE90 (KeSetKernelStackSwapEnable.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     KeSetAffinityThread @ 0x14015B334 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     EtwTraceThreadWorkItem @ 0x14025D6D0 (EtwTraceThreadWorkItem.c)
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
  int v10; // edx
  int v11; // r8d
  bool v12; // zf
  unsigned int v13; // ecx
  unsigned int Queue_high; // eax
  signed __int32 v15; // r8d
  signed __int32 v16; // ecx
  unsigned int v18; // edx
  int v19; // eax
  int v20; // edx
  signed __int32 v21[8]; // [rsp+0h] [rbp-88h] BYREF
  PVOID v22[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(BugCheckParameter2 + 688);
  v22[1] = 0LL;
  v4 = 1;
  LODWORD(CurrentThread[1].Queue) |= 1u;
  _InterlockedOr(v21, 0);
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
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
        KeBugCheckEx(
          5u,
          (ULONG_PTR)CurrentThread->Process,
          (ULONG_PTR)CurrentThread->ApcState.Process,
          CurrentThread->ApcStateIndex,
          (ULONG_PTR)CurrentThread);
      v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
      v11 = HIDWORD(CurrentThread->Process[1].DirectoryTableBase) & 0x100000;
      if ( v11 )
      {
        v10 = 0;
      }
      else
      {
        v12 = v10 == 2;
        if ( ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2 )
          goto LABEL_17;
      }
      if ( CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        goto LABEL_18;
      v12 = v10 == 2;
LABEL_17:
      if ( !v12 )
      {
        v20 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          v20 = 0;
        if ( v20 < 2 && CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
          v20 = 2;
        KeBugCheckEx(0x128u, (ULONG_PTR)v8, v20, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
      }
LABEL_18:
      v13 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
      if ( v11 && v13 >= 2 || v13 != 5 )
      {
        v18 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v19 = 2;
          if ( v18 < 2 )
            v19 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
          v18 = v19;
        }
        KeBugCheckEx(0x129u, (ULONG_PTR)v8, v18, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
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
        v22[0] = 0LL;
        EtwActivityIdControlKernel(2, v22);
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
  LODWORD(CurrentThread[1].Queue) &= ~1u;
  return KeSetKernelStackSwapEnable(1u);
}
