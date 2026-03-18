/*
 * XREFs of PspSetCreateProcessNotifyRoutine @ 0x1405A71BC
 * Callers:
 *     PsSetCreateProcessNotifyRoutineEx @ 0x1405A6F5C (PsSetCreateProcessNotifyRoutineEx.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x1405A70F8 (PsSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x1400101E8 (ExGetCallBackBlockContext.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x1405A72A8 (ExAllocateCallBack.c)
 *     MmVerifyCallbackFunction @ 0x1405A72EC (MmVerifyCallbackFunction.c)
 */

__int64 __fastcall PspSetCreateProcessNotifyRoutine(__int64 a1, char a2, char a3)
{
  unsigned int v3; // r14d
  __int64 v6; // rdx
  struct _EX_RUNDOWN_REF *v7; // rsi
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rbx
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rsi
  __int64 v12; // rcx
  __int16 v13; // ax
  __int16 v14; // ax
  unsigned __int64 v15; // rax
  __int64 v17; // [rsp+68h] [rbp+20h]

  v3 = 0;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    while ( 1 )
    {
      v10 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v3);
      v11 = v10;
      if ( v10 )
        break;
LABEL_24:
      if ( ++v3 >= 0x40 )
      {
        v13 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v13;
        if ( !v13
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return 3221225594LL;
      }
    }
    v17 = ExGetCallBackBlockContext((__int64)v10);
    if ( ExGetCallBackBlockRoutine(v12) == a1 )
    {
      if ( v17 )
      {
        if ( !a3 )
          goto LABEL_23;
      }
      else if ( a3 )
      {
        goto LABEL_23;
      }
      if ( ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v3, 0LL, (__int64)v11) )
      {
        if ( a3 )
          _InterlockedDecrement(&PspCreateProcessNotifyRoutineExCount);
        else
          _InterlockedDecrement(&PspCreateProcessNotifyRoutineCount);
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v3, v11);
        v14 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v14;
        if ( !v14
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, 1LL, 0LL);
        if ( v15 >= 2 )
          ExfWaitForRundownProtectionRelease((volatile signed __int64 *)v11, v15);
        ExFreePoolWithTag(v11, 0);
        return 0LL;
      }
    }
LABEL_23:
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v3, v11);
    goto LABEL_24;
  }
  if ( a3 )
  {
    if ( !(unsigned int)MmVerifyCallbackFunction() )
      return 3221225506LL;
    v6 = 1LL;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, v6);
  if ( !v7 )
    return 3221225626LL;
  v8 = 0;
  while ( !ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v8, v7, 0LL) )
  {
    if ( ++v8 >= 0x40 )
    {
      ExFreePoolWithTag(v7, 0);
      return 3221225485LL;
    }
  }
  if ( a3 )
  {
    _InterlockedAdd(&PspCreateProcessNotifyRoutineExCount, 1u);
    if ( (PspNotifyEnableMask & 4) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 2u);
  }
  else
  {
    _InterlockedAdd(&PspCreateProcessNotifyRoutineCount, 1u);
    if ( (PspNotifyEnableMask & 2) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 1u);
  }
  return 0LL;
}
