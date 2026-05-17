/*
 * XREFs of RtlpProcessReflectionStartup @ 0x1800C1B00
 * Callers:
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtWriteVirtualMemory @ 0x180093CA0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x180094F10 (ZwResumeProcess.c)
 *     NtSuspendThread @ 0x180095300 (NtSuspendThread.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 */

__int64 __fastcall RtlpProcessReflectionStartup(__int64 a1)
{
  int VirtualMemory; // r14d
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  HANDLE v6; // r8
  void *v7; // r15
  HANDLE v8; // rbx
  HANDLE v9; // rdi
  void *v10; // rsi
  _BYTE v12[8]; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v13; // [rsp+58h] [rbp-51h]
  HANDLE v14; // [rsp+60h] [rbp-49h]
  __int64 v15; // [rsp+68h] [rbp-41h]
  __int64 v16; // [rsp+70h] [rbp-39h]

  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
  {
    memset((void *)(a1 + 56), 0, 0x20uLL);
    return (unsigned int)VirtualMemory;
  }
  MEMORY[0] = *(_OWORD *)a1;
  MEMORY[0x10] = *(_OWORD *)(a1 + 16);
  MEMORY[0x20] = *(_OWORD *)(a1 + 32);
  MEMORY[0x30] = *(_OWORD *)(a1 + 48);
  MEMORY[0x40] = *(_OWORD *)(a1 + 64);
  MEMORY[0x50] = *(_QWORD *)(a1 + 80);
  VirtualMemory = ZwCreateEvent();
  if ( VirtualMemory < 0 )
    return (unsigned int)VirtualMemory;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = 0;
  if ( (v3 & 2) != 0 )
    v4 = 2;
  if ( (v3 & 8) != 0 )
    v4 |= 4u;
  v5 = RtlCloneUserProcess(v4 | 1u, 0LL, 0LL, 0LL, v12, 4);
  VirtualMemory = v5;
  if ( !v5 )
  {
    v6 = v13;
    *(_QWORD *)(a1 + 64) = v14;
    *(_QWORD *)(a1 + 72) = v15;
    *(_QWORD *)(a1 + 80) = v16;
    *(_QWORD *)(a1 + 56) = v6;
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = NtWriteVirtualMemory();
      if ( VirtualMemory >= 0 )
      {
        if ( !*(_QWORD *)(a1 + 48) )
          goto LABEL_18;
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory >= 0 )
        {
          if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
            NtClose(*(HANDLE *)(a1 + 48));
          VirtualMemory = NtWriteVirtualMemory();
          if ( VirtualMemory >= 0 )
          {
LABEL_18:
            ZwResumeProcess();
            NtWaitForSingleObject(0LL, 0, 0LL);
            v7 = *(void **)(a1 + 32);
            if ( v7 )
            {
              v8 = v13;
              v9 = v14;
              v10 = *(void **)(a1 + 40);
              VirtualMemory = ZwSetEvent();
              NtWaitForSingleObject(v10, 0, 0LL);
              NtClose(v8);
              NtClose(v9);
              NtClose(v7);
              NtClose(v10);
            }
            return (unsigned int)VirtualMemory;
          }
        }
      }
    }
LABEL_10:
    ZwTerminateProcess();
    return (unsigned int)VirtualMemory;
  }
  if ( v5 == 297 )
  {
    NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
    ZwSetEvent();
    NtClose(0LL);
    if ( MEMORY[0x10] )
    {
      MEMORY[0x10](MEMORY[0x18]);
    }
    else if ( (MEMORY[8] & 4) == 0 )
    {
      NtSuspendThread();
    }
    VirtualMemory = ZwFreeVirtualMemory();
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    ZwSetEvent();
  return (unsigned int)VirtualMemory;
}
