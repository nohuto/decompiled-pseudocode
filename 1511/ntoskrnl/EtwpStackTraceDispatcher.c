/*
 * XREFs of EtwpStackTraceDispatcher @ 0x140210E18
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     EtwpLogSystemEventUnsafe @ 0x14011FCDC (EtwpLogSystemEventUnsafe.c)
 * Callees:
 *     MmCanThreadFault @ 0x140028250 (MmCanThreadFault.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     EtwpQueueStackWalkApc @ 0x140210C68 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140211040 (EtwpTraceStackWalk.c)
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
  if ( (_DWORD)CurrentPrcb != 4096 )
    goto LABEL_27;
  if ( (CurrentThread->MiscFlags & 0x400) != 0
    || CurrentThread != v6
    || (LODWORD(CurrentPrcb) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3), ((unsigned __int8)CurrentPrcb & 1) != 0) )
  {
    v5 = a4 & 0xFFFFEFFF;
    goto LABEL_27;
  }
  LOBYTE(CurrentPrcb) = KeGetEffectiveIrql();
  v10 = 2;
  v11 = (unsigned __int8)CurrentPrcb;
  if ( (unsigned __int8)CurrentPrcb < 2u )
  {
    if ( (a1 & 0x1000000) == 0 && MmCanThreadFault() && !BYTE2(CurrentThread[1].Teb) )
    {
      LOBYTE(CurrentPrcb) = KeIsAttachedProcess();
      if ( !(_BYTE)CurrentPrcb && (v5 & 0x1000000) == 0 && !_bittest((const signed __int32 *)&CurrentThread->116, 5u) )
        goto LABEL_27;
    }
    v5 &= ~0x1000u;
    goto LABEL_25;
  }
  v5 &= ~0x1000u;
  NestingLevel = KeGetCurrentPrcb()->NestingLevel;
  if ( (_BYTE)CurrentPrcb != 2 )
  {
    if ( NestingLevel )
      goto LABEL_15;
LABEL_25:
    v10 = v11;
LABEL_26:
    LOBYTE(CurrentPrcb) = EtwpQueueStackWalkApc((__int64)CurrentThread, v10, a1, a2);
    goto LABEL_27;
  }
  if ( !NestingLevel )
    goto LABEL_26;
LABEL_15:
  if ( (v5 & 0x8000) != 0 && NestingLevel == 1 )
    goto LABEL_25;
LABEL_27:
  if ( (v5 & 0x1800) != 0 )
    LOBYTE(CurrentPrcb) = EtwpTraceStackWalk(a1, v5, v6, a2);
  return (char)CurrentPrcb;
}
