/*
 * XREFs of NtRaiseHardError @ 0x180094DD0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     LdrpInitializationFailure @ 0x1800BE0A4 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  NTSTATUS result; // eax

  result = 333;
  __asm { syscall; Low latency system call }
  return result;
}
