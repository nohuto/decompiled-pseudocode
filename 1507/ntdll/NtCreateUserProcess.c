/*
 * XREFs of NtCreateUserProcess @ 0x1800944A0
 * Callers:
 *     RtlpCreateUserProcess @ 0x180080478 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  NTSTATUS result; // eax

  result = 186;
  __asm { syscall; Low latency system call }
  return result;
}
