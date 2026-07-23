/*
 * XREFs of RtlpHeapPerformCrossProcessQuery @ 0x1800E1180
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800E13A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800EEAB0 (RtlpHpTagQueryHeapsRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180045210 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A5800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A58A0 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x1800A5B00 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1800A5B20 (NtTerminateThread.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800EE7E0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1800EE8E0 (RtlpDestroyExecutionRequiredRequest.c)
 */

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(HANDLE ProcessHandle, HANDLE *Buffer)
{
  HANDLE v2; // rsi
  NTSTATUS v5; // ebx
  HANDLE v6; // rdi
  int v8; // eax
  int v9; // [rsp+30h] [rbp-29h]
  HANDLE Handle; // [rsp+60h] [rbp+7h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+68h] [rbp+Fh] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+17h] BYREF
  __int128 v13; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE ThreadHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  BaseAddress = 0LL;
  ThreadHandle = 0LL;
  Handle = 0LL;
  RegionSize = 80LL;
  v5 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 < 0 )
    goto LABEL_10;
  v5 = RtlpCreateUserThreadEx(
         ProcessHandle,
         0LL,
         3,
         0,
         0LL,
         0LL,
         v9,
         (PUSER_THREAD_START_ROUTINE)RtlpExtendedHeapInformationWorkerThread,
         BaseAddress,
         &ThreadHandle,
         &v13);
  if ( v5 < 0 )
    goto LABEL_7;
  v5 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, *Buffer, ProcessHandle, Buffer, 0xF001Fu, 0, 0);
  if ( v5 < 0 )
    goto LABEL_7;
  v5 = NtWriteVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x50uLL, &NumberOfBytesWritten);
  if ( v5 < 0 )
    goto LABEL_7;
  if ( NumberOfBytesWritten != 80 )
  {
    v5 = -2147483635;
LABEL_7:
    v6 = ThreadHandle;
    goto LABEL_8;
  }
  v8 = RtlpCreateExecutionRequiredRequest(ProcessHandle, &Handle);
  v6 = ThreadHandle;
  v5 = v8;
  if ( v8 < 0 || (v5 = ZwResumeThread(ThreadHandle, 0LL), v5 < 0) )
  {
    v2 = Handle;
LABEL_8:
    if ( v6 )
    {
      NtTerminateThread(v6, 0);
      NtClose(v6);
    }
    goto LABEL_10;
  }
  NtWaitForSingleObject(v6, 0, 0LL);
  v2 = Handle;
  if ( Handle )
  {
    RtlpDestroyExecutionRequiredRequest(Handle);
    v2 = 0LL;
  }
  NtClose(v6);
  v6 = 0LL;
  v5 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x50uLL, &NumberOfBytesWritten);
  if ( v5 >= 0 )
  {
    if ( NumberOfBytesWritten != 80 )
    {
      v5 = -2147483635;
      goto LABEL_10;
    }
    v5 = *((_DWORD *)Buffer + 7);
    goto LABEL_8;
  }
LABEL_10:
  if ( BaseAddress )
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)v5;
}
