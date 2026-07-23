/*
 * XREFs of CcCompleteAsyncRead @ 0x14006E664
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x14006D314 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006D8B8 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     PsSetPagePriorityThread @ 0x1400707C0 (PsSetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcCopyReadExceptionFilter @ 0x1401B18A4 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x140446260 (CcMapAndCopyFromCache.c)
 */

void CcCompleteAsyncRead()
{
  __int64 v0; // rdx
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  PVOID v7; // rax
  KIRQL v8; // bl
  int v9; // [rsp+44h] [rbp-84h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  int v11[2]; // [rsp+70h] [rbp-58h]
  __int64 v12; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+E0h] [rbp+18h]
  int PagePriorityThread; // [rsp+E8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  LODWORD(v12) = 0;
  v1 = *(_QWORD *)(v0 + 16);
  *(_QWORD *)v11 = *(_QWORD *)(v0 + 32);
  v13 = *(_DWORD *)(v0 + 40);
  v9 = *(_DWORD *)(v0 + 56);
  v2 = *(_QWORD *)(v0 + 64);
  v3 = *(_QWORD *)(v0 + 72);
  v4 = *(_QWORD *)(v0 + 80);
  v5 = *(_QWORD *)(v0 + 104);
  PsSetPagePriorityThread(v6);
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)7;
  if ( *(int *)v3 >= 0 )
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = v13;
    if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
      v7 = *(PVOID *)(v2 + 24);
    else
      v7 = MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( v7 )
      CcMapAndCopyFromCache(v11[0], v7, (__int64)&v12, v9, v5);
    else
      *(_DWORD *)v3 = -1073741670;
  }
  if ( v5 )
    IoDiskIoAttributionDereference(v5);
  if ( (_DWORD)v12 )
    ++CcNumberAsyncReadRefaulted;
  if ( v4 && *(_QWORD *)v4 )
    (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v4 + 8));
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  PsSetPagePriorityThread(CurrentThread);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 520));
  v8 = KeAcquireQueuedSpinLock(5uLL);
  CcDecrementOpenCount(v1);
  KeReleaseQueuedSpinLock(5uLL, v8);
}
