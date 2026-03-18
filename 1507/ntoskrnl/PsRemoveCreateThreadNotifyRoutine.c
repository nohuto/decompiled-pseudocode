/*
 * XREFs of PsRemoveCreateThreadNotifyRoutine @ 0x1406C60A4
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x1400101E8 (ExGetCallBackBlockContext.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v3; // esi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  __int16 v6; // ax
  __int16 v8; // ax
  unsigned __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0;
  while ( 1 )
  {
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    if ( ++v3 >= 0x40 )
    {
      v6 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v6;
      if ( !v6
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return -1073741702;
    }
  }
  if ( (PCREATE_THREAD_NOTIFY_ROUTINE)ExGetCallBackBlockRoutine((__int64)v4) != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v5);
    goto LABEL_6;
  }
  if ( ExGetCallBackBlockContext((__int64)v5) )
    _InterlockedAdd(&PspCreateThreadNotifyRoutineExCount, 0xFFFFFFFF);
  else
    _InterlockedAdd(&PspCreateThreadNotifyRoutineCount, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v5);
  v8 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 1LL, 0LL);
  if ( v9 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)v5, v9);
  ExFreePoolWithTag(v5, 0);
  return 0;
}
