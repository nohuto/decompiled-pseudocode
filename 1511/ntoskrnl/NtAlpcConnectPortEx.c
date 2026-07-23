/*
 * XREFs of NtAlpcConnectPortEx @ 0x1404B3620
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcConnectPortEx(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ConnectionPortObjectAttributes,
        POBJECT_ATTRIBUTES ClientPortObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSECURITY_DESCRIPTOR ServerSecurityRequirements,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  return AlpcpConnectPort(
           PortHandle,
           0LL,
           (__int64)ConnectionPortObjectAttributes,
           (__int64)ClientPortObjectAttributes,
           (ULONG64)PortAttributes,
           Flags,
           ServerSecurityRequirements,
           0LL,
           (__int64)ConnectionMessage,
           (__int64)BufferLength,
           (__int64)OutMessageAttributes,
           (__int64)InMessageAttributes,
           Timeout);
}
