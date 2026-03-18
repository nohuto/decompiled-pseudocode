/*
 * XREFs of NtWriteRequestData @ 0x14069E644
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpCopyRequestData @ 0x14069EDA8 (AlpcpCopyRequestData.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG Index,
        PVOID Buffer,
        ULONG BufferLength,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r9
  HANDLE v9; // rdx
  NTSTATUS v10; // eax
  struct _KTHREAD *v11; // rdx
  NTSTATUS v12; // ebx
  __int16 v13; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = Index;
  v9 = PortHandle;
  LOBYTE(PortHandle) = 1;
  v10 = AlpcpCopyRequestData(PortHandle, v9, Message, v7, Buffer, *(_QWORD *)&BufferLength, ReturnLength);
  v11 = KeGetCurrentThread();
  v12 = v10;
  v13 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
