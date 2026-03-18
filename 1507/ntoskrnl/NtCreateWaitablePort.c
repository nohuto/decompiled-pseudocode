/*
 * XREFs of NtCreateWaitablePort @ 0x140584334
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpCreateConnectionPort @ 0x14054355C (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __stdcall NtCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectInfoLength,
        ULONG MaxDataLength,
        ULONG NPMessageQueueSize)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS ConnectionPort; // eax
  struct _KTHREAD *v7; // rdx
  NTSTATUS v8; // ebx
  __int16 v9; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort((ULONG64)PortHandle, (int)ObjectAttributes, 0LL, MaxDataLength, 1, 1);
  v7 = KeGetCurrentThread();
  v8 = ConnectionPort;
  v9 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
