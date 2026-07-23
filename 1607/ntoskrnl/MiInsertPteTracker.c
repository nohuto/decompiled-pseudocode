/*
 * XREFs of MiInsertPteTracker @ 0x1401FC618
 * Callers:
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1401673F0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, int a4)
{
  void *PoolWithTag; // rdi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v11; // rbx
  bool v12; // zf
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rbx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  ULONG BackTraceHash; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF

  if ( LOWORD(stru_140327440.Alignment) < 0xAu )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(&stru_140327440);
    goto LABEL_6;
  }
  v9 = RtlpInterlockedFlushSList(&stru_140327440);
  PoolWithTag = v9;
  if ( v9 )
  {
    Next = v9->Next;
    if ( v9->Next )
    {
      do
      {
        v11 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v11;
      }
      while ( v11 );
    }
LABEL_6:
    if ( PoolWithTag )
      goto LABEL_9;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x79536D4Du);
  if ( !PoolWithTag )
  {
    byte_1403275A4 = 1;
    return;
  }
LABEL_9:
  if ( !a2 )
  {
    v15 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32);
    v13 = *(unsigned int *)(a1 + 40);
    *((_QWORD *)PoolWithTag + 2) = a1;
    *((_QWORD *)PoolWithTag + 5) = *(_QWORD *)(a1 + 32);
    *((_DWORD *)PoolWithTag + 12) = *(_DWORD *)(a1 + 44);
    *((_DWORD *)PoolWithTag + 13) = *(_DWORD *)(a1 + 40);
    goto LABEL_14;
  }
  v12 = a2 == 1;
  v13 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    v15 = *(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44);
    *((_QWORD *)PoolWithTag + 2) = 1LL;
LABEL_14:
    v14 = ((v15 & 0xFFF) + v13 + 4095) >> 12;
    goto LABEL_15;
  }
  v14 = v13 >> 12;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
LABEL_15:
  if ( (a3 & 2) != 0 )
    ++v14;
  *((_QWORD *)PoolWithTag + 3) = v14;
  RtlCaptureStackBackTrace(1u, 7u, (PVOID *)PoolWithTag + 9, &BackTraceHash);
  *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)PoolWithTag + 7) = *(_QWORD *)(a1 + 48);
  *((_DWORD *)PoolWithTag + 16) ^= (*((_DWORD *)PoolWithTag + 16) ^ (4 * a4)) & 0xC;
  v16 = *((_QWORD *)PoolWithTag + 4) >> 12;
  *((_DWORD *)PoolWithTag + 16) = (*((_DWORD *)PoolWithTag + 16) ^ (*((_DWORD *)PoolWithTag + 16) ^ a3 & 1) & 1) & 0xFFFFFFED | (16 * ((a3 & 2) != 0));
  v17 = 40543LL * (unsigned int)v16;
  KeAcquireInStackQueuedSpinLock(&qword_140327450, &LockHandle);
  v18 = (char *)&unk_140327DD0 + 16 * (((unsigned __int8)v17 ^ BYTE4(v17)) & 0xF);
  v19 = *(_QWORD *)v18;
  if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
    __fastfail(3u);
  *((_QWORD *)PoolWithTag + 1) = v18;
  *(_QWORD *)PoolWithTag = v19;
  *(_QWORD *)(v19 + 8) = PoolWithTag;
  *(_QWORD *)v18 = PoolWithTag;
  qword_140327ED0 += v14;
  v20 = ++qword_140327ED8;
  if ( qword_140327ED8 > (unsigned __int64)qword_140327EE0 )
    qword_140327EE0 = v20;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
