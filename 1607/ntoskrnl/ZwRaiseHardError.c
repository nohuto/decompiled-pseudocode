/*
 * XREFs of ZwRaiseHardError @ 0x14015CC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ErrorStatus);
}
