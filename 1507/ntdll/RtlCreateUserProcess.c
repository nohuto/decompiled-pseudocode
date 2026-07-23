/*
 * XREFs of RtlCreateUserProcess @ 0x180080380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserProcess @ 0x180080478 (RtlpCreateUserProcess.c)
 *     RtlNormalizeProcessParams @ 0x180080710 (RtlNormalizeProcessParams.c)
 */

NTSTATUS __cdecl RtlCreateUserProcess(
        PUNICODE_STRING NtImagePathName,
        ULONG AttributesDeprecated,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE ParentProcess,
        BOOLEAN InheritHandles,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  int v10; // ebx
  __int16 v12; // esi^2
  PRTL_USER_PROCESS_PARAMETERS v14; // rax

  v10 = 0;
  v12 = HIWORD(AttributesDeprecated);
  if ( !NtImagePathName )
    return -1073741811;
  if ( !ProcessParameters )
    return -1073741811;
  v14 = RtlNormalizeProcessParams(ProcessParameters);
  if ( !v14 )
    return -1073741811;
  if ( InheritHandles )
    v10 = 4;
  else
    v14->CurrentDirectory.Handle = 0LL;
  if ( (v14->Flags & 0x40000) != 0 )
    v10 |= 0x80u;
  if ( (v14->Flags & 0x400000) != 0 )
    v10 |= 0x40u;
  return RtlpCreateUserProcess(
           NtImagePathName,
           v14,
           ProcessSecurityDescriptor,
           ThreadSecurityDescriptor,
           ParentProcess,
           v12,
           v10,
           1,
           DebugPort,
           TokenHandle,
           ProcessInformation);
}
