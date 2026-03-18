/*
 * XREFs of IoUnregisterPriorityCallback @ 0x1401F67FC
 * Callers:
 *     IopDeleteDriver @ 0x1404F380C (IopDeleteDriver.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     PspQueueApcSpecialApc @ 0x1404F9234 (PspQueueApcSpecialApc.c)
 *     ExWaitForCallBacks @ 0x1406EF7C0 (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int i; // ebp
  signed __int64 *v4; // r14
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rdi
  __int16 v7; // ax
  __int16 v8; // ax

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    for ( i = 0; i < 8; ++i )
    {
      v5 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[i]);
      v6 = v5;
      if ( v5 )
      {
        v4 = &IopUpdatePriorityCallbackRoutine[i];
        if ( v5[4].Count == a1 )
        {
          if ( ExCompareExchangeCallBack(v4, 0LL, (__int64)v5) )
          {
            _InterlockedAdd(&IopUpdatePriorityCallbackRoutineCount, 0xFFFFFFFF);
            ExDereferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[i], v6);
            v7 = CurrentThread->KernelApcDisable + 1;
            CurrentThread->KernelApcDisable = v7;
            if ( !v7
              && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
              && !CurrentThread->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            ExWaitForCallBacks(v6);
            PspQueueApcSpecialApc(v6);
            *(_DWORD *)(a1 + 16) &= ~0x200u;
            return;
          }
        }
        else
        {
          ExDereferenceCallBackBlock(v4, v5);
        }
      }
    }
    v8 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
