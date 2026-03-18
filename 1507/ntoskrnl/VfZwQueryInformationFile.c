/*
 * XREFs of VfZwQueryInformationFile @ 0x140757288
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryInformationFile(
        HANDLE FileHandle,
        struct _IO_STATUS_BLOCK *a2,
        void *a3,
        ULONG Length,
        FILE_INFORMATION_CLASS a5)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  }
  return pXdvZwQueryInformationFile(FileHandle, a2, a3, Length, a5);
}
