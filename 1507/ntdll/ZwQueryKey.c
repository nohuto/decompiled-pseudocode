/*
 * XREFs of ZwQueryKey @ 0x180093A60
 * Callers:
 *     RtlpValidateKeyTrust @ 0x18000DFD8 (RtlpValidateKeyTrust.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 22;
  __asm { syscall; Low latency system call }
  return result;
}
