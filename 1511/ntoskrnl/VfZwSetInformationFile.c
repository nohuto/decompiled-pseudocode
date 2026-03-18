/*
 * XREFs of VfZwSetInformationFile @ 0x1406D437C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetInformationFile(
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
  return pXdvZwSetInformationFile(FileHandle, a2, a3, Length, a5);
}
