/*
 * XREFs of VfZwQueryDirectoryObject @ 0x140757000
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        void *a2,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN a5,
        PULONG Context,
        PULONG ReturnLength)
{
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)Context, (int)retaddr);
    ViZwCheckVirtualAddress((int)ReturnLength, (int)retaddr);
  }
  return pXdvZwQueryDirectoryObject(DirectoryHandle, a2, BufferLength, ReturnSingleEntry, a5, Context, ReturnLength);
}
