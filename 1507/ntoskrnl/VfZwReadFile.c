/*
 * XREFs of VfZwReadFile @ 0x140757AA4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x1407586B8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwReadFile(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        PVOID Buffer,
        ULONG a7,
        LARGE_INTEGER *ByteOffset,
        ULONG *Key)
{
  int v12; // r8d
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v12, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)IoStatusBlock, (int)retaddr);
    ViZwCheckVirtualAddress((int)Buffer, (int)retaddr);
    ViZwCheckVirtualAddress((int)ByteOffset, (int)retaddr);
    ViZwCheckVirtualAddress((int)Key, (int)retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return pXdvZwReadFile(a1, a2, a3, a4, IoStatusBlock, Buffer, a7, ByteOffset, Key);
}
