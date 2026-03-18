/*
 * XREFs of MiInsertPteTracker @ 0x140226BDC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MmAllocateMappingAddress @ 0x1405622E0 (MmAllocateMappingAddress.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, int a4)
{
  unsigned __int64 v4; // rbp
  void *PoolWithTag; // rdi
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v12; // rbx
  bool v13; // zf
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v22[32]; // [rsp+60h] [rbp+60h] BYREF

  v4 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( LOWORD(stru_14034F4C0.Alignment) < 0xAu )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(&stru_14034F4C0);
    goto LABEL_6;
  }
  v10 = RtlpInterlockedFlushSList(&stru_14034F4C0);
  PoolWithTag = v10;
  if ( v10 )
  {
    Next = v10->Next;
    if ( v10->Next )
    {
      do
      {
        v12 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v12;
      }
      while ( v12 );
    }
LABEL_6:
    if ( PoolWithTag )
      goto LABEL_9;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x79536D4Du);
  if ( !PoolWithTag )
  {
    byte_14034F614 = 1;
    return;
  }
LABEL_9:
  if ( !a2 )
  {
    v16 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32);
    v14 = *(unsigned int *)(a1 + 40);
    *((_QWORD *)PoolWithTag + 2) = a1;
    *((_QWORD *)PoolWithTag + 5) = *(_QWORD *)(a1 + 32);
    *((_DWORD *)PoolWithTag + 12) = *(_DWORD *)(a1 + 44);
    *((_DWORD *)PoolWithTag + 13) = *(_DWORD *)(a1 + 40);
    goto LABEL_14;
  }
  v13 = a2 == 1;
  v14 = *(unsigned int *)(a1 + 40);
  if ( v13 )
  {
    v16 = *(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44);
    *((_QWORD *)PoolWithTag + 2) = 1LL;
LABEL_14:
    v15 = ((v16 & 0xFFF) + v14 + 4095) >> 12;
    goto LABEL_15;
  }
  v15 = v14 >> 12;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
LABEL_15:
  if ( (a3 & 2) != 0 )
    ++v15;
  *((_QWORD *)PoolWithTag + 3) = v15;
  RtlCaptureStackBackTrace(1u, 7u, (PVOID *)PoolWithTag + 9, (PULONG)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL));
  *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)PoolWithTag + 7) = *(_QWORD *)(a1 + 48);
  *((_DWORD *)PoolWithTag + 16) ^= (*((_DWORD *)PoolWithTag + 16) ^ (4 * a4)) & 0xC;
  v17 = *((_QWORD *)PoolWithTag + 4) >> 12;
  *((_DWORD *)PoolWithTag + 16) = (*((_DWORD *)PoolWithTag + 16) ^ (*((_DWORD *)PoolWithTag + 16) ^ a3 & 1) & 1) & 0xFFFFFFED | (16 * ((a3 & 2) != 0));
  v18 = 40543LL * (unsigned int)v17;
  KeAcquireInStackQueuedSpinLock(&qword_14034F4D0, (PKLOCK_QUEUE_HANDLE)(v4 + 8));
  v19 = (__int64 *)((char *)&unk_140350058 + 16 * (((unsigned __int8)v18 ^ BYTE4(v18)) & 0xF));
  v20 = *v19;
  *(_QWORD *)PoolWithTag = *v19;
  *((_QWORD *)PoolWithTag + 1) = v19;
  if ( *(__int64 **)(v20 + 8) != v19 )
    __fastfail(3u);
  *(_QWORD *)(v20 + 8) = PoolWithTag;
  *v19 = (__int64)PoolWithTag;
  qword_140350158 += v15;
  v21 = ++qword_140350160;
  if ( qword_140350160 > (unsigned __int64)qword_140350168 )
    qword_140350168 = v21;
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v4 + 8));
}
