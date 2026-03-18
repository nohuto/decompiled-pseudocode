/*
 * XREFs of VfZwConnectPort @ 0x1407554EC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwConnectPort(
        HANDLE *a1,
        UNICODE_STRING *a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        struct _PORT_VIEW *a4,
        struct _REMOTE_PORT_VIEW *a5,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckUnicodeString((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)a5, (int)retaddr);
    ViZwCheckVirtualAddress((int)MaxMessageLength, (int)retaddr);
    ViZwCheckVirtualAddress((int)ConnectionInformation, (int)retaddr);
    ViZwCheckVirtualAddress((int)ConnectionInformationLength, (int)retaddr);
  }
  return pXdvZwConnectPort(a1, a2, a3, a4, a5, MaxMessageLength, ConnectionInformation, ConnectionInformationLength);
}
