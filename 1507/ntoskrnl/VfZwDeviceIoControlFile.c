/*
 * XREFs of VfZwDeviceIoControlFile @ 0x140755C6C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x1407586B8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        void *a4,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG a6,
        PVOID InputBuffer,
        ULONG a8,
        PVOID OutputBuffer,
        ULONG a10)
{
  int v14; // r8d
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v14, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)IoStatusBlock, (int)retaddr);
    ViZwCheckVirtualAddress((int)InputBuffer, (int)retaddr);
    ViZwCheckVirtualAddress((int)OutputBuffer, (int)retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return pXdvZwDeviceIoControlFile(
           FileHandle,
           Event,
           ApcRoutine,
           a4,
           IoStatusBlock,
           a6,
           InputBuffer,
           a8,
           OutputBuffer,
           a10);
}
