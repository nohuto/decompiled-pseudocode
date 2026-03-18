/*
 * XREFs of VfZwSetEaFile @ 0x140757E30
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetEaFile(HANDLE FileHandle, struct _IO_STATUS_BLOCK *a2, void *a3, ULONG Length)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  }
  return pXdvZwSetEaFile(FileHandle, a2, a3, Length);
}
