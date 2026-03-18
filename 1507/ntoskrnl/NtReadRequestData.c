/*
 * XREFs of NtReadRequestData @ 0x14069E520
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpCopyRequestData @ 0x14069EDA8 (AlpcpCopyRequestData.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtReadRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG Index,
        PVOID Buffer,
        ULONG BufferLength,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // eax
  struct _KTHREAD *v8; // rdx
  NTSTATUS v9; // ebx
  __int16 v10; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpCopyRequestData(0LL, PortHandle, Message, Index, Buffer, *(_QWORD *)&BufferLength, ReturnLength);
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
