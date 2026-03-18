/*
 * XREFs of NtAlpcCreatePort @ 0x1405434EC
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpCreateConnectionPort @ 0x14054355C (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtAlpcCreatePort(int a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // eax
  struct _KTHREAD *v5; // rdx
  unsigned int v6; // ebx
  __int16 v7; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, a3, 0, 0, 0);
  v5 = KeGetCurrentThread();
  v6 = ConnectionPort;
  v7 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
