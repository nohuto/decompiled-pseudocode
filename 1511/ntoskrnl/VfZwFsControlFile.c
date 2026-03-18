/*
 * XREFs of VfZwFsControlFile @ 0x1406D2588
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x1406D4AF0 (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwFsControlFile(
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
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v14, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)IoStatusBlock, (int)retaddr);
    ViZwCheckVirtualAddress((int)InputBuffer, (int)retaddr);
    ViZwCheckVirtualAddress((int)OutputBuffer, (int)retaddr);
    ViZwCheckApcRequirement((int)retaddr);
  }
  return pXdvZwFsControlFile(FileHandle, Event, ApcRoutine, a4, IoStatusBlock, a6, InputBuffer, a8, OutputBuffer, a10);
}
