/*
 * XREFs of StartFirstUserProcess @ 0x1407A263C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     InbvIsBootDriverInstalled @ 0x14013CCAC (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14015A570 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x14015AC30 (ZwResumeThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     InbvAcquireLock @ 0x1401C3504 (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1401C3594 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401C3600 (InbvReleaseLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUserProcess @ 0x1407A280C (RtlCreateUserProcess.c)
 *     QueryRegistryHideMachine @ 0x1407A2A78 (QueryRegistryHideMachine.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 *     RegistryOverwriteCentralProcessor @ 0x1407CD2D8 (RegistryOverwriteCentralProcessor.c)
 */

void StartFirstUserProcess()
{
  __int64 MaximumLength; // rsi
  __int64 v1; // rbx
  SIZE_T v2; // r14
  char *PoolWithTag; // rax
  char *v4; // rdi
  __int128 v5; // xmm0
  ULONG v6; // edx
  PSECURITY_DESCRIPTOR v7; // r9
  ULONG_PTR v8; // rbx
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  void *BugCheckParameter4; // [rsp+20h] [rbp-79h]
  void *v12; // [rsp+28h] [rbp-71h]
  BOOLEAN v13; // [rsp+30h] [rbp-69h]
  void *v14; // [rsp+38h] [rbp-61h]
  void *v15; // [rsp+40h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION ProcessInfo; // [rsp+60h] [rbp-39h] BYREF
  int ProcessInformation; // [rsp+100h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+108h] [rbp+6Fh] BYREF

  BuildKnownDlls();
  if ( (unsigned __int8)QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  MaximumLength = PsProtectedEnvironment.MaximumLength;
  v1 = PsProtectedCurrentDirectory.MaximumLength + 1100LL;
  v2 = PsProtectedEnvironment.MaximumLength + v1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x62537350u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  memset(PoolWithTag, 0, v2);
  *((_DWORD *)v4 + 1) = v1;
  *((_QWORD *)v4 + 16) = &v4[v1];
  *(_DWORD *)v4 = v1;
  *((_DWORD *)v4 + 2) = 4194305;
  *((_QWORD *)v4 + 126) = MaximumLength;
  RtlInitUnicodeString((PUNICODE_STRING)v4 + 5, 0LL);
  *((_QWORD *)v4 + 8) = v4 + 1040;
  *((_WORD *)v4 + 29) = PsProtectedCurrentDirectory.MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 56), &PsProtectedCurrentDirectory);
  *((_QWORD *)v4 + 13) = &v4[*((unsigned __int16 *)v4 + 29) + 1040];
  *((_WORD *)v4 + 49) = 60;
  RtlCopyUnicodeString((PUNICODE_STRING)v4 + 6, &NtInitialUserProcess);
  v5 = *((_OWORD *)v4 + 6);
  DestinationString.Buffer = (wchar_t *)*((_QWORD *)v4 + 16);
  *((_OWORD *)v4 + 7) = v5;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, &PsProtectedEnvironment);
  v8 = RtlCreateUserProcess(
         (PUNICODE_STRING)v4 + 6,
         v6,
         (PRTL_USER_PROCESS_PARAMETERS)v4,
         v7,
         BugCheckParameter4,
         v12,
         v13,
         v14,
         v15,
         &ProcessInfo);
  if ( InbvIsBootDriverInstalled() )
  {
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() )
      VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
    PltRotBarStatus = 3;
    InbvReleaseLock();
  }
  if ( (v8 & 0x80000000) != 0LL )
    KeBugCheckEx(0x6Du, v8, 0LL, 1uLL, 0LL);
  ProcessInformation = 1;
  v9 = ZwSetInformationProcess(ProcessInfo.ProcessHandle, ProcessBreakOnTermination, &ProcessInformation, 4u);
  if ( v9 < 0 )
    KeBugCheckEx(0x6Du, v9, 0LL, 2uLL, 0LL);
  v10 = ZwResumeThread(ProcessInfo.ThreadHandle, 0LL);
  if ( v10 < 0 )
    KeBugCheckEx(0x6Du, v10, 0LL, 3uLL, 0LL);
  byte_140323478 = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(ProcessInfo.ThreadHandle);
  ZwClose(ProcessInfo.ProcessHandle);
  ExFreePoolWithTag(v4, 0);
}
