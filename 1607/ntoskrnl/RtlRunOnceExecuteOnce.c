/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x14045BCD4
 * Callers:
 *     SeQuerySigningPolicy @ 0x14045B8FC (SeQuerySigningPolicy.c)
 *     ExpCheckFullProcessInformationAccess @ 0x14048DB7C (ExpCheckFullProcessInformationAccess.c)
 *     ExQueryBootEntropyInformation @ 0x1405813E8 (ExQueryBootEntropyInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlRunOnceBeginInitialize @ 0x14045BDA4 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x14054D318 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  PVOID v15; // r8
  NTSTATUS v16; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v13 = v9;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v15 = *Context;
      else
        v15 = 0LL;
      v13 = RtlRunOnceComplete(RunOnce, 0, v15);
      if ( v13 >= 0 )
      {
        v13 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v13 = -1073741823;
      v16 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v16 >= 0 )
        goto LABEL_3;
      v13 = v16;
    }
LABEL_12:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    RtlRaiseStatus(v13);
  }
LABEL_3:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v13;
}
