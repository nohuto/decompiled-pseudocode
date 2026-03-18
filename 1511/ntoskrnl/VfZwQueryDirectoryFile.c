/*
 * XREFs of VfZwQueryDirectoryFile @ 0x1406D3360
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x1406D4AF0 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v15, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)IoStatusBlock, (int)retaddr);
    ViZwCheckVirtualAddress((int)FileInformation, (int)retaddr);
    ViZwCheckUnicodeString((int)FileName, (int)retaddr);
    ViZwCheckApcRequirement((int)retaddr);
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
