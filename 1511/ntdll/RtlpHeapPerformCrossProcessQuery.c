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

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(__int64 a1, __int64 a2)
{
  HANDLE v2; // rsi
  int VirtualMemory; // ebx
  HANDLE v6; // rdi
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-29h]
  HANDLE v10; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int128 v13; // [rsp+78h] [rbp+1Fh] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v12 = 80LL;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_10;
  VirtualMemory = RtlpCreateUserThreadEx(
                    a1,
                    0LL,
                    3,
                    0,
                    0LL,
                    0LL,
                    v9,
                    (__int64)RtlpExtendedHeapInformationWorkerThread,
                    0LL,
                    &Handle,
                    &v13);
  if ( VirtualMemory < 0 )
    goto LABEL_7;
  VirtualMemory = ZwDuplicateObject();
  if ( VirtualMemory < 0 )
    goto LABEL_7;
  VirtualMemory = NtWriteVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_7;
  if ( v11 != 80 )
  {
    VirtualMemory = -2147483635;
LABEL_7:
    v6 = Handle;
    goto LABEL_8;
  }
  v8 = RtlpCreateExecutionRequiredRequest(a1, &v10);
  v6 = Handle;
  VirtualMemory = v8;
  if ( v8 < 0 || (VirtualMemory = ZwResumeThread(), VirtualMemory < 0) )
  {
    v2 = v10;
LABEL_8:
    if ( v6 )
    {
      NtTerminateThread();
      NtClose(v6);
    }
    goto LABEL_10;
  }
  NtWaitForSingleObject(v6, 0, 0LL);
  v2 = v10;
  if ( v10 )
  {
    RtlpDestroyExecutionRequiredRequest(v10);
    v2 = 0LL;
  }
  NtClose(v6);
  v6 = 0LL;
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( v11 != 80 )
    {
      VirtualMemory = -2147483635;
      goto LABEL_10;
    }
    VirtualMemory = *(_DWORD *)(a2 + 28);
    goto LABEL_8;
  }
LABEL_10:
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)VirtualMemory;
}
