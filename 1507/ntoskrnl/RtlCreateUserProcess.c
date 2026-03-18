/*
 * XREFs of RtlCreateUserProcess @ 0x1407BC774
 * Callers:
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x1407BC7DC (RtlpCreateUserProcess.c)
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
  int v10; // edx
  unsigned int Flags; // r9d
  bool v12; // zf
  wchar_t *Buffer; // rax
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // rax
  wchar_t *v20; // rax
  wchar_t *v21; // rax
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+38h] [rbp-30h]
  int v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+48h] [rbp-20h]

  v10 = 0;
  if ( !ImageFileName || !ProcessParameters )
    return -1073741811;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer + (_QWORD)ProcessParameters);
    v15 = ProcessParameters->DllPath.Buffer;
    if ( v15 )
      ProcessParameters->DllPath.Buffer = (wchar_t *)((char *)v15 + (_QWORD)ProcessParameters);
    v16 = ProcessParameters->ImagePathName.Buffer;
    if ( v16 )
      ProcessParameters->ImagePathName.Buffer = (wchar_t *)((char *)v16 + (_QWORD)ProcessParameters);
    v17 = ProcessParameters->CommandLine.Buffer;
    if ( v17 )
      ProcessParameters->CommandLine.Buffer = (wchar_t *)((char *)v17 + (_QWORD)ProcessParameters);
    v18 = ProcessParameters->WindowTitle.Buffer;
    if ( v18 )
      ProcessParameters->WindowTitle.Buffer = (wchar_t *)((char *)v18 + (_QWORD)ProcessParameters);
    v19 = ProcessParameters->DesktopInfo.Buffer;
    if ( v19 )
      ProcessParameters->DesktopInfo.Buffer = (wchar_t *)((char *)v19 + (_QWORD)ProcessParameters);
    v20 = ProcessParameters->ShellInfo.Buffer;
    if ( v20 )
      ProcessParameters->ShellInfo.Buffer = (wchar_t *)((char *)v20 + (_QWORD)ProcessParameters);
    v21 = ProcessParameters->RuntimeData.Buffer;
    if ( v21 )
      ProcessParameters->RuntimeData.Buffer = (wchar_t *)((char *)v21 + (_QWORD)ProcessParameters);
    ProcessParameters->Flags = Flags | 1;
  }
  v12 = (ProcessParameters->Flags & 0x40000) == 0;
  ProcessParameters->CurrentDirectory.Handle = 0LL;
  if ( !v12 )
    v10 = 128;
  if ( (ProcessParameters->Flags & 0x400000) != 0 )
    v10 |= 0x40u;
  return RtlpCreateUserProcess(
           (int)ImageFileName,
           (int)ProcessParameters,
           (int)ProcessParameters,
           128,
           v22,
           v23,
           v10,
           v24,
           v25,
           v26,
           ProcessInfo);
}
