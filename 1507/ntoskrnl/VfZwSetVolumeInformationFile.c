/*
 * XREFs of VfZwSetVolumeInformationFile @ 0x140758394
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetVolumeInformationFile(
        HANDLE FileHandle,
        struct _IO_STATUS_BLOCK *a2,
        void *a3,
        ULONG Length,
        FS_INFORMATION_CLASS a5)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  }
  return pXdvZwSetVolumeInformationFile(FileHandle, a2, a3, Length, a5);
}
