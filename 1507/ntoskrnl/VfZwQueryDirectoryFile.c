/*
 * XREFs of VfZwQueryDirectoryFile @ 0x140756F28
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x1407586B8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        void *a4,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG a7,
        FILE_INFORMATION_CLASS a8,
        BOOLEAN a9,
        PUNICODE_STRING FileName,
        BOOLEAN a11)
{
  int v15; // r8d
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v15, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)IoStatusBlock, (int)retaddr);
    ViZwCheckVirtualAddress((int)FileInformation, (int)retaddr);
    ViZwCheckUnicodeString((int)FileName, (int)retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return pXdvZwQueryDirectoryFile(
           FileHandle,
           Event,
           ApcRoutine,
           a4,
           IoStatusBlock,
           FileInformation,
           a7,
           a8,
           a9,
           FileName,
           a11);
}
