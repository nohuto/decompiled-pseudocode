/*
 * XREFs of CcCompleteAsyncRead @ 0x1400FB54C
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x1400EC3CC (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1400FB99C (CcAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     PsSetPagePriorityThread @ 0x1400FB7D0 (PsSetPagePriorityThread.c)
 *     CcCopyReadExceptionFilter @ 0x1401A8DF8 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x14047A640 (CcMapAndCopyFromCache.c)
 */

void CcCompleteAsyncRead()
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // r9d
  int v8; // ecx
  PVOID v9; // rax
  KIRQL v10; // bl
  int v11; // [rsp+44h] [rbp-74h]
  int v12[2]; // [rsp+68h] [rbp-50h]
  __int64 v13; // [rsp+C8h] [rbp+10h] BYREF
  int v14; // [rsp+D0h] [rbp+18h]
  int PagePriorityThread; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  LODWORD(v13) = 0;
  v2 = *(_QWORD *)(v1 + 16);
  *(_QWORD *)v12 = *(_QWORD *)(v1 + 32);
  v3 = *(_QWORD *)(v1 + 24);
  v14 = *(_DWORD *)(v1 + 40);
  v11 = *(_DWORD *)(v1 + 56);
  v4 = *(_QWORD *)(v1 + 64);
  v5 = *(_QWORD *)(v1 + 72);
  v6 = *(_QWORD *)(v1 + 80);
  PsSetPagePriorityThread(CurrentThread);
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)7;
  if ( *(int *)v5 >= 0 )
  {
    *(_DWORD *)v5 = 0;
    v8 = v14;
    *(_QWORD *)(v5 + 8) = (unsigned int)v14;
    if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
    {
      v9 = *(PVOID *)(v4 + 24);
    }
    else
    {
      v9 = MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0x40000020u);
      v8 = v14;
    }
    if ( v9 )
    {
      LOBYTE(v7) = 1;
      CcMapAndCopyFromCache(v12[0], v3, v8, v7, v9, (__int64)&v13, v11);
    }
    else
    {
      *(_DWORD *)v5 = -1073741670;
    }
  }
  if ( (_DWORD)v13 )
    ++CcNumberAsyncReadRefaulted;
  if ( v6 && *(_QWORD *)v6 )
    (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v6 + 8));
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  PsSetPagePriorityThread(CurrentThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 520));
  v10 = KeAcquireQueuedSpinLock(5uLL);
  CcDecrementOpenCount((_DWORD *)v2);
  KeReleaseQueuedSpinLock(5uLL, v10);
}
