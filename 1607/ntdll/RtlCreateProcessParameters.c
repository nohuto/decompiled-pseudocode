/*
 * XREFs of RtlCreateProcessParameters @ 0x1800D41A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersEx @ 0x18005E8F0 (RtlCreateProcessParametersEx.c)
 */

NTSTATUS __cdecl RtlCreateProcessParameters(
        PRTL_USER_PROCESS_PARAMETERS *pProcessParameters,
        PUNICODE_STRING ImagePathName,
        PUNICODE_STRING DllPath,
        PUNICODE_STRING CurrentDirectory,
        PUNICODE_STRING CommandLine,
        PVOID Environment,
        PUNICODE_STRING WindowTitle,
        PUNICODE_STRING DesktopInfo,
        PUNICODE_STRING ShellInfo,
        PUNICODE_STRING RuntimeData)
{
  return RtlCreateProcessParametersEx(
           pProcessParameters,
           ImagePathName,
           DllPath,
           CurrentDirectory,
           CommandLine,
           Environment,
           WindowTitle,
           DesktopInfo,
           ShellInfo,
           RuntimeData,
           0);
}
