/*
 * XREFs of VfZwQueryEaFile @ 0x140757104
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN a5,
        PVOID EaList,
        ULONG a7,
        PULONG EaIndex,
        BOOLEAN a9)
{
  int v13; // r8d
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v13, (int)retaddr);
    ViZwCheckVirtualAddress((int)EaList, (int)retaddr);
    ViZwCheckVirtualAddress((int)EaIndex, (int)retaddr);
  }
  return pXdvZwQueryEaFile(FileHandle, IoStatusBlock, Buffer, Length, a5, EaList, a7, EaIndex, a9);
}
