/*
 * XREFs of RtlNormalizeProcessParams @ 0x180080710
 * Callers:
 *     RtlCreateUserProcess @ 0x180080380 (RtlCreateUserProcess.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

PRTL_USER_PROCESS_PARAMETERS __cdecl RtlNormalizeProcessParams(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  unsigned int Flags; // edx
  unsigned __int16 *Buffer; // rax
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rax

  if ( !ProcessParameters )
    return 0LL;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (unsigned __int16 *)((char *)Buffer
                                                                              + (_QWORD)ProcessParameters);
    v4 = ProcessParameters->DllPath.Buffer;
    if ( v4 )
      ProcessParameters->DllPath.Buffer = (unsigned __int16 *)((char *)v4 + (_QWORD)ProcessParameters);
    v5 = ProcessParameters->ImagePathName.Buffer;
    if ( v5 )
      ProcessParameters->ImagePathName.Buffer = (unsigned __int16 *)((char *)v5 + (_QWORD)ProcessParameters);
    v6 = ProcessParameters->CommandLine.Buffer;
    if ( v6 )
      ProcessParameters->CommandLine.Buffer = (unsigned __int16 *)((char *)v6 + (_QWORD)ProcessParameters);
    v7 = ProcessParameters->WindowTitle.Buffer;
    if ( v7 )
      ProcessParameters->WindowTitle.Buffer = (unsigned __int16 *)((char *)v7 + (_QWORD)ProcessParameters);
    v8 = ProcessParameters->DesktopInfo.Buffer;
    if ( v8 )
      ProcessParameters->DesktopInfo.Buffer = (unsigned __int16 *)((char *)v8 + (_QWORD)ProcessParameters);
    v9 = ProcessParameters->ShellInfo.Buffer;
    if ( v9 )
      ProcessParameters->ShellInfo.Buffer = (unsigned __int16 *)((char *)v9 + (_QWORD)ProcessParameters);
    v10 = ProcessParameters->RuntimeData.Buffer;
    if ( v10 )
      ProcessParameters->RuntimeData.Buffer = (unsigned __int16 *)((char *)v10 + (_QWORD)ProcessParameters);
    ProcessParameters->Flags = Flags | 1;
  }
  return ProcessParameters;
}
