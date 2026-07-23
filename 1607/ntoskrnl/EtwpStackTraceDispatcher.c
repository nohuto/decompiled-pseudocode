/*
 * XREFs of EtwpStackTraceDispatcher @ 0x140229210
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceContextSwap @ 0x1400D4300 (EtwTraceContextSwap.c)
 * Callees:
 *     MmCanThreadFault @ 0x1400511A0 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     EtwpQueueStackWalkApc @ 0x140229060 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14022944C (EtwpTraceStackWalk.c)
 */

char __fastcall EtwpStackTraceDispatcher(unsigned int a1, unsigned int *a2, struct _KTHREAD *a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  struct _KTHREAD *v6; // rsi
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r14
  int NestingLevel; // ecx

  CurrentThread = KeGetCurrentThread();
  v5 = a4;
  v6 = a3;
  if ( (a4 & 0x4000) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->IdleThread == CurrentThread )
      return (char)CurrentPrcb;
  }
  if ( !a3 )
    v6 = CurrentThread;
  LODWORD(CurrentPrcb) = a4 & 0x3000;
  if ( (_DWORD)CurrentPrcb == 4096 )
  {
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread != v6
      || (LODWORD(CurrentPrcb) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2),
          ((unsigned __int8)CurrentPrcb & 1) != 0)
      && (a4 & 0x4000000) == 0 )
    {
      v5 = a4 & 0xFFFFEFFF;
      goto LABEL_29;
    }
    LOBYTE(CurrentPrcb) = KeGetEffectiveIrql();
    v10 = 2;
    v11 = (unsigned __int8)CurrentPrcb;
    if ( (unsigned __int8)CurrentPrcb < 2u )
    {
      if ( ((a1 & 0x1000000) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0)
        && MmCanThreadFault()
        && !BYTE6(CurrentThread[1].Queue) )
      {
        LOBYTE(CurrentPrcb) = KeIsAttachedProcess();
        if ( !(_BYTE)CurrentPrcb && (v5 & 0x1000000) == 0 && !_bittest((const signed __int32 *)&CurrentThread->116, 5u) )
          goto LABEL_29;
      }
      v5 &= ~0x1000u;
      goto LABEL_27;
    }
    v5 &= ~0x1000u;
    NestingLevel = KeGetCurrentPrcb()->NestingLevel;
    if ( (_BYTE)CurrentPrcb == 2 )
    {
      if ( !NestingLevel )
        goto LABEL_28;
    }
    else if ( !NestingLevel )
    {
LABEL_27:
      v10 = v11;
LABEL_28:
      LOBYTE(CurrentPrcb) = EtwpQueueStackWalkApc((__int64)CurrentThread, v10, a1, a2);
      goto LABEL_29;
    }
    if ( (v5 & 0x8000) != 0 && NestingLevel == 1 )
      goto LABEL_27;
  }
LABEL_29:
  if ( (v5 & 0x1800) != 0 )
    LOBYTE(CurrentPrcb) = EtwpTraceStackWalk(a1, v5, v6, a2);
  return (char)CurrentPrcb;
}
