/*
 * XREFs of RtlDeNormalizeProcessParams @ 0x1800CC1A0
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18004D290 (RtlCreateProcessParametersEx.c)
 * Callees:
 *     <none>
 */

PRTL_USER_PROCESS_PARAMETERS __cdecl RtlDeNormalizeProcessParams(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
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
  if ( (Flags & 1) != 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (unsigned __int16 *)((char *)Buffer
                                                                              - (char *)ProcessParameters);
    v4 = ProcessParameters->DllPath.Buffer;
    if ( v4 )
      ProcessParameters->DllPath.Buffer = (unsigned __int16 *)((char *)v4 - (char *)ProcessParameters);
    v5 = ProcessParameters->ImagePathName.Buffer;
    if ( v5 )
      ProcessParameters->ImagePathName.Buffer = (unsigned __int16 *)((char *)v5 - (char *)ProcessParameters);
    v6 = ProcessParameters->CommandLine.Buffer;
    if ( v6 )
      ProcessParameters->CommandLine.Buffer = (unsigned __int16 *)((char *)v6 - (char *)ProcessParameters);
    v7 = ProcessParameters->WindowTitle.Buffer;
    if ( v7 )
      ProcessParameters->WindowTitle.Buffer = (unsigned __int16 *)((char *)v7 - (char *)ProcessParameters);
    v8 = ProcessParameters->DesktopInfo.Buffer;
    if ( v8 )
      ProcessParameters->DesktopInfo.Buffer = (unsigned __int16 *)((char *)v8 - (char *)ProcessParameters);
    v9 = ProcessParameters->ShellInfo.Buffer;
    if ( v9 )
      ProcessParameters->ShellInfo.Buffer = (unsigned __int16 *)((char *)v9 - (char *)ProcessParameters);
    v10 = ProcessParameters->RuntimeData.Buffer;
    if ( v10 )
      ProcessParameters->RuntimeData.Buffer = (unsigned __int16 *)((char *)v10 - (char *)ProcessParameters);
    ProcessParameters->Flags = Flags & 0xFFFFFFFE;
  }
  return ProcessParameters;
}
