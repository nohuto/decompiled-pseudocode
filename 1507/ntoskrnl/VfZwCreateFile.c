/*
 * XREFs of VfZwCreateFile @ 0x140755740
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCreateFile(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        struct _IO_STATUS_BLOCK *a4,
        PLARGE_INTEGER AllocationSize,
        ULONG a6,
        ULONG a7,
        ULONG a8,
        ULONG a9,
        PVOID EaBuffer,
        ULONG a11)
{
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)AllocationSize, (int)retaddr);
    ViZwCheckVirtualAddress((int)EaBuffer, (int)retaddr);
  }
  return pXdvZwCreateFile(a1, DesiredAccess, ObjectAttributes, a4, AllocationSize, a6, a7, a8, a9, EaBuffer, a11);
}
