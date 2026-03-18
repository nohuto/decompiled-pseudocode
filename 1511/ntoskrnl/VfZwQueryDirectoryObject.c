/*
 * XREFs of VfZwQueryDirectoryObject @ 0x1406D3438
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
