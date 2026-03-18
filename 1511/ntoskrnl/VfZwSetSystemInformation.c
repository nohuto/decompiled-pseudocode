/*
 * XREFs of VfZwSetSystemInformation @ 0x1406D460C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        void *a2,
        SIZE_T SystemInformationLength)
{
  unsigned int v3; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SystemInformationLength;
  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  return pXdvZwSetSystemInformation(SystemInformationClass, a2, v3);
}
