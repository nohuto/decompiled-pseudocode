/*
 * XREFs of VfZwRemoveIoCompletionEx @ 0x140757B9C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        _FILE_IO_COMPLETION_INFORMATION *a2,
        ULONG Count,
        ULONG *a4,
        PLARGE_INTEGER Timeout,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)Timeout, (int)retaddr);
  }
  return pXdvZwRemoveIoCompletionEx(IoCompletionHandle, a2, Count, a4, Timeout, a6, a7, a8, a9);
}
