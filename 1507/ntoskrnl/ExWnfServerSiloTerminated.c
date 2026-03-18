/*
 * XREFs of ExWnfServerSiloTerminated @ 0x1406F7718
 * Callers:
 *     ExpWnfTerminateServerSiloCallback @ 0x1406FC558 (ExpWnfTerminateServerSiloCallback.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     ExpWnfDeleteScopeInstances @ 0x1406FC3FC (ExpWnfDeleteScopeInstances.c)
 */

void __fastcall ExWnfServerSiloTerminated(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rbx
  struct _KTHREAD *v7; // rdx
  __int16 v8; // cx

  v4 = PsAttachSiloToCurrentThread(a1, a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteScopeInstances(2LL);
  ExpWnfDeleteScopeInstances(0LL);
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PsDetachSiloFromCurrentThread(v6);
}
