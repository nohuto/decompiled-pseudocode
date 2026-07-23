/*
 * XREFs of RtlWow64SuspendThreadEx @ 0x1800D0350
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800D0340 (RtlWow64SuspendThread.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180045210 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x1800A5B00 (ZwResumeThread.c)
 *     NtSuspendThread @ 0x1800A8510 (NtSuspendThread.c)
 *     RtlpWow64CheckRunningSoftwareCpu @ 0x1800D054C (RtlpWow64CheckRunningSoftwareCpu.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800D05E8 (RtlpWow64OpenThreadProcess.c)
 */

__int64 __fastcall RtlWow64SuspendThreadEx(HANDLE SourceHandle, ULONG *a2, char a3)
{
  NTSTATUS v5; // ebx
  void *v6; // rax
  ULONG Options; // [rsp+30h] [rbp-59h]
  HANDLE TargetHandle; // [rsp+68h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-19h] BYREF
  __int64 ProcessInformation; // [rsp+78h] [rbp-11h] BYREF
  __int64 v12[2]; // [rsp+88h] [rbp-1h] BYREF
  int ThreadInformation[14]; // [rsp+98h] [rbp+Fh] BYREF
  char v14; // [rsp+108h] [rbp+7Fh]

  TargetHandle = 0LL;
  Handle = 0LL;
  v5 = NtSuspendThread(SourceHandle, a2);
  if ( v5 >= 0 )
  {
    v5 = RtlpWow64OpenThreadProcess(SourceHandle, (__int64)v12);
    if ( v5 < 0 )
      goto LABEL_15;
    if ( (void *)v12[0] != NtCurrentTeb()->ClientId.UniqueProcess
      || (void *)v12[1] != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v5 = NtQueryInformationProcess(0LL, ProcessWow64Information, &ProcessInformation, 8u, 0LL);
      if ( v5 < 0 )
        goto LABEL_15;
      if ( !ProcessInformation )
      {
LABEL_7:
        v5 = 0;
        goto LABEL_16;
      }
      v5 = RtlpWow64CheckRunningSoftwareCpu(0LL);
      if ( v5 < 0 )
        goto LABEL_15;
      if ( !v14 )
        goto LABEL_7;
      v5 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, SourceHandle, 0LL, &TargetHandle, 0, 0, 2u);
      if ( v5 < 0 )
        goto LABEL_15;
      v6 = TargetHandle;
      if ( a3 )
        v6 = (void *)((unsigned __int64)TargetHandle | 1);
      v5 = RtlpCreateUserThreadEx(0LL, 0LL, 6, 0, 0LL, 0LL, Options, RtlpWow64SuspendWorker, v6, &Handle, 0LL);
      if ( v5 < 0
        || (NtWaitForSingleObject(Handle, 0, 0LL),
            ZwQueryInformationThread(Handle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL),
            v5 = ThreadInformation[0],
            ThreadInformation[0] < 0) )
      {
LABEL_15:
        ZwResumeThread(SourceHandle, 0LL);
      }
    }
  }
LABEL_16:
  if ( TargetHandle )
    ZwDuplicateObject(0LL, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
