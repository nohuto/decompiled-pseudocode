/*
 * XREFs of ZwQueryMultipleValueKey @ 0x180094CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  NTSTATUS result; // eax

  result = 315;
  __asm { syscall; Low latency system call }
  return result;
}
