/*
 * XREFs of NtSetInformationObject @ 0x180093EC0
 * Callers:
 *     TppCritSetThread @ 0x180070F24 (TppCritSetThread.c)
 *     sub_1800B7722 @ 0x1800B7722 (sub_1800B7722.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 92;
  __asm { syscall; Low latency system call }
  return result;
}
