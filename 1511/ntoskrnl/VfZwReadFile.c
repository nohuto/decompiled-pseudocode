/*
 * XREFs of VfZwReadFile @ 0x1406D3EDC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x1406D4AF0 (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v12, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)IoStatusBlock, (int)retaddr);
    ViZwCheckVirtualAddress((int)Buffer, (int)retaddr);
    ViZwCheckVirtualAddress((int)ByteOffset, (int)retaddr);
    ViZwCheckVirtualAddress((int)Key, (int)retaddr);
    ViZwCheckApcRequirement((int)retaddr);
  }
  return pXdvZwReadFile(a1, a2, a3, a4, IoStatusBlock, Buffer, a7, ByteOffset, Key);
}
