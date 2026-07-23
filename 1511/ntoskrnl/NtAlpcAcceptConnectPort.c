/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x14047FD80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = AlpcpAcceptConnectPort(
          (ULONG64)PortHandle,
          Flags & 0xC0000000,
          ConnectionPortHandle,
          (__int64)ObjectAttributes,
          (ULONG64)PortAttributes,
          PortContext,
          (__int128 *)&ConnectionRequest->u1.s1.DataLength,
          (int *)ConnectionMessageAttributes,
          AcceptConnection,
          0LL,
          0LL,
          0);
  KeLeaveCriticalRegion();
  return v10;
}
