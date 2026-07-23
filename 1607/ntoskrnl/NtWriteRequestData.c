/*
 * XREFs of NtWriteRequestData @ 0x140654BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     AlpcpCopyRequestData @ 0x1406552E4 (AlpcpCopyRequestData.c)
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
  NTSTATUS v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = Index;
  v9 = PortHandle;
  LOBYTE(PortHandle) = 1;
  v10 = AlpcpCopyRequestData(PortHandle, v9, Message, v7, Buffer, *(_QWORD *)&BufferLength, ReturnLength);
  KeLeaveCriticalRegion();
  return v10;
}
