/*
 * XREFs of VfZwAlpcAcceptConnectPort @ 0x140754E34
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAlpcAcceptConnectPort(
        HANDLE *a1,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        void *a6,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckVirtualAddress((int)PortAttributes, (int)retaddr);
    ViZwCheckVirtualAddress((int)ConnectionRequest, (int)retaddr);
    ViZwCheckVirtualAddress((int)ConnectionMessageAttributes, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
  }
  return pXdvZwAlpcAcceptConnectPort(
           a1,
           ConnectionPortHandle,
           Flags,
           ObjectAttributes,
           PortAttributes,
           a6,
           ConnectionRequest,
           ConnectionMessageAttributes,
           a9,
           a10,
           a11,
           a12);
}
