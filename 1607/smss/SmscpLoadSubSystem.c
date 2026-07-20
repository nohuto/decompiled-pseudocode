/*
 * XREFs of SmscpLoadSubSystem @ 0x140001E6C
 * Callers:
 *     SmpExecuteCommand @ 0x140001FB4 (SmpExecuteCommand.c)
 * Callees:
 *     SmExecPgmEx @ 0x140001DB8 (SmExecPgmEx.c)
 *     SmpExecuteImage @ 0x140002660 (SmpExecuteImage.c)
 *     SmpEventWriteULONG @ 0x1400028E0 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140002934 (SmpEventWriteULONGString.c)
 *     memset_0 @ 0x14000CC60 (memset_0.c)
 */

__int64 __fastcall SmscpLoadSubSystem(PUNICODE_STRING ImageFileName, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  NTSTATUS v6; // ebx
  HANDLE UniqueProcess; // rcx
  int v8; // eax
  NTSTATUS v9; // eax
  _BYTE EventInformation[4]; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+3Ch] [rbp-3Dh]
  HANDLE Object[3]; // [rsp+40h] [rbp-39h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v14; // [rsp+58h] [rbp-21h] BYREF

  v14.Size = 0;
  memset_0(&v14.ProcessHandle, 0, 0x60uLL);
  SmpEventWriteULONGString(&SmssEvt_LoadSubsystem_Start);
  if ( (a5 & 0x10) != 0 )
  {
    v6 = -1073741772;
  }
  else
  {
    v6 = SmpExecuteImage(ImageFileName, a5 | 0x20u, &v14);
    if ( v6 >= 0 )
    {
      UniqueProcess = v14.ClientId.UniqueProcess;
      *((_QWORD *)SmscpSharedWindow + 1) = v14.ClientId.UniqueProcess;
      if ( v14.ImageInformation.SubSystemType == 1 )
        v8 = NtResumeThread(v14.ThreadHandle, 0LL);
      else
        v8 = SmExecPgmEx((__int64)UniqueProcess, (__int128 *)&v14);
      v6 = v8;
      if ( v8 < 0
        || (Object[0] = SmscpSubsystemRegistered,
            Object[1] = v14.ProcessHandle,
            v9 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL),
            v6 = v9,
            v9 < 0) )
      {
        NtTerminateProcess(v14.ProcessHandle, v6);
      }
      else if ( v9 != 1
             || (NtQueryEvent(SmscpSubsystemRegistered, EventBasicInformation, EventInformation, 8u, 0LL), v12) )
      {
        *((_QWORD *)SmscpSharedWindow + 1) = 0LL;
        NtSetInformationProcess(v14.ProcessHandle, (PROCESSINFOCLASS)68, 0LL, 0);
        v6 = 0;
      }
      else
      {
        v6 = -1073741823;
      }
    }
  }
  SmpEventWriteULONG(&SmssEvt_LoadSubsystem_Stop);
  return (unsigned int)v6;
}
