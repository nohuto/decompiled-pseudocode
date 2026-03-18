/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x140470E24
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAlpcAcceptConnectPort(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // eax
  struct _KTHREAD *v5; // rdx
  unsigned int v6; // ebx
  __int16 v7; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = AlpcpAcceptConnectPort(a1, a3 & 0xC0000000, a2);
  v5 = KeGetCurrentThread();
  v6 = v4;
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
