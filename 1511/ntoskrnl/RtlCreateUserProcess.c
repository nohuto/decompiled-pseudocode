/*
 * XREFs of RtlCreateUserProcess @ 0x14075BD10
 * Callers:
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x14075BD78 (RtlpCreateUserProcess.c)
 */

NTSTATUS __stdcall RtlCreateUserProcess(
        PUNICODE_STRING ImageFileName,
        ULONG Attributes,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        PSECURITY_DESCRIPTOR ProcessSecutityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE ParentProcess,
        BOOLEAN CurrentDirectory,
        HANDLE DebugPort,
        HANDLE ExceptionPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInfo)
{
  unsigned int Flags; // r9d
  wchar_t *Buffer; // rax
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // rax

  if ( !ImageFileName || !ProcessParameters )
    return -1073741811;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer + (_QWORD)ProcessParameters);
    v13 = ProcessParameters->DllPath.Buffer;
    if ( v13 )
      ProcessParameters->DllPath.Buffer = (wchar_t *)((char *)v13 + (_QWORD)ProcessParameters);
    v14 = ProcessParameters->ImagePathName.Buffer;
    if ( v14 )
      ProcessParameters->ImagePathName.Buffer = (wchar_t *)((char *)v14 + (_QWORD)ProcessParameters);
    v15 = ProcessParameters->CommandLine.Buffer;
    if ( v15 )
      ProcessParameters->CommandLine.Buffer = (wchar_t *)((char *)v15 + (_QWORD)ProcessParameters);
    v16 = ProcessParameters->WindowTitle.Buffer;
    if ( v16 )
      ProcessParameters->WindowTitle.Buffer = (wchar_t *)((char *)v16 + (_QWORD)ProcessParameters);
    v17 = ProcessParameters->DesktopInfo.Buffer;
    if ( v17 )
      ProcessParameters->DesktopInfo.Buffer = (wchar_t *)((char *)v17 + (_QWORD)ProcessParameters);
    v18 = ProcessParameters->ShellInfo.Buffer;
    if ( v18 )
      ProcessParameters->ShellInfo.Buffer = (wchar_t *)((char *)v18 + (_QWORD)ProcessParameters);
    v19 = ProcessParameters->RuntimeData.Buffer;
    if ( v19 )
      ProcessParameters->RuntimeData.Buffer = (wchar_t *)((char *)v19 + (_QWORD)ProcessParameters);
    ProcessParameters->Flags = Flags | 1;
  }
  ProcessParameters->CurrentDirectory.Handle = 0LL;
  return RtlpCreateUserProcess(ImageFileName, ProcessParameters);
}
