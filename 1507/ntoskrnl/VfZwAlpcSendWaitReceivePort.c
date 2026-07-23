/*
 * XREFs of VfZwAlpcSendWaitReceivePort @ 0x140755294
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAlpcSendWaitReceivePort(
        void *a1,
        ULONG a2,
        _PORT_MESSAGE *a3,
        _ALPC_MESSAGE_ATTRIBUTES *a4,
        _PORT_MESSAGE *ReceiveMessage,
        ULONG_PTR *BufferLength,
        _ALPC_MESSAGE_ATTRIBUTES *ReceiveMessageAttributes,
        LARGE_INTEGER *Timeout)
{
  int v11; // r8d
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v11, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)ReceiveMessage, (int)retaddr);
    ViZwCheckVirtualAddress((int)BufferLength, (int)retaddr);
    ViZwCheckVirtualAddress((int)ReceiveMessageAttributes, (int)retaddr);
    ViZwCheckVirtualAddress((int)Timeout, (int)retaddr);
  }
  return pXdvZwAlpcSendWaitReceivePort(a1, a2, a3, a4, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
}
