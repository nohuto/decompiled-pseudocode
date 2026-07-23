/*
 * XREFs of ZwQueryObject @ 0x180093A00
 * Callers:
 *     PsspWalkHandleTable @ 0x180082740 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 16;
  __asm { syscall; Low latency system call }
  return result;
}
