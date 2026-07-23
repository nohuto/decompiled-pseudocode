/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x14049ED80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
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
  char v13; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = 0;
  v10 = AlpcpAcceptConnectPort(
          PortHandle,
          Flags & 0xC0000000,
          ConnectionPortHandle,
          ObjectAttributes,
          PortAttributes,
          PortContext,
          ConnectionRequest,
          ConnectionMessageAttributes,
          AcceptConnection,
          0LL,
          0LL,
          v13);
  KeLeaveCriticalRegion();
  return v10;
}
