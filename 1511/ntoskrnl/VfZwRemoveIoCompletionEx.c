/*
 * XREFs of VfZwRemoveIoCompletionEx @ 0x1406D3FD4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
