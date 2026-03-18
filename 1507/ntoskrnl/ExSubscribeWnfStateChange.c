/*
 * XREFs of ExSubscribeWnfStateChange @ 0x14055B664
 * Callers:
 *     PopEsWorker @ 0x140581C48 (PopEsWorker.c)
 *     PopSetupAudioEventNotification @ 0x140599F2C (PopSetupAudioEventNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14059A00C (PopSetupFullScrenVideoNotification.c)
 *     PiUEventInit @ 0x1407C01DC (PiUEventInit.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // eax
  struct _KTHREAD *v8; // rdx
  unsigned int v9; // ebx
  __int16 v10; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2, a4, a5, a6, a3, 0);
  v8 = KeGetCurrentThread();
  v9 = v7;
  v10 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
