/*
 * XREFs of SmpExecuteImage @ 0x140002660
 * Callers:
 *     SmscpLoadSubSystem @ 0x140001E6C (SmscpLoadSubSystem.c)
 *     SmpExecuteCommand @ 0x140001FB4 (SmpExecuteCommand.c)
 *     SmpInvokeAutoChk @ 0x140004ED8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400127B4 (SmpLoadSubSystem.c)
 *     SmpStartServerSilo @ 0x1400135F0 (SmpStartServerSilo.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x1400028E0 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140002934 (SmpEventWriteULONGString.c)
 *     SmpSelectNodeNumber @ 0x140002A4C (SmpSelectNodeNumber.c)
 */

__int64 __fastcall SmpExecuteImage(
        PUNICODE_STRING ImageFileName,
        __int64 a2,
        __int64 a3,
        int a4,
        __int16 a5,
        struct _RTL_USER_PROCESS_PARAMETERS *a6)
{
  struct _RTL_USER_PROCESS_INFORMATION *ProcessInfo; // rsi
  __int64 result; // rax
  __int16 v9; // bx
  int v10; // r14d
  int UserProcess; // edi
  HANDLE ProcessHandle; // rcx
  _BYTE ProcessInformation[32]; // [rsp+60h] [rbp-B8h] BYREF
  char v14; // [rsp+90h] [rbp-88h] BYREF
  int v15; // [rsp+138h] [rbp+20h] BYREF

  v15 = a4;
  ProcessInfo = (struct _RTL_USER_PROCESS_INFORMATION *)a6;
  if ( !a6 )
    ProcessInfo = (struct _RTL_USER_PROCESS_INFORMATION *)&v14;
  result = RtlCreateProcessParametersEx(&a6, ImageFileName, 0LL, a2, a3, SmpDefaultEnvironment, 0LL, 0LL, 0LL, 0LL, 1);
  if ( (int)result >= 0 )
  {
    v9 = a5;
    if ( (a5 & 1) != 0 )
      a6->DebugFlags = 1;
    else
      a6->DebugFlags = SmpDebug;
    if ( (v9 & 0x400) != 0 )
    {
      a6->Flags |= 0x40000u;
      v10 = SmpSelectNodeNumber() + 1;
    }
    else
    {
      v10 = 0;
    }
    if ( (v9 & 0x1000) != 0 )
      a6->Flags |= 0x400000u;
    a6->Flags |= 0x20000u;
    ProcessInfo->Size = 104;
    SmpEventWriteULONGString(&SmssEvt_ExecuteImage_Start);
    UserProcess = RtlCreateUserProcess(
                    ImageFileName,
                    v10 << 16,
                    a6,
                    0LL,
                    0LL,
                    0LL,
                    (v9 & 0x400) != 0,
                    0LL,
                    0LL,
                    ProcessInfo);
    RtlDestroyProcessParameters(a6);
    if ( UserProcess >= 0 )
      NtQueryInformationProcess(ProcessInfo->ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    SmpEventWriteULONG(&SmssEvt_ExecuteImage_Stop);
    if ( UserProcess < 0 )
      return (unsigned int)UserProcess;
    if ( (v9 & 0x2000) != 0 )
    {
      ProcessHandle = ProcessInfo->ProcessHandle;
      v15 = 1;
      UserProcess = NtSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &v15, 4u);
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
        goto LABEL_24;
      }
      NtResumeThread(ProcessInfo->ThreadHandle, 0LL);
      if ( (v9 & 2) == 0 )
        NtWaitForSingleObject(ProcessInfo->ThreadHandle, 0, 0LL);
    }
    if ( (v9 & 0x20) != 0 )
      return (unsigned int)UserProcess;
LABEL_24:
    NtClose(ProcessInfo->ThreadHandle);
    NtClose(ProcessInfo->ProcessHandle);
    return (unsigned int)UserProcess;
  }
  return result;
}
