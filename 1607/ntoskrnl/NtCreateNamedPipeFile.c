/*
 * XREFs of NtCreateNamedPipeFile @ 0x1404BC394
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IoCreateFile @ 0x1404BC4D0 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateNamedPipeFile(
        PHANDLE NamedPipeFileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG WriteModeMessage,
        ULONG ReadModeMessage,
        ULONG NonBlocking,
        ULONG MaxInstances,
        ULONG InBufferSize,
        ULONG OutBufferSize,
        PLARGE_INTEGER DefaultTimeOut)
{
  _DWORD InternalParameters[6]; // [rsp+70h] [rbp-38h] BYREF
  LONGLONG QuadPart; // [rsp+88h] [rbp-20h]
  char v17; // [rsp+90h] [rbp-18h]

  if ( DefaultTimeOut )
  {
    v17 = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)DefaultTimeOut & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = DefaultTimeOut->QuadPart;
    }
    else
    {
      QuadPart = DefaultTimeOut->QuadPart;
    }
  }
  else
  {
    v17 = 0;
  }
  InternalParameters[0] = WriteModeMessage;
  InternalParameters[1] = ReadModeMessage;
  InternalParameters[2] = NonBlocking;
  InternalParameters[3] = MaxInstances;
  InternalParameters[4] = InBufferSize;
  InternalParameters[5] = OutBufferSize;
  return IoCreateFile(
           NamedPipeFileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           0LL,
           0,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           0LL,
           0,
           CreateFileTypeNamedPipe,
           InternalParameters,
           0);
}
