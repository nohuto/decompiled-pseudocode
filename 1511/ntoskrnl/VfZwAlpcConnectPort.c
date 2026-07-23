/*
 * XREFs of VfZwAlpcConnectPort @ 0x1406D133C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAlpcConnectPort(
        HANDLE *a1,
        UNICODE_STRING *a2,
        POBJECT_ATTRIBUTES ObjectAttributes,
        _ALPC_PORT_ATTRIBUTES *a4,
        ULONG a5,
        void *a6,
        _PORT_MESSAGE *a7,
        ULONG_PTR *a8,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)a6, (int)retaddr);
    ViZwCheckVirtualAddress((int)a7, (int)retaddr);
    ViZwCheckVirtualAddress((int)a8, (int)retaddr);
    ViZwCheckVirtualAddress((int)OutMessageAttributes, (int)retaddr);
    ViZwCheckVirtualAddress((int)InMessageAttributes, (int)retaddr);
    ViZwCheckVirtualAddress((int)Timeout, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckUnicodeString((int)a2, (int)retaddr);
  }
  return pXdvZwAlpcConnectPort(
           a1,
           a2,
           ObjectAttributes,
           a4,
           a5,
           a6,
           a7,
           a8,
           OutMessageAttributes,
           InMessageAttributes,
           Timeout);
}
