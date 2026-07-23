/*
 * XREFs of RtlpProcessReflectionStartup @ 0x18008D1C0
 * Callers:
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtWriteVirtualMemory @ 0x1800A5800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x1800A7D30 (ZwResumeProcess.c)
 *     NtSuspendThread @ 0x1800A8510 (NtSuspendThread.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpProcessReflectionStartup(PSIZE_T RegionSize)
{
  NTSTATUS v2; // r14d
  _OWORD *v3; // rax
  int v4; // edx
  int v5; // ecx
  NTSTATUS v6; // eax
  HANDLE ProcessHandle; // r8
  HANDLE v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  void *v11; // rdx
  void *v12; // r15
  HANDLE v13; // rbx
  HANDLE ThreadHandle; // rdi
  void *v15; // rcx
  void *v16; // rsi
  void (__fastcall *v17)(_QWORD); // rdi
  void *v18; // rcx
  ULONG_PTR RegionSizea[2]; // [rsp+40h] [rbp-69h] BYREF
  _RTL_USER_PROCESS_INFORMATION ProcessInformation; // [rsp+50h] [rbp-59h] BYREF
  PVOID BaseAddress; // [rsp+110h] [rbp+67h] BYREF
  HANDLE TargetHandle; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE Buffer; // [rsp+120h] [rbp+77h] BYREF
  HANDLE EventHandle; // [rsp+128h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  BaseAddress = 0LL;
  Buffer = 0LL;
  TargetHandle = 0LL;
  v2 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
  if ( v2 < 0 )
  {
    memset(RegionSize + 7, 0, 0x20uLL);
    goto LABEL_30;
  }
  v3 = BaseAddress;
  *(_OWORD *)BaseAddress = *(_OWORD *)RegionSize;
  v3[1] = *((_OWORD *)RegionSize + 1);
  v3[2] = *((_OWORD *)RegionSize + 2);
  v3[3] = *((_OWORD *)RegionSize + 3);
  v3[4] = *((_OWORD *)RegionSize + 4);
  *((_QWORD *)v3 + 10) = RegionSize[10];
  v2 = ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0);
  if ( v2 >= 0 )
  {
    v4 = *((_DWORD *)RegionSize + 2);
    v5 = 0;
    if ( (v4 & 2) != 0 )
      v5 = 2;
    if ( (v4 & 8) != 0 )
      v5 |= 4u;
    v6 = RtlCloneUserProcess(v5 | 1, 0LL, 0LL, 0LL, &ProcessInformation);
    v2 = v6;
    if ( v6 )
    {
      if ( v6 == 297 )
      {
        NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
        ZwSetEvent(TargetHandle, 0LL);
        NtClose(TargetHandle);
        if ( Buffer )
        {
          NtWaitForSingleObject(Buffer, 0, 0LL);
          NtClose(Buffer);
        }
        v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)BaseAddress + 2);
        if ( v17 )
        {
          v17(*((_QWORD *)BaseAddress + 3));
        }
        else if ( (*((_DWORD *)BaseAddress + 2) & 4) == 0 )
        {
          NtSuspendThread((HANDLE)0xFFFFFFFFFFFFFFFELL, 0LL);
        }
        RegionSizea[0] = *(_QWORD *)BaseAddress;
        v9 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSizea, 0x8000u);
        v2 = v9;
        v10 = -1LL;
        goto LABEL_10;
      }
      RegionSize[7] = 0LL;
      RegionSize[8] = 0LL;
      RegionSize[9] = 0LL;
      RegionSize[10] = 0LL;
      v18 = (void *)RegionSize[4];
      if ( v18 )
        ZwSetEvent(v18, 0LL);
    }
    else
    {
      ProcessHandle = ProcessInformation.ProcessHandle;
      v8 = EventHandle;
      RegionSize[8] = (ULONG_PTR)ProcessInformation.ThreadHandle;
      *(CLIENT_ID *)(RegionSize + 9) = ProcessInformation.ClientId;
      RegionSize[7] = (ULONG_PTR)ProcessHandle;
      v9 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8, ProcessHandle, &TargetHandle, 0x1F0003u, 0, 2u);
      v10 = (__int64)ProcessInformation.ProcessHandle;
      v2 = v9;
      if ( v9 < 0 )
      {
LABEL_10:
        ZwTerminateProcess((HANDLE)v10, v9);
        goto LABEL_30;
      }
      v9 = NtWriteVirtualMemory(ProcessInformation.ProcessHandle, &TargetHandle, &TargetHandle, 8uLL, 0LL);
      v2 = v9;
      if ( v9 < 0 )
        goto LABEL_12;
      v11 = (void *)RegionSize[6];
      if ( v11 )
      {
        v9 = ZwDuplicateObject(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v11,
               ProcessInformation.ProcessHandle,
               &Buffer,
               0x1F0003u,
               0,
               2u);
        v2 = v9;
        if ( v9 < 0 )
          goto LABEL_12;
        if ( (RegionSize[1] & 0x10) == 0 )
          NtClose((HANDLE)RegionSize[6]);
        v9 = NtWriteVirtualMemory(ProcessInformation.ProcessHandle, &Buffer, &Buffer, 8uLL, 0LL);
        v2 = v9;
        if ( v9 < 0 )
        {
LABEL_12:
          v10 = (__int64)ProcessInformation.ProcessHandle;
          goto LABEL_10;
        }
      }
      ZwResumeProcess(ProcessInformation.ProcessHandle);
      NtWaitForSingleObject(EventHandle, 0, 0LL);
      v12 = (void *)RegionSize[4];
      if ( v12 )
      {
        v13 = ProcessInformation.ProcessHandle;
        ThreadHandle = ProcessInformation.ThreadHandle;
        v15 = (void *)RegionSize[4];
        v16 = (void *)RegionSize[5];
        v2 = ZwSetEvent(v15, 0LL);
        NtWaitForSingleObject(v16, 0, 0LL);
        NtClose(v13);
        NtClose(ThreadHandle);
        NtClose(v12);
        NtClose(v16);
      }
    }
  }
LABEL_30:
  if ( EventHandle )
    NtClose(EventHandle);
  if ( BaseAddress )
  {
    RegionSizea[0] = *(_QWORD *)BaseAddress;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSizea, 0x8000u);
  }
  return (unsigned int)v2;
}
