/*
 * XREFs of VfZwFlushVirtualMemory @ 0x1406D248C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwFlushVirtualMemory(HANDLE ProcessHandle, PVOID *a2, ULONG_PTR *a3, struct _IO_STATUS_BLOCK *a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
  }
  return pXdvZwFlushVirtualMemory(ProcessHandle, a2, a3, a4);
}
