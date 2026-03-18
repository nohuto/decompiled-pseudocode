/*
 * XREFs of VfZwDuplicateObject @ 0x140755D74
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        HANDLE *a4,
        ACCESS_MASK a5,
        ULONG a6,
        ULONG a7)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
  return pXdvZwDuplicateObject(SourceProcessHandle, SourceHandle, TargetProcessHandle, a4, a5, a6, a7);
}
