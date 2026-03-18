/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1406B51D0
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int i; // esi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  signed __int64 *v6; // rcx
  __int16 v7; // ax
  unsigned __int64 v8; // rax
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = 0; i < 8; ++i )
  {
    v4 = ExReferenceCallBackBlock(&PopCoalescingCallbackRoutine[i]);
    v5 = v4;
    if ( v4 )
    {
      v6 = &PopCoalescingCallbackRoutine[i];
      if ( v4 == a1 )
      {
        if ( ExCompareExchangeCallBack(v6, 0LL, (__int64)v4) )
        {
          _InterlockedAdd(&PopCoalescingCallbackRoutineCount, 0xFFFFFFFF);
          ExDereferenceCallBackBlock(&PopCoalescingCallbackRoutine[i], v5);
          v7 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v7;
          if ( !v7
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 1LL, 0LL);
          if ( v8 >= 2 )
            ExfWaitForRundownProtectionRelease((volatile signed __int64 *)v5, v8);
          ExFreePoolWithTag(v5, 0);
          return;
        }
      }
      else
      {
        ExDereferenceCallBackBlock(v6, v4);
      }
    }
  }
  v9 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
