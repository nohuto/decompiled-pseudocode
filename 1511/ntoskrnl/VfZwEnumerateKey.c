/*
 * XREFs of VfZwEnumerateKey @ 0x1406D233C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG a5,
        PULONG ResultLength)
{
  int v10; // r9d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v10, (int)retaddr);
    ViZwCheckVirtualAddress((int)ResultLength, (int)retaddr);
  }
  return pXdvZwEnumerateKey(KeyHandle, Index, KeyInformationClass, KeyInformation, a5, ResultLength);
}
