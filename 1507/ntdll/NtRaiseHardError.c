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

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 333LL;
  __asm { syscall; Low latency system call }
  return result;
}
