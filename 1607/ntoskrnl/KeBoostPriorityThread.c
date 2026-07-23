/*
 * XREFs of KeBoostPriorityThread @ 0x1400049F8
 * Callers:
 *     ExpCreateWorkerThread @ 0x1403E5BC4 (ExpCreateWorkerThread.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     EtwTracePriority @ 0x140225E3C (EtwTracePriority.c)
 */

void *__fastcall KeBoostPriorityThread(__int64 a1, int a2, __int64 a3)
{
  void *result; // rax
  unsigned int v6; // edi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  bool v9; // r15
  int v10; // esi
  int v11; // eax
  __int64 updated; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  result = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v15 = 0LL;
    v6 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = *(char *)(a1 + 195);
    if ( v10 < 16 && !*(_BYTE *)(a1 + 564) )
    {
      v11 = a2 + *(char *)(a1 + 563);
      if ( v11 > v10 )
      {
        v6 = a2 + *(char *)(a1 + 563);
        if ( v11 >= 16 )
          v6 = 15;
        if ( !v9 || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(a1 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
          _enable();
        }
        v13 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
        if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
        *(_QWORD *)(a1 + 32) = v13;
        KiSetPriorityThread(a1, &v15, v6);
      }
    }
    LOBYTE(a3) = CurrentIrql;
    *(_QWORD *)(a1 + 64) = 0LL;
    result = (void *)KiProcessDeferredReadyList(CurrentPrcb, &v15, a3);
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    {
      if ( v6 )
        return (void *)EtwTracePriority(a1, 1328, v10, v6, 0LL);
    }
  }
  return result;
}
