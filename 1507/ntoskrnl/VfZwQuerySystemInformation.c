/*
 * XREFs of VfZwQuerySystemInformation @ 0x14075792C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        void *a2,
        ULONG SystemInformationLength,
        ULONG *a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
  }
  return pXdvZwQuerySystemInformation(SystemInformationClass, a2, SystemInformationLength, a4);
}
