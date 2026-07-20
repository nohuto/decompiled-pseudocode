/*
 * XREFs of sub_140002540 @ 0x140002540
 * Callers:
 *     sub_140001D7C @ 0x140001D7C (sub_140001D7C.c)
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 *     sub_140004DD8 @ 0x140004DD8 (sub_140004DD8.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 *     sub_140012A40 @ 0x140012A40 (sub_140012A40.c)
 * Callees:
 *     sub_1400027B4 @ 0x1400027B4 (sub_1400027B4.c)
 *     sub_140002804 @ 0x140002804 (sub_140002804.c)
 *     sub_140002910 @ 0x140002910 (sub_140002910.c)
 */

__int64 __fastcall sub_140002540(
        PUNICODE_STRING ImageFileName,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        struct _RTL_USER_PROCESS_PARAMETERS *a6)
{
  struct _RTL_USER_PROCESS_INFORMATION *ProcessInfo; // rsi
  __int64 result; // rax
  struct _RTL_USER_PROCESS_PARAMETERS *v9; // rcx
  unsigned int v10; // ebx
  int v11; // r14d
  int UserProcess; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  HANDLE ProcessHandle; // rcx
  _BYTE ProcessInformation[32]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v17; // [rsp+80h] [rbp-98h]
  char v18; // [rsp+90h] [rbp-88h] BYREF
  int v19; // [rsp+138h] [rbp+20h] BYREF

  v19 = a4;
  ProcessInfo = (struct _RTL_USER_PROCESS_INFORMATION *)a6;
  if ( !a6 )
    ProcessInfo = (struct _RTL_USER_PROCESS_INFORMATION *)&v18;
  result = RtlCreateProcessParametersEx(&a6, ImageFileName, 0LL, a2, a3, Environment, 0LL, 0LL, 0LL, 0LL, 1);
  if ( (int)result >= 0 )
  {
    v10 = a5;
    if ( (a5 & 1) != 0 )
    {
      a6->DebugFlags = 1;
    }
    else
    {
      v9 = a6;
      a6->DebugFlags = dword_140020898;
    }
    if ( (v10 & 0x400) != 0 )
    {
      a6->Flags |= 0x40000u;
      v11 = sub_140002910() + 1;
    }
    else
    {
      v11 = 0;
    }
    if ( (v10 & 0x1000) != 0 )
      a6->Flags |= 0x400000u;
    a6->Flags |= 0x20000u;
    ProcessInfo->Size = 104;
    sub_140002804(v9, v10, ImageFileName);
    UserProcess = RtlCreateUserProcess(
                    ImageFileName,
                    v11 << 16,
                    a6,
                    0LL,
                    0LL,
                    0LL,
                    (v10 & 0x400) != 0,
                    0LL,
                    0LL,
                    ProcessInfo);
    RtlDestroyProcessParameters(a6);
    if ( UserProcess < 0
      || NtQueryInformationProcess(ProcessInfo->ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) < 0 )
    {
      v14 = 0LL;
    }
    else
    {
      v14 = v17;
    }
    sub_1400027B4(v13, v14);
    if ( UserProcess < 0 )
      return (unsigned int)UserProcess;
    if ( (v10 & 0x2000) != 0 )
    {
      ProcessHandle = ProcessInfo->ProcessHandle;
      v19 = 1;
      UserProcess = NtSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &v19, 4u);
      if ( UserProcess < 0 )
        goto LABEL_29;
    }
    if ( (v10 & 0x20) == 0 )
    {
      if ( ProcessInfo->ImageInformation.SubSystemType != 1 )
      {
        UserProcess = -1073741701;
LABEL_29:
        NtTerminateProcess(ProcessInfo->ProcessHandle, UserProcess);
        NtWaitForSingleObject(ProcessInfo->ProcessHandle, 0, 0LL);
        goto LABEL_25;
      }
      NtResumeThread(ProcessInfo->ThreadHandle, 0LL);
      if ( (v10 & 2) == 0 )
        NtWaitForSingleObject(ProcessInfo->ThreadHandle, 0, 0LL);
    }
    if ( (v10 & 0x20) != 0 )
      return (unsigned int)UserProcess;
LABEL_25:
    NtClose(ProcessInfo->ThreadHandle);
    NtClose(ProcessInfo->ProcessHandle);
    return (unsigned int)UserProcess;
  }
  return result;
}
