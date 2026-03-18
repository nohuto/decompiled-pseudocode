/*
 * XREFs of DbgkpSuspendProcess @ 0x1404091C4
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140409B74 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsFreezeProcess @ 0x1404EB390 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v3; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (unsigned __int8)PsFreezeProcess(a1, 0LL) )
    return 1;
  v3 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v3;
  if ( !v3
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0;
}
