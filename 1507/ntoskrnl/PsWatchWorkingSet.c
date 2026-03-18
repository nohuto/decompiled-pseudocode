/*
 * XREFs of PsWatchWorkingSet @ 0x140243858
 * Callers:
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 */

void __fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Flink; // r9
  char v5; // r10
  unsigned __int64 v6; // rdi
  signed __int32 v7; // ecx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v9; // eax
  int v10; // ecx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rax
  __int64 v14; // r8
  signed __int32 v15; // eax
  volatile signed __int64 *SparePtr; // rax
  signed __int64 Blink; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  __int16 v20; // ax

  CurrentThread = KeGetCurrentThread();
  Flink = CurrentThread->ApcState.Process[1].ReadyListHead.Flink;
  if ( Flink )
  {
    if ( a1 >= 276 )
    {
      v5 = 0;
      v6 = 0x8000000000000000uLL;
    }
    else
    {
      v5 = 1;
      v6 = 0x4000000000000000LL;
    }
    _m_prefetchw(Flink);
    v7 = (signed __int32)Flink->Flink;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    if ( (v7 & 1) != 0 )
      goto LABEL_21;
    do
    {
      if ( (v7 & 0xFFFEu) >= 0x800 )
        break;
      v9 = v7;
      v10 = ((unsigned __int16)v7 ^ (unsigned __int16)((v7 & 0xFFFE) + 2)) & 0xFFFE ^ v7;
      v12 = v9;
      v11 = _InterlockedCompareExchange(
              (volatile signed __int32 *)Flink,
              (v10 ^ ((v10 & 0xFFFF0000) + 0x10000)) & 0x7FFF0000 ^ v10,
              v9);
      v7 = v11;
      if ( v12 == v11 )
        break;
    }
    while ( (v11 & 1) == 0 );
    if ( (v7 & 1) != 0 || (v7 & 0xFFFEu) >= 0x800 )
    {
LABEL_21:
      _m_prefetchw(&Flink->Blink);
      Blink = (signed __int64)Flink->Blink;
      if ( Blink != -1 )
      {
        do
        {
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)&Flink->Blink, Blink + 1, Blink);
          v18 = Blink == v19;
          Blink = v19;
        }
        while ( !v18 && v19 != -1 );
      }
    }
    else
    {
      v13 = (unsigned __int16)v7 >> 1;
      *((_QWORD *)&Flink[2].Blink + 3 * v13) = a2;
      if ( v5 )
        v14 = a3 | 1;
      else
        v14 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      *((_QWORD *)&Flink[3].Flink + 3 * v13) = v14;
      *((_QWORD *)&Flink[3].Blink + 3 * v13) = CurrentThread[1].KernelStack;
      v15 = _InterlockedExchangeAdd((volatile signed __int32 *)Flink, 0xFFFF0000);
      if ( (v15 & 1) != 0 && (v15 & 0x7FFF0000) == 0x10000 )
        KeSignalGate((__int64)&Flink[1], 0, v14);
      SparePtr = (volatile signed __int64 *)CurrentThread->WaitBlock[0].SparePtr;
      if ( SparePtr )
        _InterlockedOr64(SparePtr, v6);
    }
    if ( !CurrentIrql )
    {
      v20 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
