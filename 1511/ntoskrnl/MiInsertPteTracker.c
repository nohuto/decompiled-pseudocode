/*
 * XREFs of MiInsertPteTracker @ 0x1401E09F8
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MmAllocateMappingAddress @ 0x1404E8208 (MmAllocateMappingAddress.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  ULONG BackTraceHash; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF

  if ( LOWORD(stru_1402FF000.Alignment) < 0xAu )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(&stru_1402FF000);
    goto LABEL_6;
  }
  v9 = RtlpInterlockedFlushSList(&stru_1402FF000);
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
    byte_1402FF154 = 1;
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
  v13 = *(unsigned int *)(a1 + 40);
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
  KeAcquireInStackQueuedSpinLock(&qword_1402FF010, &LockHandle);
  v18 = (__int64 *)((char *)&unk_1402FFB90 + 16 * (((unsigned __int8)v17 ^ BYTE4(v17)) & 0xF));
  v19 = *v18;
  *(_QWORD *)PoolWithTag = *v18;
  *((_QWORD *)PoolWithTag + 1) = v18;
  if ( *(__int64 **)(v19 + 8) != v18 )
    __fastfail(3u);
  *(_QWORD *)(v19 + 8) = PoolWithTag;
  *v18 = (__int64)PoolWithTag;
  qword_1402FFC90 += v14;
  v20 = ++qword_1402FFC98;
  if ( qword_1402FFC98 > (unsigned __int64)qword_1402FFCA0 )
    qword_1402FFCA0 = v20;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
