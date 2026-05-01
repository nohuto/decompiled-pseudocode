/*
 * XREFs of ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001376C
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x18002C6C8 (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180013A58 (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x180018BCC (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 *     ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x18001BD1C (-RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180020390 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800205A0 (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpLockSleepConditionVariableExclusive@@YAXPEAU_RM_LOCK@@PEAU_RTL_CONDITION_VARIABLE@@@Z @ 0x18002AC94 (-RmpLockSleepConditionVariableExclusive@@YAXPEAU_RM_LOCK@@PEAU_RTL_CONDITION_VARIABLE@@@Z.c)
 */

__int64 __fastcall RmpPartitionTableFindOrCreatePartition(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        struct _RM_PARTITION **a3)
{
  void *v4; // rsi
  volatile signed __int64 *PartitionInternal; // rax
  struct _RM_PARTITION *Heap; // rax
  struct _RM_PARTITION *v9; // rdi
  int State; // eax
  struct _RM_PARTITION *v11; // rax
  unsigned __int64 v12; // r8
  struct _RM_PARTITION_TABLE **v13; // r8
  struct _RM_PARTITION_TABLE *v14; // rax
  void *v15; // rcx
  int v16; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  void *v20; // [rsp+60h] [rbp-29h]
  int v21; // [rsp+68h] [rbp-21h]
  int v22; // [rsp+6Ch] [rbp-1Dh]
  int *v23; // [rsp+70h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-11h]
  unsigned __int64 *v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]

  v17 = 0LL;
  v4 = a2;
  if ( a2 == (void *)-2LL )
    v4 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
  {
    v16 = -1073741058;
LABEL_7:
    RtlReleaseSRWLockShared(a1);
    goto LABEL_8;
  }
  PartitionInternal = (volatile signed __int64 *)RmpPartitionTableFindPartitionInternal(a1, v4, 2u);
  if ( PartitionInternal )
  {
    if ( _InterlockedIncrement64(PartitionInternal) <= 1 )
      __fastfail(0xEu);
    *a3 = (struct _RM_PARTITION *)PartitionInternal;
    v16 = 0;
    goto LABEL_7;
  }
  RtlReleaseSRWLockShared(a1);
  Heap = (struct _RM_PARTITION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v9 = Heap;
  if ( !Heap )
  {
    v16 = -1073741801;
    goto LABEL_10;
  }
  RmpPartitionInitialize((struct _RM_PARTITION_TABLE *)((char *)a1 - 312), Heap);
  State = RmpMemoryMonitorAllocateState((struct _RM_PARTITION *)((char *)v9 + 40));
  if ( State >= 0 )
    State = 0;
  v16 = State;
  if ( State >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    ++*((_DWORD *)a1 + 20);
    v16 = RmpArrayGrow<_RM_PARTITION *>(
            (char *)a1 + 64,
            (char *)a1 + 72,
            (unsigned int)(*((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 20)));
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( v16 >= 0 )
    {
      while ( 1 )
      {
        if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
        {
          v16 = -1073741058;
          goto LABEL_26;
        }
        v11 = RmpPartitionTableFindPartitionInternal(a1, v4, 0xFu);
        if ( !v11 )
          break;
        if ( (*((_DWORD *)v11 + 56) & 3) == 1 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)v11) <= 1 )
            __fastfail(0xEu);
          *a3 = v11;
          goto LABEL_25;
        }
        RmpLockSleepConditionVariableExclusive(a1, (struct _RTL_CONDITION_VARIABLE *)a1 + 4);
      }
      v12 = *((_QWORD *)a1 + 7);
      v17 = v12;
      *((_QWORD *)a1 + 7) = v12 + 1;
      v16 = RmpPartitionStart(v9, v4, v12);
      if ( v16 >= 0 )
      {
        ++*((_DWORD *)a1 + 19);
        v13 = (struct _RM_PARTITION_TABLE **)*((_QWORD *)a1 + 3);
        v14 = (struct _RM_PARTITION *)((char *)v9 + 8);
        if ( *v13 != (struct _RM_PARTITION_TABLE *)((char *)a1 + 16) )
          __fastfail(3u);
        *(_QWORD *)v14 = (char *)a1 + 16;
        *((_QWORD *)v9 + 2) = v13;
        *v13 = v14;
        *((_QWORD *)a1 + 3) = v14;
        RtlWakeAllConditionVariable((char *)a1 + 32);
        *a3 = v9;
        v9 = 0LL;
LABEL_25:
        v16 = 0;
        goto LABEL_26;
      }
      v15 = (void *)*((_QWORD *)v9 + 4);
      if ( v15 )
      {
        NtClose(v15);
        *((_QWORD *)v9 + 4) = 0LL;
      }
    }
LABEL_26:
    --*((_DWORD *)a1 + 20);
    *((_DWORD *)a1 + 2) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  if ( v9 )
    RmpPartitionRelease((HANDLE *)v9);
LABEL_8:
  if ( v16 >= 0 )
    v17 = *((_QWORD *)*a3 + 27);
LABEL_10:
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
  {
    v24 = 4LL;
    v23 = &v16;
    v25 = &v17;
    v26 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800424A9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v20 = &unk_1800424B4;
    UserData.Reserved = 2;
    v21 = 40;
    v22 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (unsigned int)v16;
}
