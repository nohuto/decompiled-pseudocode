/*
 * XREFs of ZwSetInformationKey @ 0x1800950C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  NTSTATUS result; // eax

  result = 380;
  __asm { syscall; Low latency system call }
  return result;
}
