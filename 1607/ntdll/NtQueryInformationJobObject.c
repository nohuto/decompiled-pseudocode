/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A8AF0
 * Callers:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD70 (RtlGetCurrentServiceSessionId.c)
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     RtlIsMultiSessionSku @ 0x180072070 (RtlIsMultiSessionSku.c)
 *     TppJobpRundownJob @ 0x180084418 (TppJobpRundownJob.c)
 *     RtlGetActiveConsoleId @ 0x1800863A0 (RtlGetActiveConsoleId.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1800EEE80 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlpSiloGetNtProductType @ 0x1800EF9C4 (RtlpSiloGetNtProductType.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 311;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
