/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18004DB80
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckRelativeDrive @ 0x18004D078 (RtlpCheckRelativeDrive.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18004DAAC (RtlpWow64ThunkEnvironment32To64.c)
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1800D1EFC (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18002EB50 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable_U(PVOID Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  NTSTATUS result; // eax
  __int16 v5; // cx
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             Environment,
             Name->Buffer,
             (unsigned __int64)Name->Length >> 1,
             Value->Buffer,
             (unsigned __int64)Value->MaximumLength >> 1,
             &ReturnLength);
  v5 = ReturnLength;
  if ( ReturnLength > 0x7FFF )
    return -1073741801;
  if ( result == -1073741789 )
    v5 = ReturnLength - 1;
  Value->Length = 2 * v5;
  return result;
}
