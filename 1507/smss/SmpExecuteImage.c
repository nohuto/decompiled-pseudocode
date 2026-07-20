/*
 * XREFs of SmpExecuteImage @ 0x140003C84
 * Callers:
 *     SmpInvokeAutoChk @ 0x140002888 (SmpInvokeAutoChk.c)
 *     SmscpLoadSubSystem @ 0x1400033EC (SmscpLoadSubSystem.c)
 *     SmpExecuteCommand @ 0x14000350C (SmpExecuteCommand.c)
 *     SmpLoadSubSystem @ 0x1400123A4 (SmpLoadSubSystem.c)
 *     SmpStartServerSilo @ 0x140013000 (SmpStartServerSilo.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140003EA8 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140003EF8 (SmpEventWriteULONGString.c)
 *     SmpSelectNodeNumber @ 0x140004004 (SmpSelectNodeNumber.c)
 */

__int64 __fastcall SmpExecuteImage(
        PUNICODE_STRING ImageFileName,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        struct _RTL_USER_PROCESS_PARAMETERS *a6)
{
  struct _RTL_USER_PROCESS_INFORMATION *ProcessInfo; // rdi
  __int64 result; // rax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int16 v11; // r14
  int v12; // r14d
  int v13; // ebx
  int UserProcess; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  HANDLE ProcessHandle; // rcx
  _BYTE ProcessInformation[32]; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+88h] [rbp-59h]
  char v20; // [rsp+98h] [rbp-49h] BYREF
  int v21; // [rsp+150h] [rbp+6Fh] BYREF

  v21 = a4;
  ProcessInfo = (struct _RTL_USER_PROCESS_INFORMATION *)&v20;
  if ( a6 )
    ProcessInfo = (struct _RTL_USER_PROCESS_INFORMATION *)a6;
  result = RtlCreateProcessParametersEx(&a6, ImageFileName, 0LL, a2, a3, SmpDefaultEnvironment, 0LL, 0LL, 0LL, 0LL, 1);
  if ( (int)result >= 0 )
  {
    v9 = a5;
    v10 = (unsigned int)SmpDebug;
    v11 = a5;
    if ( (a5 & 1) != 0 )
      v10 = 1LL;
    a6->DebugFlags = v10;
    v12 = v11 & 0x400;
    if ( v12 )
    {
      a6->Flags |= 0x40000u;
      v13 = SmpSelectNodeNumber() + 1;
    }
    else
    {
      v13 = 0;
    }
    if ( (v9 & 0x1000) != 0 )
      a6->Flags |= 0x400000u;
    a6->Flags |= 0x20000u;
    ProcessInfo->Size = 104;
    SmpEventWriteULONGString(v10, v9, ImageFileName);
    UserProcess = RtlCreateUserProcess(ImageFileName, v13 << 16, a6, 0LL, 0LL, 0LL, v12 != 0, 0LL, 0LL, ProcessInfo);
    RtlDestroyProcessParameters(a6);
    if ( UserProcess < 0
      || NtQueryInformationProcess(ProcessInfo->ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) < 0 )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = v19;
    }
    SmpEventWriteULONG(v15, v16);
    if ( UserProcess < 0 )
      return (unsigned int)UserProcess;
    if ( (v9 & 0x2000) != 0 )
    {
      ProcessHandle = ProcessInfo->ProcessHandle;
      v21 = 1;
      UserProcess = NtSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &v21, 4u);
      if ( UserProcess < 0 )
        goto LABEL_28;
    }
    if ( (v9 & 0x20) == 0 )
    {
      if ( ProcessInfo->ImageInformation.SubSystemType != 1 )
      {
        UserProcess = -1073741701;
LABEL_28:
        NtTerminateProcess(ProcessInfo->ProcessHandle, UserProcess);
        NtWaitForSingleObject(ProcessInfo->ProcessHandle, 0, 0LL);
        goto LABEL_25;
      }
      NtResumeThread(ProcessInfo->ThreadHandle, 0LL);
      if ( (v9 & 2) == 0 )
        NtWaitForSingleObject(ProcessInfo->ThreadHandle, 0, 0LL);
    }
    if ( (v9 & 0x20) != 0 )
      return (unsigned int)UserProcess;
LABEL_25:
    NtClose(ProcessInfo->ThreadHandle);
    NtClose(ProcessInfo->ProcessHandle);
    return (unsigned int)UserProcess;
  }
  return result;
}
