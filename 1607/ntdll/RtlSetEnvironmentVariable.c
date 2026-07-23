/*
 * XREFs of RtlSetEnvironmentVariable @ 0x18005F250
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x18000189C (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18005F10C (RtlpWow64ThunkEnvironment32To64.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x18005F2A0 (RtlSetEnvironmentVar.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVariable(PVOID *Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  wchar_t *Buffer; // r9
  SIZE_T ValueLength; // rax

  Buffer = 0LL;
  if ( Value )
    ValueLength = (unsigned __int64)Value->Length >> 1;
  else
    ValueLength = 0LL;
  if ( Value )
    Buffer = Value->Buffer;
  return RtlSetEnvironmentVar(Environment, Name->Buffer, (unsigned __int64)Name->Length >> 1, Buffer, ValueLength);
}
