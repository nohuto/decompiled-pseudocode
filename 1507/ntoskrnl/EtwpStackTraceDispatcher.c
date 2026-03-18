/*
 * XREFs of EtwpStackTraceDispatcher @ 0x1402601B0
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14000BBEC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceContextSwap @ 0x140017470 (EtwTraceContextSwap.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 * Callees:
 *     MmCanThreadFault @ 0x14001F4C0 (MmCanThreadFault.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     EtwpQueueStackWalkApc @ 0x140260000 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 */

__int64 __fastcall EtwpStackTraceDispatcher(unsigned int a1, unsigned int *a2, struct _KTHREAD *a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v5; // ebx
  struct _KTHREAD *v6; // rdi
  __int64 result; // rax
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // r11
  int v15; // r9d

  CurrentThread = KeGetCurrentThread();
  v5 = a4;
  v6 = a3;
  if ( (a4 & 0x4000) == 0 || (result = (__int64)KeGetCurrentPrcb(), *(struct _KTHREAD **)(result + 24) != CurrentThread) )
  {
    if ( !a3 )
      v6 = CurrentThread;
    result = a4 & 0x3000;
    if ( (_DWORD)result != 4096 )
      goto LABEL_29;
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread != v6
      || (result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 3), (result & 1) != 0) )
    {
      v5 = a4 & 0xFFFFEFFF;
      goto LABEL_29;
    }
    v10 = KeAreInterruptsEnabled();
    LOBYTE(v13) = 2;
    if ( v10 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 2u )
      {
        if ( (a1 & 0x1000000) == 0 && MmCanThreadFault(v11, v13) && !*(_BYTE *)(v12 + 1738) )
        {
          result = (__int64)KeGetCurrentThread();
          if ( *(_BYTE *)(result + 586) != 1 && (v5 & v15) == 0 && !_bittest((const signed __int32 *)(v12 + 116), 5u) )
            goto LABEL_29;
        }
        v5 &= ~0x1000u;
        goto LABEL_27;
      }
    }
    else
    {
      CurrentIrql = 15;
    }
    result = (__int64)KeGetCurrentPrcb();
    v5 &= ~0x1000u;
    if ( CurrentIrql == 2 )
    {
      if ( !*(_BYTE *)(result + 32) )
        goto LABEL_28;
      goto LABEL_17;
    }
    if ( *(_BYTE *)(result + 32) )
    {
LABEL_17:
      if ( (v5 & 0x8000) == 0 || *(_BYTE *)(result + 32) != 1 )
        goto LABEL_29;
    }
LABEL_27:
    LOBYTE(v13) = CurrentIrql;
LABEL_28:
    result = EtwpQueueStackWalkApc(v12, v13, a1, a2);
LABEL_29:
    if ( (v5 & 0x1800) != 0 )
      return EtwpTraceStackWalk(a1, v5, v6, a2);
  }
  return result;
}
