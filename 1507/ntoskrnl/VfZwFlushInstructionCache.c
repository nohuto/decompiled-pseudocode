/*
 * XREFs of VfZwFlushInstructionCache @ 0x140756004
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwFlushInstructionCache(HANDLE ProcessHandle, void *a2, ULONG NumberOfBytesToFlush)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  return pXdvZwFlushInstructionCache(ProcessHandle, a2, NumberOfBytesToFlush);
}
