/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x14050B5E8
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x140413094 (ExpCheckFullProcessInformationAccess.c)
 *     SeQuerySigningPolicy @ 0x14050B2FC (SeQuerySigningPolicy.c)
 *     ExQueryBootEntropyInformation @ 0x140598048 (ExQueryBootEntropyInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlRunOnceBeginInitialize @ 0x14050B6DC (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x140564294 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  int v10; // ebx
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  PVOID v14; // r8
  NTSTATUS v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_15;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      v14 = 0LL;
      if ( Context )
        v14 = *Context;
      v10 = RtlRunOnceComplete(RunOnce, 0, v14);
      if ( v10 >= 0 )
      {
        v10 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v10 = -1073741823;
      v15 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v15 >= 0 )
        goto LABEL_3;
      v10 = v15;
    }
LABEL_15:
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    RtlRaiseStatus(v10);
  }
LABEL_3:
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
