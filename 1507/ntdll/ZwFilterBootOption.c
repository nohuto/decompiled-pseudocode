/*
 * XREFs of ZwFilterBootOption @ 0x180094640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 212;
  __asm { syscall; Low latency system call }
  return result;
}
