/*
 * XREFs of RtlWow64SuspendThreadEx @ 0x1800C7020
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800C7010 (RtlWow64SuspendThread.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076580 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x180093E20 (ZwResumeThread.c)
 *     NtSuspendThread @ 0x180095300 (NtSuspendThread.c)
 *     RtlpWow64CheckRunningSoftwareCpu @ 0x1800C721C (RtlpWow64CheckRunningSoftwareCpu.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800C72B8 (RtlpWow64OpenThreadProcess.c)
 */

__int64 __fastcall RtlWow64SuspendThreadEx(int a1, __int64 a2, char a3)
{
  int v5; // edx
  int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-59h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-29h] BYREF
  __int64 v11; // [rsp+68h] [rbp-21h]
  HANDLE Handle; // [rsp+70h] [rbp-19h] BYREF
  __int64 ProcessInformation; // [rsp+78h] [rbp-11h] BYREF
  __int64 v14; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v15[2]; // [rsp+88h] [rbp-1h] BYREF
  int v16; // [rsp+98h] [rbp+Fh]
  char v17; // [rsp+108h] [rbp+7Fh] BYREF

  ProcessHandle = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v6 = NtSuspendThread();
  if ( v6 >= 0 )
  {
    v6 = RtlpWow64OpenThreadProcess(a1, v5, (unsigned int)&v14, (unsigned int)&ProcessHandle, (__int64)v15);
    if ( v6 < 0 )
      goto LABEL_15;
    if ( (void *)v15[0] != NtCurrentTeb()->ClientId.UniqueProcess
      || (void *)v15[1] != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v6 = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &ProcessInformation, 8u, 0LL);
      if ( v6 < 0 )
        goto LABEL_15;
      if ( !ProcessInformation )
      {
LABEL_7:
        v6 = 0;
        goto LABEL_16;
      }
      v6 = RtlpWow64CheckRunningSoftwareCpu(ProcessHandle, v14, &v17);
      if ( v6 < 0 )
        goto LABEL_15;
      if ( !v17 )
        goto LABEL_7;
      LODWORD(v9) = 2;
      v6 = ZwDuplicateObject();
      if ( v6 < 0 )
        goto LABEL_15;
      v7 = v11;
      if ( a3 )
        v7 = v11 | 1;
      v6 = RtlpCreateUserThreadEx(
             (__int64)ProcessHandle,
             0LL,
             6,
             0,
             0LL,
             0LL,
             v9,
             (__int64)RtlpWow64SuspendWorker,
             v7,
             &Handle,
             0LL);
      if ( v6 < 0 || (NtWaitForSingleObject(Handle, 0, 0LL), ZwQueryInformationThread(), v6 = v16, v16 < 0) )
LABEL_15:
        ZwResumeThread();
    }
  }
LABEL_16:
  if ( v11 )
    ZwDuplicateObject();
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
